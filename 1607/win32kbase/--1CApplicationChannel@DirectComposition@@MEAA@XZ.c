/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C0042038
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C003E070 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001AE48 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00427DC (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C004CEAC (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  unsigned int v2; // edx
  DirectComposition::CEvent *v3; // rcx
  DirectComposition::CBatch *v4; // rcx
  unsigned int v5; // edx
  struct _ERESOURCE *v6; // rcx
  DirectComposition::CEvent *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  void *v10; // rcx
  void *v11; // rcx
  __int64 **v12; // rdi
  __int64 *v13; // rcx
  __int64 **v14; // rsi
  __int64 **v15; // rsi
  __int64 **v16; // rdi
  DirectComposition::CBatch *v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( *((_QWORD *)this + 28) )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
    v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 28);
    if ( v3 )
      DirectComposition::CEvent::`scalar deleting destructor'(v3, v2);
  }
  if ( *((_QWORD *)this + 25) )
  {
    do
    {
      v17 = (DirectComposition::CBatch *)*((_QWORD *)this + 25);
      v18 = *(_QWORD *)v17;
      if ( v17 )
        DirectComposition::CBatch::`scalar deleting destructor'(v17);
      *((_QWORD *)this + 25) = v18;
    }
    while ( v18 );
  }
  v4 = (DirectComposition::CBatch *)*((_QWORD *)this + 24);
  if ( v4 )
  {
    DirectComposition::CBatch::`scalar deleting destructor'(v4);
    *((_QWORD *)this + 24) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CApplicationChannel *)((char *)this + 616));
  v6 = (struct _ERESOURCE *)*((_QWORD *)this + 47);
  if ( v6 )
  {
    ExDeleteResourceLite(v6);
    Win32FreePool();
  }
  v7 = (DirectComposition::CEvent *)*((_QWORD *)this + 46);
  if ( v7 )
    DirectComposition::CEvent::`scalar deleting destructor'(v7, v5);
  if ( *((_QWORD *)this + 92) )
  {
    MmUnmapViewOfSection(*((_QWORD *)this + 87));
    *((_QWORD *)this + 92) = 0LL;
  }
  v8 = (void *)*((_QWORD *)this + 91);
  if ( v8 )
  {
    MmUnmapViewInSessionSpace(v8);
    *((_QWORD *)this + 91) = 0LL;
  }
  v9 = (void *)*((_QWORD *)this + 89);
  if ( v9 )
  {
    ObfDereferenceObject(v9);
    *((_QWORD *)this + 89) = 0LL;
  }
  v10 = (void *)*((_QWORD *)this + 87);
  if ( v10 )
  {
    ObfDereferenceObject(v10);
    *((_QWORD *)this + 87) = 0LL;
  }
  v11 = (void *)*((_QWORD *)this + 79);
  if ( v11 )
    ObfDereferenceObject(v11);
  v12 = (__int64 **)((char *)this + 544);
  while ( 1 )
  {
    v13 = *v12;
    if ( *v12 == (__int64 *)v12 )
      break;
    v19 = *v13;
    if ( (__int64 **)v13[1] != v12 || *(__int64 **)(v19 + 8) != v13 )
      __fastfail(3u);
    *v12 = (__int64 *)v19;
    *(_QWORD *)(v19 + 8) = v12;
    Win32FreePool();
  }
  v14 = (__int64 **)((char *)this + 560);
  while ( *v14 != (__int64 *)v14 )
  {
    v20 = **v14;
    if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v20 + 8) != *v14 )
      __fastfail(3u);
    *v14 = (__int64 *)v20;
    *(_QWORD *)(v20 + 8) = v14;
    Win32FreePool();
  }
  v15 = (__int64 **)((char *)this + 576);
  while ( *v15 != (__int64 *)v15 )
  {
    v21 = **v15;
    if ( (__int64 **)(*v15)[1] != v15 || *(__int64 **)(v21 + 8) != *v15 )
      __fastfail(3u);
    *v15 = (__int64 *)v21;
    *(_QWORD *)(v21 + 8) = v15;
    Win32FreePool();
  }
  v16 = (__int64 **)((char *)this + 592);
  while ( *v16 != (__int64 *)v16 )
  {
    v22 = **v16;
    if ( (__int64 **)(*v16)[1] != v16 || *(__int64 **)(v22 + 8) != *v16 )
      __fastfail(3u);
    *v16 = (__int64 *)v22;
    *(_QWORD *)(v22 + 8) = v16;
    Win32FreePool();
  }
  *((_QWORD *)this + 60) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 480));
  *((_QWORD *)this + 15) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 120));
  *((_QWORD *)this + 7) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 56));
  DirectComposition::CChannel::~CChannel(this);
}
