/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0077C90
 * Callers:
 *     HMAssignmentLock @ 0x1C0041430 (HMAssignmentLock.c)
 *     HMUnlockObject @ 0x1C0077C6C (HMUnlockObject.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 */

_DWORD *__fastcall HMUnlockObjectInternal(_DWORD *a1)
{
  unsigned __int8 *v1; // rax
  unsigned __int8 v2; // dl

  v1 = (unsigned __int8 *)(qword_1C0102D48 + dword_1C0102D50 * (unsigned int)(unsigned __int16)*a1);
  v2 = v1[17];
  if ( (v2 & 1) == 0 || (v2 & 2) != 0 )
    return a1;
  HMDestroyUnlockedObject(v1);
  return 0LL;
}
