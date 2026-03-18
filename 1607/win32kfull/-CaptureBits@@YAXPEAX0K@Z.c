/*
 * XREFs of ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02AB274
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02ADD60 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
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
