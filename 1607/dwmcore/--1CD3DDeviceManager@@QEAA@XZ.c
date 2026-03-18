/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800BD004
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800C2F70 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x18009EA5C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_1801F0018 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_1801F0020 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_1801F0068 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_1801F0068 + 3) + 192LL))(
      *((_QWORD *)qword_1801F0068 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_1801F0068 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_1801F0068 + 16LL))(qword_1801F0068);
  }
  if ( byte_1801F0124 && qword_1801F0058 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801F0058 + 8LL))(qword_1801F0058);
  CCriticalSection::DeInit(&stru_1801F0028);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&qword_1801F00A0);
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)&qword_1801F0070);
  CCriticalSection::DeInit(&stru_1801F0028);
}
