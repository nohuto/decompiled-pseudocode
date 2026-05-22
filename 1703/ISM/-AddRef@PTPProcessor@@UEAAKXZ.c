/*
 * XREFs of ?AddRef@PTPProcessor@@UEAAKXZ @ 0x180001B90
 * Callers:
 *     ?AddRef@InputRedirectionTarget@@WBA@EAAKXZ @ 0x180005580 (-AddRef@InputRedirectionTarget@@WBA@EAAKXZ.c)
 *     ?AddRef@InputServiceComponent@@W7EAAKXZ @ 0x1800055C0 (-AddRef@InputServiceComponent@@W7EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WLI@EAAKXZ @ 0x18005C260 (-AddRef@PTPProcessor@@WLI@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WMA@EAAKXZ @ 0x18005C290 (-AddRef@PTPProcessor@@WMA@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WMI@EAAKXZ @ 0x18005C2E0 (-AddRef@PTPProcessor@@WMI@EAAKXZ.c)
 *     ?AddRef@PTPProcessor@@WLA@EAAKXZ @ 0x18005C320 (-AddRef@PTPProcessor@@WLA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PTPProcessor::AddRef(PTPProcessor *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}
