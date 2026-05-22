/*
 * XREFs of ?AddRef@DWMFocusedInputTarget@@UEAAKXZ @ 0x18001CF30
 * Callers:
 *     ?AddRef@DWMCursorBroker@@WBA@EAAKXZ @ 0x18001D9B0 (-AddRef@DWMCursorBroker@@WBA@EAAKXZ.c)
 *     ?AddRef@DWMFocusedInputTarget@@WBI@EAAKXZ @ 0x18001D9F0 (-AddRef@DWMFocusedInputTarget@@WBI@EAAKXZ.c)
 *     ?AddRef@DWMCursorBroker@@WCA@EAAKXZ @ 0x18001DA30 (-AddRef@DWMCursorBroker@@WCA@EAAKXZ.c)
 *     ?AddRef@DWMFocusedInputTarget@@W7EAAKXZ @ 0x18001DA60 (-AddRef@DWMFocusedInputTarget@@W7EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMFocusedInputTarget::AddRef(DWMFocusedInputTarget *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 10);
}
