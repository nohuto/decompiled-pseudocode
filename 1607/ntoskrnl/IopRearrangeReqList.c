/*
 * XREFs of IopRearrangeReqList @ 0x1405780EC
 * Callers:
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpRestoreResourcesInternal @ 0x14064BF2C (PnpRestoreResourcesInternal.c)
 * Callees:
 *     qsort @ 0x14014E520 (qsort.c)
 */

unsigned __int64 __fastcall IopRearrangeReqList(__int64 a1)
{
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // rcx
  unsigned __int64 v4; // rdx
  unsigned int v5; // edx

  if ( *(_DWORD *)(a1 + 32) > 1u )
  {
    v5 = 0;
    do
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v5 + 40) + 4LL) = v5;
      ++v5;
    }
    while ( v5 < *(_DWORD *)(a1 + 32) );
    qsort((void *)(a1 + 40), *(unsigned int *)(a1 + 32), 8uLL, IopCompareReqAlternativePriority);
  }
  result = *(unsigned int *)(a1 + 32);
  v3 = (unsigned __int64 *)(a1 + 40);
  v4 = a1 + 40 + 8 * result;
  if ( a1 + 40 < v4 )
  {
    do
    {
      result = *v3;
      if ( *(_DWORD *)*v3 > 0x7FFFu )
        break;
      ++v3;
    }
    while ( (unsigned __int64)v3 < v4 );
  }
  if ( v3 == (unsigned __int64 *)(a1 + 40) )
    v3 = 0LL;
  *(_QWORD *)(a1 + 24) = v3;
  return result;
}
