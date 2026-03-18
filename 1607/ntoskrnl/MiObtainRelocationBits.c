/*
 * XREFs of MiObtainRelocationBits @ 0x14046E834
 * Callers:
 *     MiSelectImageBase @ 0x14046E580 (MiSelectImageBase.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlSetBits @ 0x140028420 (RtlSetBits.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     RtlClearBits @ 0x14002D6E0 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB08 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x14046E94C (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r13
  _BYTE *v8; // rax
  signed __int8 v9; // cf
  _BYTE *v10; // rdi
  ULONG ClearBitsAndSet; // eax
  ULONG v12; // esi
  struct _RTL_BITMAP *v13; // rcx
  ULONG v15; // r15d
  ULONG started; // eax
  ULONG v17; // ebp
  struct _RTL_BITMAP *v18; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326710, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326710, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140326710, v8, (ULONG_PTR)&qword_140326710);
  if ( v10 )
    v10[26] |= 1u;
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326710, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326710);
  KeAbPostRelease((ULONG_PTR)&qword_140326710);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v12;
}
