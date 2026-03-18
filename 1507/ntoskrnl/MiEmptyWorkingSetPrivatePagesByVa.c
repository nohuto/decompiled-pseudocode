/*
 * XREFs of MiEmptyWorkingSetPrivatePagesByVa @ 0x140213640
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1406A9564 (MmProcessWorkingSetControl.c)
 * Callees:
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockVad @ 0x1400894F0 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140089560 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiLockVad @ 0x140089660 (MiLockVad.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadMapsLargeImage @ 0x14008D1A0 (MiVadMapsLargeImage.c)
 *     MiEnumerateLeafPtes @ 0x1400DCA4C (MiEnumerateLeafPtes.c)
 *     MiRemoveWorkingSetPages @ 0x1401089A0 (MiRemoveWorkingSetPages.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiEmptyWorkingSetPrivatePagesByVa(volatile signed __int32 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v5; // esi
  struct _KTHREAD *CurrentThread; // r14
  __int64 Process; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v11; // rax
  unsigned __int64 v12; // rbx
  int v13; // ecx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v15; // ebp
  signed __int32 v16; // eax
  _QWORD *v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int8 v19; // bl
  signed __int32 v20; // eax
  volatile signed __int32 *v21; // [rsp+20h] [rbp-F8h] BYREF
  unsigned __int8 v22; // [rsp+28h] [rbp-F0h]
  int *v23; // [rsp+30h] [rbp-E8h]
  int v24; // [rsp+40h] [rbp-D8h] BYREF

  v21 = a1;
  v23 = &v24;
  v5 = 0;
  v24 = 0;
  CurrentThread = KeGetCurrentThread();
  Process = (__int64)CurrentThread->ApcState.Process;
  LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process, a3, a4);
  if ( (*(_DWORD *)(Process + 772) & 0x20) != 0 )
  {
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    return 3221225738LL;
  }
  else
  {
    v11 = *(_QWORD **)(Process + 1544);
    v12 = 0LL;
    while ( v11 )
    {
      v12 = (unsigned __int64)v11;
      v11 = (_QWORD *)*v11;
    }
    while ( v12 )
    {
      MiLockVad((__int64)CurrentThread, v12, v8, v9);
      v13 = *(_DWORD *)(v12 + 48);
      if ( v13 >= 0 && ((1 << (v13 & 7)) & 0x55) != 0 && !MiVadMapsLargeImage(v12) )
      {
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
        }
        else
        {
          v15 = 0;
          if ( _interlockedbittestandset(a1, 0x1Fu) )
            v15 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
          while ( 1 )
          {
            v16 = *a1;
            if ( (*a1 & 0xBFFFFFFF) == 0x80000000 )
              break;
            if ( (v16 & 0x40000000) == 0 )
              _InterlockedCompareExchange(a1, v16 | 0x40000000, v16);
            if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v15);
          }
        }
        v22 = CurrentIrql;
        MiEnumerateLeafPtes(
          (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) << 12,
          (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32)) << 12,
          (__int64 (__fastcall *)(__int64, unsigned __int64, unsigned __int64))MiEmptyWsPrivatePagesCallback,
          (__int64)&v21);
        MiUnlockWorkingSetExclusive((__int64)a1, CurrentIrql);
      }
      MiUnlockVad((__int64)CurrentThread, v12);
      v17 = *(_QWORD **)(v12 + 8);
      v18 = v12;
      if ( v17 )
      {
        do
        {
          v12 = (unsigned __int64)v17;
          v17 = (_QWORD *)*v17;
        }
        while ( v17 );
      }
      else
      {
        while ( 1 )
        {
          v12 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !v12 || *(_QWORD *)v12 == v18 )
            break;
          v18 = v12;
        }
      }
    }
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, Process);
    v19 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(a1);
    }
    else
    {
      if ( _interlockedbittestandset(a1, 0x1Fu) )
        v5 = ExpWaitForSpinLockExclusiveAndAcquire(a1);
      while ( 1 )
      {
        v20 = *a1;
        if ( (*a1 & 0xBFFFFFFF) == 0x80000000 )
          break;
        if ( (v20 & 0x40000000) == 0 )
          _InterlockedCompareExchange(a1, v20 | 0x40000000, v20);
        if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v5);
      }
    }
    MiRemoveWorkingSetPages((ULONG_PTR)a1);
    MiUnlockWorkingSetExclusive((__int64)a1, v19);
    return 0LL;
  }
}
