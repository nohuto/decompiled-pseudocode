/*
 * XREFs of RtlpLocateModuleSectionInLockedSectionList @ 0x1800021E8
 * Callers:
 *     RtlLockModuleSection @ 0x180002040 (RtlLockModuleSection.c)
 *     RtlUnlockModuleSection @ 0x180002140 (RtlUnlockModuleSection.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall RtlpLocateModuleSectionInLockedSectionList(char *a1)
{
  _UNKNOWN **i; // rdx
  char *v2; // r8

  for ( i = (_UNKNOWN **)RtlpLockedSectionList; i != &RtlpLockedSectionList; i = (_UNKNOWN **)*i )
  {
    v2 = (char *)i[2];
    if ( a1 >= v2 && a1 < (char *)i[3] + (unsigned __int64)v2 )
      return i;
  }
  return 0LL;
}
