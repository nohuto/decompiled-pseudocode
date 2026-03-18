/*
 * XREFs of NtGdiGetObjectBitmapHandle @ 0x1C02A8670
 * Callers:
 *     <none>
 * Callees:
 *     GreGetObjectBitmapHandle @ 0x1C02B3DA4 (GreGetObjectBitmapHandle.c)
 */

HBRUSH __fastcall NtGdiGetObjectBitmapHandle(HBRUSH a1, _DWORD *a2)
{
  __int64 ObjectBitmapHandle; // r8
  int v5; // [rsp+30h] [rbp+8h]

  if ( ((((unsigned int)a1 & 0x7F0000) - 0x100000) & 0xFFBFFFFF) != 0 )
    return a1;
  ObjectBitmapHandle = GreGetObjectBitmapHandle(a1);
  if ( ObjectBitmapHandle )
  {
    if ( (unsigned __int64)a2 >= W32UserProbeAddress )
      a2 = (_DWORD *)W32UserProbeAddress;
    *a2 = v5;
  }
  return (HBRUSH)ObjectBitmapHandle;
}
