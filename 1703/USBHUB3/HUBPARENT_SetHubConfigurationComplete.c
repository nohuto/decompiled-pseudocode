/*
 * XREFs of HUBPARENT_SetHubConfigurationComplete @ 0x1C0006370
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001950 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001E10 (WPP_RECORDER_SF_dD.c)
 *     _guard_dispatch_icall_nop @ 0x1C0038110 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBPARENT_SetHubConfigurationComplete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // ebx
  int v10; // ebp
  __int64 v11; // rdi
  unsigned __int16 v12; // ax
  __int64 v14; // [rsp+28h] [rbp-30h]
  int v15; // [rsp+28h] [rbp-30h]
  int v16; // [rsp+30h] [rbp-28h]

  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1392))(WdfDriverGlobals);
  v8 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         v7,
         off_1C005B0C0);
  v9 = *(_DWORD *)(a3 + 8);
  v10 = *(_DWORD *)(a4 + 4);
  v11 = v8;
  if ( v9 < 0 )
    goto LABEL_8;
  *(_QWORD *)(v8 + 1072) = *(_QWORD *)(a4 + 72);
  *(_QWORD *)(v8 + 80) = *(_QWORD *)(a4 + 32);
  v12 = *(_WORD *)(a4 + 64);
  *(_WORD *)(v11 + 88) = v12;
  if ( *(_WORD *)(v11 + 2426) >= 0x300u )
  {
    if ( v12 > 2u )
      v9 = -1073741216;
    if ( v12 != 2 )
    {
      v15 = v12;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(v11 + 2488),
        2u,
        3u,
        0xAu,
        (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
        v15);
    }
  }
  if ( v9 < 0 )
  {
LABEL_8:
    v16 = v10;
    LODWORD(v14) = v9;
    WPP_RECORDER_SF_dD(
      *(_QWORD *)(v11 + 2488),
      2u,
      3u,
      0xBu,
      (__int64)&WPP_d887d9a76eb73ffd9207a7a58ef2b697_Traceguids,
      v14,
      v16);
  }
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1664))(WdfDriverGlobals, a1);
  ExFreePoolWithTag((PVOID)a4, 0);
  return HUBSM_AddEvent(v11 + 1232, ((v9 >> 31) & 0xFFFFFFFC) + 2010);
}
