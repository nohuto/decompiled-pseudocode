/*
 * XREFs of ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A9D74
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02AC5A0 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02ACE40 (NtGdiEngPlgBlt.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 */

void __fastcall CaptureBits(void *a1, char *a2, unsigned int a3)
{
  char *v3; // r9

  if ( a1 && a2 )
  {
    v3 = &a2[a3];
    if ( v3 < a2 || (unsigned __int64)v3 > W32UserProbeAddress )
      *W32UserProbeAddress = 0;
    memmove(a1, a2, a3);
  }
}
