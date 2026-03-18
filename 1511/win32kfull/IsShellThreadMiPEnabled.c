/*
 * XREFs of IsShellThreadMiPEnabled @ 0x1C0064470
 * Callers:
 *     NtUserAutoPromoteMouseInPointer @ 0x1C000C2D0 (NtUserAutoPromoteMouseInPointer.c)
 *     IsMouseInPointerActive @ 0x1C006440C (IsMouseInPointerActive.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0137890 (xxxMNEndMenuStateInternal.c)
 *     _IsMiPShellThreadEnabled @ 0x1C01E29F0 (_IsMiPShellThreadEnabled.c)
 *     NtUserPromoteMouseInPointer @ 0x1C021EAE0 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellThreadMiPEnabled(_QWORD *a1)
{
  __int64 v1; // r8
  int v2; // eax
  char *i; // rcx

  v1 = a1[48];
  if ( a1[47] != *(_QWORD *)(*(_QWORD *)(a1[51] + 8LL) + 168LL) )
    return 0LL;
  v2 = 0;
  for ( i = (char *)&gaptiShellMiP; !*(_QWORD *)i || *(_QWORD *)(*(_QWORD *)i + 384LL) != v1; i += 8 )
  {
    if ( (unsigned int)++v2 >= 5 )
      return 0LL;
  }
  return 1LL;
}
