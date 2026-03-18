/*
 * XREFs of ACPIBuildDiscoverDeviceCompletion @ 0x1C0043D80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_sqqDqss @ 0x1C0004FFC (WPP_RECORDER_SF_sqqDqss.c)
 */

void __fastcall ACPIBuildDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // r10
  __int64 v6; // rdx
  const char *v7; // rax
  __int64 v8; // r8
  const char *v9; // rcx

  v3 = *(_QWORD *)(a1 + 40);
  if ( a2 >= 0 && a3 )
  {
    *(_QWORD *)(v3 + 896) = a3;
    _InterlockedOr64((volatile signed __int64 *)(v3 + 912), 0x4000000uLL);
    v6 = *(_QWORD *)(v3 + 8);
    v7 = (const char *)qword_1C002C340;
    v8 = 0x200000000000LL;
    v9 = (const char *)qword_1C002C340;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(const char **)(v3 + 560);
      v8 = 0x400000000000LL;
      if ( (v6 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v3 + 568);
    }
    WPP_RECORDER_SF_sqqDqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v8,
      0x56u,
      (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
      "ACPIBuildDiscoverDeviceCompletion",
      v3,
      *(_QWORD *)(v3 + 896),
      a2,
      v3,
      v7,
      v9);
  }
  ACPIBuildCompleteGeneric(0LL, a2, 0LL, a1);
}
