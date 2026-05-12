/*
 * XREFs of StorTickEventQueue @ 0x1C0009530
 * Callers:
 *     RaidUnitPendingDpcRoutine @ 0x1C00094B0 (RaidUnitPendingDpcRoutine.c)
 * Callees:
 *     RaidDriverGetName @ 0x1C000F5AC (RaidDriverGetName.c)
 *     RaidAdapterRequestComplete @ 0x1C0027AF8 (RaidAdapterRequestComplete.c)
 *     RaidUnitAbortSrb @ 0x1C0036DC4 (RaidUnitAbortSrb.c)
 *     StorEtwHwTimeoutDetectedEvent @ 0x1C0039E7C (StorEtwHwTimeoutDetectedEvent.c)
 *     StorEtwMiniportBugAbortTimeoutEvent @ 0x1C003ABA0 (StorEtwMiniportBugAbortTimeoutEvent.c)
 *     StorEtwMiniportBugResetBrokenEvent @ 0x1C003ADC0 (StorEtwMiniportBugResetBrokenEvent.c)
 */

__int64 __fastcall StorTickEventQueue(_DWORD *a1)
{
  unsigned int v2; // esi
  USHORT HighestNodeNumber; // ax
  unsigned int v4; // r14d
  unsigned int v5; // ebp
  unsigned int v6; // edi
  KSPIN_LOCK *v7; // rbx
  unsigned int v8; // eax
  unsigned int v10; // r13d
  char v11; // al
  KSPIN_LOCK *v12; // r15
  KSPIN_LOCK *v13; // r12
  KSPIN_LOCK v14; // rdi
  KSPIN_LOCK v15; // r13
  ULONGLONG v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  __int64 v19; // rcx
  int v20; // eax
  __int64 v21; // rdx
  unsigned __int8 v22; // al
  __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // r8
  unsigned int v27; // [rsp+30h] [rbp-98h]
  unsigned int v28; // [rsp+34h] [rbp-94h]
  __int64 v29; // [rsp+38h] [rbp-90h]
  __int64 v30; // [rsp+40h] [rbp-88h]
  ULONGLONG UnbiasedInterruptTime; // [rsp+48h] [rbp-80h]
  ULONG_PTR v32[2]; // [rsp+50h] [rbp-78h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-68h] BYREF
  char v34; // [rsp+D0h] [rbp+8h]
  char v35; // [rsp+D8h] [rbp+10h]
  char v36; // [rsp+E0h] [rbp+18h]

  v2 = 0;
  HighestNodeNumber = KeQueryHighestNodeNumber();
  v4 = a1[1];
  v5 = HighestNodeNumber + 1;
  if ( (*a1 & 1) == 0 )
  {
    v6 = 0;
    if ( HighestNodeNumber == -1 )
      return v2;
    v7 = (KSPIN_LOCK *)(a1 + 28);
    while ( 1 )
    {
      KeAcquireInStackQueuedSpinLockAtDpcLevel(v7 - 1, &LockHandle);
      v8 = *(_DWORD *)v7;
      if ( *(_DWORD *)v7 > 0xFFFFFFFD )
      {
LABEL_5:
        v2 = 0;
        goto LABEL_6;
      }
      if ( v8 )
      {
        if ( v8 <= v4 )
        {
          *(_DWORD *)v7 = 0;
          goto LABEL_83;
        }
        *(_DWORD *)v7 = v8 - v4;
      }
      if ( *(_DWORD *)v7 )
        goto LABEL_5;
LABEL_83:
      StorEtwHwTimeoutDetectedEvent(*(v7 - 6) - 48, 0LL);
      v2 = -1073741643;
      *(_DWORD *)v7 = -2;
LABEL_6:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      if ( v2 != -1073741643 )
      {
        ++v6;
        v7 += 7;
        if ( v6 < v5 )
          continue;
      }
      return v2;
    }
  }
  v36 = 1;
  v10 = 0;
  v35 = 0;
  UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
  while ( 1 )
  {
    v11 = 0;
    v28 = 0;
    v34 = 0;
    if ( v5 )
      break;
LABEL_79:
    v36 = 0;
    if ( !v11 || v10 >= 0x64 )
      return v2;
  }
  v12 = (KSPIN_LOCK *)(a1 + 24);
  while ( 1 )
  {
    v13 = v12 - 2;
    v29 = 0LL;
    v30 = 0LL;
    v14 = 0LL;
    v27 = v10 + 1;
    KeAcquireInStackQueuedSpinLockAtDpcLevel(v12 + 1, &LockHandle);
    if ( v36 )
      *v12 = *v13;
    v15 = *v12;
    if ( (KSPIN_LOCK *)*v12 == v13 )
    {
      LODWORD(v18) = 0;
      v19 = 0LL;
    }
    else
    {
      v14 = v15 - 64;
      v16 = *(_QWORD *)(v15 + 24) + (unsigned int)(5000000 * *(_DWORD *)(v15 + 16));
      if ( v16 > UnbiasedInterruptTime || (*(_BYTE *)(v14 + 16) & 0x1C) == 0x10 )
      {
        LODWORD(v18) = 0;
        v19 = 0LL;
        *v12 = (KSPIN_LOCK)v13;
      }
      else
      {
        v17 = *(_QWORD *)(v14 + 224);
        if ( v16 < *(_QWORD *)(v17 + 2600) )
        {
          memset(v32, 0, sizeof(v32));
          RaidDriverGetName(*(_QWORD *)(*(_QWORD *)(v17 + 24) + 16LL), v32);
          if ( MiniportBugActionPolicy == 1 )
          {
            StorEtwMiniportBugResetBrokenEvent(
              v15 - 64,
              *(_QWORD *)(*(_QWORD *)(v14 + 224) + 2600LL) - *(_QWORD *)(v15 + 24),
              v32);
          }
          else if ( MiniportBugActionPolicy == 2 )
          {
            KeBugCheckEx(0xF0u, 1uLL, v32[1], *(_QWORD *)(v14 + 168), *(_QWORD *)(*(_QWORD *)(v14 + 224) + 8LL));
          }
        }
        if ( (*a1 & 4) != 0 )
        {
          v20 = *(_DWORD *)(v14 + 776);
          if ( v20 == 3 )
          {
            LODWORD(v18) = 0;
            v2 = -1073741643;
            v19 = 0LL;
            v34 = 0;
          }
          else if ( v20 )
          {
            LODWORD(v18) = 0;
            if ( (*(_BYTE *)(v14 + 17) & 4) != 0 )
            {
              v34 = 1;
              *v12 = *(_QWORD *)*v12;
            }
            v19 = 0LL;
          }
          else
          {
            v34 = 1;
            *v12 = *(_QWORD *)*v12;
            v21 = *(_QWORD *)(v14 + 168);
            v19 = *(_QWORD *)(v14 + 224);
            v29 = v19;
            v30 = v21;
            v22 = *(_BYTE *)(v21 + 2);
            if ( v22 == 40 )
              v18 = *(unsigned int *)(v21 + 20);
            else
              v18 = v22;
            if ( (unsigned int)v18 > 0x20 || (v23 = 0x1000D0000LL, !_bittest64(&v23, v18)) )
            {
              if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 776), 1, 0) )
              {
                v19 = 0LL;
                v29 = 0LL;
                v30 = 0LL;
                if ( (*(_BYTE *)(v14 + 17) & 4) == 0 )
                  *v12 = (KSPIN_LOCK)v13;
              }
            }
          }
        }
        else
        {
          LODWORD(v18) = 0;
          v2 = -1073741643;
          v19 = 0LL;
        }
      }
    }
    if ( (*a1 & 4) != 0 )
      goto LABEL_59;
    if ( v2 == -1073741643 )
    {
      *((_DWORD *)v12 + 4) = -2;
    }
    else
    {
      v24 = *((_DWORD *)v12 + 4);
      if ( v24 )
      {
        if ( v24 > v4 )
          *((_DWORD *)v12 + 4) = v24 - v4;
        else
          *((_DWORD *)v12 + 4) = 0;
      }
      if ( *((_DWORD *)v12 + 4) )
        goto LABEL_58;
      v25 = *(v12 - 4);
      if ( (*(_DWORD *)(v25 + 48) & 1) != 0 )
      {
        *((_DWORD *)v12 + 4) = v4;
LABEL_58:
        v19 = v29;
LABEL_59:
        if ( v2 != -1073741643 && (v35 || !v19) )
          goto LABEL_65;
        goto LABEL_62;
      }
      v14 = v25 - 48;
      *((_DWORD *)v12 + 4) = -2;
      v2 = -1073741643;
    }
