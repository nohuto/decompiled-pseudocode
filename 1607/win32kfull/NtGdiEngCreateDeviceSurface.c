/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x1C02AD640
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027B480 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02AB820 (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, int a3)
{
  SIZEL v3; // r9
  struct _EPROCESS *CurrentProcess; // rax
  int IsProcessLocalSystem; // eax
  int v8; // eax

  v3 = a2;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(dhsurf),
          IsProcessLocalSystem = bIsProcessLocalSystem(CurrentProcess),
          v3 = a2,
          !IsProcessLocalSystem) )
    {
      LOBYTE(v8) = ValidUmpdSizl(v3);
      if ( !v8 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n",
            3899);
        return 0LL;
      }
    }
  }
  if ( (unsigned int)(a3 - 1) > 7 )
    return 0LL;
  return EngCreateDeviceSurface(dhsurf, v3, a3 | 0x8000u);
}
