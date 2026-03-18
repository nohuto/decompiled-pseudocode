/*
 * XREFs of AlpcpLookupMessage @ 0x140426D80
 * Callers:
 *     NtAlpcImpersonateClientOfPort @ 0x140425460 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcCancelMessage @ 0x1404834A8 (NtAlpcCancelMessage.c)
 *     NtAlpcQueryInformationMessage @ 0x1404A5E90 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcOpenSenderThread @ 0x1404B1A58 (NtAlpcOpenSenderThread.c)
 *     AlpcpCopyRequestData @ 0x14061FF58 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x1406203B4 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExfUnblockPushLock @ 0x140150264 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x140213858 (ExHandleLogBadReference.c)
 *     ExUnlockHandleTableEntry @ 0x1403F7084 (ExUnlockHandleTableEntry.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     AlpcpUnlockMessage @ 0x140423364 (AlpcpUnlockMessage.c)
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CC20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14047CFD8 (AlpcpLockForCachedReferenceBlob.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, __int64 a2, int a3, ULONG_PTR *a4)
{
  int v6; // esi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rbx
  char PreviousMode; // r14
  signed __int64 *v11; // rdi
  signed __int64 v12; // r8
  ULONG_PTR v13; // rbx
  __int64 BugCheckParameter4; // rax
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r14
  signed __int64 v19; // rax
  __int64 result; // rax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG_PTR v24; // rax
  _DWORD *v25; // rdi
  signed __int32 v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF

  v6 = a2;
  if ( (int)a2 >= 0 )
  {
    if ( (a2 & 0xFC000000) != 0 )
    {
      if ( !AlpcpSecondaryMessageTables )
        return 3221227266LL;
      v8 = *(_QWORD *)(AlpcpSecondaryMessageTables + 8LL * ((unsigned int)a2 >> 26));
    }
    else
    {
      v8 = AlpcMessageTable;
    }
    if ( v8 )
    {
      v9 = a2 & 0x3FFFFFF;
      PreviousMode = KeGetCurrentThread()->PreviousMode;
      if ( (a2 & 0x3FC) == 0
        || (v11 = (signed __int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, (unsigned int)v9)) == 0LL )
      {
LABEL_58:
        ExHandleLogBadReference(v8, v9, PreviousMode);
        return 3221227266LL;
      }
      do
      {
        while ( 1 )
        {
          _m_prefetchw(v11);
          v12 = *v11;
          if ( (*v11 & 1) != 0 )
            break;
          if ( !v12 )
            goto LABEL_58;
          ExpBlockOnLockedHandleEntry(v8, v11, v12);
        }
      }
      while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
      v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(v13 + 0xF8) == v6 && (!a3 || *(_DWORD *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x100) == a3) )
      {
        _m_prefetchw((const void *)(v13 - 24));
        BugCheckParameter4 = *(_QWORD *)(v13 - 24);
        v15 = BugCheckParameter4 == 0;
        if ( BugCheckParameter4 > 0 )
        {
          while ( 1 )
          {
            v16 = BugCheckParameter4;
            BugCheckParameter4 = _InterlockedCompareExchange64(
                                   (volatile signed __int64 *)(v13 - 24),
                                   BugCheckParameter4 + 1,
                                   BugCheckParameter4);
            if ( BugCheckParameter4 == v16 )
              break;
            if ( BugCheckParameter4 <= 0 )
            {
              v15 = BugCheckParameter4 == 0;
              goto LABEL_53;
            }
          }
          if ( BugCheckParameter4 == -1 )
            goto LABEL_50;
          v17 = KeAbPreAcquire(v13 - 16, 0LL, 0LL);
          v18 = v17;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 - 16), v17, v13 - 16);
          if ( v18 )
            *(_BYTE *)(v18 + 26) |= 1u;
          *(_BYTE *)(v13 - 32) |= 1u;
          v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
          if ( v19 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v19);
          --*(_WORD *)(v13 - 30);
          _InterlockedExchangeAdd64(v11, 1uLL);
          _InterlockedOr(v27, 0);
          if ( *(_QWORD *)(v8 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
          if ( *(_DWORD *)(v13 + 248) != v6
            || a3 && *(_DWORD *)(v13 + 256) != a3
            || !*(_QWORD *)(v13 + 24) && !*(_QWORD *)(v13 + 16) )
          {
            AlpcpUnlockMessage(v13);
            return 3221227266LL;
          }
          if ( a1 )
          {
            if ( *(_QWORD *)(v13 + 176) == *(_QWORD *)(a1 + 16) )
            {
LABEL_28:
              *a4 = v13;
              return 0LL;
            }
            v21 = *(_QWORD *)(v13 + 184) == a1;
          }
          else
          {
            v22 = *(_QWORD *)(v13 + 16);
            if ( !v22 )
              goto LABEL_57;
            v21 = *(_KPROCESS **)(v22 + 24) == KeGetCurrentThread()->ApcState.Process;
          }
          if ( v21 )
            goto LABEL_28;
LABEL_57:
          AlpcpUnlockMessage(v13);
          return 3221225506LL;
        }
LABEL_53:
        if ( !v15 )
          KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, BugCheckParameter4);
      }
LABEL_50:
      ExUnlockHandleTableEntry(v8, v11);
    }
    return 3221227266LL;
  }
  if ( !a1 )
    return 3221227266LL;
  v23 = *(_QWORD *)(a1 + 16);
  if ( !v23 )
    return 3221226224LL;
  LODWORD(a2) = a2 & 0x7FFFFFFF;
  v24 = AlpcReferenceBlobByHandle(v23 + 40, a2, &AlpcReserveType);
  if ( !v24 )
    return 3221226224LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 32), 1, 0) )
  {
    AlpcpDereferenceBlobEx(v24, 1);
    return 3221227272LL;
  }
  else
  {
    v25 = *(_DWORD **)(v24 + 24);
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)v25);
    v25[10] |= 0x2000u;
    v25[62] &= ~0x80000000;
    do
      v26 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v26 );
    v25[64] = v26;
    result = 0LL;
    *a4 = (ULONG_PTR)v25;
  }
  return result;
}
