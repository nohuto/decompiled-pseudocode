/*
 * XREFs of AlpcpLookupMessage @ 0x14047A7B0
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     NtAlpcImpersonateClientOfPort @ 0x140479CB0 (NtAlpcImpersonateClientOfPort.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     NtAlpcCancelMessage @ 0x14052BA0C (NtAlpcCancelMessage.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcQueryInformationMessage @ 0x140530090 (NtAlpcQueryInformationMessage.c)
 *     NtAlpcOpenSenderProcess @ 0x14053B9A8 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcOpenSenderThread @ 0x1405422C4 (NtAlpcOpenSenderThread.c)
 *     AlpcpCopyRequestData @ 0x14069EDA8 (AlpcpCopyRequestData.c)
 *     NtAlpcImpersonateClientContainerOfPort @ 0x14069F5B0 (NtAlpcImpersonateClientContainerOfPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     AlpcpEnterStateChangeEventMessageLog @ 0x14069EA84 (AlpcpEnterStateChangeEventMessageLog.c)
 */

__int64 __fastcall AlpcpLookupMessage(__int64 a1, int a2, int a3, unsigned __int64 *a4)
{
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // rbx
  char PreviousMode; // r14
  signed __int64 *v11; // rdi
  __int64 v12; // r9
  signed __int64 v13; // r8
  unsigned __int64 v14; // rbx
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r14
  signed __int64 v21; // rax
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  ULONG_PTR v25; // rax
  __int64 v26; // r9
  signed __int64 v27; // rcx
  bool v28; // cc
  ULONG_PTR BugCheckParameter4; // rcx
  unsigned __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 v33; // rsi
  signed __int64 v34; // rax
  signed __int32 v35; // eax
  char v36; // dl
  int v37; // edi
  signed __int64 v38; // rcx
  char v39; // dl
  int v40; // edi
  signed __int64 v41; // rcx
  char v42; // dl
  int v43; // edi
  signed __int64 v44; // rcx
  char v45; // dl
  int v46; // edi
  signed __int64 v47; // rcx
  char v48; // dl
  int v49; // edi
  signed __int64 v50; // rcx
  signed __int32 v51[8]; // [rsp+0h] [rbp-58h] BYREF

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
      if ( (a2 & 0x3FC) != 0 )
      {
        v11 = (signed __int64 *)ExpLookupHandleTableEntry(v8);
        if ( v11 )
        {
          do
          {
            while ( 1 )
            {
              _m_prefetchw(v11);
              v13 = *v11;
              if ( (*v11 & 1) != 0 )
                break;
              if ( !v13 )
                goto LABEL_35;
              ExpBlockOnLockedHandleEntry(v8, v11);
            }
          }
          while ( v13 != _InterlockedCompareExchange64(v11, v13 - 1, v13) );
          v14 = (*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
          if ( *(_DWORD *)(v14 + 0xF8) == a2
            && (!a3 || *(_DWORD *)(((*v11 >> 16) & 0xFFFFFFFFFFFFFFF0uLL) + 0x100) == a3) )
          {
            _m_prefetchw((const void *)(v14 - 24));
            v15 = *(_QWORD *)(v14 - 24);
            v16 = v15 == 0;
            if ( v15 > 0 )
            {
              while ( 1 )
              {
                v17 = v15;
                v15 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 - 24), v15 + 1, v15);
                if ( v15 == v17 )
                  break;
                if ( v15 <= 0 )
                {
                  v16 = v15 == 0;
                  goto LABEL_66;
                }
              }
              if ( v15 == -1 )
                goto LABEL_62;
              v18 = KeAbPreAcquire(v14 - 16, 0LL, 0LL, v12);
              v20 = v18;
              if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 - 16), 0LL) )
                ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v14 - 16), v18, v14 - 16, v19);
              if ( v20 )
                *(_BYTE *)(v20 + 26) |= 1u;
              *(_BYTE *)(v14 - 32) |= 1u;
              v21 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), 0x10000uLL) + 0x10000;
              if ( v21 <= 0 )
                KeBugCheckEx(0x18u, 0LL, v14, 0x26uLL, v21);
              --*(_WORD *)(v14 - 30);
              _InterlockedExchangeAdd64(v11, 1uLL);
              _InterlockedOr(v51, 0);
              if ( *(_QWORD *)(v8 + 48) )
                ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
              if ( *(_DWORD *)(v14 + 248) == a2 )
              {
                if ( !a3 || *(_DWORD *)(v14 + 256) == a3 )
                {
                  if ( !*(_QWORD *)(v14 + 24) && !*(_QWORD *)(v14 + 16) )
                  {
                    if ( AlpcpMessageLogEnabled )
                      AlpcpEnterStateChangeEventMessageLog(v14);
                    v42 = *(_BYTE *)(v14 - 32);
                    v43 = 0;
                    if ( (v42 & 1) != 0 )
                    {
                      v43 = 0x10000 - *(__int16 *)(v14 - 30);
                      *(_WORD *)(v14 - 30) = 0;
                      *(_BYTE *)(v14 - 32) = v42 & 0xFE;
                    }
                    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                      ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
                    KeAbPostRelease(v14 - 16);
                    if ( v43 <= 0 )
                      return 3221227266LL;
                    v44 = -v43 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v43);
                    if ( v44 > 0 )
                      return 3221227266LL;
                    if ( v44 )
                      KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v44);
                    goto LABEL_79;
                  }
                  if ( a1 )
                  {
                    if ( *(_QWORD *)(v14 + 176) != *(_QWORD *)(a1 + 16) && *(_QWORD *)(v14 + 184) != a1 )
                    {
                      if ( AlpcpMessageLogEnabled )
                        AlpcpEnterStateChangeEventMessageLog(v14);
                      v48 = *(_BYTE *)(v14 - 32);
                      v49 = 0;
                      if ( (v48 & 1) != 0 )
                      {
                        v49 = 0x10000 - *(__int16 *)(v14 - 30);
                        *(_WORD *)(v14 - 30) = 0;
                        *(_BYTE *)(v14 - 32) = v48 & 0xFE;
                      }
                      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                        ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
                      KeAbPostRelease(v14 - 16);
                      if ( v49 <= 0 )
                        return 3221225506LL;
                      v50 = -v49 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v49);
                      if ( v50 > 0 )
                        return 3221225506LL;
                      if ( v50 )
                        KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v50);
