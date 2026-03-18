/*
 * XREFs of ??1CEffectBrush@@MEAA@XZ @ 0x18013B030
 * Callers:
 *     ??_GCEffectBrush@@MEAAPEAXI@Z @ 0x18013B1C0 (--_GCEffectBrush@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x18013B004 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCEffectBrush@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 */

void __fastcall CEffectBrush::~CEffectBrush(CEffectBrush *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  unsigned int v4; // eax
  __int64 v5; // rsi
  __int64 v6; // rbp
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rcx

  *(_QWORD *)this = &CEffectBrush::`vftable'{for `CSpriteVisualContent'};
  *((_QWORD *)this + 15) = &CEffectBrush::`vftable'{for `IVisualListenerInfoProvider'};
  *((_QWORD *)this + 16) = &CEffectBrush::`vftable'{for `CPropertyBag::IValueChangeListener'};
  v2 = *((_QWORD *)this + 18);
  if ( v2 )
    *(_QWORD *)(v2 + 192) = 0LL;
  v3 = *((_QWORD *)this + 17);
  if ( v3 )
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(v3 + 128) + 32LL))(*(_QWORD *)(v3 + 128));
    if ( v4 )
    {
      v5 = 0LL;
      v6 = v4;
      do
      {
        v7 = *((_QWORD *)this + 31);
        CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v5 + v7));
        *(_QWORD *)(v5 + v7) = 0LL;
        v5 += 8LL;
        --v6;
      }
      while ( v6 );
    }
  }
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 17));
  *((_QWORD *)this + 17) = 0LL;
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 296);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 248);
  CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CEffectBrush,CD3DDeviceLevel1>((CEffectBrush *)((char *)this + 160));
  v8 = *((_QWORD *)this + 19);
  if ( v8 )
  {
    *((_QWORD *)this + 19) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  }
  v9 = *((_QWORD *)this + 18);
  if ( v9 )
  {
    *((_QWORD *)this + 18) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  }
  CResource::~CResource(this);
}
