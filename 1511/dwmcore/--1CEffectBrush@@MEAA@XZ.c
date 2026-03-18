/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x18012259C
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x180122810 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x180122570 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  unsigned int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rdi

  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 6) = &CEffectBrush::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 7) = &CEffectBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 8) = &CEffectBrush::`vftable'{for `CPropertyBag::IValueChangeListener'};
  v2 = *((_QWORD *)this + 10);
  if ( v2 )
    *(_QWORD *)(v2 + 120) = 0LL;
  v3 = *((_QWORD *)this + 9);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 48) + 16LL))(*(_QWORD *)(v3 + 48));
    if ( v4 )
    {
      v5 = 0LL;
      v6 = v4;
      do
      {
        v7 = *((_QWORD *)this + 23);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v5 + v7));
        *(_QWORD *)(v5 + v7) = 0LL;
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 9));
  *((_QWORD *)this + 9) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 23);
  CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>((__int64)this + 96);
  v8 = *((_QWORD *)this + 11);
  if ( v8 )
  {
    *((_QWORD *)this + 11) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = *((_QWORD *)this + 10);
  if ( v9 )
  {
    *((_QWORD *)this + 10) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  CResource::~CResource(this);
}
