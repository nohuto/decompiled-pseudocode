/*
 * XREFs of RIMCheckPressureUsageStatus @ 0x1C0074A80
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 *     RIMPopulatePointerDevice @ 0x1C00C304C (RIMPopulatePointerDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RIMCheckPressureUsageStatus(__int64 a1, __int64 a2, __int16 a3)
{
  __int64 result; // rax

  result = 19760LL;
  if ( a3 == 19760 || (result = 7472LL, a3 == 7472) )
  {
    if ( *(_BYTE *)(a1 + 953) )
      *(_DWORD *)(a2 + 236) |= 0x10000u;
  }
  return result;
}
