/*
 * XREFs of ??1CD3DDeviceLevel1@@MEAA@XZ @ 0x180080264
 * Callers:
 *     ??_ECD3DDeviceLevel1@@MEAAPEAXI@Z @ 0x180080990 (--_ECD3DDeviceLevel1@@MEAAPEAXI@Z.c)
 * Callees:
 *     ??1CHwBrushPool@@QEAA@XZ @ 0x18002F798 (--1CHwBrushPool@@QEAA@XZ.c)
 *     ??1CD2DContext@@UEAA@XZ @ 0x18007E3D4 (--1CD2DContext@@UEAA@XZ.c)
 *     ?ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ @ 0x18007E968 (-ProcessUnpinResources@CD3DDeviceLevel1@@QEAAJXZ.c)
 *     ?ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007EF1C (-ReleaseDeviceInterfaceAndHandles@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ?ReleaseHDRConversionResources@CD3DDeviceLevel1@@AEAAXXZ @ 0x18007F500 (-ReleaseHDRConversionResources@CD3DDeviceLevel1@@AEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?DestroyAllResources@CD3DResourceManager@@QEAAXXZ @ 0x18009F3D0 (-DestroyAllResources@CD3DResourceManager@@QEAAXXZ.c)
 *     ?FreeTableData@?$CGenericTableMap@IVPropertyMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800AD800 (-FreeTableData@-$CGenericTableMap@IVPropertyMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1?$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAA@XZ @ 0x1801732C4 (--1-$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAA@XZ.c)
 *     ??4?$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z @ 0x180173324 (--4-$ComPtr@VCHwSolidColorTextureSource@@@WRL@Microsoft@@QEAAAEAV012@$$T@Z.c)
 */

