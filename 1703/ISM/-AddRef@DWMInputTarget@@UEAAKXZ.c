/*
 * XREFs of ?AddRef@DWMInputTarget@@UEAAKXZ @ 0x180019BA0
 * Callers:
 *     ?AddRef@DWMInputTarget@@WCA@EAAKXZ @ 0x18001AF80 (-AddRef@DWMInputTarget@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@W7EAAKXZ @ 0x18001AFC0 (-AddRef@DWMInputTarget@@W7EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WCI@EAAKXZ @ 0x18001AFD0 (-AddRef@DWMInputTarget@@WCI@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBA@EAAKXZ @ 0x18001B020 (-AddRef@DWMInputTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMInputTarget@@WBI@EAAKXZ @ 0x18001B070 (-AddRef@DWMInputTarget@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::AddRef(DWMInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 12);
}
