/*
 * XREFs of ?IsAnyNodeMessageNonDelegated@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01F8E70
 * Callers:
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     ?IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01DB740 (-IsPointerInfoNodeValid@@YAHPEBUtagPOINTERINFONODE@@@Z.c)
 */

__int64 __fastcall IsAnyNodeMessageNonDelegated(const struct tagPOINTERINFONODE *a1)
{
  __int64 result; // rax
  int *v2; // rcx
  unsigned int v3; // edx
  int v4; // eax
  int v5; // eax

  result = IsPointerInfoNodeValid(a1);
  v3 = 0;
  if ( (_DWORD)result )
  {
    v4 = *v2;
    if ( (*v2 & 0x80000) == 0
      || (v4 & 0x200000) != 0
      || (v4 & 0x400000) != 0 && ((v4 & 0x800000) == 0 || (v4 & 0x2000000) != 0) )
    {
      return 1;
    }
    if ( (v4 & 0x4000000) != 0 && ((v4 & 0x8000000) == 0 || (v4 & 0x20000000) != 0) )
      return 1;
    if ( (v4 & 0x40000000) != 0 && (v4 >= 0 || (v2[1] & 2) != 0) )
      return 1;
    v5 = v2[1];
    if ( (v5 & 4) != 0 && ((v5 & 8) == 0 || (v5 & 0x20) != 0) )
      return 1;
    return v3;
  }
  return result;
}
