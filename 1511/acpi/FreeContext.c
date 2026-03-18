/*
 * XREFs of FreeContext @ 0x1C00465D4
 * Callers:
 *     AsyncEvalObject @ 0x1C0002000 (AsyncEvalObject.c)
 *     LoadDDB @ 0x1C00065EC (LoadDDB.c)
 *     SyncLoadDDB @ 0x1C0086180 (SyncLoadDDB.c)
 * Callees:
 *     GetObjectPath @ 0x1C00057B4 (GetObjectPath.c)
 *     FreeDataBuffs @ 0x1C000F3B0 (FreeDataBuffs.c)
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     DereferenceObjectEx @ 0x1C00138E4 (DereferenceObjectEx.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0021C10 (ExFreeToNPagedLookasideList.c)
 *     AcpiDiagTraceAmlEvaluation @ 0x1C0033EAC (AcpiDiagTraceAmlEvaluation.c)
 *     AcpiDiagTraceIsAmlTracingEnabled @ 0x1C0034948 (AcpiDiagTraceIsAmlTracingEnabled.c)
 */

void __fastcall FreeContext(__int64 a1)
{
  __int64 v2; // rdx
  KIRQL v3; // al
  char *ObjectPath; // rbx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  _QWORD *v8; // rdx
  _QWORD *v9; // rbx

  byte_1C005A4A8 = KeAcquireSpinLockRaiseToDpc(&gmutCtxtList);
  ListRemoveEntry((_QWORD **)(a1 + 16), (__int64)&gplistCtxtHead);
  v2 = *(_QWORD *)(a1 + 56);
  if ( v2 )
    ListRemoveEntry((_QWORD **)(a1 + 32), v2);
  KeReleaseSpinLock(&gmutCtxtList, byte_1C005A4A8);
  FreeDataBuffs(a1 + 128, 1u);
  v3 = KeAcquireSpinLockRaiseToDpc(&gdwGContextSpinLock);
  --gdwcCTObjs;
  KeReleaseSpinLock(&gdwGContextSpinLock, v3);
  if ( AcpiDiagTraceIsAmlTracingEnabled() )
  {
    ObjectPath = (char *)GetObjectPath(*(_QWORD *)(a1 + 72));
    AcpiDiagTraceAmlEvaluation(ObjectPath, 0);
    if ( ObjectPath )
      ExFreePoolWithTag(ObjectPath, 0);
  }
  v5 = *(_QWORD *)(a1 + 72);
  if ( v5 )
  {
    DereferenceObjectEx(v5);
    *(_QWORD *)(a1 + 72) = 0LL;
  }
  v6 = *(_QWORD *)(a1 + 424);
  if ( v6 )
  {
    DereferenceObjectEx(v6);
    *(_QWORD *)(a1 + 424) = 0LL;
  }
  v7 = *(_QWORD *)(a1 + 80);
  if ( v7 )
  {
    DereferenceObjectEx(v7);
    *(_QWORD *)(a1 + 80) = 0LL;
  }
  v8 = *(_QWORD **)(a1 + 456);
  if ( v8 )
  {
    do
    {
      v9 = (_QWORD *)v8[3];
      ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList, v8);
      v8 = v9;
    }
    while ( v9 );
  }
  ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&AMLIContextLookAsideList, (PVOID)a1);
}
