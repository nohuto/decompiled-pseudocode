/*
 * XREFs of MNAllocMenuState @ 0x1C0107674
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenuState @ 0x1C01FCFB8 (xxxMNStartMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C00567E0 (GreSelectFont.c)
 *     MNSetupAnimationDC @ 0x1C01387E8 (MNSetupAnimationDC.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocMenuState(_DWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (_QWORD *)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( !v2 )
      return 0LL;
    v2[17] = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC(v2) )
    {
      Win32FreePool(v2);
      return 0LL;
    }
    GreSetDCOwnerEx(v2[17], 0LL, 0LL, 1LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v2 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 0LL);
    GetDPIMetrics(v5, v4, v6);
    GreSelectFont(gMenuState[17]);
  }
  memset(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 392LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *v2 = a1;
  v2[4] = gptiCurrent;
  *a1 |= 0x20000000u;
  v2[6] = *(_QWORD *)(gptiCurrent + 536LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 536LL) = v2;
  return result;
}
