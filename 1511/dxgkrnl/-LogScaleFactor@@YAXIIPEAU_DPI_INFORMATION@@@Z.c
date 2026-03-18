/*
 * XREFs of ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AC7E8
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00ABF5C (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C000A24C (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogScaleFactor(int a1, int a2, struct _DPI_INFORMATION *a3)
{
  _DWORD v6[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v6, 0, sizeof(v6));
  if ( a2 )
    DxgkDiagInitializeCodePointPacket(v6, 78, a1, a2, 0);
  else
    DxgkDiagInitializeCodePointPacket(
      v6,
      79,
      a1,
      *((unsigned __int16 *)a3 + 18) | (*((unsigned __int16 *)a3 + 16) << 16),
      *((_DWORD *)a3 + 2));
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v6);
}
