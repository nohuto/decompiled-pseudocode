/*
 * XREFs of ?CaptureBits@@YAXPEAX0K@Z @ 0x1C02A94F0
 * Callers:
 *     NtGdiEngGradientFill @ 0x1C02ABB90 (NtGdiEngGradientFill.c)
 *     NtGdiEngPlgBlt @ 0x1C02AC330 (NtGdiEngPlgBlt.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
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
