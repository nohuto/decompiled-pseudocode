/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x18002E054
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x18002DE80 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x18002C4B8 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180083380 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180085DFC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  unsigned int v1; // edi
  char *v2; // r14
  __int64 v4; // rsi
  unsigned int (__fastcall *v5)(CBitmapRealization *__hidden); // rbp
  __int64 v6; // r8
  unsigned int v7; // ecx
  __int64 v8; // r9
  __int64 v9; // rcx

  v1 = 0;
  v2 = (char *)this + 56;
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 5) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 6) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 9) = &CCompositionSurfaceBitmap::`vftable'{for `CCommandListBitmapRepresentation'};
  if ( *((_BYTE *)this + 456) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
  if ( *((_BYTE *)this + 457) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  v4 = *((_QWORD *)this + 56);
  if ( v4 )
  {
    v5 = *(unsigned int (__fastcall **)(CBitmapRealization *__hidden))(*(_QWORD *)v4 + 16LL);
    if ( v5 == CBitmapRealization::Release )
      CBitmapRealization::Release(*((CBitmapRealization **)this + 56));
    else
      v5(*((CBitmapRealization **)this + 56));
  }
  v6 = *((_QWORD *)this + 55);
  if ( v6 )
  {
    v7 = *(_DWORD *)(v6 + 216);
    v8 = *(_QWORD *)(v6 + 192);
    if ( v7 )
    {
      do
      {
        if ( v2 == *(char **)(v8 + 8LL * v1) )
          break;
        ++v1;
      }
      while ( v1 < v7 );
    }
    if ( v1 < v7 )
    {
      if ( v1 < v7 - 1 )
      {
        do
        {
          v9 = v1++;
          *(_QWORD *)(v8 + 8 * v9) = *(_QWORD *)(v8 + 8LL * v1);
        }
        while ( v1 < *(_DWORD *)(v6 + 216) - 1 );
      }
      --*(_DWORD *)(v6 + 216);
    }
    CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 55));
  }
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation((CCompositionSurfaceBitmap *)((char *)this + 72));
  CResource::~CResource(this);
}
