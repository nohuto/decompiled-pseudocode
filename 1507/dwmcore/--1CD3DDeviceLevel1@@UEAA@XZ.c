/*
 * XREFs of ??1CD3DDeviceLevel1@@UEAA@XZ @ 0x18008B1E4
 * Callers:
 *     ??_GCD3DDeviceLevel1@@UEAAPEAXI@Z @ 0x18008B4F0 (--_GCD3DDeviceLevel1@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18008AC0C (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18008B180 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x18008B704 (--1CD2DContext@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
  __int64 v9; // rsi
  __int64 v10; // rsi
  _QWORD *v11; // rsi
  __int64 v12; // rbp
  _QWORD *v13; // rsi
  __int64 v14; // rbp
  _QWORD *v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rsi
  __int64 v18; // rsi
  _QWORD *v19; // rsi
  __int64 v20; // rbp

  ++*((_DWORD *)this + 128);
  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 49) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  *((_DWORD *)this + 129) = GetCurrentThreadId();
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  v2 = *((_QWORD *)this + 66);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 66));
  v3 = *((_QWORD *)this + 103);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 103));
  CD3DResourceManager::DestroyAllResources((union _SLIST_HEADER *)this + 56);
  v4 = *((_QWORD *)this + 65);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 65));
  v5 = *((_QWORD *)this + 68);
  if ( v5 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 68));
  v6 = *((_QWORD *)this + 69);
  if ( v6 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 888LL))(*((_QWORD *)this + 69));
  v7 = *((_QWORD *)this + 69);
  if ( v7 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 16LL))(*((_QWORD *)this + 69));
  v8 = *((_QWORD *)this + 70);
  if ( v8 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 70));
  v9 = *((_QWORD *)this + 71);
  if ( v9 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v9 + 8LL))(*((_QWORD *)this + 71));
  v10 = *((_QWORD *)this + 136);
  if ( v10 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 136));
  v11 = (_QWORD *)((char *)this + 1096);
  v12 = 12LL;
  do
  {
    if ( *v11 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v11 + 16LL))(*v11);
    ++v11;
    --v12;
  }
  while ( v12 );
  v13 = (_QWORD *)((char *)this + 1392);
  v14 = 18LL;
  do
  {
    if ( *v13 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v13 + 16LL))(*v13);
    ++v13;
    --v14;
  }
  while ( v14 );
  v15 = (_QWORD *)((char *)this + 1200);
  v16 = 24LL;
  do
  {
    if ( *v15 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v15 + 16LL))(*v15);
    ++v15;
    --v16;
  }
  while ( v16 );
  v17 = *((_QWORD *)this + 149);
  if ( v17 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17 + 16LL))(*((_QWORD *)this + 149));
  v18 = *((_QWORD *)this + 192);
  if ( v18 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v18 + 16LL))(*((_QWORD *)this + 192));
  v19 = (_QWORD *)((char *)this + 1544);
  v20 = 4LL;
  do
  {
    if ( *v19 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v19 + 16LL))(*v19);
    ++v19;
    --v20;
  }
  while ( v20 );
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)this + 128);
  *((_QWORD *)this + 112) = &CD3DResourceManager::`vftable';
  *((_QWORD *)this + 49) = &CMILRefCountBase::`vftable';
  CD2DContext::~CD2DContext(this);
  CHwSurfaceRenderTargetSharedData::~CHwSurfaceRenderTargetSharedData((CD3DDeviceLevel1 *)((char *)this + 416));
}
