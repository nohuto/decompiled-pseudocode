/*
 * XREFs of MiDereferenceExtendInfo @ 0x14010EAA4
 * Callers:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     MiDeletePartialCloneVad @ 0x14066313C (MiDeletePartialCloneVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall MiDereferenceExtendInfo(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r14
  void *v3; // rsi
  _BYTE *v6; // rax
  signed __int8 v7; // cf
  _BYTE *v8; // rdi

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v6 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140326560, 0LL, 0);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140326560, 0LL);
  v8 = v6;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&qword_140326560, v6, (ULONG_PTR)&qword_140326560);
  if ( v8 )
    v8[26] |= 1u;
  if ( !--*(_DWORD *)(*(_QWORD *)(a1 + 120) + 8LL) )
  {
    v3 = *(void **)(a1 + 120);
    *(_QWORD *)(*(_QWORD *)a2 + 32LL) = 0LL;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140326560, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140326560);
  KeAbPostRelease((ULONG_PTR)&qword_140326560);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  if ( v3 )
    ExFreePoolWithTag(v3, 0);
}
