/*
 * XREFs of DpiPdoRemovePdoObjects @ 0x1C019C6F8
 * Callers:
 *     DpiFdoCreateRelatedObjects @ 0x1C00EC0D8 (DpiFdoCreateRelatedObjects.c)
 *     DpiFdoDestroyRelatedObjects @ 0x1C0193AB4 (DpiFdoDestroyRelatedObjects.c)
 * Callees:
 *     DpiPdoDestroyPendingPdoObjects @ 0x1C019BF10 (DpiPdoDestroyPendingPdoObjects.c)
 *     DpiPdoRemovePdo @ 0x1C019C49C (DpiPdoRemovePdo.c)
 */

__int64 __fastcall DpiPdoRemovePdoObjects(__int64 a1, char a2, struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rbx
  struct _ERESOURCE *v7; // rbp
  __int64 v8; // r9
  __int64 i; // rbx
  __int64 v10; // rax

  v3 = *(_QWORD *)(a1 + 64);
  ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v3 + 168));
  KeEnterCriticalRegion();
  v7 = (struct _ERESOURCE *)(v3 + 3120);
  ExAcquireResourceExclusiveLite((PERESOURCE)(v3 + 3120), 1u);
  for ( i = *(_QWORD *)(v3 + 3112); i; i += 120LL )
  {
    if ( !*(_DWORD *)i )
      break;
    v10 = *(_QWORD *)(i + 40);
    if ( v10 )
    {
      if ( a2 )
        *(_BYTE *)(*(_QWORD *)(v10 + 64) + 509LL) = 0;
      DpiPdoRemovePdo(a1, i, a3, v8);
    }
  }
  if ( a2 )
    DpiPdoDestroyPendingPdoObjects(a1);
  ExReleaseResourceLite(v7);
  KeLeaveCriticalRegion();
  return 0LL;
}
