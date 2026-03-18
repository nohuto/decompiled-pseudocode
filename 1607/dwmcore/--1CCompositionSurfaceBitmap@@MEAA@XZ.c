/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800935E0
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180093100 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?Release@CBitmapRealization@@UEAAKXZ @ 0x180090270 (-Release@CBitmapRealization@@UEAAKXZ.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x1800B0E54 (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  unsigned int v1; // edi
  char *v2; // rsi
  CCommandListBitmapRepresentation *v4; // r14
  CBitmapRealization *v5; // rcx
  void (*v6)(void); // rax
  __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // r9
  __int64 v10; // rcx

  v1 = 0;
  v2 = (char *)this + 128;
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  v4 = (CCompositionSurfaceBitmap *)((char *)this + 144);
  *((_QWORD *)this + 14) = &CCompositionSurfaceBitmap::`vftable'{for `ISwapChainContent'};
  *((_QWORD *)this + 15) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 16) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 17) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 18) = &CCompositionSurfaceBitmap::`vftable'{for `CCommandListBitmapRepresentation'};
  if ( *((_BYTE *)this + 572) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
  if ( *((_BYTE *)this + 573) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  v5 = (CBitmapRealization *)*((_QWORD *)this + 66);
  if ( v5 )
  {
    v6 = *(void (**)(void))(*(_QWORD *)v5 + 16LL);
    if ( (char *)v6 == (char *)CBitmapRealization::Release )
      CBitmapRealization::Release(v5);
    else
      v6();
  }
  v7 = *((_QWORD *)this + 65);
  if ( v7 )
  {
    v8 = *(_DWORD *)(v7 + 336);
    v9 = *(_QWORD *)(v7 + 312);
    if ( v8 )
    {
      do
      {
        if ( v2 == *(char **)(v9 + 8LL * v1) )
          break;
        ++v1;
      }
      while ( v1 < v8 );
    }
    if ( v1 < v8 )
    {
      if ( v1 < v8 - 1 )
      {
        do
        {
          v10 = v1++;
          *(_QWORD *)(v9 + 8 * v10) = *(_QWORD *)(v9 + 8LL * v1);
        }
        while ( v1 < *(_DWORD *)(v7 + 336) - 1 );
      }
      --*(_DWORD *)(v7 + 336);
    }
    CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 65));
  }
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(v4);
  CResource::~CResource(this);
}
