/*
 * XREFs of AlpcpLookupMessage @ 0x1404F1290
 * Callers:
 *     NtAlpcQueryInformationMessage @ 0x140407880 (NtAlpcQueryInformationMessage.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     NtAlpcOpenSenderThread @ 0x14049DD94 (NtAlpcOpenSenderThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14049E4AC (NtAlpcOpenSenderProcess.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     NtAlpcCancelMessage @ 0x1404CED48 (NtAlpcCancelMessage.c)
 *     NtAlpcImpersonateClientOfPort @ 0x1404F0EE0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpCopyRequestData @ 0x1406552E4 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x140655800 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x14040AB18 (AlpcReferenceBlobByHandle.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExUnlockHandleTableEntry @ 0x14045DCA4 (ExUnlockHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, ULONG_PTR *a4)
{
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rbx
  char PreviousMode; // r14
  __int64 *v11; // rdi
  __int64 v12; // r8
  ULONG_PTR v13; // rbx
  __int64 BugCheckParameter4; // rax
  bool v15; // zf
  __int64 v16; // rdx
  _BYTE *v17; // rax
  _BYTE *v18; // r14
  signed __int64 v19; // rax
  __int64 result; // rax
  bool v21; // zf
  __int64 v22; // rdx
  __int64 v23; // rcx
  ULONG_PTR v24; // rax
  _DWORD *v25; // rdi
  signed __int32 v26; // eax
  signed __int32 v27[8]; // [rsp+0h] [rbp-58h] BYREF

  if ( a2 >= 0 )
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
        || (v11 = (__int64 *)ExpLookupHandleTableEntry((unsigned int *)v8, (unsigned int)v9)) == 0LL )
      {
LABEL_35:
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
            goto LABEL_35;
          ExpBlockOnLockedHandleEntry(v8, v11, v12);
        }
      }
      while ( v12 != _InterlockedCompareExchange64(v11, v12 - 1, v12) );
      v13 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      if ( *(_DWORD *)(v13 + 0x100) == a2 && (!a3 || *(_DWORD *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x108) == a3) )
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
          v17 = (_BYTE *)KeAbPreAcquire(v13 - 16, 0LL, 0);
          v18 = v17;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v13 - 16), 0LL) )
            ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v13 - 16), v17, v13 - 16);
          if ( v18 )
            v18[26] |= 1u;
          *(_BYTE *)(v13 - 32) |= 1u;
          v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0x10000uLL) + 0x10000;
          if ( v19 <= 0 )
            KeBugCheckEx(0x18u, 0LL, v13, 0x26uLL, v19);
          --*(_WORD *)(v13 - 30);
          _InterlockedExchangeAdd64(v11, 1uLL);
          _InterlockedOr(v27, 0);
          if ( *(_QWORD *)(v8 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
          if ( *(_DWORD *)(v13 + 256) == a2
            && (!a3 || *(_DWORD *)(v13 + 264) == a3)
            && (*(_QWORD *)(v13 + 24) || *(_QWORD *)(v13 + 16)) )
          {
            if ( a1 )
            {
              if ( *(_QWORD *)(v13 + 184) == *(_QWORD *)(a1 + 16) )
              {
LABEL_28:
                *a4 = v13;
                return 0LL;
              }
              v21 = *(_QWORD *)(v13 + 192) == a1;
            }
            else
            {
              v22 = *(_QWORD *)(v13 + 16);
              if ( !v22 )
              {
LABEL_59:
                AlpcpUnlockMessage(v13);
                return 3221225506LL;
              }
              v21 = *(_KPROCESS **)(v22 + 24) == KeGetCurrentThread()->ApcState.Process;
            }
            if ( v21 )
              goto LABEL_28;
            goto LABEL_59;
          }
          AlpcpUnlockMessage(v13);
          return 3221227266LL;
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
  v24 = AlpcReferenceBlobByHandle((_QWORD *)(v23 + 40), a2 & 0x7FFFFFFF, AlpcReserveType);
  if ( !v24 )
    return 3221226224LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v24 + 40), 1, 0) )
  {
    AlpcpDereferenceBlobEx(v24, 1);
    return 3221227272LL;
  }
  else
  {
    v25 = *(_DWORD **)(v24 + 24);
    AlpcpLockForCachedReferenceBlob((ULONG_PTR)v25);
    v25[10] |= 0x2000u;
    v25[64] &= ~0x80000000;
    do
      v26 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v26 );
    v25[66] = v26;
    result = 0LL;
    *a4 = (ULONG_PTR)v25;
  }
  return result;
}
