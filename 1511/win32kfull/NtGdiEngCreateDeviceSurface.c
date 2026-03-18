/*
 * XREFs of NtGdiEngCreateDeviceSurface @ 0x1C02AB620
 * Callers:
 *     <none>
 * Callees:
 *     ?bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z @ 0x1C027D290 (-bIsProcessLocalSystem@@YAHPEAU_EPROCESS@@@Z.c)
 *     ?ValidUmpdSizl@@YAHUtagSIZE@@@Z @ 0x1C02A9A6C (-ValidUmpdSizl@@YAHUtagSIZE@@@Z.c)
 */

HSURF __fastcall NtGdiEngCreateDeviceSurface(DHSURF dhsurf, SIZEL a2, __int64 a3)
{
  SIZEL v3; // r9
  int v4; // ebx
  struct _EPROCESS *v6; // rax
  int IsProcessLocalSystem; // eax
  int v8; // eax

  v3 = a2;
  v4 = a3;
  if ( gUMPDSecurityLevel != 2 )
  {
    if ( !gUMPDSecurityLevel
      || (v6 = (struct _EPROCESS *)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PsGetCurrentProcess)(
                                     dhsurf,
                                     gUMPDSecurityLevel,
                                     a3,
                                     a2),
          IsProcessLocalSystem = bIsProcessLocalSystem(v6),
          v3 = a2,
          !IsProcessLocalSystem) )
    {
      LOBYTE(v8) = ValidUmpdSizl(v3);
      if ( !v8 )
      {
        if ( gfUMPDDebug )
          DbgPrint(
            "windows\\core\\ntgdi\\gre\\windows\\umpdeng.cxx:%d:NtGdiEngCreateDeviceSurface:Invalid sizl.\n",
            3797);
        return 0LL;
      }
    }
  }
  if ( (unsigned int)(v4 - 1) > 7 )
    return 0LL;
  return EngCreateDeviceSurface(dhsurf, v3, v4 | 0x8000u);
}
