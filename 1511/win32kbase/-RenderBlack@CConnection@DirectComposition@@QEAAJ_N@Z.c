/*
 * XREFs of ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C00D6B10
 * Callers:
 *     DCompositionRenderBlack @ 0x1C00D5B60 (DCompositionRenderBlack.c)
 * Callees:
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001A314 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C001ABC8 (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C001DADC (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall DirectComposition::CConnection::RenderBlack(
        DirectComposition::CConnection *this,
        unsigned __int8 a2)
{
  DirectComposition::CBatchSharedMemoryPool ***v4; // rbx
  _DWORD *v5; // rdx
  unsigned int v6; // ebx
  void *v8; // [rsp+30h] [rbp+8h] BYREF

  DirectComposition::CCriticalSection::AcquireExclusive(*(struct _ERESOURCE **)(*((_QWORD *)this + 19) + 32LL));
  v4 = (DirectComposition::CBatchSharedMemoryPool ***)*((_QWORD *)this + 19);
  DirectComposition::CApplicationChannel::PreallocateNextBatch((DirectComposition::CApplicationChannel *)v4);
  if ( DirectComposition::CBatch::GetPayloadWritePointer(v4[15], 0xCuLL, &v8) )
  {
    v5 = v8;
    *(_DWORD *)v8 = 12;
    v5[1] = 5;
    v5[2] = a2;
    v6 = DirectComposition::CApplicationChannel::Commit((DirectComposition::CApplicationChannel *)v4, 0LL, 1);
  }
  else
  {
    v6 = -1073741823;
  }
  DirectComposition::CChannel::Unlock(*((DirectComposition::CChannel **)this + 19));
  return v6;
}
