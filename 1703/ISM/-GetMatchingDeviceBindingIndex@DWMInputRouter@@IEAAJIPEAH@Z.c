/*
 * XREFs of ?GetMatchingDeviceBindingIndex@DWMInputRouter@@IEAAJIPEAH@Z @ 0x180016ECC
 * Callers:
 *     ?RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@@@Z @ 0x180016990 (-RegisterForDisplayBindingChangeNotifications@DWMInputRouter@@UEAAJIPEAUIDisplayBindingObserver@.c)
 *     ?BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z @ 0x180016A5C (-BindDevicesOfTypeToDisplayBinding@DWMInputRouter@@IEAAJII_N@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall DWMInputRouter::GetMatchingDeviceBindingIndex(DWMInputRouter *this, int a2, int *a3)
{
  unsigned int v3; // ebx
  int v4; // r9d
  unsigned int v5; // eax
  _DWORD *v6; // rcx

  v3 = 0;
  *a3 = -1;
  v4 = -1;
  v5 = 0;
  v6 = (_DWORD *)((char *)this + 252);
  do
  {
    if ( a2 == *v6 )
    {
      *a3 = v5;
      goto LABEL_10;
    }
    if ( v4 == -1 && !*v6 )
      v4 = v5;
    ++v5;
    v6 += 22;
  }
  while ( v5 < 5 );
  *a3 = v4;
LABEL_10:
  if ( *a3 == -1 )
  {
    v3 = -2147418113;
    if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
      Template_qqq((__int64)v6, &MinInput_Warning_CheckResult, 0, 2265, 255);
  }
  return v3;
}
