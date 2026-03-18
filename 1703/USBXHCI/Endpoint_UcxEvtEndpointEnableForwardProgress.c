/*
 * XREFs of Endpoint_UcxEvtEndpointEnableForwardProgress @ 0x1C0020E30
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0007F60 (WPP_RECORDER_SF_ddd.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010A80 (_guard_dispatch_icall_nop.c)
 *     TR_EnableForwardProgress_Internal @ 0x1C0025204 (TR_EnableForwardProgress_Internal.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointEnableForwardProgress(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // eax
  int v6; // edi
  unsigned __int16 v7; // r9
  int v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+30h] [rbp-18h]
  int v11; // [rsp+38h] [rbp-10h]

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0045188);
  v4 = v3;
  if ( !*(_BYTE *)(v3 + 37) )
  {
    v6 = TR_EnableForwardProgress_Internal(*(_QWORD *)(v3 + 88), a2);
    if ( v6 < 0 )
    {
      v7 = 57;
      v11 = v6;
      v10 = *(_DWORD *)(v4 + 144);
      v9 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
      goto LABEL_6;
    }
LABEL_7:
    *(_BYTE *)(v4 + 36) = 1;
    return (unsigned int)v6;
  }
  v5 = TR_EnableForwardProgress_Internal(*(_QWORD *)(*(_QWORD *)(v3 + 136) + 40LL), a2);
  v6 = v5;
  if ( v5 >= 0 )
    goto LABEL_7;
  v7 = 56;
  v11 = v5;
  v10 = *(_DWORD *)(v4 + 144);
  v9 = *(unsigned __int8 *)(*(_QWORD *)(v4 + 16) + 135LL);
LABEL_6:
  WPP_RECORDER_SF_ddd(
    *(_QWORD *)(v4 + 80),
    3u,
    0xCu,
    v7,
    (__int64)&WPP_dfd1540ede223d0a50a10695a1612c8d_Traceguids,
    v9,
    v10,
    v11);
  return (unsigned int)v6;
}
