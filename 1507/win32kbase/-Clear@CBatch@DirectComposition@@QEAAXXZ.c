/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C00205D4
 * Callers:
 *     NtDCompositionGetAnimationTime @ 0x1C00201E0 (NtDCompositionGetAnimationTime.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z @ 0x1C002DCE4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAAX_N@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C002FE20 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C00121E0 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0021B30 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0022778 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C002C348 (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C002D4DC (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0031484 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatch::Clear(struct DirectComposition::CApplicationChannel **this)
{
  struct DirectComposition::CApplicationChannel *v2; // rcx
  DirectComposition::CAnimationMarshaler **v3; // rbx
  unsigned __int64 v4; // r15
  DirectComposition::CApplicationChannel *v5; // r14
  DirectComposition::CBatch::CSystemResourceReference *v6; // rcx
  struct DirectComposition::CApplicationChannel *v7; // rbx
  DirectComposition::CAnimationMarshaler *v8; // rsi
  DirectComposition::CAnimationMarshaler **v9; // rbp
  DirectComposition::CAnimationMarshaler *v10; // rcx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  if ( this[5] )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable((struct DirectComposition::CBatch *)this);
    this[5] = 0LL;
  }
  v2 = this[12];
  *((_QWORD *)v2 + 4) += (char *)this[14] + 40;
  if ( !*((_BYTE *)v2 + 64) && *((_QWORD *)v2 + 5) == *((_QWORD *)v2 + 4) )
    DirectComposition::CBatchSharedMemoryPool::Reset(v2);
  this[12] = 0LL;
  this[13] = 0LL;
  *((_DWORD *)this + 12) = 0;
  this[7] = 0LL;
  this[14] = 0LL;
  *((_BYTE *)this + 32) &= 0xF2u;
  v3 = (DirectComposition::CAnimationMarshaler **)this[10];
  v4 = (unsigned __int64)this[9];
  v5 = this[1];
  if ( v3 )
  {
    do
    {
      v8 = *v3;
      v9 = (DirectComposition::CAnimationMarshaler **)v3[1];
      v10 = *v3;
      v3[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v10, v4);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v3);
      if ( v8 )
        v11 = (DirectComposition::CAnimationMarshaler *)((char *)v8 + 16);
      else
        v11 = 0LL;
      DirectComposition::CApplicationChannel::ReleaseResource(v5, v11);
      v3 = v9;
    }
    while ( v9 );
  }
  this[10] = 0LL;
  if ( this[11] )
  {
    do
    {
      v6 = this[11];
      v7 = *(struct DirectComposition::CApplicationChannel **)v6;
      DirectComposition::CBatch::CSystemResourceReference::Delete(v6, this[1]);
      this[11] = v7;
    }
    while ( v7 );
  }
}
