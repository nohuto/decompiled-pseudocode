/*
 * XREFs of ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180027B5C
 * Callers:
 *     ?DestroyAndRelease@CD3DResource@@QEAAXXZ @ 0x180027C58 (-DestroyAndRelease@CD3DResource@@QEAAXXZ.c)
 *     ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x180027F80 (-DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z.c)
 *     ?CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ @ 0x18002D430 (-CheckD3DResidencyAndDestroy@CD3DTexture@@MEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CD3DResource::Invalidate(CD3DResource *this)
{
  int v2; // ebp

  if ( *((_BYTE *)this + 76) )
  {
    v2 = *((_DWORD *)this + 26);
    *((_BYTE *)this + 76) = 0;
    while ( v2 > 0 )
    {
      (***(void (__fastcall ****)(_QWORD, char *))(*((_QWORD *)this + 10) + 8LL * (unsigned int)(v2 - 1)))(
        *(_QWORD *)(*((_QWORD *)this + 10) + 8LL * (unsigned int)(v2 - 1)),
        (char *)this + 24);
      --v2;
    }
  }
}
