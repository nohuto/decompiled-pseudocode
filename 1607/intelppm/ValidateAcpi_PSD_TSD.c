/*
 * XREFs of ValidateAcpi_PSD_TSD @ 0x1C00157AC
 * Callers:
 *     InitAcpiPerfDomain @ 0x1C0015764 (InitAcpiPerfDomain.c)
 *     InitAcpiThrottleDomain @ 0x1C001F350 (InitAcpiThrottleDomain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ValidateAcpi_PSD_TSD(_DWORD *a1)
{
  int v1; // edx
  unsigned int v2; // eax
  unsigned int v3; // ecx

  if ( *a1 == 1 && a1[1] == 5 && ((v1 = a1[4], (unsigned int)(v1 - 252) <= 2) || v1 == 1) )
  {
    v2 = a1[5];
    v3 = -1073741823;
    if ( v2 <= 0x280 )
      return v2 == 0 ? 0xC0000001 : 0;
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
