/*
 * XREFs of ??1CD3DDeviceManager@@QEAA@XZ @ 0x1800BA304
 * Callers:
 *     _dynamic_atexit_destructor_for__g_D3DDeviceManager__ @ 0x1800BFB40 (_dynamic_atexit_destructor_for__g_D3DDeviceManager__.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DeInit@CCriticalSection@@QEAAXXZ @ 0x1800A257C (-DeInit@CCriticalSection@@QEAAXXZ.c)
 */

void __fastcall CD3DDeviceManager::~CD3DDeviceManager(CD3DDeviceManager *this)
{
  g_D3DDeviceManager = (__int64)&CD3DDeviceManager::`vftable'{for `IMILPoolManager'};
  *(_QWORD *)&qword_1801A3D78 = &CD3DDeviceManager::`vftable'{for `IRenderTargetBitmapFactory'};
  *(_QWORD *)&qword_1801A3D80 = &CD3DDeviceManager::`vftable'{for `ISharedHandleFactory'};
  if ( qword_1801A3DC8 )
  {
    (*(void (__fastcall **)(_QWORD, GUID *))(**((_QWORD **)qword_1801A3DC8 + 3) + 192LL))(
      *((_QWORD *)qword_1801A3DC8 + 3),
      &CLSID_Mesh2DEffect);
    if ( qword_1801A3DC8 )
      (*(void (__fastcall **)(struct CD2DFactory *))(*(_QWORD *)qword_1801A3DC8 + 16LL))(qword_1801A3DC8);
  }
  if ( HIBYTE(word_1801A3E04) && qword_1801A3DB8 )
    (*(void (__fastcall **)(CDXGIEnumeration *))(*(_QWORD *)qword_1801A3DB8 + 8LL))(qword_1801A3DB8);
  CCriticalSection::DeInit(&stru_1801A3D88);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&xmmword_1801A3DD0);
  CCriticalSection::DeInit(&stru_1801A3D88);
}
