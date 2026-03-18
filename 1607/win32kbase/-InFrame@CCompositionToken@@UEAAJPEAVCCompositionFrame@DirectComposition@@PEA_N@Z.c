/*
 * XREFs of ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C001FDA0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C000E13C (-FindObject@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAA.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     ?UpdateDirtyRegions@CCompositionToken@@QEAAJXZ @ 0x1C001FC78 (-UpdateDirtyRegions@CCompositionToken@@QEAAJXZ.c)
 */

__int64 __fastcall CCompositionToken::InFrame(
        CCompositionToken *this,
        struct DirectComposition::CCompositionFrame *a2,
        bool *a3)
{
  unsigned int updated; // edi
  __int64 v6; // rbx
  char v7; // bp
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 Object; // rax

  updated = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    v6 = *((_QWORD *)this + 10);
    v7 = 0;
    v8 = *((_QWORD *)a2 + 8);
    DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Object = DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(
               v9,
               v6);
    if ( Object && (*(_BYTE *)(Object + 32) & 2) == 0 && (*(int *)(Object + 48) > 0 || *(_QWORD *)(Object + 56) != v8) )
      v7 = 1;
    ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    KeLeaveCriticalRegion();
    if ( v7 )
    {
      ++*((_DWORD *)this + 7);
      *a3 = 0;
    }
    else
    {
      *((_DWORD *)this + 6) = 3;
      updated = CCompositionToken::UpdateDirtyRegions((CCompositionToken *)((char *)this - 8));
      *a3 = 1;
    }
  }
  return updated;
}
