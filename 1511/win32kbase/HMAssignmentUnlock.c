/*
 * XREFs of HMAssignmentUnlock @ 0x1C0041220
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     zzzDestroyQueue @ 0x1C0040F60 (zzzDestroyQueue.c)
 *     ?DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z @ 0x1C0041CF0 (-DestroyProcessesObjects@@YAXPEAUtagPROCESSINFO@@@Z.c)
 *     DestroyThreadsObjects @ 0x1C0041EB0 (DestroyThreadsObjects.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 */

_DWORD *__fastcall HMAssignmentUnlock(_DWORD **a1)
{
  _DWORD *result; // rax
  char v3; // dl

  result = *a1;
  *a1 = 0LL;
  if ( result )
  {
    if ( result[2]-- == 1 )
    {
      v3 = *(_BYTE *)(qword_1C0102D48 + dword_1C0102D50 * (unsigned int)(unsigned __int16)*result + 17);
      if ( (v3 & 1) != 0 && (v3 & 2) == 0 )
      {
        HMDestroyUnlockedObject();
        return 0LL;
      }
    }
  }
  return result;
}
