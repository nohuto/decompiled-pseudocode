/*
 * XREFs of ThreadUnlock1 @ 0x1C00590B0
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00131CC (xxxDestroyThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C0039100 (DestroyThreadsObjects.c)
 *     xxxEnumDisplayMonitors @ 0x1C0058B60 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C003A710 (HMDestroyUnlockedObject.c)
 */

_DWORD *ThreadUnlock1()
{
  _QWORD *v0; // rcx
  _DWORD *result; // rax
  __int64 v3; // rcx
  char v4; // dl

  v0 = (_QWORD *)*((_QWORD *)gptiCurrent + 46);
  *((_QWORD *)gptiCurrent + 46) = *v0;
  result = (_DWORD *)v0[1];
  if ( result )
  {
    if ( result[2]-- == 1 )
    {
      v3 = qword_1C011A128 + dword_1C011A130 * (unsigned int)(unsigned __int16)*result;
      v4 = *(_BYTE *)(v3 + 17);
      if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
      {
        HMDestroyUnlockedObject((ULONG_PTR *)v3);
        return 0LL;
      }
    }
  }
  return result;
}
