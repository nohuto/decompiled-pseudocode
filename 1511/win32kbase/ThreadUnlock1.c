/*
 * XREFs of ThreadUnlock1 @ 0x1C005EA20
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0040170 (xxxDestroyThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C0041EB0 (DestroyThreadsObjects.c)
 *     xxxEnumDisplayMonitors @ 0x1C005E4F0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C0041660 (HMDestroyUnlockedObject.c)
 */

_DWORD *ThreadUnlock1()
{
  _QWORD *v0; // rcx
  _DWORD *result; // rax
  unsigned __int8 *v3; // rcx
  unsigned __int8 v4; // dl

  v0 = (_QWORD *)*((_QWORD *)gptiCurrent + 46);
  *((_QWORD *)gptiCurrent + 46) = *v0;
  result = (_DWORD *)v0[1];
  if ( result )
  {
    if ( result[2]-- == 1 )
    {
      v3 = (unsigned __int8 *)(qword_1C0102D48 + dword_1C0102D50 * (unsigned int)(unsigned __int16)*result);
      v4 = v3[17];
      if ( (v4 & 1) != 0 && (v4 & 2) == 0 )
      {
        HMDestroyUnlockedObject(v3);
        return 0LL;
      }
    }
  }
  return result;
}
