/*
 * XREFs of EtwppTemplate_ @ 0x180082118
 * Callers:
 *     ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18002C6E0 (-UpdateScene@CWindowList@@UEAAJXZ.c)
 *     ?ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002DAA0 (-ForceDisconnectClientNode@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EtwppTemplate_(__int64 a1, __int64 a2)
{
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 0LL, 0LL);
}
