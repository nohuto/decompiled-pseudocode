/*
 * XREFs of ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C000A908
 * Callers:
 *     ?FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C000A658 (-FillDpiInfo@@YAXAEBUtagSIZE@@0PEBU_DPI_SCALE_FACTOR_COLLECTION@@IIIHPEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0022298 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 */

struct tagSIZE __fastcall DpiInternal::CalcDpiOverride(
        DpiInternal *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3)
{
  LONG cx; // ebx
  LONG cy; // edi
  const struct tagSIZE *v6; // r8
  __int64 v8; // [rsp+30h] [rbp-29h] BYREF
  int v9; // [rsp+38h] [rbp-21h]
  const wchar_t *v10; // [rsp+40h] [rbp-19h]
  __int64 *v11; // [rsp+48h] [rbp-11h]
  int v12; // [rsp+50h] [rbp-9h]
  int *v13; // [rsp+58h] [rbp-1h]
  int v14; // [rsp+60h] [rbp+7h]
  __int64 v15; // [rsp+68h] [rbp+Fh]
  int v16; // [rsp+70h] [rbp+17h]
  __int64 v17; // [rsp+78h] [rbp+1Fh]
  _BYTE v18[32]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v19; // [rsp+C8h] [rbp+6Fh] BYREF
  int v20; // [rsp+D0h] [rbp+77h] BYREF
  struct tagSIZE v21; // [rsp+D8h] [rbp+7Fh] BYREF

  cx = a2->cx;
  cy = a2->cy;
  LODWORD(v19) = 0;
  v20 = 0;
  v8 = 0LL;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v10 = L"UserPreferenceWidth";
  v11 = &v19;
  v13 = &v20;
  v9 = 292;
  v12 = 0x4000000;
  v14 = 4;
  memset(v18, 0, sizeof(v18));
  if ( (int)RtlQueryRegistryValuesEx(
              0LL,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Theme",
              &v8,
              0LL,
              0LL) >= 0 )
  {
    cx = v19;
    cy = (unsigned int)(v19 * *((_DWORD *)this + 1)) / *(_DWORD *)this;
  }
  if ( cx && cy )
  {
    v21.cx = cx;
    v21.cy = cy;
    return DpiInternal::CalcDpi(this, &v21, v6);
  }
  else
  {
    v19 = 0LL;
    return 0LL;
  }
}
