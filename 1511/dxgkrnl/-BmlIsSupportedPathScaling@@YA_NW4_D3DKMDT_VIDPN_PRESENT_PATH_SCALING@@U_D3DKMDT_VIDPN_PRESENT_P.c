/*
 * XREFs of ?BmlIsSupportedPathScaling@@YA_NW4_D3DKMDT_VIDPN_PRESENT_PATH_SCALING@@U_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C00A7EF4
 * Callers:
 *     sub_1C00A7E48 @ 0x1C00A7E48 (sub_1C00A7E48.c)
 *     ??ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z @ 0x1C013E230 (--ROBTAIN_MODES_ON_SOURCE@@QEBAJPEAPEAU_D3DKMT_DISPLAYMODE@@PEAIPEAUDXGK_STEREO_PARAMS@@01@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall BmlIsSupportedPathScaling(__int64 a1, struct _D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT a2)
{
  __int64 v2; // rbx
  int v3; // eax
  __int64 v5; // rax

  v2 = (int)a1;
  switch ( (_DWORD)a1 )
  {
    case 1:
      LOBYTE(v3) = a2;
      return v3 & 1;
    case 2:
      v3 = *(_BYTE *)&a2 >> 1;
      return v3 & 1;
    case 3:
      v3 = *(_BYTE *)&a2 >> 2;
      return v3 & 1;
    case 4:
      v3 = *(_BYTE *)&a2 >> 3;
      return v3 & 1;
    case 5:
      v3 = *(_BYTE *)&a2 >> 4;
      return v3 & 1;
    case 0xFF:
      return 1;
  }
  v5 = WdLogNewEntry5_WdAssertion(a1);
  *(_QWORD *)(v5 + 24) = v2;
  WdLogEvent5_WdAssertion(v5);
  return 0;
}
