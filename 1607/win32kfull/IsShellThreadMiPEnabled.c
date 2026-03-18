/*
 * XREFs of IsShellThreadMiPEnabled @ 0x1C0105500
 * Callers:
 *     IsMouseInPointerActive @ 0x1C01054A0 (IsMouseInPointerActive.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0141310 (xxxMNEndMenuStateInternal.c)
 *     _IsMiPShellThreadEnabled @ 0x1C01D8C30 (_IsMiPShellThreadEnabled.c)
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0210C50 (NtUserAutoPromoteMouseInPointer.c)
 *     NtUserPromoteMouseInPointer @ 0x1C0218710 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellThreadMiPEnabled(_QWORD *a1)
{
  __int64 v1; // r8
  int v2; // eax
  _QWORD *i; // rcx

  v1 = a1[48];
  if ( a1[47] != *(_QWORD *)(*(_QWORD *)(a1[51] + 8LL) + 168LL) )
    return 0LL;
  v2 = 0;
  for ( i = gaptiShellMiP; !*i || *(_QWORD *)(*i + 384LL) != v1; ++i )
  {
    if ( (unsigned int)++v2 >= 5 )
      return 0LL;
  }
  return 1LL;
}
