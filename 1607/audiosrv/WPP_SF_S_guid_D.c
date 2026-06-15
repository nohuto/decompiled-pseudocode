/*
 * XREFs of WPP_SF_S_guid_D @ 0x18007EF18
 * Callers:
 *     ?OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z @ 0x18007DBC0 (-OnPropertyValueChanged@CMonitorManager@@EEAAJPEBGU_tagpropertykey@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_S_guid_D(__int64 a1, __int64 a2, __int64 a3, const wchar_t *a4, __int64 a5)
{
  __int64 v6; // rcx
  __int64 v7; // rcx
  const wchar_t *v8; // rdx

  if ( a4 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( a4[v6] );
    v7 = v6 + 1;
  }
  else
  {
    v7 = 5LL;
  }
  v8 = L"NULL";
  if ( a4 )
    v8 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_f44a6138b15d3ac2c57129b0cddf5064_Traceguids, 32LL, v8, 2 * v7, a5);
}
