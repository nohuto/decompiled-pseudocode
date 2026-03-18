/*
 * XREFs of IsShellThreadMiPEnabled @ 0x1C00E1D60
 * Callers:
 *     NtUserAutoPromoteMouseInPointer @ 0x1C0001260 (NtUserAutoPromoteMouseInPointer.c)
 *     IsMouseInPointerActive @ 0x1C00E1D04 (IsMouseInPointerActive.c)
 *     xxxMNEndMenuStateInternal @ 0x1C010B390 (xxxMNEndMenuStateInternal.c)
 *     _IsMiPShellThreadEnabled @ 0x1C01E2560 (_IsMiPShellThreadEnabled.c)
 *     NtUserPromoteMouseInPointer @ 0x1C021ECE0 (NtUserPromoteMouseInPointer.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsShellThreadMiPEnabled(_QWORD *a1)
{
  __int64 v1; // r8
  int v2; // eax
  _QWORD *i; // rcx

  v1 = a1[49];
  if ( a1[48] != *(_QWORD *)(*(_QWORD *)(a1[52] + 8LL) + 168LL) )
    return 0LL;
  v2 = 0;
  for ( i = gaptiShellMiP; !*i || *(_QWORD *)(*i + 392LL) != v1; ++i )
  {
    if ( (unsigned int)++v2 >= 5 )
      return 0LL;
  }
  return 1LL;
}
