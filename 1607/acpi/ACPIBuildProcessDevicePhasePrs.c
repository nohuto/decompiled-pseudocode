/*
 * XREFs of ACPIBuildProcessDevicePhasePrs @ 0x1C0026360
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIBuildCompleteGeneric @ 0x1C0026470 (ACPIBuildCompleteGeneric.c)
 *     PnpBiosSetFlagsForNotableInterrupts @ 0x1C0026494 (PnpBiosSetFlagsForNotableInterrupts.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrs(__int64 a1)
{
  bool v1; // zf
  _QWORD *v3; // rdi
  __int64 v4; // rcx
  char v5; // r8
  const char *v6; // rax
  const char *v7; // rdx
  __int64 v8; // rcx

  v1 = *(_QWORD *)(a1 + 56) == 0LL;
  v3 = *(_QWORD **)(a1 + 40);
  *(_DWORD *)(a1 + 32) = 16;
  if ( !v1 && *(int *)(a1 + 48) >= 0 )
  {
    if ( *(_WORD *)(a1 + 82) == 3 )
    {
      PnpBiosSetFlagsForNotableInterrupts(v3, *(_QWORD *)(a1 + 112), *(unsigned int *)(a1 + 104));
      v4 = a1 + 80;
    }
    else
    {
      v4 = a1 + 80;
    }
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
    FreeDataBuffs(v4, 1u);
  }
  v5 = 0;
  v6 = (const char *)qword_1C002C340;
  v7 = (const char *)qword_1C002C340;
  if ( v3 )
  {
    v8 = v3[1];
    v5 = (char)v3;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v6 = (const char *)v3[70];
      if ( (v8 & 0x400000000000LL) != 0 )
        v7 = (const char *)v3[71];
    }
  }
  WPP_RECORDER_SF_Lqss(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    6u,
    0x21u,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    0,
    v5,
    v6,
    v7);
  ACPIBuildCompleteGeneric(0LL, 0LL, 0LL, a1);
  return 0LL;
}
