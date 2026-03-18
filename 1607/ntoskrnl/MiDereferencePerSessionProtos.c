/*
 * XREFs of MiDereferencePerSessionProtos @ 0x140661CF8
 * Callers:
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiRemoveFromSystemSpace @ 0x140100090 (MiRemoveFromSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MiCreateSection @ 0x14042CD40 (MiCreateSection.c)
 *     MiSectionDelete @ 0x14042E240 (MiSectionDelete.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     MiMapSystemImage @ 0x140484528 (MiMapSystemImage.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 *     MiDeletePartialCloneVad @ 0x14066313C (MiDeletePartialCloneVad.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     MiDereferenceSubsectionProtos @ 0x140661DD4 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14066209C (MiFreeSubsectionProtos.c)
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
