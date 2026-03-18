/*
 * XREFs of _ConvertMemHandle @ 0x1C0121404
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C01208BC (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C0121244 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F0480 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     NtUserConvertMemHandle @ 0x1C02188C0 (NtUserConvertMemHandle.c)
 * Callees:
 *     memmove @ 0x1C015D180 (memmove.c)
 *     HMUnlockDestroyObject @ 0x1C01F0A68 (HMUnlockDestroyObject.c)
 */

__int64 __fastcall ConvertMemHandle(void *Src, size_t Size, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v5; // r9
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v3 = Size;
  v5 = (unsigned int)(Size + 20);
  if ( (unsigned int)v5 < 0x18 )
    v5 = 24LL;
  if ( (unsigned int)v5 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 6;
  v6 = (_DWORD *)HMAllocObject(0LL, 0LL, a3, v5);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  ++v6[2];
  v6[4] = v3;
  memmove(v6 + 5, Src, v3);
  return *(_QWORD *)v7;
}
