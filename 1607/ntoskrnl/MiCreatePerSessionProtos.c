/*
 * XREFs of MiCreatePerSessionProtos @ 0x140661C44
 * Callers:
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MiCreateSection @ 0x14042BC10 (MiCreateSection.c)
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     MiLocateSessionProtosInSubsection @ 0x1401F5114 (MiLocateSessionProtosInSubsection.c)
 *     MiUpdatePerSessionProto @ 0x1401F5170 (MiUpdatePerSessionProto.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     MiDereferenceSubsectionProtos @ 0x140661EB8 (MiDereferenceSubsectionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140662180 (MiFreeSubsectionProtos.c)
 */

__int64 __fastcall MiCreatePerSessionProtos(__int64 *a1, unsigned int a2)
{
  struct _KTHREAD *CurrentThread; // r12
  __int64 v6; // rdi
  unsigned __int64 *v7; // rdi
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  _QWORD *v10; // rbp
  __int64 v11; // rsi
  __int64 *SessionProtosInSubsection; // rax
  int v13; // r13d
  unsigned __int64 v14; // r8
  __int64 *v15; // [rsp+80h] [rbp+18h] BYREF
  __int64 v16; // [rsp+88h] [rbp+20h] BYREF

  if ( a2 - 0x7FFFF <= 0xFFF7FFFF )
    return 3221225678LL;
  CurrentThread = KeGetCurrentThread();
  v6 = *a1;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(v6 + 40);
  v8 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)v7, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (ULONG_PTR)v7);
  if ( v9 )
    v9[26] |= 1u;
  v10 = a1 + 16;
  v11 = (__int64)(a1 + 16);
  if ( a1 == (__int64 *)-128LL )
  {
LABEL_14:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v7);
    KeAbPostRelease((ULONG_PTR)v7);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    return 0LL;
  }
  while ( (*(_BYTE *)(v11 + 34) & 2) == 0 )
  {
LABEL_13:
    v11 = *(_QWORD *)(v11 + 16);
    if ( !v11 )
      goto LABEL_14;
  }
  SessionProtosInSubsection = MiLocateSessionProtosInSubsection(v11, a2);
  v15 = SessionProtosInSubsection;
  if ( SessionProtosInSubsection )
  {
    ++*((_DWORD *)SessionProtosInSubsection + 10);
    goto LABEL_13;
  }
  v13 = MiAllocatePerSessionProtos(v11, 0LL, 0, 0LL, &v15);
  if ( v13 >= 0 )
  {
    v14 = (unsigned __int64)v15;
    *((_DWORD *)v15 + 6) = a2;
    MiUpdatePerSessionProto((__int64)a1, v11, v14, 1);
    goto LABEL_13;
  }
  v16 = 0LL;
  while ( v10 != (_QWORD *)v11 )
  {
    MiDereferenceSubsectionProtos(v10, a2, &v16);
    v10 = (_QWORD *)v10[2];
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v7);
  KeAbPostRelease((ULONG_PTR)v7);
  KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  MiFreeSubsectionProtos(&v16);
  return (unsigned int)v13;
}
