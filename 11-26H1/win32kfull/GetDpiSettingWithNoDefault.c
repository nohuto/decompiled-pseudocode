/*
 * XREFs of GetDpiSettingWithNoDefault @ 0x1403034C0
 * Callers:
 *     ?PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z @ 0x1402A2438 (-PerformWin8DpiUpgrade@@YAHPEAU_UNICODE_STRING@@K@Z.c)
 *     GetDpiSetting @ 0x1403034A0 (GetDpiSetting.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDpiSettingWithNoDefault(int a1, unsigned int *a2)
{
  __int64 result; // rax
  __int16 v4; // bx
  unsigned __int16 v5; // di
  ULONG RelativeTo[2]; // [rsp+38h] [rbp-59h]
  PCWSTR Path; // [rsp+40h] [rbp-51h]
  int v8; // [rsp+48h] [rbp-49h]
  const WCHAR *v9; // [rsp+50h] [rbp-41h]
  int v10; // [rsp+58h] [rbp-39h]
  const WCHAR *v11; // [rsp+60h] [rbp-31h]
  struct _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+68h] [rbp-29h] BYREF
  __int64 v13; // [rsp+A0h] [rbp+Fh]
  int v14; // [rsp+A8h] [rbp+17h]
  __int64 v15; // [rsp+B0h] [rbp+1Fh]
  __int128 v16; // [rsp+B8h] [rbp+27h]
  __int128 v17; // [rsp+C8h] [rbp+37h]
  unsigned int v18; // [rsp+F8h] [rbp+67h] BYREF

  QueryTable.Flags = 292;
  v18 = 0;
  QueryTable.Name = L"LogPixels";
  QueryTable.EntryContext = &v18;
  Path = L"Control Panel\\Desktop";
  v9 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Hardware Profiles\\Current\\Software\\Fonts";
  QueryTable.QueryRoutine = 0LL;
  result = (__int64)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  v11 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\FontDPI";
  QueryTable.DefaultType = 0x4000000;
  QueryTable.DefaultData = 0LL;
  QueryTable.DefaultLength = 0;
  v13 = 0LL;
  v14 = 0;
  v15 = 0LL;
  RelativeTo[0] = 5;
  v8 = 0;
  v10 = 0;
  v16 = 0LL;
  v17 = 0LL;
  if ( a1 )
  {
    if ( a1 == 1 )
    {
      v5 = 1;
      v4 = 2;
      goto LABEL_7;
    }
    v4 = 3;
  }
  else
  {
    v4 = 1;
  }
  v5 = 0;
LABEL_7:
  while ( v4 )
  {
    if ( RtlQueryRegistryValues(RelativeTo[4 * v5], (&Path)[2 * v5], &QueryTable, 0LL, 0LL) >= 0 )
    {
      result = v18;
      *a2 = v18;
      return result;
    }
    ++v5;
    result = 0xFFFFLL;
    --v4;
  }
  return result;
}
