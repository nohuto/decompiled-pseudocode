/*
 * XREFs of ACPIBuildProcessDevicePhaseCrs @ 0x1C000E600
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteCommon @ 0x1C000F100 (ACPIBuildCompleteCommon.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIIsNamedChildPresent @ 0x1C0013F30 (AMLIIsNamedChildPresent.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0026494 (PnpBiosSetFlagsForNotableInterrupts.c)
 *     ACPIMatchKernelPorts @ 0x1C002AA98 (ACPIMatchKernelPorts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseCrs(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rdx
  __int64 v9; // [rsp+40h] [rbp-18h]

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1 + 80;
  if ( (unsigned __int8)AMLIIsNamedChildPresent(*(_QWORD *)(v1 + 712), 1397903455LL) )
    *(_DWORD *)(a1 + 32) = 28;
  else
    *(_DWORD *)(a1 + 32) = 16;
  if ( *(_QWORD *)(a1 + 56) && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(v2 + 2) == 3 )
    {
      if ( (*(_DWORD *)(v1 + 8) & 0x4000000) != 0 )
        ACPIMatchKernelPorts(v1, v2);
      PnpBiosSetFlagsForNotableInterrupts(v1, *(_QWORD *)(v2 + 32), *(unsigned int *)(v2 + 24));
    }
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    FreeDataBuffs(v2, 1LL);
  }
  v4 = *(_QWORD *)(v1 + 8);
  v5 = qword_1C002C340;
  v6 = qword_1C002C340;
  if ( (v4 & 0x200000000000LL) != 0 )
  {
    v5 = *(__int64 **)(v1 + 560);
    if ( (v4 & 0x400000000000LL) != 0 )
      v6 = *(__int64 **)(v1 + 568);
  }
  v9 = (__int64)v6;
  LOBYTE(v6) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    (_DWORD)v6,
    6,
    32,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    0,
    v1,
    (__int64)v5,
    v9);
  v7 = *(unsigned int *)(a1 + 32);
  *(_DWORD *)(a1 + 32) = 2;
  ACPIBuildCompleteCommon(a1 + 24, v7);
  return 0LL;
}
