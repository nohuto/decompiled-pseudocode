/*
 * XREFs of MiRelocateImagePfn @ 0x140446650
 * Callers:
 *     MiValidateInPage @ 0x140026330 (MiValidateInPage.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x140661F18 (MiFillPerSessionProtos.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x140108388 (MiMakeProtectionPfnCompatible.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiPerformFixups @ 0x140509BC0 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(ULONG_PTR a1, ULONG_PTR a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 **v5; // rax
  unsigned __int64 v7; // rbp
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // r8
  int v12; // edx
  __int64 v13; // r15
  ULONG_PTR v14; // rdi
  int ProtectionPfnCompatible; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _KTHREAD *CurrentThread; // r15
  __int64 v19; // r13
  __int64 v20; // rcx
  __int64 v21; // [rsp+30h] [rbp-48h]
  ULONG_PTR v22; // [rsp+38h] [rbp-40h]

  v5 = *(unsigned __int64 ***)(a1 + 96);
  v7 = a3;
  v9 = *v5;
  v10 = **v5;
  if ( v7 >= (*v5)[7] )
    return 0LL;
  v12 = 0;
  while ( !*(_QWORD *)(v10 + 8LL * (unsigned int)(v12 + v7)) )
  {
    if ( ++v12 )
    {
      if ( v12 != 5 )
        return 0LL;
      break;
    }
  }
  v13 = 48 * a4 - 0x58000000000LL;
  if ( a2 && (a2 < 0xFFFFF68000000000uLL || a2 > 0xFFFFF6FFFFFFFFFFuLL) )
  {
    v14 = 0LL;
    v22 = 0LL;
  }
  else
  {
    v22 = a2;
    v14 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v10);
    if ( !v14 )
    {
      if ( !a2 )
        return 3221225626LL;
      v14 = a2;
    }
    a2 = (__int64)(v14 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v13);
    *(_QWORD *)v14 = MiMakeValidKernelPte(a4, ProtectionPfnCompatible, v14) | 0x42;
    if ( MiPteInShadowRange(v14) )
      MiWritePteShadow(v17, v16);
  }
  if ( a5 )
    v21 = v9[5];
  else
    v21 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)v9[1] == CurrentThread )
  {
    CurrentThread = 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v19 = KeAbPreAcquire((ULONG_PTR)(v9 + 3), 0LL, 0);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9 + 3, v19, (ULONG_PTR)(v9 + 3));
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
  }
  MiPerformFixups(a2, a1, v21, 1);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9 + 3);
    KeAbPostRelease((ULONG_PTR)(v9 + 3));
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v14 )
  {
    if ( v14 == v22 )
    {
      *(_QWORD *)v14 = 0LL;
      if ( MiPteInShadowRange(v14) )
        MiWritePteShadow(v20, 0LL);
      KeFlushSingleTb(a2, 0, 1u);
    }
    else
    {
      MiReleasePtes((__int64)&qword_1403278B0, v14, 1u);
    }
  }
  return 0LL;
}