LABEL_120:
                      AlpcpDestroyBlob(v14);
                      return 3221225506LL;
                    }
                  }
                  else
                  {
                    v23 = *(_QWORD *)(v14 + 16);
                    if ( !v23 || *(_KPROCESS **)(v23 + 24) != KeGetCurrentThread()->ApcState.Process )
                    {
                      if ( AlpcpMessageLogEnabled )
                        AlpcpEnterStateChangeEventMessageLog(v14);
                      v45 = *(_BYTE *)(v14 - 32);
                      v46 = 0;
                      if ( (v45 & 1) != 0 )
                      {
                        v46 = 0x10000 - *(__int16 *)(v14 - 30);
                        *(_WORD *)(v14 - 30) = 0;
                        *(_BYTE *)(v14 - 32) = v45 & 0xFE;
                      }
                      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                        ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
                      KeAbPostRelease(v14 - 16);
                      if ( v46 <= 0 )
                        return 3221225506LL;
                      v47 = -v46 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v46);
                      if ( v47 > 0 )
                        return 3221225506LL;
                      if ( v47 )
                        KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v47);
                      goto LABEL_120;
                    }
                  }
                  *a4 = v14;
                  return 0LL;
                }
                if ( AlpcpMessageLogEnabled )
                  AlpcpEnterStateChangeEventMessageLog(v14);
                v39 = *(_BYTE *)(v14 - 32);
                v40 = 0;
                if ( (v39 & 1) != 0 )
                {
                  v40 = 0x10000 - *(__int16 *)(v14 - 30);
                  *(_WORD *)(v14 - 30) = 0;
                  *(_BYTE *)(v14 - 32) = v39 & 0xFE;
                }
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
                KeAbPostRelease(v14 - 16);
                if ( v40 <= 0 )
                  return 3221227266LL;
                v41 = -v40 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v40);
                if ( v41 > 0 )
                  return 3221227266LL;
                if ( v41 )
                  KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v41);
              }
              else
              {
                if ( AlpcpMessageLogEnabled )
                  AlpcpEnterStateChangeEventMessageLog(v14);
                v36 = *(_BYTE *)(v14 - 32);
                v37 = 0;
                if ( (v36 & 1) != 0 )
                {
                  v37 = 0x10000 - *(__int16 *)(v14 - 30);
                  *(_WORD *)(v14 - 30) = 0;
                  *(_BYTE *)(v14 - 32) = v36 & 0xFE;
                }
                if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 16), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                  ExfTryToWakePushLock((volatile signed __int64 *)(v14 - 16));
                KeAbPostRelease(v14 - 16);
                if ( v37 <= 0 )
                  return 3221227266LL;
                v38 = -v37 + _InterlockedExchangeAdd64((volatile signed __int64 *)(v14 - 24), -v37);
                if ( v38 > 0 )
                  return 3221227266LL;
                if ( v38 )
                  KeBugCheckEx(0x18u, 0LL, v14, 0x28uLL, v38);
              }
