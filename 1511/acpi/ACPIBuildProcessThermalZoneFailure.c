/*
 * XREFs of ACPIBuildProcessThermalZoneFailure @ 0x1C00361A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ACPIBuildProcessThermalZoneFailure(PSLIST_ENTRY ListEntry)
{
  __int64 v1; // rbx
  void *v3; // rcx

  v1 = *((_QWORD *)&ListEntry[2].Next + 1);
  _InterlockedOr64((volatile signed __int64 *)v1, 0x2000000000000uLL);
  if ( *(_QWORD *)(v1 + 560) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v1, 0xFFFEBFFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 560), 0);
    *(_QWORD *)(v1 + 560) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 552) )
  {
    _InterlockedAnd64((volatile signed __int64 *)v1, 0xFFFF5FFFFFFFFFFFuLL);
    ExFreePoolWithTag(*(PVOID *)(v1 + 552), 0);
    *(_QWORD *)(v1 + 552) = 0LL;
  }
  v3 = *(void **)(v1 + 192);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(v1 + 192) = 0LL;
  }
  return ACPIBuildProcessGenericComplete(ListEntry);
}
