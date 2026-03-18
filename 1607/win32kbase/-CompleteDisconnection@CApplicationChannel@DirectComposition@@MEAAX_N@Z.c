/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C003F3D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001AF3C (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C003BF00 (-EnumerateObjects@CLinearObjectTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EA44 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0042718 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C004C7F4 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        struct DirectComposition::CResourceMarshaler **this,
        char a2)
{
  int v2; // edi
  PRKEVENT *v5; // rcx
  void *v6; // rax
  void *v7; // r8
  DirectComposition::CAnimationBinding *v8; // rcx
  struct DirectComposition::CResourceMarshaler *v9; // rcx
  _DWORD *v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  __int64 v13; // rdx
  struct DirectComposition::CResourceMarshaler *v14; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  unsigned int v16; // edx
  DirectComposition::CEvent *v17; // rcx
  DirectComposition::CAnimationBinding *v18; // rbx
  unsigned __int64 v19; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this[28] )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v5 = (PRKEVENT *)this[93];
  if ( v5 )
  {
    KeSetEvent(*v5, 1, 0);
    v17 = this[93];
    if ( v17 )
      DirectComposition::CEvent::`scalar deleting destructor'(v17, v16);
    this[93] = 0LL;
  }
  DirectComposition::CApplicationChannel::ReleaseResource((DirectComposition::CApplicationChannel *)this, this[94]);
  this[94] = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    v6 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
           (DirectComposition::CLinearObjectTableBase *)(this + 15),
           &v19);
    v7 = v6;
    if ( !v6 )
      break;
    (*(void (__fastcall **)(void *, struct DirectComposition::CResourceMarshaler **))(*(_QWORD *)v6 + 88LL))(v6, this);
  }
  if ( !a2 )
  {
    for ( i = this[77];
          i != (DirectComposition::CBatchSharedMemoryPool *)(this + 77);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 77),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v8 = this[57];
  *((_DWORD *)this + 168) = 0;
  if ( v8 )
  {
    do
    {
      v18 = *(DirectComposition::CAnimationBinding **)v8;
      *(_QWORD *)v8 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v8, (struct DirectComposition::CApplicationChannel *)this);
      v8 = v18;
    }
    while ( v18 );
  }
  v9 = this[54];
  if ( v9 )
  {
    do
    {
      v14 = (struct DirectComposition::CResourceMarshaler *)*((_QWORD *)v9 + 1);
      (*(void (__fastcall **)(struct DirectComposition::CResourceMarshaler *, __int64, void *))(*(_QWORD *)v9 + 96LL))(
        v9,
        1LL,
        v7);
      v9 = v14;
    }
    while ( v14 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList((DirectComposition::CApplicationChannel *)this);
  this[57] = 0LL;
  this[54] = 0LL;
  this[51] = 0LL;
  this[56] = 0LL;
  this[52] = 0LL;
  this[53] = 0LL;
  v19 = 0LL;
  while ( 1 )
  {
    v10 = DirectComposition::CLinearObjectTableBase::EnumerateObjects(
            (DirectComposition::CLinearObjectTableBase *)(this + 15),
            &v19);
    if ( !v10 )
      break;
    v10[4] &= 0xFFFFFFEE;
    *((_QWORD *)v10 + 1) = 0LL;
    v11 = *((_QWORD *)v10 + 4);
    if ( v11 )
    {
      do
      {
        v12 = *(_DWORD *)(v11 + 8);
        v13 = *(_QWORD *)(v11 + 32);
        if ( (v12 & 1) != 0 )
          *(_DWORD *)(v11 + 8) = v12 & 0xFFFFFFFC | 2;
        *(_QWORD *)v11 = 0LL;
        v11 = v13;
      }
      while ( v13 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 152) - 1) <= 1;
  *((_DWORD *)this + 152) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
