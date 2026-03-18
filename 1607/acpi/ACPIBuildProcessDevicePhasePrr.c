/*
 * XREFs of ACPIBuildProcessDevicePhasePrr @ 0x1C000F270
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_Lqss @ 0x1C0012A70 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0013EA0 (AMLIGetNamedChild.c)
 *     FreeDataBuffs @ 0x1C001B580 (FreeDataBuffs.c)
 *     ACPIBuildCompleteMustSucceed @ 0x1C001DE30 (ACPIBuildCompleteMustSucceed.c)
 *     ACPIBuildDeviceResetPowerNode @ 0x1C0043B48 (ACPIBuildDeviceResetPowerNode.c)
 *     ACPIWriteEventLogEntry @ 0x1C004D554 (ACPIWriteEventLogEntry.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhasePrr(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v2; // rsi
  unsigned int v3; // ebp
  ULONG_PTR v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rax
  int v7; // edx
  __int64 *v8; // r8
  unsigned int v10; // eax

  v1 = *(_QWORD **)(a1 + 40);
  v2 = a1 + 80;
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 0;
  if ( v1[50] )
  {
    if ( !*(_QWORD *)(a1 + 56) )
      goto LABEL_3;
    dword_1C0074698 = 0;
    byte_1C007469C = 0;
LABEL_12:
    FreeDataBuffs(v2, 1LL);
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(a1 + 56);
  if ( v4 )
  {
    if ( *(_WORD *)(a1 + 82) != 4 )
    {
      ACPIWriteEventLogEntry(3221553168LL, 0LL, 0LL);
      goto LABEL_3;
    }
    v10 = ACPIBuildDeviceResetPowerNode((ULONG_PTR)v1, v4);
    dword_1C0074698 = 0;
    v3 = v10;
    byte_1C007469C = 0;
    goto LABEL_12;
  }
LABEL_3:
  v1[56] = AMLIGetNamedChild(v1[89], 1414746719LL);
  v5 = qword_1C002C340;
  v6 = v1[1];
  v7 = 0;
  v8 = qword_1C002C340;
  if ( (v6 & 0x200000000000LL) != 0 )
  {
    v5 = (__int64 *)v1[70];
    if ( (v6 & 0x400000000000LL) != 0 )
      v8 = (__int64 *)v1[71];
  }
  LOBYTE(v7) = 4;
  WPP_RECORDER_SF_Lqss(
    WPP_GLOBAL_Control->DeviceExtension,
    v7,
    6,
    43,
    (__int64)&WPP_c73e7c2beda73cc5c3861dae1f83c995_Traceguids,
    v3,
    (char)v1,
    (__int64)v5,
    (__int64)v8);
  ACPIBuildCompleteMustSucceed(0LL);
  return v3;
}
