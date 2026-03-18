/*
 * XREFs of HUBPARENT_SetHubConfigurationComplete @ 0x1C00061D0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001904 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001D9C (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0035240 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_SetHubConfigurationComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ebp
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  __int64 v13; // rdx
  __int64 v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+30h] [rbp-28h]

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1392))(WdfDriverGlobals);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C00580C0);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a4 + 4);
  v11 = v8;
  if ( v9 < 0 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 1048) = *(_QWORD *)(a4 + 72);
  *(_QWORD *)(v8 + 72) = *(_QWORD *)(a4 + 32);
  v12 = *(_WORD *)(a4 + 64);
  *(_WORD *)(v11 + 80) = v12;
  if ( *(_WORD *)(v11 + 2402) >= 0x300u )
  {
    if ( v12 > 2u )
      v9 = -1073741216;
    if ( v12 != 2 )
    {
      v16 = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v11 + 2464),
        2u,
        3u,
        0xAu,
        (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
        v16);
    }
  }
  if ( v9 < 0 )
  {
LABEL_8:
    v17 = v10;
    LODWORD(v15) = v9;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v11 + 2464),
      2u,
      3u,
      0xBu,
      (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
      v15,
      v17);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0);
  v13 = 2006LL;
  if ( v9 >= 0 )
    v13 = 2010LL;
  return HUBSM_AddEvent(v11 + 1208, v13);
}
