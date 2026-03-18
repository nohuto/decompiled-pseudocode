/*
 * XREFs of MNAllocMenuState @ 0x1C0134728
 * Callers:
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 * Callees:
 *     MNSetupAnimationDC @ 0x1C00D75E4 (MNSetupAnimationDC.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

// write access to const memory has been detected, the output may be wrong!
_QWORD *__fastcall MNAllocMenuState(_DWORD *a1)
{
  _QWORD *v2; // rbx
  _QWORD *result; // rax
  __int64 v4; // rdx

  if ( (gdwPUDFlags & 0x2000000) != 0 )
  {
    v2 = (_QWORD *)Win32AllocPoolWithQuota(144LL, 1953330005LL);
    if ( v2 )
    {
      v2[17] = 0LL;
      if ( (unsigned int)MNSetupAnimationDC((__int64)v2, v4) )
        goto LABEL_3;
      Win32FreePool(v2);
    }
    return 0LL;
  }
  gdwPUDFlags |= 0x2000000u;
  v2 = gMenuState;
  GreSetDCOwnerEx(*((_QWORD *)&gMenuState + 17), 2147483650LL, 0LL, 0LL);
LABEL_3:
  memset(v2, 0, 0x88uLL);
  if ( *(_QWORD *)(gptiCurrent + 384LL) == gpqForeground )
  {
    *((_DWORD *)v2 + 2) |= 0x2000000u;
    ++guSFWLockCount;
  }
  *v2 = a1;
  v2[4] = gptiCurrent;
  *a1 |= 0x20000000u;
  v2[6] = *(_QWORD *)(gptiCurrent + 528LL);
  result = v2;
  *(_QWORD *)(gptiCurrent + 528LL) = v2;
  return result;
}
