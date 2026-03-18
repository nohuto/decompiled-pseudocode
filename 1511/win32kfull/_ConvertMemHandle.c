/*
 * XREFs of _ConvertMemHandle @ 0x1C014B114
 * Callers:
 *     ?MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z @ 0x1C014A038 (-MungeClipData@@YAXPEAUtagWINDOWSTATION@@@Z.c)
 *     ?xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C014AF54 (-xxxGetDummyDib@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     ?xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z @ 0x1C01F03E4 (-xxxGetDummyDibV5@@YAPEAXPEAUtagWINDOWSTATION@@PEAUtagGETCLIPBDATA@@@Z.c)
 *     NtUserConvertMemHandle @ 0x1C0218730 (NtUserConvertMemHandle.c)
 * Callees:
 *     memmove @ 0x1C0152980 (memmove.c)
 *     HMUnlockDestroyObject @ 0x1C01F09CC (HMUnlockDestroyObject.c)
 */

__int64 __fastcall ConvertMemHandle(void *Src, size_t Size, __int64 a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r9d
  _DWORD *v6; // rax
  _DWORD *v7; // rbx

  v3 = Size;
  v5 = Size + 20;
  if ( (unsigned int)(Size + 20) < 0x18 )
    v5 = 24;
  if ( v5 < (unsigned int)Size )
    return 0LL;
  LOBYTE(a3) = 6;
  v6 = (_DWORD *)HMAllocObject(0LL, 0LL, a3);
  v7 = v6;
  if ( !v6 )
    return 0LL;
  ++v6[2];
  v6[4] = v3;
  memmove(v6 + 5, Src, v3);
  return *(_QWORD *)v7;
}
