/*
 * XREFs of ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C002DAE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0011648 (-SetRetrievingProcess@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1C0028E38 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C002D868 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     ?EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z @ 0x1C0031388 (-EnumerateObjects@CLinearHandleTableBase@DirectComposition@@QEAAPEAXPEA_K@Z.c)
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0031430 (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DirectComposition::CApplicationChannel::CompleteDisconnection(
        DirectComposition::CAnimationBinding **this,
        char a2)
{
  int v2; // edi
  void *v5; // rax
  void *v6; // r8
  DirectComposition::CAnimationBinding *v7; // rcx
  DirectComposition::CAnimationBinding *v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rdx
  DirectComposition::CAnimationBinding *v13; // rbx
  DirectComposition::CBatchSharedMemoryPool *i; // rbx
  DirectComposition::CAnimationBinding *v15; // rbx
  unsigned __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  if ( this[20] )
    DirectComposition::CApplicationChannel::ProcessReturnedBatches((DirectComposition::CApplicationChannel *)this, 0);
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
  v7 = this[56];
  *((_DWORD *)this + 166) = 0;
  if ( v7 )
  {
    do
    {
      v15 = *(DirectComposition::CAnimationBinding **)v7;
      *(_QWORD *)v7 = 0LL;
      DirectComposition::CAnimationBinding::DetachAndDelete(v7, (struct DirectComposition::CApplicationChannel *)this);
      v7 = v15;
    }
    while ( v15 );
  }
  v8 = this[53];
  if ( v8 )
  {
    do
    {
      v13 = (DirectComposition::CAnimationBinding *)*((_QWORD *)v8 + 1);
      (*(void (__fastcall **)(DirectComposition::CAnimationBinding *, __int64, void *))(*(_QWORD *)v8 + 96LL))(
        v8,
        1LL,
        v6);
      v8 = v13;
    }
    while ( v13 );
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
    v9 = DirectComposition::CLinearHandleTableBase::EnumerateObjects(
           (DirectComposition::CLinearHandleTableBase *)(this + 7),
           &v16);
    if ( !v9 )
      break;
    v9[4] &= 0xFFFFFFDD;
    *((_QWORD *)v9 + 1) = 0LL;
    v10 = *((_QWORD *)v9 + 4);
    if ( v10 )
    {
      do
      {
        v11 = *(_DWORD *)(v10 + 8);
        v12 = *(_QWORD *)(v10 + 32);
        if ( (v11 & 1) != 0 )
          *(_DWORD *)(v10 + 8) = v11 & 0xFFFFFFFC | 2;
        *(_QWORD *)v10 = 0LL;
        v10 = v12;
      }
      while ( v12 );
    }
  }
  LOBYTE(v2) = (unsigned int)(*((_DWORD *)this + 150) - 1) <= 1;
  *((_DWORD *)this + 150) = v2;
  *((_DWORD *)this + 6) = a2 != 0 ? 6 : 3;
}
