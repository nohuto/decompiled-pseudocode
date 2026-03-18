/*
 * XREFs of ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C00E41A4
 * Callers:
 *     DCompositionRenderBlack @ 0x1C00E31B0 (DCompositionRenderBlack.c)
 * Callees:
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z @ 0x1C001AC78 (-GetPayloadWritePointer@CBatch@DirectComposition@@QEAA_N_KPEAPEAX@Z.c)
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z @ 0x1C003DB48 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N@Z.c)
 *     ?PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1C003EBDC (-PreallocateNextBatch@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C00425CC (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
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
  if ( DirectComposition::CBatch::GetPayloadWritePointer(v4[23], 0xCuLL, &v8) )
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
