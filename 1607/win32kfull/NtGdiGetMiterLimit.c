/*
 * XREFs of NtGdiGetMiterLimit @ 0x1C02A8620
 * Callers:
 *     <none>
 * Callees:
 *     GreGetMiterLimit @ 0x1C02A5D40 (GreGetMiterLimit.c)
 */

__int64 __fastcall NtGdiGetMiterLimit(HDC a1, unsigned __int64 a2)
{
  unsigned int MiterLimit; // edx
  int v5; // [rsp+40h] [rbp+18h] BYREF

  MiterLimit = GreGetMiterLimit(a1, &v5);
  if ( MiterLimit )
  {
    if ( a2 + 4 > W32UserProbeAddress || a2 + 4 <= a2 || (a2 & 3) != 0 )
      *W32UserProbeAddress = 0;
    *(_DWORD *)a2 = v5;
  }
  return MiterLimit;
}
