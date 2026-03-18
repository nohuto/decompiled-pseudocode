/*
 * XREFs of ?MNSetTimerToOpenHierarchy@@YAIPEAUtagPOPUPMENU@@@Z @ 0x1C02157C8
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 * Callees:
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
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
    if ( !InternalSetTimer(*((_QWORD *)a1 + 2), 65534LL, gdtMNDropDown, 0LL, 0, 16) )
      return 0xFFFFFFFFLL;
    *(_DWORD *)a1 |= 0x2000u;
  }
  return 1LL;
}
