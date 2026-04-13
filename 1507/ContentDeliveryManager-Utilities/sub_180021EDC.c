/*
 * XREFs of sub_180021EDC @ 0x180021EDC
 * Callers:
 *     sub_18000AB98 @ 0x18000AB98 (sub_18000AB98.c)
 *     sub_18000B010 @ 0x18000B010 (sub_18000B010.c)
 *     sub_18000B060 @ 0x18000B060 (sub_18000B060.c)
 *     sub_180018F50 @ 0x180018F50 (sub_180018F50.c)
 * Callees:
 *     sub_180021180 @ 0x180021180 (sub_180021180.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

__int64 __fastcall sub_180021EDC(LPWSTR lpWideCharStr, LPCCH lpMultiByteStr, unsigned __int64 a3, __int64 a4, UINT *a5)
{
  UINT *v5; // rbx
  _OWORD *v11; // rax
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  unsigned __int64 v14; // rcx
  _DWORD v15[12]; // [rsp+30h] [rbp-98h] BYREF
  _OWORD v16[3]; // [rsp+60h] [rbp-68h] BYREF

  v5 = a5;
  if ( !lpMultiByteStr || !a3 )
    return 0LL;
  if ( !*lpMultiByteStr )
  {
    if ( lpWideCharStr )
      *lpWideCharStr = 0;
    return 0LL;
  }
  if ( !a5 )
  {
    v11 = sub_180021180(v15);
    v5 = (UINT *)v16;
    v12 = v11[1];
    v16[0] = *v11;
    v13 = v11[2];
    v16[1] = v12;
    v16[2] = v13;
  }
  if ( v5[3] )
  {
    if ( lpWideCharStr )
      *lpWideCharStr = *(unsigned __int8 *)lpMultiByteStr;
    return 1LL;
  }
  if ( *(_DWORD *)a4 )
  {
    *(_BYTE *)(a4 + 1) = *lpMultiByteStr;
    if ( v5[2] > 1 && MultiByteToWideChar(v5[1], 9u, (LPCCH)a4, 2, lpWideCharStr, lpWideCharStr != 0LL) )
    {
      *(_DWORD *)a4 = 0;
      return v5[2];
    }
    goto LABEL_18;
  }
  if ( ((unsigned __int8)(1 << (*lpMultiByteStr & 7)) & *((_BYTE *)v5
                                                        + ((unsigned __int64)*(unsigned __int8 *)lpMultiByteStr >> 3)
                                                        + 16)) == 0 )
  {
    if ( MultiByteToWideChar(v5[1], 9u, lpMultiByteStr, 1, lpWideCharStr, lpWideCharStr != 0LL) )
      return 1LL;
    goto LABEL_19;
  }
  v14 = v5[2];
  if ( a3 >= v14 )
  {
    if ( (unsigned int)v14 > 1
      && MultiByteToWideChar(v5[1], 9u, lpMultiByteStr, v14, lpWideCharStr, lpWideCharStr != 0LL)
      || lpMultiByteStr[1] )
    {
      return v5[2];
    }
LABEL_18:
    *(_DWORD *)a4 = 0;
LABEL_19:
    *errno() = 42;
    return 0xFFFFFFFFLL;
  }
  *(_BYTE *)a4 = *lpMultiByteStr;
  return 4294967294LL;
}
