/*
 * XREFs of MiObtainRelocationBits @ 0x14046D704
 * Callers:
 *     MiSelectImageBase @ 0x14046D450 (MiSelectImageBase.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     RtlFindClearBitsAndSet @ 0x14007CB88 (RtlFindClearBitsAndSet.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiSelectRelocationStartHint @ 0x14046D81C (MiSelectRelocationStartHint.c)
 */

__int64 __fastcall MiObtainRelocationBits(PRTL_BITMAP *a1, unsigned __int16 a2, ULONG a3, int a4)
{
  struct _KTHREAD *CurrentThread; // r13
  _BYTE *v8; // rax
  signed __int8 v9; // cf
  _BYTE *v10; // rdi
  ULONG ClearBitsAndSet; // eax
  ULONG v12; // esi
  _RTL_BITMAP *v13; // rcx
  ULONG v15; // r15d
  ULONG started; // eax
  ULONG v17; // ebp
  _RTL_BITMAP *v18; // rcx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326750, 0LL, 0);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326750, 0LL);
  v10 = v8;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140326750, v8, (ULONG_PTR)&qword_140326750);
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
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326750, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326750);
  KeAbPostRelease((ULONG_PTR)&qword_140326750);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return v12;
}
