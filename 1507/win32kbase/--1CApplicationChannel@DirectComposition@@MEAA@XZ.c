/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C002FC9C
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C00707D0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0011708 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C00167E8 (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C0020770 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C0028E14 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  __int64 v2; // rcx
  DirectComposition::CBatch *v3; // rcx
  struct _ERESOURCE *v4; // rcx
  void **v5; // rcx
  void *v6; // rcx
  __int64 **v7; // rdi
  __int64 *v8; // rcx
  __int64 **v9; // rsi
  __int64 **v10; // rsi
  __int64 **v11; // rdi
  unsigned int v12; // edx
  DirectComposition::CBatch *v13; // rcx
  __int64 v14; // rdi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 *v20; // rcx
  __int64 v21; // rax

  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  if ( *((_QWORD *)this + 20) )
  {
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((union _SLIST_HEADER *)this, 0);
    v2 = *((_QWORD *)this + 20);
    if ( v2 )
      Win32FreePool(v2);
  }
  if ( *((_QWORD *)this + 17) )
  {
    do
    {
      v13 = (DirectComposition::CBatch *)*((_QWORD *)this + 17);
      v14 = *(_QWORD *)v13;
      if ( v13 )
        DirectComposition::CBatch::`scalar deleting destructor'(v13);
      *((_QWORD *)this + 17) = v14;
    }
    while ( v14 );
  }
  v3 = (DirectComposition::CBatch *)*((_QWORD *)this + 16);
  if ( v3 )
  {
    DirectComposition::CBatch::`scalar deleting destructor'(v3);
    *((_QWORD *)this + 16) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CBatchSharedMemoryPool **)this + 76);
  v4 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v4 )
  {
    ExDeleteResourceLite(v4);
    Win32FreePool(*((_QWORD *)this + 46));
  }
  v5 = (void **)*((_QWORD *)this + 45);
  if ( v5 )
    DirectComposition::CEvent::`scalar deleting destructor'(v5);
  v6 = (void *)*((_QWORD *)this + 78);
  if ( v6 )
    ObfDereferenceObject(v6);
  v7 = (__int64 **)((char *)this + 536);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == (__int64 *)v7 )
      break;
    v17 = *v8;
    if ( (__int64 **)v8[1] != v7 || *(__int64 **)(v17 + 8) != v8 )
      __fastfail(3u);
    *v7 = (__int64 *)v17;
    *(_QWORD *)(v17 + 8) = v7;
    Win32FreePool(v8);
  }
  v9 = (__int64 **)((char *)this + 552);
  while ( *v9 != (__int64 *)v9 )
  {
    v18 = *v9;
    v19 = **v9;
    if ( (__int64 **)(*v9)[1] != v9 || *(__int64 **)(v19 + 8) != v18 )
      __fastfail(3u);
    *v9 = (__int64 *)v19;
    *(_QWORD *)(v19 + 8) = v9;
    Win32FreePool(v18);
  }
  v10 = (__int64 **)((char *)this + 568);
  while ( *v10 != (__int64 *)v10 )
  {
    v20 = *v10;
    v21 = **v10;
    if ( (__int64 **)(*v10)[1] != v10 || *(__int64 **)(v21 + 8) != v20 )
      __fastfail(3u);
    *v10 = (__int64 *)v21;
    *(_QWORD *)(v21 + 8) = v10;
    Win32FreePool(v20);
  }
  v11 = (__int64 **)((char *)this + 584);
  while ( *v11 != (__int64 *)v11 )
  {
    v15 = *v11;
    v16 = **v11;
    if ( (__int64 **)(*v11)[1] != v11 || *(__int64 **)(v16 + 8) != v15 )
      __fastfail(3u);
    *v11 = (__int64 *)v16;
    *(_QWORD *)(v16 + 8) = v11;
    Win32FreePool(v15);
  }
  *((_QWORD *)this + 59) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 472));
  *((_QWORD *)this + 7) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 56));
  DirectComposition::CChannel::~CChannel(this, v12);
}
