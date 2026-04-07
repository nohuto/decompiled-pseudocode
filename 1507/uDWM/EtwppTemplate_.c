/*
 * XREFs of EtwppTemplate_ @ 0x18007A668
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x1800298C0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002A770 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwppTemplate_(__int64 a1, __int64 a2)
{
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 0LL, 0LL);
}
