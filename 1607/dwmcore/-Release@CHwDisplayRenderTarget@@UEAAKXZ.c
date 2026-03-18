/*
 * XREFs of ?Release@CHwDisplayRenderTarget@@UEAAKXZ @ 0x18002D3F0
 * Callers:
 *     ?Release@CHwTextureRenderTarget@@WLA@EAAKXZ @ 0x1800C10F0 (-Release@CHwTextureRenderTarget@@WLA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WIA@EAAKXZ @ 0x1800C1940 (-Release@CHwTextureRenderTarget@@WIA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WLI@EAAKXZ @ 0x1800C1950 (-Release@CHwTextureRenderTarget@@WLI@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WMA@EAAKXZ @ 0x1800C1960 (-Release@CHwTextureRenderTarget@@WMA@EAAKXZ.c)
 *     ?Release@CHwTextureRenderTarget@@WMI@EAAKXZ @ 0x1800C1970 (-Release@CHwTextureRenderTarget@@WMI@EAAKXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::Release(CHwDisplayRenderTarget *this)
{
  volatile signed __int32 *v1; // rcx
  unsigned __int32 v2; // ebx

  v1 = (volatile signed __int32 *)((char *)this + 128);
  v2 = _InterlockedDecrement(v1 + 2);
  if ( !v2 )
  {
    --*((_DWORD *)v1 + 2);
    (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v1 + 24LL))(v1, 1LL);
  }
  return v2;
}