void __fastcall CD3DDeviceLevel1::~CD3DDeviceLevel1(CD3DDeviceLevel1 *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rbp
  _QWORD *v18; // rdi
  __int64 v19; // rsi
  _QWORD *v20; // rdi
  __int64 v21; // rsi
  _QWORD *v22; // rdi
  __int64 v23; // rsi
  _QWORD *v24; // rdi
  __int64 v25; // rsi
  _QWORD *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rcx
  _QWORD *v29; // rdi
  struct _RTL_GENERIC_TABLE *v30; // rcx
  int v31; // esi
  __int64 v32; // rdi
  __int64 v33; // rax
  void *v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // r8
  unsigned int v37; // edx
  __int64 v38; // rcx
  ULONG v39; // ebx

  *(_QWORD *)this = &CD3DDeviceLevel1::`vftable'{for `CD2DContext'};
  *((_QWORD *)this + 51) = &CD3DDeviceLevel1::`vftable'{for `CMILPoolResource'};
  CD3DDeviceLevel1::ProcessUnpinResources(this);
  v2 = *((_QWORD *)this + 69);
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  v3 = *((_QWORD *)this + 76);
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
  v4 = *((_QWORD *)this + 75);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 74);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  v6 = *((_QWORD *)this + 73);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  Microsoft::WRL::ComPtr<CHwSolidColorTextureSource>::operator=((char *)this + 776);
  Microsoft::WRL::ComPtr<CHwSolidColorTextureSource>::operator=((char *)this + 784);
  v7 = *((_QWORD *)this + 96);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  v8 = *((_QWORD *)this + 99);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  v9 = *((_QWORD *)this + 100);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  v10 = *((_QWORD *)this + 101);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  v11 = *((_QWORD *)this + 102);
  if ( v11 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  CD3DResourceManager::DestroyAllResources((CD3DDeviceLevel1 *)((char *)this + 880));
  CD3DDeviceLevel1::ReleaseDeviceInterfaceAndHandles(this);
  v12 = *((_QWORD *)this + 72);
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 888LL))(v12);
  v13 = *((_QWORD *)this + 72);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  v14 = *((_QWORD *)this + 79);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
  v15 = *((_QWORD *)this + 80);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
  CD3DDeviceLevel1::ReleaseHDRConversionResources(this);
  v17 = 4LL;
  v18 = (_QWORD *)((char *)this + 1096);
  v19 = 4LL;
  do
  {
    if ( *v18 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v18 + 16LL))(*v18);
    ++v18;
    --v19;
  }
  while ( v19 );
  v20 = (_QWORD *)((char *)this + 1128);
  v21 = 12LL;
  do
  {
    if ( *v20 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v20 + 16LL))(*v20);
    ++v20;
    --v21;
  }
  while ( v21 );
  v22 = (_QWORD *)((char *)this + 1632);
  v23 = 32LL;
  do
  {
    if ( *v22 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v22 + 16LL))(*v22);
    ++v22;
    --v23;
  }
  while ( v23 );
  v24 = (_QWORD *)((char *)this + 1440);
  v25 = 24LL;
  do
  {
    if ( *v24 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v24 + 16LL))(*v24);
    ++v24;
    --v25;
  }
  while ( v25 );
  v26 = (_QWORD *)((char *)this + 1424);
  v27 = 2LL;
  do
  {
    if ( *v26 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v26 + 16LL))(*v26);
    ++v26;
    --v27;
  }
  while ( v27 );
  v28 = *((_QWORD *)this + 236);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = (_QWORD *)((char *)this + 1896);
  do
  {
    if ( *v29 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v29 + 16LL))(*v29);
    ++v29;
    --v17;
  }
  while ( v17 );
  v30 = (struct _RTL_GENERIC_TABLE *)*((_QWORD *)this + 241);
  if ( v30 )
    ((void (__fastcall *)(struct _RTL_GENERIC_TABLE *))v30->TableRoot->RightChild)(v30);
  if ( *((_QWORD *)this + 153) )
  {
    v31 = 0;
    if ( *((int *)this + 310) > 0 )
    {
      v32 = 0LL;
      do
      {
        v33 = *((_QWORD *)this + 154);
        v30 = *(struct _RTL_GENERIC_TABLE **)(v32 + v33);
        if ( v30 )
        {
          *(_QWORD *)(v32 + v33) = 0LL;
          ((void (__fastcall *)(struct _RTL_GENERIC_TABLE *))v30->TableRoot->RightChild)(v30);
        }
        ++v31;
        v32 += 8LL;
      }
      while ( v31 < *((_DWORD *)this + 310) );
    }
    CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData(v30, *((PVOID *)this + 153));
    *((_QWORD *)this + 153) = 0LL;
  }
  v34 = (void *)*((_QWORD *)this + 154);
  if ( v34 )
  {
    CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData(v30, v34);
    *((_QWORD *)this + 154) = 0LL;
  }
  *((_DWORD *)this + 310) = 0;
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1024, v34, v16);
  *((_QWORD *)this + 110) = &CD3DResourceManager::`vftable';
  Microsoft::WRL::ComPtr<CHwSolidColorTextureSource>::~ComPtr<CHwSolidColorTextureSource>((char *)this + 784);
  Microsoft::WRL::ComPtr<CHwSolidColorTextureSource>::~ComPtr<CHwSolidColorTextureSource>((char *)this + 776);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 472, v35, v36);
  *((_QWORD *)this + 51) = &CMILRefCountBase::`vftable';
  CD2DContext::~CD2DContext(this, v37);
  v38 = *((_QWORD *)this + 58);
  if ( v38 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
  CHwBrushPool::~CHwBrushPool((CHwSolidBrush **)this + 55);
  v39 = *((_DWORD *)this + 108);
  if ( v39 != -1 )
  {
    EnterCriticalSection(&g_ResourceCacheIndexManager);
    RtlClearBits(&BitMapHeader, v39, 1u);
    LeaveCriticalSection(&g_ResourceCacheIndexManager);
  }
}
