/*
 * XREFs of DpiPdoRemovePdoObjects @ 0x1C016E250
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00C4630 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0167428 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C016DA50 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiPdoRemovePdo @ 0x1C016DFB0 (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoRemovePdoObjects(__int64 a1, char a2)
{
  __int64 v2; // rbx
  struct _ERESOURCE *v5; // rbp
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 i; // rbx
  __int64 v9; // rax

  v2 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v2 + 168));
  KeEnterCriticalRegion();
  v5 = (struct _ERESOURCE *)(v2 + 1936);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v2 + 1936), 1u);
  for ( i = *(_QWORD *)(v2 + 1928); i; i += 120LL )
  {
    if ( !*(_DWORD *)i )
      break;
    v9 = *(_QWORD *)(i + 40);
    if ( v9 )
    {
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v9 + 64) + 477LL) = 0;
      DpiPdoRemovePdo(a1, i, v6, v7);
    }
  }
  if ( a2 )
    DpiPdoDestroyPendingPdoObjects(a1);
  ExReleaseResourceLite(v5);
  KeLeaveCriticalRegion();
  return 0LL;
}
