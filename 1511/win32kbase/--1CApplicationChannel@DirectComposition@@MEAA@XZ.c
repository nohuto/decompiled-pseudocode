/*
 * XREFs of ??1CApplicationChannel@DirectComposition@@MEAA@XZ @ 0x1C001CE2C
 * Callers:
 *     ??_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z @ 0x1C0013CA0 (--_ECSystemChannel@DirectComposition@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_GCBatch@DirectComposition@@QEAAPEAXI@Z @ 0x1C001A4E0 (--_GCBatch@DirectComposition@@QEAAPEAXI@Z.c)
 *     ??1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ @ 0x1C001E4A0 (--1CDCompDynamicArrayBase@DirectComposition@@MEAA@XZ.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C007387C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007B5CC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::~CApplicationChannel(
        DirectComposition::CApplicationChannel *this)
{
  unsigned int v2; // edx
  DirectComposition::CEvent *v3; // rcx
  DirectComposition::CBatch *v4; // rcx
  __int64 v5; // rdi
  DirectComposition::CBatch *v6; // rcx
  unsigned int v7; // edx
  struct _ERESOURCE *v8; // rcx
  DirectComposition::CEvent *v9; // rcx
  void *v10; // rcx
  __int64 **v11; // rdi
  __int64 *v12; // rcx
  __int64 v13; // rax
  __int64 **v14; // rsi
  __int64 *v15; // rcx
  __int64 v16; // rax
  __int64 **v17; // rsi
  __int64 *v18; // rcx
  __int64 v19; // rax
  __int64 **v20; // rdi
  __int64 *v21; // rcx
  __int64 v22; // rax

  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  DirectComposition::CApplicationChannel::ProcessReturnedBatches(this);
  v3 = (DirectComposition::CEvent *)*((_QWORD *)this + 20);
  if ( v3 )
    DirectComposition::CEvent::`scalar deleting destructor'(v3, v2);
  if ( *((_QWORD *)this + 17) )
  {
    do
    {
      v4 = (DirectComposition::CBatch *)*((_QWORD *)this + 17);
      v5 = *(_QWORD *)v4;
      if ( v4 )
        DirectComposition::CBatch::`scalar deleting destructor'(v4);
      *((_QWORD *)this + 17) = v5;
    }
    while ( v5 );
  }
  v6 = (DirectComposition::CBatch *)*((_QWORD *)this + 16);
  if ( v6 )
  {
    DirectComposition::CBatch::`scalar deleting destructor'(v6);
    *((_QWORD *)this + 16) = 0LL;
  }
  DirectComposition::CBatchSharedMemoryPoolSet::FreeAllPools((DirectComposition::CApplicationChannel *)((char *)this + 608));
  v8 = (struct _ERESOURCE *)*((_QWORD *)this + 46);
  if ( v8 )
  {
    ExDeleteResourceLite(v8);
    Win32FreePool(*((_QWORD *)this + 46));
  }
  v9 = (DirectComposition::CEvent *)*((_QWORD *)this + 45);
  if ( v9 )
    DirectComposition::CEvent::`scalar deleting destructor'(v9, v7);
  v10 = (void *)*((_QWORD *)this + 78);
  if ( v10 )
    ObfDereferenceObject(v10);
  v11 = (__int64 **)((char *)this + 536);
  while ( 1 )
  {
    v12 = *v11;
    if ( *v11 == (__int64 *)v11 )
      break;
    v13 = *v12;
    if ( (__int64 **)v12[1] != v11 || *(__int64 **)(v13 + 8) != v12 )
      __fastfail(3u);
    *v11 = (__int64 *)v13;
    *(_QWORD *)(v13 + 8) = v11;
    Win32FreePool(v12);
  }
  v14 = (__int64 **)((char *)this + 552);
  while ( *v14 != (__int64 *)v14 )
  {
    v15 = *v14;
    v16 = **v14;
    if ( (__int64 **)(*v14)[1] != v14 || *(__int64 **)(v16 + 8) != v15 )
      __fastfail(3u);
    *v14 = (__int64 *)v16;
    *(_QWORD *)(v16 + 8) = v14;
    Win32FreePool(v15);
  }
  v17 = (__int64 **)((char *)this + 568);
  while ( *v17 != (__int64 *)v17 )
  {
    v18 = *v17;
    v19 = **v17;
    if ( (__int64 **)(*v17)[1] != v17 || *(__int64 **)(v19 + 8) != v18 )
      __fastfail(3u);
    *v17 = (__int64 *)v19;
    *(_QWORD *)(v19 + 8) = v17;
    Win32FreePool(v18);
  }
  v20 = (__int64 **)((char *)this + 584);
  while ( *v20 != (__int64 *)v20 )
  {
    v21 = *v20;
    v22 = **v20;
    if ( (__int64 **)(*v20)[1] != v20 || *(__int64 **)(v22 + 8) != v21 )
      __fastfail(3u);
    *v20 = (__int64 *)v22;
    *(_QWORD *)(v22 + 8) = v20;
    Win32FreePool(v21);
  }
  *((_QWORD *)this + 59) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 472));
  *((_QWORD *)this + 7) = &DirectComposition::CDCompDynamicArray<unsigned __int64>::`vftable';
  DirectComposition::CDCompDynamicArrayBase::~CDCompDynamicArrayBase((DirectComposition::CApplicationChannel *)((char *)this + 56));
  DirectComposition::CChannel::~CChannel(this);
}
