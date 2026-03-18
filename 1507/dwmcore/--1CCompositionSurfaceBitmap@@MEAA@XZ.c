/*
 * XREFs of ??1CCompositionSurfaceBitmap@@MEAA@XZ @ 0x1800873C8
 * Callers:
 *     ??_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z @ 0x180086DE0 (--_GCCompositionSurfaceBitmap@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x180087D9C (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CCompositionSurfaceBitmap::~CCompositionSurfaceBitmap(CCompositionSurfaceBitmap *this)
{
  unsigned int v1; // esi
  char *v2; // r15
  __int64 v4; // r14
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // r9
  __int64 v8; // rcx

  v1 = 0;
  v2 = (char *)this + 48;
  *(_QWORD *)this = &CCompositionSurfaceBitmap::`vftable'{for `CContent'};
  *((_QWORD *)this + 5) = &CCompositionSurfaceBitmap::`vftable'{for `IImageSource'};
  *((_QWORD *)this + 6) = &CCompositionSurfaceBitmap::`vftable'{for `ICompositionSurfaceInfoListener'};
  *((_QWORD *)this + 7) = &CCompositionSurfaceBitmap::`vftable'{for `IDirtyRectSource'};
  *((_QWORD *)this + 8) = &CCompositionSurfaceBitmap::`vftable'{for `CCommandListBitmapRepresentation'};
  if ( *((_BYTE *)this + 448) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 212LL);
  if ( *((_BYTE *)this + 449) )
    --*(_DWORD *)(*((_QWORD *)this + 2) + 208LL);
  v4 = *((_QWORD *)this + 55);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 55));
  v5 = *((_QWORD *)this + 54);
  if ( v5 )
  {
    v6 = *(_DWORD *)(v5 + 224);
    v7 = *(_QWORD *)(v5 + 200);
    if ( v6 )
    {
      do
      {
        if ( v2 == *(char **)(v7 + 8LL * v1) )
          break;
        ++v1;
      }
      while ( v1 < v6 );
    }
    if ( v1 < v6 )
    {
      if ( v1 < v6 - 1 )
      {
        do
        {
          v8 = v1++;
          *(_QWORD *)(v7 + 8 * v8) = *(_QWORD *)(v7 + 8LL * v1);
        }
        while ( v1 < *(_DWORD *)(v5 + 224) - 1 );
      }
      --*(_DWORD *)(v5 + 224);
    }
    CMILCOMBase::InternalRelease(*((CMILCOMBase **)this + 54));
  }
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation((CCompositionSurfaceBitmap *)((char *)this + 64));
  CResource::~CResource(this);
}
