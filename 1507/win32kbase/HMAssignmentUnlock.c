/*
 * XREFs of HMAssignmentUnlock @ 0x1C004EFD0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C004ED10 (zzzDestroyQueue.c)
 *     DestroyThreadsObjects @ 0x1C004FEC0 (DestroyThreadsObjects.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C00519E0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C004F7B0 (HMDestroyUnlockedObject.c)
 */

_DWORD *__fastcall HMAssignmentUnlock(_DWORD **a1)
{
  _DWORD *v1; // rdx
  __int64 v3; // rcx
  char v4; // al

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
    {
      v3 = qword_1C01003E8 + dword_1C01003F0 * (unsigned int)(unsigned __int16)*v1;
      v4 = *(_BYTE *)(v3 + 17);
      if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
      {
        HMDestroyUnlockedObject(v3);
        return 0LL;
      }
    }
  }
  return v1;
}
