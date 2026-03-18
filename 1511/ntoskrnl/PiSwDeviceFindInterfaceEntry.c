/*
 * XREFs of PiSwDeviceFindInterfaceEntry @ 0x1404E619C
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x1404E3ABC (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14054D0A0 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14054E7AC (PiSwIrpInterfaceSetState.c)
 * Callees:
 *     _wcsicmp @ 0x14014437C (_wcsicmp.c)
 */

__int64 *__fastcall PiSwDeviceFindInterfaceEntry(__int64 a1, const wchar_t *a2)
{
  __int64 *v2; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rdi

  v2 = (__int64 *)(a1 + 184);
  v4 = *(__int64 **)(a1 + 184);
  v5 = 0LL;
  while ( v4 != v2 )
  {
    if ( !wcsicmp(a2, (const wchar_t *)v4[2]) )
      return v4;
    v4 = (__int64 *)*v4;
  }
  return (__int64 *)v5;
}
