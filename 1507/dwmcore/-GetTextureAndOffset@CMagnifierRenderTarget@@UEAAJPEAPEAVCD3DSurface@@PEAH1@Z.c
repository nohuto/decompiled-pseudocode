/*
 * XREFs of ?GetTextureAndOffset@CMagnifierRenderTarget@@UEAAJPEAPEAVCD3DSurface@@PEAH1@Z @ 0x1800EC820
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z @ 0x180084EB0 (-GetD3DSurfaceLevel@CD3DTexture@@QEAAJIPEAPEAVCD3DSurface@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  v8 = (*(__int64 (__fastcall **)(_QWORD, CD3DTexture **))(**(_QWORD **)(*((_QWORD *)this + 15)
                                                                       + 8LL * *((unsigned int *)this + 138))
                                                         + 184LL))(
         *(_QWORD *)(*((_QWORD *)this + 15) + 8LL * *((unsigned int *)this + 138)),
         &v13);
  v10 = v8;
  if ( v8 >= 0 )
  {
    D3DSurfaceLevel = CD3DTexture::GetD3DSurfaceLevel(v13, v9, a2);
    v10 = D3DSurfaceLevel;
    if ( D3DSurfaceLevel >= 0 )
    {
      *a3 = *((_DWORD *)this + 139);
      *a4 = *((_DWORD *)this + 140);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D3DSurfaceLevel, 0x459u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x454u);
  }
  if ( v13 )
    (*(void (__fastcall **)(CD3DTexture *))(*(_QWORD *)v13 + 8LL))(v13);
  return v10;
}
