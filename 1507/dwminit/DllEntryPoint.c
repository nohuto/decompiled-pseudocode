/*
 * XREFs of DllEntryPoint @ 0x1800042A0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003BE8 @ 0x180003BE8 (sub_180003BE8.c)
 *     sub_180003C6C @ 0x180003C6C (sub_180003C6C.c)
 *     sub_1800070B8 @ 0x1800070B8 (sub_1800070B8.c)
 */

// local variable allocation has failed, the output may be wrong!
BOOL __stdcall DllEntryPoint(HINSTANCE hinstDLL, DWORD fdwReason, LPVOID lpReserved)
{
  HINSTANCE v3; // rsi
  int v4; // ebx

  v3 = hinstDLL;
  v4 = 1;
  if ( fdwReason )
  {
    if ( fdwReason == 1 )
    {
      ++dword_18000EF9C;
      if ( (int)sub_180003BE8() < 0 )
        return 0;
      *(_QWORD *)&fdwReason = 1LL;
      hinstDLL = v3;
      return sub_1800070B8(hinstDLL, *(_QWORD *)&fdwReason);
    }
    if ( fdwReason - 2 <= 1 )
      return sub_1800070B8(hinstDLL, *(_QWORD *)&fdwReason);
  }
  else if ( dword_18000EF98 || !lpReserved )
  {
    if ( dword_18000EF9C <= 0 )
      return 0;
    --dword_18000EF9C;
    v4 = sub_1800070B8(hinstDLL, 0LL);
    if ( (int)sub_180003C6C() < 0 )
      return 0;
  }
  return v4;
}
