/*
 * XREFs of ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C006ECDC
 * Callers:
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C006EC68 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C006EDB0 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

struct tagSIZE __fastcall DpiInternal::CalcDpiOverride(
        DpiInternal *this,
        const struct tagSIZE *a2,
        const struct tagSIZE *a3)
{
  LONG cx; // ebx
  LONG cy; // edi
  const struct tagSIZE *v6; // r8
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+30h] [rbp-29h] BYREF
  __int64 v9; // [rsp+68h] [rbp+Fh]
  int v10; // [rsp+70h] [rbp+17h]
  __int64 v11; // [rsp+78h] [rbp+1Fh]
  _BYTE v12[32]; // [rsp+80h] [rbp+27h] BYREF
  __int64 v13; // [rsp+C8h] [rbp+6Fh] BYREF
  int v14; // [rsp+D0h] [rbp+77h] BYREF
  tagSIZE v15; // [rsp+D8h] [rbp+7Fh] BYREF

  cx = a2->cx;
  cy = a2->cy;
  LODWORD(v13) = 0;
  v14 = 0;
  QueryTable.QueryRoutine = 0LL;
  v9 = 0LL;
  v10 = 0;
  v11 = 0LL;
  QueryTable.Name = L"UserPreferenceWidth";
  QueryTable.EntryContext = &v13;
  QueryTable.DefaultData = &v14;
  QueryTable.Flags = 292;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultLength = 4;
  memset(v12, 0, sizeof(v12));
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Theme",
         &QueryTable,
         0LL,
         0LL) >= 0 )
  {
    cx = v13;
    cy = (unsigned int)(v13 * *((_DWORD *)this + 1)) / *(_DWORD *)this;
  }
  if ( !cx || !cy )
    return 0LL;
  v15.cx = cx;
  v15.cy = cy;
  return DpiInternal::CalcDpi(this, &v15, v6);
}
