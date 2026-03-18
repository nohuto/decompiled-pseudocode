/*
 * XREFs of MiDereferencePerSessionProtos @ 0x14062C01C
 * Callers:
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MiCreateSection @ 0x1403F80B0 (MiCreateSection.c)
 *     MiSectionDelete @ 0x14047B400 (MiSectionDelete.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiDeletePartialCloneVad @ 0x14062CC30 (MiDeletePartialCloneVad.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDereferenceSubsectionProtos @ 0x14062C0F4 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14062C3B4 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rsi
  _QWORD *i; // rsi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v4 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(v4 + 40);
  v7 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  for ( i = a1 + 15; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v11);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiFreeSubsectionProtos(&v11);
}
