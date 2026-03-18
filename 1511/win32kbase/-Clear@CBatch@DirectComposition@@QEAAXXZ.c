/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001A344
 * Callers:
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C001CFF0 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C00D7318 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 * Callees:
 *     ?Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z @ 0x1C0012C98 (-Delete@CSystemResourceReference@CBatch@DirectComposition@@QEAAXPEAVCApplicationChannel@3@@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C0016044 (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C001847C (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A230 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C001A534 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0046180 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CConnection ***this)
{
  DirectComposition::CConnection **v2; // rcx
  DirectComposition::CConnection **v3; // rbx
  unsigned __int64 v4; // r15
  DirectComposition::CApplicationChannel *v5; // r14
  DirectComposition::CBatch::CSystemResourceReference *v6; // rcx
  DirectComposition::CConnection **v7; // rbx
  DirectComposition::CAnimationMarshaler *v8; // rsi
  DirectComposition::CConnection **v9; // rbp
  DirectComposition::CAnimationMarshaler *v10; // rcx
  struct DirectComposition::CResourceMarshaler *v11; // rdx

  if ( this[5] )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable((struct DirectComposition::CBatch *)this);
    this[5] = 0LL;
  }
  v2 = this[12];
  v2[4] = (DirectComposition::CConnection *)((char *)v2[4] + (_QWORD)(this[14] + 5));
  if ( !*((_BYTE *)v2 + 64) && v2[5] == v2[4] )
    DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v2);
  this[12] = 0LL;
  this[13] = 0LL;
  *((_DWORD *)this + 12) = 0;
  this[7] = 0LL;
  this[14] = 0LL;
  *((_BYTE *)this + 32) &= 0xF2u;
  v3 = this[10];
  v4 = (unsigned __int64)this[9];
  v5 = (DirectComposition::CApplicationChannel *)this[1];
  if ( v3 )
  {
    do
    {
      v8 = *v3;
      v9 = (DirectComposition::CConnection **)v3[1];
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
      v6 = (DirectComposition::CBatch::CSystemResourceReference *)this[11];
      v7 = *(DirectComposition::CConnection ***)v6;
      DirectComposition::CBatch::CSystemResourceReference::Delete(v6, this[1]);
      this[11] = v7;
    }
    while ( v7 );
  }
}
