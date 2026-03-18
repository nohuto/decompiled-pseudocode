/*
 * XREFs of ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x180024514
 * Callers:
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x180024A20 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x180021FD0 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x1800229E4 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x180023358 (-ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x180028198 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi
  __int64 v7; // rsi
  __int64 v8; // rsi
  _QWORD *v9; // rsi
  __int64 v10; // rbp
  _QWORD *v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rsi
  _QWORD *v17; // rsi
  __int64 v18; // rbp

  ++*((_DWORD *)this + 126);
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 48) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_DWORD *)this + 127) = GetCurrentThreadId();
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  v2 = *((_QWORD *)this + 67);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 67));
  v3 = *((_QWORD *)this + 99);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 99));
  CD3DResourceManager::DestroyAllResources((CD3DDeviceLevel1 *)((char *)this + 848));
  CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(this);
  v4 = *((_QWORD *)this + 70);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 888LL))(*((_QWORD *)this + 70));
  v5 = *((_QWORD *)this + 70);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 70));
  v6 = *((_QWORD *)this + 71);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 8LL))(*((_QWORD *)this + 71));
  v7 = *((_QWORD *)this + 72);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 72));
  v8 = *((_QWORD *)this + 132);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*((_QWORD *)this + 132));
  v9 = (_QWORD *)((char *)this + 1064);
  v10 = 12LL;
  do
  {
    if ( *v9 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v9 + 16LL))(*v9);
    ++v9;
    --v10;
  }
  while ( v10 );
  v11 = (_QWORD *)((char *)this + 1360);
  v12 = 32LL;
  do
  {
    if ( *v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 16LL))(*v11);
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (_QWORD *)((char *)this + 1168);
  v14 = 24LL;
  do
  {
    if ( *v13 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 16LL))(*v13);
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = *((_QWORD *)this + 145);
  if ( v15 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v15 + 16LL))(*((_QWORD *)this + 145));
  v16 = *((_QWORD *)this + 202);
  if ( v16 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 16LL))(*((_QWORD *)this + 202));
  v17 = (_QWORD *)((char *)this + 1624);
  v18 = 4LL;
  do
  {
    if ( *v17 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v17 + 16LL))(*v17);
    ++v17;
    --v18;
  }
  while ( v18 );
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 976);
  *((_QWORD *)this + 106) = &CD3DResourceManager::`vftable';
  *((_QWORD *)this + 48) = &CMILRefCountBase::`vftable';
  CD2DContext::~CD2DContext(this);
  CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData((CD3DDeviceLevel1 *)((char *)this + 408));
}
