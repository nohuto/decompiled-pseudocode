/*
 * XREFs of ViDeadlockSearchResource @ 0x1406CDE28
 * Callers:
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1406CC970 (ViDeadlockAddResource.c)
 * Callees:
 *     VfUtilAddressRangeFit @ 0x1406B7390 (VfUtilAddressRangeFit.c)
 *     ViDeadlockTrimResources @ 0x1406CDF90 (ViDeadlockTrimResources.c)
 */

_QWORD *__fastcall ViDeadlockSearchResource(unsigned __int64 a1)
{
  unsigned __int64 v2; // rcx
  _QWORD **v3; // rbx
  __int64 v4; // r10
  _QWORD *i; // rax

  v2 = (a1 >> 12) % 0x3FF;
  v3 = (_QWORD **)(*((_QWORD *)ViDeadlockGlobals + 2) + 16 * v2);
  if ( *v3 != v3 && (unsigned int)VfUtilAddressRangeFit((unsigned __int64 *)ViDeadlockGlobals + 2 * v2 + 4, a1, a1 + 1) )
  {
    ViDeadlockTrimResources(v3, v4);
    for ( i = *v3; i != v3; i = (_QWORD *)*i )
    {
      if ( *(i - 4) == a1 )
        return i - 5;
    }
  }
  return 0LL;
}
