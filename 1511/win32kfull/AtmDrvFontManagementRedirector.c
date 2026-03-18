/*
 * XREFs of AtmDrvFontManagementRedirector @ 0x1C02A3EE0
 * Callers:
 *     AtmDrvEscapeRedirector @ 0x1C02A3EB0 (AtmDrvEscapeRedirector.c)
 * Callees:
 *     atmfdFontManagement @ 0x1C02A4910 (atmfdFontManagement.c)
 *     ?EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ @ 0x1C02B8A20 (-EnsureUmfdHost@UmfdHostLifeTimeManager@@SA_NXZ.c)
 *     UmfdFontManagement @ 0x1C02D60F0 (UmfdFontManagement.c)
 */

__int64 __fastcall AtmDrvFontManagementRedirector(int a1, int a2, unsigned int a3, int a4, int *a5, int a6, __int64 a7)
{
  unsigned int v9; // r8d
  char v12; // di
  unsigned int v13; // eax
  int v14; // eax

  v9 = 0;
  if ( a3 == 8 )
  {
    v14 = *a5;
    if ( *a5 == 8 || v14 == 256 || (unsigned int)(v14 - 9473) <= 0x13 )
      return 1;
    return v9;
  }
  if ( a3 != 256 && a3 - 9473 > 0x13 )
    return v9;
  v12 = 1;
  if ( a3 == 256 )
    goto LABEL_14;
  if ( a3 == 9474 )
    goto LABEL_15;
  if ( a3 <= 0x2508 )
    return v9;
  if ( a3 <= 0x250E )
    goto LABEL_15;
  if ( a3 == 9487 )
  {
LABEL_14:
    v12 = 0;
  }
  else if ( a3 != 9488 )
  {
    if ( a3 == 9489 )
    {
      UmfdHostLifeTimeManager::EnsureUmfdHost();
      return (unsigned int)UmfdFontManagement(a1, a2, a3, a4, (__int64)a5, a6, a7);
    }
    if ( a3 > 0x2514 )
      return v9;
  }
LABEL_15:
  v13 = atmfdFontManagement(a1, a2, a3, a4, (__int64)a5, a6, a7);
  v9 = v13;
  if ( v12 && (v13 != 1 || a3 == 9488) )
    return (unsigned int)UmfdFontManagement(a1, a2, a3, a4, (__int64)a5, a6, a7);
  return v9;
}
