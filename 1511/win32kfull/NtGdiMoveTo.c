/*
 * XREFs of NtGdiMoveTo @ 0x1C02A7640
 * Callers:
 *     <none>
 * Callees:
 *     GreMoveTo @ 0x1C0292A68 (GreMoveTo.c)
 */

__int64 __fastcall NtGdiMoveTo(HDC a1, int a2, int a3, _QWORD *a4)
{
  unsigned int v5; // edx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = GreMoveTo(a1, a2, a3, v7);
  if ( v5 && a4 )
  {
    if ( (unsigned __int64)a4 >= W32UserProbeAddress )
      a4 = (_QWORD *)W32UserProbeAddress;
    *a4 = v7[0];
  }
  return v5;
}
