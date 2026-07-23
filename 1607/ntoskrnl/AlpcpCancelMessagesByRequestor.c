/*
 * XREFs of AlpcpCancelMessagesByRequestor @ 0x14040924C
 * Callers:
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KeReleaseSemaphoreEx @ 0x1400CCF30 (KeReleaseSemaphoreEx.c)
 *     AlpcpUnlockMessage @ 0x1404080A8 (AlpcpUnlockMessage.c)
 *     AlpcpTransferQuotaMessage @ 0x1404080D0 (AlpcpTransferQuotaMessage.c)
 *     AlpcpClearOwnerPortMessage @ 0x140408128 (AlpcpClearOwnerPortMessage.c)
 *     AlpcpReleaseMessageAttributesOnCancel @ 0x140408154 (AlpcpReleaseMessageAttributesOnCancel.c)
 *     AlpcpLockForCachedReferenceBlob @ 0x14040A330 (AlpcpLockForCachedReferenceBlob.c)
 *     AlpcpReferenceBlob @ 0x14040AC0C (AlpcpReferenceBlob.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1404C4778 (AlpcpTryLockForCachedReferenceBlob.c)
 */

__int64 __fastcall AlpcpCancelMessagesByRequestor(__int64 a1, __int64 a2, ULONG_PTR *a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // r15
  int v9; // eax
  unsigned int v10; // ebp
  unsigned __int64 *v11; // rdi
  _BYTE *v12; // rax
  _BYTE *v13; // rbx
  ULONG_PTR v14; // rdi
  volatile signed __int64 *v15; // rdi
  __int64 v17; // r9
  int v18; // ebp
  int v19; // eax
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  volatile signed __int64 *v23; // rbp
  unsigned __int64 *v24; // r15
  _BYTE *v25; // rax
  _BYTE *v26; // rbp
  ULONG_PTR *i; // rax
  int v28; // [rsp+30h] [rbp-48h]
  ULONG_PTR v29; // [rsp+38h] [rbp-40h]
  int v31; // [rsp+98h] [rbp+20h]

  v5 = a1;
  v9 = *(_DWORD *)(a2 + 416);
  if ( (*(_DWORD *)(a1 + 416) & 6) == 4 )
  {
    if ( (v9 & 6) == 4 )
      goto LABEL_4;
  }
  else if ( (v9 & 6) == 2 )
  {
    goto LABEL_4;
  }
  if ( a4 == 3 )
  {
    v28 = 1;
    v31 = 0;
    v10 = 0;
LABEL_19:
    v11 = (unsigned __int64 *)(a2 + 176);
    goto LABEL_6;
  }
LABEL_4:
  v28 = 0;
  v10 = 0;
  v31 = 0;
  if ( a4 <= 2 )
  {
    v11 = (unsigned __int64 *)(a2 + 136);
    goto LABEL_6;
  }
  if ( a4 == 3 )
    goto LABEL_19;
  v11 = (unsigned __int64 *)(a2 + 200);
LABEL_6:
  v12 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v11, 0LL, 0);
  v13 = v12;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v11, 0LL) )
    ExfAcquirePushLockExclusiveEx(v11, v12, (ULONG_PTR)v11);
  if ( v13 )
    v13[26] |= 1u;
  v14 = *a3;
  if ( (ULONG_PTR *)*a3 != a3 )
  {
    while ( 1 )
    {
      v29 = v14;
      if ( *(_QWORD *)(v14 + 24) == v5 || (*(_BYTE *)(v14 + 42) & 1) != 0 )
      {
        AlpcpReferenceBlob(v14);
        if ( !(unsigned __int8)AlpcpTryLockForCachedReferenceBlob(v14) )
        {
          if ( a4 <= 2 )
          {
            v23 = (volatile signed __int64 *)(a2 + 136);
          }
          else if ( a4 == 3 )
          {
            v23 = (volatile signed __int64 *)(a2 + 176);
          }
          else
          {
            v23 = (volatile signed __int64 *)(a2 + 200);
          }
          if ( (_InterlockedExchangeAdd64(v23, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
            ExfTryToWakePushLock(v23);
          KeAbPostRelease((ULONG_PTR)v23);
          v31 = 1;
          AlpcpLockForCachedReferenceBlob(v14);
          if ( a4 <= 2 )
          {
            v24 = (unsigned __int64 *)(a2 + 136);
          }
          else if ( a4 == 3 )
          {
            v24 = (unsigned __int64 *)(a2 + 176);
          }
          else
          {
            v24 = (unsigned __int64 *)(a2 + 200);
          }
          v25 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v24, 0LL, 0);
          v26 = v25;
          if ( _interlockedbittestandset64((volatile signed __int32 *)v24, 0LL) )
            ExfAcquirePushLockExclusiveEx(v24, v25, (ULONG_PTR)v24);
          if ( v26 )
            v26[26] |= 1u;
          v5 = a1;
          if ( *(_QWORD *)(v14 + 24) == a1 )
          {
            for ( i = (ULONG_PTR *)*a3; i != a3; i = (ULONG_PTR *)*i )
            {
              if ( i == (ULONG_PTR *)v14 )
              {
                v18 = 1;
                goto LABEL_33;
              }
            }
          }
          --*(_WORD *)(v14 - 30);
          AlpcpUnlockMessage(v14);
          v14 = *a3;
          goto LABEL_28;
        }
        if ( *(_QWORD *)(v14 + 24) == v5 )
        {
          v18 = 0;
LABEL_33:
          if ( *(_QWORD *)(v14 + 64) )
            goto LABEL_38;
          v19 = *(_DWORD *)(v14 + 40);
          if ( (v19 & 0x80u) != 0 )
            goto LABEL_38;
          v20 = *(_QWORD *)(v14 + 32);
          v21 = v19 | 0x80;
          *(_BYTE *)(v14 + 236) = 0;
          *(_WORD *)(v14 + 236) |= 0xCu;
          *(_DWORD *)(v14 + 40) = v21;
          *(_DWORD *)(v14 + 232) = 2621440;
          if ( v20 )
          {
            if ( _InterlockedExchange64((volatile __int64 *)(v20 + 1744), 0LL) == v14 )
            {
              KeReleaseSemaphoreEx(*(_QWORD *)(v14 + 32) + 1600LL, 1u, 1, v17, 2);
              *(_QWORD *)(v14 + 32) = 0LL;
              *(_WORD *)(v14 - 30) -= 3;
              goto LABEL_38;
            }
          }
          else if ( (v21 & 0x200) == 0 )
          {
            *(_QWORD *)(v14 + 88) = *(_QWORD *)(a5 + 8);
            *(_QWORD *)(v14 + 80) = a5;
            **(_QWORD **)(a5 + 8) = v14 + 80;
            *(_QWORD *)(a5 + 8) = v14 + 80;
LABEL_38:
            AlpcpReleaseMessageAttributesOnCancel(v14, v28);
            *(_DWORD *)(v14 + 40) |= 0x200u;
            *(_WORD *)(v14 + 236) &= ~0x2000u;
            AlpcpClearOwnerPortMessage(v14);
            AlpcpTransferQuotaMessage(v14);
            v22 = *(_QWORD *)(v14 + 208);
            if ( v22 )
            {
              PsReleaseProcessWakeCounter(v22, *(unsigned int *)(v14 + 256));
              *(_QWORD *)(v14 + 208) = 0LL;
            }
            if ( v18 )
              v14 = *a3;
            else
              v14 = *(_QWORD *)v14;
            AlpcpUnlockMessage(v29);
            goto LABEL_28;
          }
          --*(_WORD *)(v14 - 30);
          goto LABEL_38;
        }
        --*(_WORD *)(v14 - 30);
        AlpcpUnlockMessage(v14);
      }
      v14 = *(_QWORD *)v14;
LABEL_28:
      if ( (ULONG_PTR *)v14 == a3 )
      {
        v10 = v31;
        break;
      }
    }
  }
  if ( a4 > 2 )
  {
    if ( a4 == 3 )
      v15 = (volatile signed __int64 *)(a2 + 176);
    else
      v15 = (volatile signed __int64 *)(a2 + 200);
  }
  else
  {
    v15 = (volatile signed __int64 *)(a2 + 136);
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v15);
  KeAbPostRelease((ULONG_PTR)v15);
  return v10;
}
