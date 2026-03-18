/*
 * XREFs of HMUnlockDestroyObject @ 0x1C01E670C
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014F720 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0150474 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C01505B4 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1C0150634 (_ConvertMemHandle.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01E6124 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C005EAEC (HMUnlockObject.c)
 */

__int64 __fastcall HMUnlockDestroyObject(__int64 a1)
{
  __int64 v1; // rbx

  v1 = a1;
  if ( *(_DWORD *)(a1 + 8) == 1 )
  {
    HMMarkObjectDestroy(a1);
    return HMUnlockObject(v1);
  }
  return v1;
}