LABEL_79:
              AlpcpDestroyBlob(v14);
              return 3221227266LL;
            }
LABEL_66:
            if ( !v16 )
              KeBugCheckEx(0x18u, 0LL, v14, 0x20uLL, v15);
          }
LABEL_62:
          _InterlockedExchangeAdd64(v11, 1uLL);
          _InterlockedOr(v51, 0);
          if ( *(_QWORD *)(v8 + 48) )
            ExfUnblockPushLock((volatile __int64 *)(v8 + 48), 0LL);
          return 3221227266LL;
        }
      }
LABEL_35:
      ExHandleLogBadReference(v8, v9, PreviousMode);
    }
    return 3221227266LL;
  }
  if ( !a1 )
    return 3221227266LL;
  v24 = *(_QWORD *)(a1 + 16);
  if ( !v24 )
    return 3221226224LL;
  v25 = AlpcReferenceBlobByHandle((_QWORD *)(v24 + 40), a2 & 0x7FFFFFFF, AlpcReserveType, (__int64)a4);
  if ( !v25 )
    return 3221226224LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v25 + 40), 1, 0) )
  {
    v27 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v25 - 24), 0xFFFFFFFFFFFFFFFFuLL);
    v28 = v27 <= 1;
    BugCheckParameter4 = v27 - 1;
    if ( v28 )
    {
      if ( BugCheckParameter4 )
        KeBugCheckEx(0x18u, 0LL, v25, 0x21uLL, BugCheckParameter4);
      AlpcpDestroyBlob(v25);
    }
    return 3221227272LL;
  }
  else
  {
    v30 = *(unsigned __int64 **)(v25 + 24);
    v31 = KeAbPreAcquire((ULONG_PTR)(v30 - 2), 0LL, 0LL, v26);
    v33 = v31;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v30 - 4, 0LL) )
      ExfAcquirePushLockExclusiveEx(v30 - 2, v31, (ULONG_PTR)(v30 - 2), v32);
    if ( v33 )
      *(_BYTE *)(v33 + 26) |= 1u;
    *((_BYTE *)v30 - 32) |= 1u;
    v34 = _InterlockedExchangeAdd64((volatile signed __int64 *)v30 - 3, 0x10000uLL) + 0x10000;
    if ( v34 <= 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v30, 0x26uLL, v34);
    *((_DWORD *)v30 + 10) |= 0x2000u;
    *((_DWORD *)v30 + 62) &= ~0x80000000;
    do
      v35 = _InterlockedIncrement(&AlpcpNextCallbackId);
    while ( !v35 );
    *((_DWORD *)v30 + 64) = v35;
    result = 0LL;
    *a4 = (unsigned __int64)v30;
  }
  return result;
}
