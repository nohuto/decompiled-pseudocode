/*
 * XREFs of HMAssignmentLock @ 0x1C004D0A0
 * Callers:
 *     AllocQueue @ 0x1C004CEE0 (AllocQueue.c)
 *     xxxCreateThreadInfo @ 0x1C004D110 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C004ED10 (zzzDestroyQueue.c)
 *     rimDispatchCompleteFrame @ 0x1C00C7D4C (rimDispatchCompleteFrame.c)
 * Callees:
 *     HMUnlockObjectInternal @ 0x1C0015A90 (HMUnlockObjectInternal.c)
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 */

_DWORD *__fastcall HMAssignmentLock(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v2; // rbx

  v2 = *a1;
  *a1 = a2;
  if ( !v2 || v2 != a2 )
  {
    if ( a2 )
    {
      if ( (*(_BYTE *)(dword_1C01003F0 * (unsigned int)(unsigned __int16)*a2 + qword_1C01003E8 + 17) & 1) != 0 )
        UserSetLastError(87LL, (__int64)a2);
      ++a2[2];
    }
    if ( v2 )
    {
      if ( v2[2]-- == 1 )
        return HMUnlockObjectInternal(v2);
    }
  }
  return v2;
}
