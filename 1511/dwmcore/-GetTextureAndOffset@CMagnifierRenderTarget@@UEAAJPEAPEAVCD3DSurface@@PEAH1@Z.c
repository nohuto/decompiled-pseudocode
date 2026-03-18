/*
 * XREFs of ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x180108210
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x18002D478 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CMagnifierRenderTarget::GetTextureAndOffset(
        CMagnifierRenderTarget *this,
        struct CD3DSurface **a2,
        int *a3,
        int *a4)
{
  int v8; // eax
  __int64 v9; // rdx
  unsigned int v10; // edi
  int D3DSurfaceLevel; // eax
  CD3DTexture *v13; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0LL;
  v13 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, CD3DTexture **))(**(_QWORD **)(*((_QWORD *)this + 12)
                                                                       + 8LL * *((unsigned int *)this + 132))
                                                         + 184LL))(
         *(_QWORD *)(*((_QWORD *)this + 12) + 8LL * *((unsigned int *)this + 132)),
         &v13);
  v10 = v8;
  if ( v8 >= 0 )
  {
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v13, v9, a2);
    v10 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel >= 0 )
    {
      *a3 = *((_DWORD *)this + 133);
      *a4 = *((_DWORD *)this + 134);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x3E2u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3DDu);
  }
  if ( v13 )
    (*(void (__fastcall **)(CD3DTexture *))(*(_QWORD *)v13 + 8LL))(v13);
  return v10;
}
