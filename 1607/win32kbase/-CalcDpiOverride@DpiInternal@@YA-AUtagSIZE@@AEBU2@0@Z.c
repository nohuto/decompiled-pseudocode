/*
 * XREFs of ?CalcDpiOverride@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0087CF4
 * Callers:
 *     ?FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z @ 0x1C0087C80 (-FillPhysicalDpiOnly@@YAXAEBUtagSIZE@@0PEAU_DPI_INFORMATION@@@Z.c)
 * Callees:
 *     ?CalcDpi@DpiInternal@@YA?AUtagSIZE@@AEBU2@0@Z @ 0x1C0087DC4 (-CalcDpi@DpiInternal@@YA-AUtagSIZE@@AEBU2@0@Z.c)
 *     memset @ 0x1C008A080 (memset.c)
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
  _BYTE v11[40]; // [rsp+78h] [rbp+1Fh] BYREF
  __int64 v12; // [rsp+C8h] [rbp+6Fh] BYREF
  int v13; // [rsp+D0h] [rbp+77h] BYREF
  tagSIZE v14; // [rsp+D8h] [rbp+7Fh] BYREF

  cx = a2->cx;
  cy = a2->cy;
  LODWORD(v12) = 0;
  v13 = 0;
  QueryTable.QueryRoutine = 0LL;
  v9 = 0LL;
  v10 = 0;
  QueryTable.Name = L"UserPreferenceWidth";
  QueryTable.Flags = 292;
  QueryTable.EntryContext = &v12;
  QueryTable.DefaultData = &v13;
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultLength = 4;
  memset(v11, 0, sizeof(v11));
  if ( RtlQueryRegistryValues(
         0,
         L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Control Panel\\Theme",
         &QueryTable,
         0LL,
         0LL) >= 0 )
  {
    cx = v12;
    cy = (unsigned int)(v12 * *((_DWORD *)this + 1)) / *(_DWORD *)this;
  }
  if ( !cx || !cy )
    return 0LL;
  v14.cx = cx;
  v14.cy = cy;
  return DpiInternal::CalcDpi(this, &v14, v6);
}
