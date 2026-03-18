/*
 * XREFs of MiRelocateImagePfn @ 0x1404BE420
 * Callers:
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiValidateInPage @ 0x140087A20 (MiValidateInPage.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiFillPerSessionProtos @ 0x14021C1E0 (MiFillPerSessionProtos.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiMakeProtectionPfnCompatible @ 0x1400797E8 (MiMakeProtectionPfnCompatible.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     MiPteInShadowRange @ 0x140225548 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiPerformFixups @ 0x1404B1810 (MiPerformFixups.c)
 */

__int64 __fastcall MiRelocateImagePfn(ULONG_PTR a1, unsigned __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rax
  unsigned int v6; // r15d
  _QWORD *v8; // r14
  int v10; // edx
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v16; // r9
  __int64 v17; // r13
  __int16 v18; // ax
  __int64 v19; // [rsp+30h] [rbp-48h]
  __int64 BugCheckParameter3; // [rsp+38h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 96);
  v6 = a3;
  v8 = *(_QWORD **)v5;
  if ( (unsigned __int64)(unsigned int)a3 >= *(_QWORD *)(*(_QWORD *)v5 + 48LL) )
    return 0LL;
  v10 = 0;
  while ( !*(_QWORD *)(**(_QWORD **)v5 + 8LL * (unsigned int)(v10 + a3)) )
  {
    if ( ++v10 )
    {
      if ( v10 != 5 )
        return 0LL;
      break;
    }
  }
  if ( a2 - 1 <= 0xFFFFF67FFFFFFFFEuLL || a2 >= 0xFFFFF70000000000uLL )
  {
    BugCheckParameter3 = a2;
    v12 = 0LL;
    a2 = 0LL;
  }
  else
  {
    v11 = 48 * a4 - 0x58000000000LL;
    v12 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, 1u, a3);
    if ( !v12 )
    {
      if ( !a2 )
        return 3221225626LL;
      v12 = a2;
    }
    BugCheckParameter3 = (__int64)(v12 << 25) >> 16;
    MiMakeProtectionPfnCompatible(4, v11);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v12) )
      v13 |= 0x100uLL;
    v14 = v13 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8) | 0x42;
    *(_QWORD *)v12 = v14;
    if ( MiPteInShadowRange(v12) )
      MiWritePteShadow(v12, v14);
  }
  if ( a5 )
  {
    v19 = v8[5];
  }
  else
  {
    a5 = v8[5];
    v19 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (struct _KTHREAD *)v8[1] == CurrentThread )
  {
    CurrentThread = 0LL;
  }
  else
  {
    --CurrentThread->SpecialApcDisable;
    v17 = KeAbPreAcquire((ULONG_PTR)(v8 + 3), 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v8 + 3, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v8 + 3, v17, (ULONG_PTR)(v8 + 3), v16);
    if ( v17 )
      *(_BYTE *)(v17 + 26) |= 1u;
  }
  MiPerformFixups(BugCheckParameter3, a1, v6, a5, v19, 1);
  if ( CurrentThread )
  {
    if ( _InterlockedCompareExchange64(v8 + 3, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v8 + 3);
    KeAbPostRelease((ULONG_PTR)(v8 + 3));
    v18 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v18;
    if ( !v18
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( v12 )
  {
    if ( v12 == a2 )
    {
      *(_QWORD *)v12 = 0LL;
      if ( MiPteInShadowRange(v12) )
        MiWritePteShadow(v12, 0LL);
      KeFlushSingleTb(BugCheckParameter3, 0, 1);
    }
    else
    {
      MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)v12, 1u);
    }
  }
  return 0LL;
}
