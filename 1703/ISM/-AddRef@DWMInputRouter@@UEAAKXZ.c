/*
 * XREFs of ?AddRef@DWMInputRouter@@UEAAKXZ @ 0x180011830
 * Callers:
 *     ?AddRef@DWMInputRouter@@WBA@EAAKXZ @ 0x180019980 (-AddRef@DWMInputRouter@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WDA@EAAKXZ @ 0x180019990 (-AddRef@DWMInputRouter@@WDA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WBI@EAAKXZ @ 0x180019A10 (-AddRef@DWMInputRouter@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WDI@EAAKXZ @ 0x180019A20 (-AddRef@DWMInputRouter@@WDI@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCA@EAAKXZ @ 0x180019AB0 (-AddRef@DWMInputRouter@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WEA@EAAKXZ @ 0x180019AC0 (-AddRef@DWMInputRouter@@WEA@EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@W7EAAKXZ @ 0x180019B10 (-AddRef@DWMInputRouter@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputRouter@@WCI@EAAKXZ @ 0x180019B20 (-AddRef@DWMInputRouter@@WCI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputRouter::AddRef(DWMInputRouter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 18);
}
