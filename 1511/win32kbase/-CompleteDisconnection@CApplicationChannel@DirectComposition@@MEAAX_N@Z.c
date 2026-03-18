/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001AE40
 * Callers:
 *     <none>
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A1DC (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001AA4C (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C001E07C (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0071DDC (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C00737BC (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CAnimationBinding **this,
        char a2)
{
  int v4; // edi
  void *v5; // rax
  void *v6; // r8
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  DirectComposition::CAnimationBinding *v8; // rcx
  DirectComposition::CAnimationBinding *v9; // rbx
  DirectComposition::CAnimationBinding *v10; // rcx
  DirectComposition::CAnimationBinding *v11; // rbx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  _DWORD *v15; // rax
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this);
  v4 = 0;
  v16 = 0LL;
  while ( 1 )
  {
    v5 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
           (DirectComposition::CLinearHandleTableBase *)(this + 7),
           &v16);
    v6 = v5;
    if ( !v5 )
      break;
    (*(void (__fastcall **)(void *, DirectComposition::CAnimationBinding **))(*(_QWORD *)v5 + 88LL))(v5, this);
  }
  if ( !a2 )
  {
    for ( i = this[76];
          i != (DirectComposition::CBatchSharedMemoryPool *)(this + 76);
          i = *(DirectComposition::CBatchSharedMemoryPool **)i )
    {
      DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(i);
    }
    DirectComposition::CBatchSharedMemoryPoolSet::SetRetrievingProcess(
      (DirectComposition::CBatchSharedMemoryPoolSet *)(this + 76),
      0LL);
    *((_BYTE *)this + 48) &= ~2u;
  }
  v8 = this[56];
  *((_DWORD *)this + 166) = 0;
  if ( v8 )
  {
    do
    {
      v9 = *(DirectComposition::CAnimationBinding **)v8;
      *(_QWORD *)v8 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v8, (struct DirectComposition::CApplicationChannel *)this);
      v8 = v9;
    }
    while ( v9 );
  }
  v10 = this[53];
  if ( v10 )
  {
    do
    {
      v11 = (DirectComposition::CAnimationBinding *)*((_QWORD *)v10 + 1);
      (*(void (__fastcall **)(DirectComposition::CAnimationBinding *, __int64, void *))(*(_QWORD *)v10 + 96LL))(
        v10,
        1LL,
        v6);
      v10 = v11;
    }
    while ( v11 );
  }
  DirectComposition::CApplicationChannel::ClearAnimationTimeList((DirectComposition::CApplicationChannel *)this);
  this[56] = 0LL;
  this[53] = 0LL;
  this[50] = 0LL;
  this[55] = 0LL;
  this[51] = 0LL;
  this[52] = 0LL;
  v16 = 0LL;
  while ( 1 )
  {
    v15 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
            (DirectComposition::CLinearHandleTableBase *)(this + 7),
            &v16);
    if ( !v15 )
      break;
    v15[4] &= 0xFFFFFFDD;
    v12 = *((_QWORD *)v15 + 4);
    *((_QWORD *)v15 + 1) = 0LL;
    if ( v12 )
    {
      do
      {
        v13 = *(_DWORD *)(v12 + 8);
        v14 = *(_QWORD *)(v12 + 32);
        if ( (v13 & 1) != 0 )
          *(_DWORD *)(v12 + 8) = v13 & 0xFFFFFFFC | 2;
        *(_QWORD *)v12 = 0LL;
        v12 = v14;
      }
      while ( v14 );
    }
  }
  LOBYTE(v4) = (unsigned int)(*((_DWORD *)this + 150) - 1) <= 1;
  *((_DWORD *)this + 150) = v4;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
