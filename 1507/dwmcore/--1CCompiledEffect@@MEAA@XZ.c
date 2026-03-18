/*
 * XREFs of ??1CCompiledEffect@@MEAA@XZ @ 0x1801122DC
 * Callers:
 *     ??_ECCompiledEffect@@MEAAPEAXI@Z @ 0x180112480 (--_ECCompiledEffect@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?RemoveAll@?$CMap@IPEAVInternalFilterInput@@V?$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEAAXXZ @ 0x1800015B8 (-RemoveAll@-$CMap@IPEAVInternalFilterInput@@V-$CMapEqualHelper@IPEAVInternalFilterInput@@@@@@QEA.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1?$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAA@XZ @ 0x1801122B0 (--1-$CDeviceResourceTable@VCD3DConstantBuffer@@VCCompiledEffect@@VCD3DDeviceLevel1@@@@UEAA@XZ.c)
 *     ?EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ @ 0x18011259C (-EmptyFilterInputMap@CCompiledEffect@@AEAAXXZ.c)
 */

void __fastcall CCompiledEffect::~CCompiledEffect(CCompiledEffect *this)
{
  WPF::ProcessHeapImpl *v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rdi

  v1 = WPF::g_pProcessHeap;
  *(_QWORD *)this = &CCompiledEffect::`vftable'{for `CResource'};
  *((_QWORD *)this + 5) = &CCompiledEffect::`vftable'{for `IDeviceResourceNotify'};
  *((_QWORD *)this + 6) = &CCompiledEffect::`vftable'{for `CPropertyBag::IValueChangeListener'};
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v1 + 32LL))(v1, *((_QWORD *)this + 9));
  CCompiledEffect::EmptyFilterInputMap(this);
  v3 = *((_QWORD *)this + 8);
  if ( v3 )
    *(_QWORD *)(v3 + 128) = 0LL;
  CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  CMap<unsigned int,InternalFilterInput *,CMapEqualHelper<unsigned int,InternalFilterInput *>>::RemoveAll((__int64)this + 168);
  CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>::~CDeviceResourceTable<CD3DConstantBuffer,CCompiledEffect,CD3DDeviceLevel1>((__int64)this + 80);
  v4 = *((_QWORD *)this + 8);
  if ( v4 )
  {
    *((_QWORD *)this + 8) = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  CResource::~CResource(this);
}
