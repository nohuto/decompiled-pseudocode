/*
 * XREFs of ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0153870
 * Callers:
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01531E4 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C01533C8 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::IsDiagRegKeyEnabled(OUTPUTDUPL_MGR *this)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  unsigned int *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  _BYTE v12[32]; // [rsp+80h] [rbp+37h] BYREF
  unsigned int v13; // [rsp+B0h] [rbp+67h] BYREF
  int v14; // [rsp+B4h] [rbp+6Bh]
  int v15; // [rsp+B8h] [rbp+6Fh] BYREF

  v14 = HIDWORD(this);
  v13 = 0;
  v2 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v4 = L"DxgEnableDesktopDuplicationDiagnostics";
  v5 = &v13;
  v15 = 1;
  v7 = &v15;
  v3 = 288;
  v6 = 67108868;
  v8 = 4;
  memset(v12, 0, sizeof(v12));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v2, 0LL, 0LL);
  return v13;
}
