/*
 * XREFs of StorTickEventQueue @ 0x1C0006690
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C0006610 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidAdapterRequestComplete @ 0x1C002470C (RaidAdapterRequestComplete.c)
 *     RaidUnitAbortSrb @ 0x1C0033CA8 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C0036C14 (StorEtwHwTimeoutDetectedEvent.c)
 */

__int64 __fastcall StorTickEventQueue(_DWORD *a1)
{
  unsigned __int64 v2; // r13
  USHORT HighestNodeNumber; // ax
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // edi
  KSPIN_LOCK *v7; // rbx
  unsigned int v8; // eax
  unsigned int v9; // esi
  unsigned int v11; // r14d
  unsigned int v12; // esi
  char v13; // al
  unsigned int v14; // r12d
  KSPIN_LOCK *v15; // rdi
  KSPIN_LOCK *v16; // r14
  __int64 v17; // r15
  __int64 v18; // rdx
  char v19; // al
  __int64 v20; // rcx
  __int64 v21; // r14
  unsigned __int8 v22; // al
  __int64 v23; // rcx
  unsigned int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // [rsp+28h] [rbp-70h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+30h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-60h] BYREF
  char v29; // [rsp+A0h] [rbp+8h]
  char v30; // [rsp+A8h] [rbp+10h]
  unsigned int v31; // [rsp+B0h] [rbp+18h]
  unsigned int v32; // [rsp+B8h] [rbp+20h]

  LODWORD(v2) = 0;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v4 = a1[1];
  v5 = HighestNodeNumber + 1;
  v32 = v4;
  if ( (*a1 & 1) == 0 )
  {
    v6 = 0;
    if ( HighestNodeNumber == -1 )
      return 0LL;
    v7 = (KSPIN_LOCK *)(a1 + 28);
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v7 - 1, &LockHandle);
      v8 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 > 0xFFFFFFFD )
      {
LABEL_5:
        v9 = 0;
        goto LABEL_6;
      }
      if ( v8 )
      {
        if ( v8 <= v4 )
        {
          *(_DWORD *)v7 = 0;
          goto LABEL_71;
        }
        *(_DWORD *)v7 = v8 - v4;
      }
      if ( *(_DWORD *)v7 )
        goto LABEL_5;
LABEL_71:
      StorEtwHwTimeoutDetectedEvent(*(v7 - 6) - 48);
      v9 = -1073741643;
      *(_DWORD *)v7 = -2;
LABEL_6:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v9 != -1073741643 )
      {
        ++v6;
        v7 += 7;
        if ( v6 < v5 )
          continue;
      }
      return v9;
    }
  }
  v11 = 0;
  v30 = 1;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  v12 = 0;
  while ( 1 )
  {
    v13 = 0;
    v14 = 0;
    v29 = 0;
    if ( v5 )
      break;
LABEL_67:
    v30 = 0;
    if ( !v13 || v11 >= 0x64 )
      return v12;
  }
  v15 = (KSPIN_LOCK *)(a1 + 28);
  while ( 1 )
  {
    v26 = 0LL;
    v31 = v11 + 1;
    v16 = v15 - 4;
    v17 = 0LL;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v15 - 1, &LockHandle);
    if ( v30 )
      *(v15 - 2) = *v16;
    v18 = *(v15 - 2);
    if ( (KSPIN_LOCK *)v18 == v16 )
    {
      v21 = 0LL;
      goto LABEL_51;
    }
    if ( *(_QWORD *)(v18 + 24) + (unsigned __int64)(unsigned int)(5000000 * *(_DWORD *)(v18 + 16)) > UnbiasedInterruptTime )
    {
      *(v15 - 2) = (KSPIN_LOCK)v16;
      goto LABEL_37;
    }
    v17 = v18 - 64;
    if ( (*a1 & 2) != 0 )
    {
      v12 = -1073741643;
LABEL_37:
      v21 = 0LL;
      goto LABEL_38;
    }
    if ( (*a1 & 4) == 0 )
      goto LABEL_37;
    v19 = *(_BYTE *)(v17 + 17);
    v29 = 1;
    if ( (v19 & 4) != 0 )
    {
      v21 = 0LL;
    }
    else
    {
      v20 = *(_QWORD *)(v17 + 168);
      v21 = *(_QWORD *)(v17 + 224);
      *(_BYTE *)(v17 + 17) = v19 | 4;
      v26 = v20;
      v22 = *(_BYTE *)(v20 + 2);
      v2 = v22 == 40 ? *(unsigned int *)(v20 + 20) : v22;
      if ( (unsigned int)v2 > 0x20 || (v23 = 0x1000D0000LL, !_bittest64(&v23, v2)) )
        *(_DWORD *)(v17 + 32) = 1;
    }
    *(v15 - 2) = *(_QWORD *)*(v15 - 2);
LABEL_38:
    if ( (*a1 & 4) != 0 )
      goto LABEL_51;
    if ( v12 != -1073741643 )
    {
      v24 = *(_DWORD *)v15;
      if ( *(_DWORD *)v15 )
      {
        if ( v24 <= v32 )
        {
          *(_DWORD *)v15 = 0;
LABEL_47:
          v25 = *(v15 - 6);
          if ( (*(_DWORD *)(v25 + 48) & 1) == 0 )
          {
            v17 = v25 - 48;
            *(_DWORD *)v15 = -2;
            v12 = -1073741643;
            goto LABEL_52;
          }
          *(_DWORD *)v15 += v32;
LABEL_51:
          if ( v12 != -1073741643 )
            goto LABEL_53;
          goto LABEL_52;
        }
        *(_DWORD *)v15 = v24 - v32;
      }
      if ( *(_DWORD *)v15 )
        goto LABEL_51;
      goto LABEL_47;
    }
    *(_DWORD *)v15 = -2;
LABEL_52:
    StorEtwHwTimeoutDetectedEvent(v17);
LABEL_53:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v12 == -1073741643 )
    {
      LODWORD(v2) = 0;
      goto LABEL_65;
    }
    if ( v21 )
    {
      if ( (_DWORD)v2 == 16 )
      {
        v11 = v31;
        v13 = 0;
        LODWORD(v2) = 0;
        v12 = -1073741643;
        goto LABEL_67;
      }
      if ( (unsigned int)(v2 - 18) > 1 && (_DWORD)v2 != 32 && (int)RaidUnitAbortSrb(v21, v26) < 0 )
        break;
    }
    v11 = v31;
    ++v14;
    v15 += 7;
    LODWORD(v2) = 0;
    if ( v14 >= v5 )
      goto LABEL_66;
  }
  LODWORD(v2) = 0;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v17 + 32), 0, 1) != 1 )
  {
    RaidAdapterRequestComplete(*(_QWORD *)(v21 + 24), v17);
    v12 = 0;
LABEL_65:
    v11 = v31;
LABEL_66:
    v13 = v29;
    goto LABEL_67;
  }
  return 3221225653LL;
}
