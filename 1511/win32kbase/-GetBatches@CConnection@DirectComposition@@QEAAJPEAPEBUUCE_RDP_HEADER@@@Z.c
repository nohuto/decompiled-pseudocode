/*
 * XREFs of ?GetBatches@CConnection@DirectComposition@@QEAAJPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00D69EC
 * Callers:
 *     NtDCompositionGetConnectionBatch @ 0x1C0012CD0 (NtDCompositionGetConnectionBatch.c)
 * Callees:
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00131C0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F18 (-AcquireShared@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C00A8D20 (-AppendRetrievingBatches@CConnection@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z @ 0x1C00A8DDC (-GetReadyBatches@CConnection@DirectComposition@@QEAAJ_KPEAPEAVCBatch@2@@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::GetBatches(
        DirectComposition::CConnection *this,
        const struct UCE_RDP_HEADER **a2)
{
  unsigned int Batches; // edi
  struct DirectComposition::CBatch *v6; // [rsp+30h] [rbp+8h] BYREF
  union _LARGE_INTEGER Interval; // [rsp+40h] [rbp+18h] BYREF

  DirectComposition::CCriticalSection::AcquireShared(*((struct _ERESOURCE **)this + 1));
  if ( *((_DWORD *)this + 37) )
  {
    if ( (int)DirectComposition::CConnection::GetReadyBatches(this, 0LL, &v6) >= 0 && v6 )
    {
      while ( _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) != 2 )
      {
        Interval.QuadPart = 0LL;
        KeDelayExecutionThread(1, 0, &Interval);
      }
      DirectComposition::CConnection::AppendRetrievingBatches(this, v6);
    }
    if ( *((_DWORD *)this + 36) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)this + 36, 1, 2) == 2 )
      Batches = DirectComposition::CConnection::RetrieveBatches(this, 0LL, a2);
    else
      Batches = -1073740024;
  }
  else
  {
    Batches = -1073741300;
  }
  ExReleaseResourceLite(*((PERESOURCE *)this + 1));
  KeLeaveCriticalRegion();
  return Batches;
}
