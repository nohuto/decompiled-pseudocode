/*
 * XREFs of WaitMaskIncludesUserInput @ 0x1C00F9328
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C00698F0 (xxxRealInternalGetMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WaitMaskIncludesUserInput(char a1)
{
  unsigned int v1; // edx

  v1 = 0;
  if ( (a1 & 7) == 7 || (a1 & 6) != 0 && *(_QWORD *)(*(_QWORD *)(gptiCurrent + 392LL) + 64LL) )
    return 1;
  return v1;
}
