/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x180097618
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x18009C740 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18005273C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_180195D88 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_180195D90 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_180195DE0 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_180195DE0 + 3) + 192LL))(
      *((_QWORD *)qword_180195DE0 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_180195DE0 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_180195DE0 + 16LL))(qword_180195DE0);
  }
  if ( byte_180195DC8 && qword_180195DD0 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_180195DD0 + 8LL))(qword_180195DD0);
  CCriticalSection::DeInit(&CriticalSection);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&qword_180195DE8);
  CCriticalSection::DeInit(&CriticalSection);
}
