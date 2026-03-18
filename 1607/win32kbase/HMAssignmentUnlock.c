/*
 * XREFs of HMAssignmentUnlock @ 0x1C0014330
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0014070 (zzzDestroyQueue.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0038F60 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 */

_DWORD *__fastcall HMAssignmentUnlock(_DWORD **a1)
{
  _DWORD *v1; // rdx
  char v4; // al

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( v1[2]-- == 1 )
    {
      v4 = *(_BYTE *)(qword_1C011A128 + dword_1C011A130 * (unsigned int)(unsigned __int16)*v1 + 17);
      if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
      {
        HMDestroyUnlockedObject();
        return 0LL;
      }
    }
  }
  return v1;
}