LABEL_62:
    if ( v14 && *(_DWORD *)(v14 + 776) != 3 )
    {
      StorEtwHwTimeoutDetectedEvent(v14, (*(_BYTE *)a1 & 4) != 0);
      v35 = 1;
    }
LABEL_65:
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    if ( v2 == -1073741643 )
    {
      v10 = v27;
      goto LABEL_78;
    }
    if ( v29 )
    {
      if ( (_DWORD)v18 == 16 )
      {
        v2 = -1073741643;
        StorEtwMiniportBugAbortTimeoutEvent(v14);
        v10 = v27;
        v11 = 0;
        goto LABEL_79;
      }
      if ( (unsigned int)(v18 - 18) > 1 && (_DWORD)v18 != 32 )
      {
        *(_BYTE *)(v14 + 17) |= 4u;
        if ( (int)RaidUnitAbortSrb(v29, v30) < 0 )
          break;
      }
    }
    v12 += 7;
    ++v28;
    v10 = v27;
    if ( v28 >= v5 )
      goto LABEL_78;
  }
  *(_BYTE *)(v14 + 17) &= ~4u;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v14 + 776), 0, 1) == 4 )
  {
    LOBYTE(v26) = 1;
    RaidAdapterRequestComplete(*(_QWORD *)(v29 + 24), v14, v26);
    v10 = v27;
    v2 = 0;
LABEL_78:
    v11 = v34;
    goto LABEL_79;
  }
  return (unsigned int)-1073741643;
}
