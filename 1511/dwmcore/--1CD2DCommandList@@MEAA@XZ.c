/*
 * XREFs of ??1CD2DCommandList@@MEAA@XZ @ 0x180025DC0
 * Callers:
 *     ??_GCD2DCommandList@@MEAAPEAXI@Z @ 0x180025D50 (--_GCD2DCommandList@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?RemoveAll@?$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V?$CMapEqualHelper@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@@@@@QEAAXXZ @ 0x1800275A4 (-RemoveAll@-$CMap@PEAVCPolygon@@PEAUID2D1PrivateCompositorCommandList@@V-$CMapEqualHelper@PEAVCP.c)
 */

void __fastcall CD2DCommandList::~CD2DCommandList(CD2DCommandList *this)
{
  int v1; // ebp
  __int64 v3; // rsi
  __int64 v4; // r14

  v1 = 0;
  *(_QWORD *)this = &CD2DCommandList::`vftable'{for `CMILCOMBase'};
  *((_QWORD *)this + 2) = &CSecondaryD2DBitmap::`vftable'{for `IDeviceResource'};
  if ( *((int *)this + 30) > 0 )
  {
    v3 = 0LL;
    do
    {
      v4 = *(_QWORD *)(v3 + *((_QWORD *)this + 14));
      if ( v4 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      ++v1;
      v3 += 8LL;
    }
    while ( v1 < *((_DWORD *)this + 30) );
  }
  CMap<CPolygon *,ID2D1PrivateCompositorCommandList *,CMapEqualHelper<CPolygon *,ID2D1PrivateCompositorCommandList *>>::RemoveAll((char *)this + 104);
  CD2DResource::~CD2DResource(this);
}
