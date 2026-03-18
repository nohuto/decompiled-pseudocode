/*
 * XREFs of ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00AB874
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00AAFE8 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 * Callees:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogScaleFactor(int a1, int a2, struct _DPI_INFORMATION *a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD v9[16]; // [rsp+30h] [rbp-58h] BYREF

  memset(v9, 0, sizeof(v9));
  if ( a2 )
    DxgkDiagInitializeCodePointPacket(v9, 78, a1, a2, 0);
  else
    DxgkDiagInitializeCodePointPacket(
      v9,
      79,
      a1,
      *((unsigned __int16 *)a3 + 18) | (*((unsigned __int16 *)a3 + 16) << 16),
      *((_DWORD *)a3 + 2));
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v9, v6, v7, v8);
}
