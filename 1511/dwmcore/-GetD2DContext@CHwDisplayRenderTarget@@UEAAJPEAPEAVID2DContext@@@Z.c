/*
 * XREFs of ?GetD2DContext@CHwDisplayRenderTarget@@UEAAJPEAPEAVID2DContext@@@Z @ 0x180080120
 * Callers:
 *     ?GetD2DContext@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z @ 0x1800BD940 (-GetD2DContext@CHwDisplayRenderTarget@@WLA@EAAJPEAPEAVID2DContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?AddRef@CD3DDeviceLevel1@@UEAAKXZ @ 0x1800244E0 (-AddRef@CD3DDeviceLevel1@@UEAAKXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetD2DContext(CHwDisplayRenderTarget *this, struct ID2DContext **a2)
{
  struct ID2DContext *v2; // rdi
  unsigned int v3; // ebx
  __int64 (__fastcall *v4)(CD3DDeviceLevel1 *); // rsi

  v2 = (struct ID2DContext *)*((_QWORD *)this + 20);
  v3 = -2147024809;
  if ( a2 )
  {
    *a2 = v2;
    v3 = 0;
    v4 = *(__int64 (__fastcall **)(CD3DDeviceLevel1 *))(*(_QWORD *)v2 + 8LL);
    if ( v4 == CD3DDeviceLevel1::AddRef )
      CD3DDeviceLevel1::AddRef(v2);
    else
      ((void (__fastcall *)(struct ID2DContext *, struct ID2DContext **, _QWORD))v4)(
        v2,
        a2,
        *(_QWORD *)GUID_74cc6ad9_1f38_4fd9_9734_84cb3e5c0b1b.Data4);
  }
  return v3;
}
