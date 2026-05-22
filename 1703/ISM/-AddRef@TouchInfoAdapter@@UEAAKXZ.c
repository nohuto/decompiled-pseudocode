/*
 * XREFs of ?AddRef@TouchInfoAdapter@@UEAAKXZ @ 0x18000EF40
 * Callers:
 *     ?AddRef@MobileCursor@@W7EAAKXZ @ 0x180011050 (-AddRef@MobileCursor@@W7EAAKXZ.c)
 *     ?AddRef@ControllerProcessor@@WDA@EAAKXZ @ 0x180035CB0 (-AddRef@ControllerProcessor@@WDA@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WKI@EAAKXZ @ 0x180059D40 (-AddRef@MouseProcessor@@WKI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WLA@EAAKXZ @ 0x180059D80 (-AddRef@MouseProcessor@@WLA@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WLI@EAAKXZ @ 0x180059DB0 (-AddRef@MouseProcessor@@WLI@EAAKXZ.c)
 *     ?AddRef@MouseProcessor@@WMA@EAAKXZ @ 0x180059DE0 (-AddRef@MouseProcessor@@WMA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TouchInfoAdapter::AddRef(TouchInfoAdapter *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 4);
}
