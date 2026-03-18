/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C020E630
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 */

__int64 __fastcall MNSetTimerToOpenHierarchy(struct tagPOPUPMENU *a1)
{
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // rdx

  v2 = *((unsigned int *)a1 + 20);
  if ( (_DWORD)v2 == -1 )
    return 0LL;
  v3 = *((_QWORD *)a1 + 5);
  if ( (unsigned int)v2 >= *(_DWORD *)(v3 + 52) )
    return 0LL;
  v4 = *(_QWORD *)(v3 + 80) + 152 * v2;
  if ( !*(_QWORD *)(v4 + 16) || (*(_DWORD *)(v4 + 4) & 3) != 0 )
    return 0LL;
  if ( (*(_DWORD *)a1 & 0x2000) == 0 && ((*(_DWORD *)a1 & 0x20) == 0 || (_DWORD)v2 != *((_DWORD *)a1 + 21)) )
  {
    if ( !InternalSetTimer(*((_QWORD *)a1 + 2), 65534LL, (unsigned int)gdtMNDropDown, 0LL, 0, 16) )
      return 0xFFFFFFFFLL;
    *(_DWORD *)a1 |= 0x2000u;
  }
  return 1LL;
}
