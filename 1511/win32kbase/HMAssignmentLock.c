/*
 * XREFs of HMAssignmentLock @ 0x1C0041430
 * Callers:
 *     xxxCreateThreadInfo @ 0x1C003F3A0 (xxxCreateThreadInfo.c)
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0040F60 (zzzDestroyQueue.c)
 *     AllocQueue @ 0x1C0041270 (AllocQueue.c)
 *     rimDispatchCompleteFrame @ 0x1C00C8C44 (rimDispatchCompleteFrame.c)
 * Callees:
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 *     HMUnlockObjectInternal @ 0x1C0077C90 (HMUnlockObjectInternal.c)
 */

__int64 __fastcall HMAssignmentLock(_QWORD *a1, _DWORD *a2)
{
  _DWORD *v2; // rbx

  v2 = (_DWORD *)*a1;
  *a1 = a2;
  if ( !v2 || v2 != a2 )
  {
    if ( a2 )
    {
      if ( (*(_BYTE *)(dword_1C0102D50 * (unsigned int)(unsigned __int16)*a2 + qword_1C0102D48 + 17) & 1) != 0 )
        UserSetLastError(87LL);
      ++a2[2];
    }
    if ( v2 )
    {
      if ( v2[2]-- == 1 )
        return HMUnlockObjectInternal(v2);
    }
  }
  return (__int64)v2;
}
