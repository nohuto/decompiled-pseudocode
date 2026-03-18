/*
 * XREFs of HMAssignmentLock @ 0x1C0015370
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0014070 (zzzDestroyQueue.c)
 *     xxxCreateThreadInfo @ 0x1C0014378 (xxxCreateThreadInfo.c)
 *     AllocQueue @ 0x1C00151C0 (AllocQueue.c)
 *     rimDispatchCompleteFrame @ 0x1C00D831C (rimDispatchCompleteFrame.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     HMUnlockObjectInternal @ 0x1C007B320 (HMUnlockObjectInternal.c)
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
      if ( (*(_BYTE *)(dword_1C011A130 * (unsigned int)(unsigned __int16)*a2 + qword_1C011A128 + 17) & 1) != 0 )
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
