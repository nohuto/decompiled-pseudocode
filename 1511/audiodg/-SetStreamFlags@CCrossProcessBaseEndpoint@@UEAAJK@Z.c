/*
 * XREFs of ?SetStreamFlags@CCrossProcessBaseEndpoint@@UEAAJK@Z @ 0x140017C20
 * Callers:
 *     ?Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z @ 0x140014E50 (-Initialize@CCrossProcessBaseServerEndpoint@@UEAAJPEAUtWAVEFORMATEX@@IIPEBG111PEAXIPEA_K3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCrossProcessBaseEndpoint::SetStreamFlags(CCrossProcessBaseEndpoint *this, int a2)
{
  *((_DWORD *)this + 38) = a2;
  return 0LL;
}
