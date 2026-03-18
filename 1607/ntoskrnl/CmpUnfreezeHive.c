/*
 * XREFs of CmpUnfreezeHive @ 0x1401B47F4
 * Callers:
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmpIsHiveAlreadyLoaded @ 0x1405FEFD8 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDereferenceHive @ 0x1403FCA50 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140437B40 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1405FCC88 (CmWorkerEngineDequeueWorkItem.c)
 */

void __fastcall CmpUnfreezeHive(__int64 a1)
{
  ULONG_PTR v2; // rcx

  *(_BYTE *)(a1 + 4112) = 0;
  if ( *(_QWORD *)(a1 + 4120) )
  {
    if ( (unsigned __int8)CmWorkerEngineDequeueWorkItem() )
      CmpDereferenceHive(a1);
    *(_QWORD *)(a1 + 4120) = 0LL;
  }
  v2 = *(_QWORD *)(a1 + 4104);
  if ( v2 )
  {
    CmpDereferenceKeyControlBlockWithLock(v2);
    *(_QWORD *)(a1 + 4104) = 0LL;
  }
}
