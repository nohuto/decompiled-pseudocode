/*
 * XREFs of CmpUnfreezeHive @ 0x1401DFB54
 * Callers:
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmpIsHiveAlreadyLoaded @ 0x140656890 (CmpIsHiveAlreadyLoaded.c)
 * Callees:
 *     CmpDereferenceHive @ 0x140447BD4 (CmpDereferenceHive.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x14065433C (CmWorkerEngineDequeueWorkItem.c)
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
