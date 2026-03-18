/*
 * XREFs of MNAllocMenuState @ 0x1C013B658
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenuState @ 0x1C01F4A64 (xxxMNStartMenuState.c)
 * Callees:
 *     GreSelectFont @ 0x1C004CA30 (GreSelectFont.c)
 *     MNSetupAnimationDC @ 0x1C00BC588 (MNSetupAnimationDC.c)
 *     memset @ 0x1C015A380 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
HDC __fastcall MNAllocMenuState(_DWORD *a1)
{
  __int64 v2; // rdx
  HDC v3; // rbx
  HDC result; // rax
  __int64 v5; // rdx
  __int64 v6; // r8

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v3 = (HDC)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( !v3 )
      return 0LL;
    *((_QWORD *)v3 + 17) = 0LL;
    if ( !(unsigned int)MNSetupAnimationDC((__int64)v3, v2) )
    {
      Win32FreePool(v3, v5, v6);
      return 0LL;
    }
    GreSetDCOwnerEx(*((_QWORD *)v3 + 17), 0LL, 0LL, 1LL);
  }
  else
  {
    gdwPUDFlags |= 0x2000000u;
    v3 = gMenuState[0];
    GreSetDCOwnerEx(gMenuState[17], 2147483650LL, 0LL, 0LL);
    GetDPIMetrics();
    GreSelectFont(gMenuState[17]);
  }
  memset(v3, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
  {
    *((_DWORD *)v3 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *(_QWORD *)v3 = a1;
  *((_QWORD *)v3 + 4) = gptiCurrent;
  *a1 |= 0x20000000u;
  *((_QWORD *)v3 + 6) = *(_QWORD *)(gptiCurrent + 528LL);
  result = v3;
  *(_QWORD *)(gptiCurrent + 528LL) = v3;
  return result;
}
