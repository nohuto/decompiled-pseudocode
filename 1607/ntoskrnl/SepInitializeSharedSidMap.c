/*
 * XREFs of SepInitializeSharedSidMap @ 0x14054D488
 * Callers:
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 * Callees:
 *     RtlCreateHashTable @ 0x1400A7ADC (RtlCreateHashTable.c)
 */

__int64 SepInitializeSharedSidMap()
{
  PRTL_DYNAMIC_HASH_TABLE *v0; // rcx
  unsigned int v1; // ebx

  v0 = (PRTL_DYNAMIC_HASH_TABLE *)g_SepSidMapping;
  v1 = 0;
  *(_QWORD *)g_SepSidMapping = 0LL;
  *++v0 = 0LL;
  if ( !RtlCreateHashTable(v0, 0, 0) )
    return (unsigned int)-1073741801;
  return v1;
}
