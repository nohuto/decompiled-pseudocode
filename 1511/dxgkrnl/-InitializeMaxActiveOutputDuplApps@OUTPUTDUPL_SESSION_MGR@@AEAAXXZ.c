/*
 * XREFs of ?InitializeMaxActiveOutputDuplApps@OUTPUTDUPL_SESSION_MGR@@AEAAXXZ @ 0x1C00BBD70
 * Callers:
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C009F1F0 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

void __fastcall OUTPUTDUPL_SESSION_MGR::InitializeMaxActiveOutputDuplApps(OUTPUTDUPL_SESSION_MGR *this)
{
  __int64 v2; // [rsp+30h] [rbp-19h] BYREF
  int v3; // [rsp+38h] [rbp-11h]
  const wchar_t *v4; // [rsp+40h] [rbp-9h]
  OUTPUTDUPL_SESSION_MGR *v5; // [rsp+48h] [rbp-1h]
  int v6; // [rsp+50h] [rbp+7h]
  int *v7; // [rsp+58h] [rbp+Fh]
  int v8; // [rsp+60h] [rbp+17h]
  __int64 v9; // [rsp+68h] [rbp+1Fh]
  int v10; // [rsp+70h] [rbp+27h]
  __int64 v11; // [rsp+78h] [rbp+2Fh]
  _BYTE v12[32]; // [rsp+80h] [rbp+37h] BYREF
  int v13; // [rsp+B0h] [rbp+67h] BYREF

  v2 = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  v4 = L"OutputDuplicationSessionApplicationLimit";
  v13 = 4;
  v8 = 4;
  v3 = 288;
  v5 = this;
  v6 = 67108868;
  v7 = &v13;
  memset(v12, 0, sizeof(v12));
  RtlQueryRegistryValuesEx(2LL, L"GraphicsDrivers", &v2, 0LL, 0LL);
  if ( (unsigned int)(*(_DWORD *)this - 1) > 0xF )
    *(_DWORD *)this = v13;
}
