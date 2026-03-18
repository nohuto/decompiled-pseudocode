/*
 * XREFs of ThreadUnlock1 @ 0x1C0052B70
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C004DF98 (xxxDestroyThreadInfo.c)
 *     DestroyThreadsObjects @ 0x1C004FEC0 (DestroyThreadsObjects.c)
 *     xxxEnumDisplayMonitors @ 0x1C0052BD0 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     HMDestroyUnlockedObject @ 0x1C004F7B0 (HMDestroyUnlockedObject.c)
 */

_DWORD *ThreadUnlock1()
{
  _QWORD *v0; // rcx
  _DWORD *result; // rax
  unsigned __int8 *v3; // rcx
  unsigned __int8 v4; // dl

  v0 = (_QWORD *)*((_QWORD *)gptiCurrent + 47);
  *((_QWORD *)gptiCurrent + 47) = *v0;
  result = (_DWORD *)v0[1];
  if ( result )
  {
    if ( result[2]-- == 1 )
    {
      v3 = (unsigned __int8 *)(qword_1C01003E8 + dword_1C01003F0 * (unsigned int)(unsigned __int16)*result);
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
