/*
 * XREFs of StorTickEventQueue @ 0x1C0005A40
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C00059D0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x1C00221D8 (RaidAdapterRequestComplete.c)
 *     RaidUnitAbortSrb @ 0x1C0032448 (RaidUnitAbortSrb.c)
 */

__int64 __fastcall StorTickEventQueue(_QWORD *a1)
{
  KSPIN_LOCK v2; // r14
  unsigned int v3; // ebp
  unsigned int v4; // edi
  KSPIN_LOCK *v5; // rbx
  unsigned int v6; // eax
  unsigned int v7; // esi
  unsigned int v9; // eax
  unsigned int v10; // r12d
  unsigned int v11; // r15d
  char v12; // al
  unsigned int v13; // r13d
  KSPIN_LOCK *v14; // rdi
  KSPIN_LOCK *v15; // r12
  unsigned __int64 v16; // rsi
  KSPIN_LOCK v17; // rdx
  char v18; // al
  __int64 v19; // rcx
  __int64 v20; // r12
  unsigned __int8 v21; // al
  __int64 v22; // rcx
  __int64 v23; // [rsp+20h] [rbp-78h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+28h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-68h] BYREF
  char v26; // [rsp+A0h] [rbp+8h]
  char v27; // [rsp+A8h] [rbp+10h]
  unsigned int v28; // [rsp+B0h] [rbp+18h]

  v2 = 0LL;
  v3 = KeQueryHighestNodeNumber() + 1;
  if ( !a1[2] )
  {
    v4 = 0;
    if ( !v3 )
      return 0LL;
    v5 = a1 + 6;
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v5 - 1, &LockHandle);
      v6 = *(_DWORD *)v5;
      if ( *(_DWORD *)v5 > 0xFFFFFFFD )
      {
LABEL_5:
        v7 = 0;
        goto LABEL_6;
      }
      if ( v6 == 1 )
      {
        v9 = 0;
      }
      else
      {
        if ( v6 <= 1 )
          goto LABEL_13;
        v9 = v6 - 2;
      }
      *(_DWORD *)v5 = v9;
LABEL_13:
      if ( *(_DWORD *)v5 )
        goto LABEL_5;
      v7 = -1073741643;
      *(_DWORD *)v5 = -2;
LABEL_6:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v7 != -1073741643 )
      {
        ++v4;
        v5 += 7;
        if ( v4 < v3 )
          continue;
      }
      return v7;
    }
  }
  v10 = 0;
  v27 = 1;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v11 = 0;
  while ( 1 )
  {
    v12 = 0;
    v13 = 0;
    v26 = 0;
    if ( v3 )
      break;
LABEL_43:
    v27 = 0;
    if ( !v12 || v10 >= 0x64 )
      return v11;
  }
  v14 = a1 + 4;
  while ( 1 )
  {
    v28 = v10 + 1;
    v15 = v14 - 2;
    v23 = 0LL;
    LODWORD(v16) = 0;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v14 + 1, &LockHandle);
    if ( v27 )
      *v14 = *v15;
    v17 = *v14;
    if ( (KSPIN_LOCK *)*v14 != v15 )
    {
      if ( *(_QWORD *)(v17 + 24) + (unsigned __int64)(unsigned int)(10000000 * *(_DWORD *)(v17 + 16)) <= UnbiasedInterruptTime )
      {
        v18 = *(_BYTE *)(v17 - 47);
        v2 = v17 - 64;
        v26 = 1;
        if ( (v18 & 4) != 0 )
        {
          v20 = 0LL;
        }
        else
        {
          v19 = *(_QWORD *)(v2 + 160);
          v20 = *(_QWORD *)(v2 + 216);
          *(_BYTE *)(v2 + 17) = v18 | 4;
          v23 = v19;
          v21 = *(_BYTE *)(v19 + 2);
          if ( v21 == 40 )
            v16 = *(unsigned int *)(v19 + 20);
          else
            v16 = v21;
          if ( (unsigned int)v16 > 0x20 || (v22 = 0x1000D0000LL, !_bittest64(&v22, v16)) )
            *(_DWORD *)(v2 + 32) = 1;
        }
        *v14 = *(_QWORD *)*v14;
        goto LABEL_35;
      }
      *v14 = (KSPIN_LOCK)v15;
    }
    v20 = 0LL;
LABEL_35:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v20 )
    {
      if ( (_DWORD)v16 == 16 )
      {
        v10 = v28;
        v12 = 0;
        v2 = 0LL;
        v11 = -1073741643;
        goto LABEL_43;
      }
      if ( (unsigned int)(v16 - 18) > 1 && (_DWORD)v16 != 32 && (int)RaidUnitAbortSrb(v20, v23) < 0 )
        break;
    }
    v10 = v28;
    ++v13;
    v14 += 7;
    v2 = 0LL;
    if ( v13 >= v3 )
      goto LABEL_42;
  }
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 32), 0, 1) != 1 )
  {
    RaidAdapterRequestComplete(*(_QWORD *)(v20 + 24), v2);
    v10 = v28;
    v2 = 0LL;
    v11 = 0;
LABEL_42:
    v12 = v26;
    goto LABEL_43;
  }
  return 3221225653LL;
}
