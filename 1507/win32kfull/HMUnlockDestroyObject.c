/*
 * XREFs of HMUnlockDestroyObject @ 0x1C01F0A68
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01208BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0121244 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z @ 0x1C0121384 (-UT_FreeCBFormat@@YAXPEAUtagCLIP@@@Z.c)
 *     _ConvertMemHandle @ 0x1C0121404 (_ConvertMemHandle.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0480 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 * Callees:
 *     HMUnlockObject @ 0x1C00DF9F0 (HMUnlockObject.c)
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
