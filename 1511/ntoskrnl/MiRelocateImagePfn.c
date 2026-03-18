/*
 * XREFs of MiRelocateImagePfn @ 0x14041AB80
 * Callers:
 *     MiValidateInPage @ 0x1400390F0 (MiValidateInPage.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     MiFillPerSessionProtos @ 0x14062C154 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400FE304 (MiMakeProtectionPfnCompatible.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiPerformFixups @ 0x1404DB740 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(ULONG_PTR a1, unsigned __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  unsigned __int64 **v5; // rax
  unsigned __int64 v7; // r15
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // r8
  int v12; // edx
  __int64 v13; // rdi
  ULONG_PTR v14; // rsi
  int ProtectionPfnCompatible; // eax
  __int64 v16; // r9
  unsigned __int64 v17; // rdi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v19; // r13
  __int64 v20; // [rsp+30h] [rbp-48h]
  __int64 BugCheckParameter3; // [rsp+38h] [rbp-40h]

  v5 = *(unsigned __int64 ***)(a1 + 96);
  v7 = a3;
  v9 = *v5;
  v10 = **v5;
  if ( v7 >= (*v5)[6] )
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
  if ( a2 - 1 <= 0xFFFFF67FFFFFFFFEuLL || a2 >= 0xFFFFF70000000000uLL )
  {
    BugCheckParameter3 = a2;
    v14 = 0LL;
    a2 = 0LL;
  }
  else
  {
    v14 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v10);
    if ( !v14 )
    {
      if ( !a2 )
        return 3221225626LL;
      v14 = a2;
    }
    BugCheckParameter3 = (__int64)(v14 << 25) >> 16;
    ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, v13);
    v17 = MiMakeValidKernelPte(a4, ProtectionPfnCompatible, v14, v16) | 0x42;
    *(_QWORD *)v14 = v17;
    if ( MiPteInShadowRange(v14) )
      MiWritePteShadow(v14, v17);
  }
  if ( a5 )
    v20 = v9[5];
  else
    v20 = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)v9[1] == CurrentThread )
  {
    CurrentThread = 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v19 = KeAbPreAcquire((ULONG_PTR)(v9 + 3), 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v9 + 3, v19, (ULONG_PTR)(v9 + 3));
    if ( v19 )
      *(_BYTE *)(v19 + 26) |= 1u;
  }
  MiPerformFixups(BugCheckParameter3, a1, v20, 1);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v9 + 3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)v9 + 3);
    KeAbPostRelease((ULONG_PTR)(v9 + 3));
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  if ( v14 )
  {
    if ( v14 == a2 )
    {
      *(_QWORD *)v14 = 0LL;
      if ( MiPteInShadowRange(v14) )
        MiWritePteShadow(v14, 0LL);
      KeFlushSingleTb(BugCheckParameter3, 0, 1u);
    }
    else
    {
      MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v14, 1u);
    }
  }
  return 0LL;
}
