/*
 * XREFs of ?IsNodeMessageDelegated@@YAHPEBUtagPOINTERINFONODE@@I@Z @ 0x1C01F00E8
 * Callers:
 *     ?GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z @ 0x1C01EFF9C (-GetQueueForCurrentNode@@YAPEAUtagQ@@PEAUtagTHREADINFO@@HIHPEBUtagPOINTERINFONODE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsNodeMessageDelegated(const struct tagPOINTERINFONODE *a1, int a2)
{
  int v2; // eax
  int v4; // eax
  int v5; // edx
  _BOOL8 result; // rax
  int v7; // eax
  int v8; // eax

  if ( a2 == 585 )
  {
    v2 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x800000) != 0 && (v2 & 0x1000000) != 0 && (v2 & 0x2000000) == 0 )
      return (v2 & 0x4000000) == 0;
    return 0LL;
  }
  if ( a2 == 586 )
  {
    v4 = *(_DWORD *)a1;
    if ( (*(_DWORD *)a1 & 0x8000000) == 0 || (v4 & 0x10000000) == 0 || (v4 & 0x20000000) != 0 )
      return 0LL;
    return (v4 & 0x40000000) == 0;
  }
  if ( a2 != 593 )
  {
    if ( a2 == 594 )
    {
      v7 = *((_DWORD *)a1 + 1);
      if ( (v7 & 8) == 0 || (v7 & 0x10) == 0 || (v7 & 0x20) != 0 )
        return 0LL;
      return (v7 & 0x40) == 0;
    }
    else
    {
      v8 = *(_DWORD *)a1;
      if ( (*(_DWORD *)a1 & 0x100000) == 0 || (v8 & 0x200000) != 0 )
        return 0LL;
      return (v8 & 0x400000) == 0;
    }
  }
  if ( *(int *)a1 >= 0 )
    return 0LL;
  v5 = *((_DWORD *)a1 + 1);
  result = 1LL;
  if ( (v5 & 1) == 0 || (v5 & 2) != 0 || (v5 & 4) != 0 )
    return 0LL;
  return result;
}
