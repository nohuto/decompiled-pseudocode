/*
 * XREFs of MiDereferencePerSessionProtos @ 0x140661DDC
 * Callers:
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiSectionDelete @ 0x14042D110 (MiSectionDelete.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     MiDeletePartialCloneVad @ 0x140663220 (MiDeletePartialCloneVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x140661EB8 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140662180 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiDereferencePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v4; // rdi
  unsigned __int64 *v6; // rdi
  _BYTE *v7; // rax
  _BYTE *v8; // rsi
  _QWORD *i; // rsi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v11 = 0LL;
  v4 = *a1;
  --CurrentThread->SpecialApcDisable;
  v6 = (unsigned __int64 *)(v4 + 40);
  v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6);
  if ( v8 )
    v8[26] |= 1u;
  for ( i = a1 + 16; i; i = (_QWORD *)i[2] )
    MiDereferenceSubsectionProtos(i, a2, &v11);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  return MiFreeSubsectionProtos(&v11);
}
