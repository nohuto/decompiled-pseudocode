/*
 * XREFs of ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001ACA8
 * Callers:
 *     ?ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ @ 0x1C003F5F4 (-ProcessReturnedBatches@CApplicationChannel@DirectComposition@@IEAA_NXZ.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C0041844 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ @ 0x1C0042210 (-Shutdown@CApplicationChannel@DirectComposition@@MEAAXXZ.c)
 * Callees:
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C000DE28 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z @ 0x1C0018918 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAXVResourceHandle@@@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001AF90 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z @ 0x1C003D870 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAKPEAVCResourceMarshaler@2@@Z.c)
 *     ?UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z @ 0x1C004D5DC (-UpdateAnimationTimeState@CAnimationMarshaler@DirectComposition@@IEAAX_K@Z.c)
 *     ?Release@CAnimationTimeList@DirectComposition@@QEAAKXZ @ 0x1C004DCEC (-Release@CAnimationTimeList@DirectComposition@@QEAAKXZ.c)
 */

void __fastcall DirectComposition::CBatch::Clear(DirectComposition::CBatch *this)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  DirectComposition::CAnimationMarshaler **v4; // rdi
  unsigned __int64 v5; // r15
  DirectComposition::CApplicationChannel *v6; // r14
  __int64 *v7; // rax
  __int64 *v8; // rdi
  __int64 v9; // rsi
  DirectComposition::CAnimationMarshaler *v10; // rsi
  DirectComposition::CAnimationMarshaler **v11; // rbp
  DirectComposition::CAnimationMarshaler *v12; // rcx
  struct DirectComposition::CResourceMarshaler *v13; // rdx

  if ( *((_QWORD *)this + 5) )
  {
    DirectComposition::CSynchronizationManager::RemoveFromSynchronizationTable(this);
    *((_QWORD *)this + 5) = 0LL;
  }
  v2 = *((_QWORD *)this + 12);
  v3 = *((_QWORD *)this + 14) + 40LL + *(_QWORD *)(v2 + 32);
  *(_QWORD *)(v2 + 32) = v3;
  if ( !*(_BYTE *)(v2 + 64) && *(_QWORD *)(v2 + 40) == v3 )
    DirectComposition::CBatchSharedMemoryPool::Reset((DirectComposition::CBatchSharedMemoryPool *)v2);
  *((_BYTE *)this + 32) &= 0xF2u;
  v4 = (DirectComposition::CAnimationMarshaler **)*((_QWORD *)this + 10);
  v5 = *((_QWORD *)this + 9);
  v6 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 1);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  if ( v4 )
  {
    do
    {
      v10 = *v4;
      v11 = (DirectComposition::CAnimationMarshaler **)v4[1];
      v12 = *v4;
      v4[1] = 0LL;
      DirectComposition::CAnimationMarshaler::UpdateAnimationTimeState(v12, v5);
      DirectComposition::CAnimationTimeList::Release((DirectComposition::CAnimationTimeList *)v4);
      v13 = (DirectComposition::CAnimationMarshaler *)((char *)v10 + 16);
      if ( !v10 )
        v13 = 0LL;
      DirectComposition::CApplicationChannel::ReleaseResource(v6, v13);
      v4 = v11;
    }
    while ( v11 );
  }
  *((_QWORD *)this + 10) = 0LL;
  if ( *((_QWORD *)this + 11) )
  {
    do
    {
      v7 = (__int64 *)*((_QWORD *)this + 11);
      v8 = v7;
      v9 = *v7;
      if ( *((_DWORD *)v7 + 2) )
      {
        DirectComposition::CConnection::ReleaseSystemResource(
          *(_QWORD *)(*((_QWORD *)this + 1) + 40LL),
          *((_DWORD *)v7 + 2));
        *((_DWORD *)v8 + 2) = 0;
      }
      Win32FreePool(v8);
      *((_QWORD *)this + 11) = v9;
    }
    while ( v9 );
  }
}
