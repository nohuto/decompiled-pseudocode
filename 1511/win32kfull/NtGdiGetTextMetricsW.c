/*
 * XREFs of NtGdiGetTextMetricsW @ 0x1C00225C0
 * Callers:
 *     <none>
 * Callees:
 *     GreGetTextMetricsW @ 0x1C00E7DA8 (GreGetTextMetricsW.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

__int64 __fastcall NtGdiGetTextMetricsW(HDC a1, unsigned __int64 a2, unsigned int a3)
{
  unsigned int TextMetricsW; // r9d
  _OWORD v7[5]; // [rsp+20h] [rbp-58h] BYREF

  TextMetricsW = 0;
  if ( a3 >= 0x44 )
  {
    memset(v7, 0, 0x44uLL);
    TextMetricsW = GreGetTextMetricsW(a1);
    if ( TextMetricsW )
    {
      if ( a2 + 68 > W32UserProbeAddress || a2 + 68 <= a2 || (a2 & 3) != 0 )
        *W32UserProbeAddress = 0;
      *(_OWORD *)a2 = v7[0];
      *(_OWORD *)(a2 + 16) = v7[1];
      *(_OWORD *)(a2 + 32) = v7[2];
      *(_OWORD *)(a2 + 48) = v7[3];
      *(_DWORD *)(a2 + 64) = v7[4];
    }
  }
  return TextMetricsW;
}
