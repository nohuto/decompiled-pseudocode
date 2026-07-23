/*
 * XREFs of KiAdjustTimer2DueTimes @ 0x140154F18
 * Callers:
 *     KiAdjustTimerDueTimes @ 0x140154CC0 (KiAdjustTimerDueTimes.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiSendClockInterruptToClockOwner @ 0x1400D5F78 (KiSendClockInterruptToClockOwner.c)
 *     KiRemoveTimer2 @ 0x1400F5CA0 (KiRemoveTimer2.c)
 *     KiInsertTimer2WithCollectionLockHeld @ 0x1400F6800 (KiInsertTimer2WithCollectionLockHeld.c)
 *     KiShouldSetClockIntervalForHighResolutionTimers @ 0x1400F731C (KiShouldSetClockIntervalForHighResolutionTimers.c)
 *     KiRequestTimer2Expiration @ 0x140129704 (KiRequestTimer2Expiration.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

char __fastcall KiAdjustTimer2DueTimes(__int64 a1)
{
  int v1; // r14d
  _QWORD *v2; // rsi
  _RTL_BALANCED_NODE **p_Min; // r15
  _QWORD *v5; // rdi
  _BOOL8 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rbx
  _QWORD **v10; // rcx
  char v11; // al
  __int64 v12; // rcx
  unsigned __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  char v18; // bl
  char result; // al
  __int64 v20; // rdi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  _QWORD v24[2]; // [rsp+20h] [rbp-10h] BYREF
  void *retaddr; // [rsp+58h] [rbp+28h]
  char v26; // [rsp+68h] [rbp+38h] BYREF

  v1 = 0;
  v2 = v24;
  v24[1] = v24;
  v24[0] = v24;
  p_Min = &KiTimer2Collections.Min;
  do
  {
    v5 = *p_Min;
    while ( v5 )
    {
      v6 = (unsigned int)v1 >= 2 && v1 != 3;
      v7 = 3 * (v6 + 1);
      v8 = v5;
      v9 = (__int64)&v5[-v7];
      v10 = (_QWORD **)v5[1];
      if ( v10 )
      {
        v16 = *v10;
        v5 = (_QWORD *)v5[1];
        while ( v16 )
        {
          v5 = v16;
          v16 = (_QWORD *)*v16;
        }
      }
      else
      {
        while ( 1 )
        {
          v5 = (_QWORD *)(v5[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !v5 || (_QWORD *)*v5 == v8 )
            break;
          v8 = v5;
        }
      }
      v11 = *(_BYTE *)(v9 + 128);
      if ( v11 != *(_BYTE *)a1 && (v11 || (*(_BYTE *)(v9 + 129) & 2) == 0) )
      {
        KiRemoveTimer2(v9);
        v12 = *(_QWORD *)(a1 + 24);
        v13 = *(_QWORD *)(v9 + 72);
        if ( v12 >= 0 )
        {
          if ( v13 < v12 )
          {
            *(_QWORD *)(v9 + 72) = -1LL;
            *(_QWORD *)(v9 + 72) = 0LL;
          }
          else
          {
            *(_QWORD *)(v9 + 72) = v13 - v12;
          }
          if ( (*(_BYTE *)(v9 + 129) & 0x10) != 0 )
          {
            v22 = *(_QWORD *)(a1 + 24);
            v23 = *(_QWORD *)(v9 + 80);
            if ( v23 < v22 )
            {
              *(_QWORD *)(v9 + 80) = -1LL;
              *(_QWORD *)(v9 + 80) = 0LL;
            }
            else
            {
              *(_QWORD *)(v9 + 80) = v23 - v22;
            }
          }
        }
        else
        {
          v14 = -v12;
          if ( v13 + v14 < v13 )
            *(_QWORD *)(v9 + 72) = -1LL;
          else
            *(_QWORD *)(v9 + 72) = v13 + v14;
          if ( (*(_BYTE *)(v9 + 129) & 0x10) != 0 )
          {
            v17 = *(_QWORD *)(v9 + 80);
            if ( v17 + v14 < v17 )
              *(_QWORD *)(v9 + 80) = -1LL;
            else
              *(_QWORD *)(v9 + 80) = v17 + v14;
          }
        }
        if ( *(_QWORD *)(v9 + 72) == -1LL )
          *(_QWORD *)(v9 + 72) = -2LL;
        if ( (*(_BYTE *)(v9 + 129) & 0x10) != 0 && *(_QWORD *)(v9 + 80) == -1LL )
          *(_QWORD *)(v9 + 80) = -2LL;
        v15 = v24[0];
        v2 = (_QWORD *)(v9 + 24);
        *(_QWORD *)(v9 + 24) = v24[0];
        *(_QWORD *)(v9 + 32) = v24;
        if ( *(_QWORD **)(v15 + 8) != v24 )
          __fastfail(3u);
        *(_QWORD *)(v15 + 8) = v2;
        v24[0] = v9 + 24;
      }
    }
    ++v1;
    p_Min += 3;
  }
  while ( v1 < 5 );
  v18 = 0;
  if ( v2 != v24 )
  {
    do
    {
      v20 = (__int64)(v2 - 3);
      v2 = (_QWORD *)*v2;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&KiTimer2CollectionLock);
      }
      else if ( _interlockedbittestandset64((volatile signed __int32 *)&KiTimer2CollectionLock, 0LL) )
      {
        KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&KiTimer2CollectionLock);
      }
      KiInsertTimer2WithCollectionLockHeld(v20, 1, &v26);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&KiTimer2CollectionLock, retaddr);
      else
        _InterlockedAnd64(&KiTimer2CollectionLock, 0LL);
      if ( v26 )
        v18 = 1;
    }
    while ( v2 != v24 );
    if ( v18 )
      KiRequestTimer2Expiration();
  }
  result = KiShouldSetClockIntervalForHighResolutionTimers(MEMORY[0xFFFFF78000000008], qword_140338DC0);
  if ( result )
    return KiSendClockInterruptToClockOwner();
  return result;
}
