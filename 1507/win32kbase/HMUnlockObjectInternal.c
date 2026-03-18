/*
 * XREFs of HMUnlockObjectInternal @ 0x1C0015A90
 * Callers:
 *     HMAssignmentLock @ 0x1C004D0A0 (HMAssignmentLock.c)
 *     HMUnlockObject @ 0x1C007F16C (HMUnlockObject.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C004F7B0 (HMDestroyUnlockedObject.c)
 */

_DWORD *__fastcall HMUnlockObjectInternal(_DWORD *a1)
{
  __int64 v1; // rax
  char v2; // dl

  v1 = qword_1C01003E8 + dword_1C01003F0 * (unsigned int)(unsigned __int16)*a1;
  v2 = *(_BYTE *)(v1 + 17);
  if ( (v2 & 1) == 0 || (v2 & 2) != 0 )
    return a1;
  HMDestroyUnlockedObject(v1);
  return 0LL;
}
