/*
 * XREFs of ?LogScaleFactor@@YAXIIPEAU_DPI_INFORMATION@@@Z @ 0x1C00BAB24
 * Callers:
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00BABE0 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     DxgkUpdateDpiInfoForNewOverride @ 0x1C018D1A0 (DxgkUpdateDpiInfoForNewOverride.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 */

void __fastcall LogScaleFactor(int a1, unsigned int a2, struct _DPI_INFORMATION *a3)
{
  int v6; // eax
  int v7; // ecx
  _QWORD v8[8]; // [rsp+20h] [rbp-50h] BYREF

  memset(v8, 0, sizeof(v8));
  v8[0] = 0x4000000006LL;
  HIDWORD(v8[6]) = a1;
  memset(&v8[1], 0, 36);
  if ( a2 )
  {
    LODWORD(v8[6]) = 78;
    v8[7] = a2;
  }
  else
  {
    v6 = *((unsigned __int16 *)a3 + 18);
    v7 = *((unsigned __int16 *)a3 + 16) << 16;
    LODWORD(v8[6]) = 79;
    v8[7] = __PAIR64__(*((_DWORD *)a3 + 2), v6 | (unsigned int)v7);
  }
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v8);
}
