/*
 * XREFs of MiObtainRelocationBits @ 0x1403C69EC
 * Callers:
 *     MiSelectImageBase @ 0x1403C6738 (MiSelectImageBase.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x140006F80 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     MiSelectRelocationStartHint @ 0x1403C6B04 (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r13
  __int64 v8; // rax
  signed __int8 v9; // cf
  __int64 v10; // rdi
  ULONG ClearBitsAndSet; // eax
  ULONG v12; // esi
  _RTL_BITMAP *v13; // rcx
  ULONG v15; // r15d
  ULONG started; // eax
  ULONG v17; // ebp
  _RTL_BITMAP *v18; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_1402FE448, 0LL, 0LL);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FE448, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FE448, v8, (ULONG_PTR)&qword_1402FE448);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  ClearBitsAndSet = RtlFindClearBitsAndSet(*a1, a2, a3);
  v12 = ClearBitsAndSet;
  if ( ClearBitsAndSet != -1 )
  {
    v13 = a1[1];
    if ( !v13 || (v15 = RtlFindClearBitsAndSet(v13, a2, ClearBitsAndSet), v15 == v12) )
    {
LABEL_7:
      if ( a4 == 1 )
      {
        v17 = a3 - a2;
        RtlClearBits(*a1, v17, a2);
        v18 = a1[1];
        if ( v18 )
          RtlClearBits(v18, v17, a2);
      }
      goto LABEL_8;
    }
    RtlClearBits(*a1, v12, a2);
    if ( v15 != -1 )
      RtlClearBits(a1[1], v15, a2);
    started = MiSelectRelocationStartHint(a1, a2, a3);
    v12 = started;
    if ( started != -1 )
    {
      RtlSetBits(*a1, started, a2);
      RtlSetBits(a1[1], v12, a2);
      goto LABEL_7;
    }
  }
LABEL_8:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1402FE448, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1402FE448);
  KeAbPostRelease((ULONG_PTR)&qword_1402FE448);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v12;
}
