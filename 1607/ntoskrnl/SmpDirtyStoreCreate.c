/*
 * XREFs of SmpDirtyStoreCreate @ 0x1403E4C3C
 * Callers:
 *     SmpKeyedStoreCreate @ 0x1403E4B74 (SmpKeyedStoreCreate.c)
 *     SmpSystemStoreCreate @ 0x14057BA6C (SmpSystemStoreCreate.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SmProcessCreateRequest @ 0x1403E517C (SmProcessCreateRequest.c)
 */

__int64 __fastcall SmpDirtyStoreCreate(__int64 a1, unsigned int a2, int a3, _DWORD *a4)
{
  __int64 v4; // rbp
  unsigned int v8; // edx
  int v9; // eax
  bool v10; // zf
  int v11; // edx
  unsigned __int64 v12; // rax
  __int64 result; // rax
  _DWORD v14[24]; // [rsp+20h] [rbp-98h] BYREF

  v4 = a2;
  memset(v14, 0, 0x58uLL);
  v14[3] = 128;
  v14[0] = v14[0] & 0xFFFFFD06 | ((a3 & 1) << 9) | 0x106;
  v14[4] = 0x20000;
  v9 = 0;
  if ( a3 )
    v10 = (dword_1403BF148 & 0xC) == 8;
  else
    v10 = (dword_1403BF148 & 3) == 2;
  LOBYTE(v9) = v10;
  v8 = v14[2] & 0xFFFEFF00 | ((dword_1403BF148 & 0x10 | 0x40) << 12);
  v11 = (v8 ^ (v9 << 17)) & 0x20000 ^ v8;
  v12 = (8 * v4) & 0x7FFFFFFFFFFFLL;
  v14[2] = v11;
  if ( v12 >= 0x40000 )
    LODWORD(v12) = 0x40000;
  v14[5] = v12;
  result = SmProcessCreateRequest(a1, v14, 88LL, 0LL);
  if ( (int)result >= 0 )
  {
    *a4 = v14[20];
    return 0LL;
  }
  return result;
}
