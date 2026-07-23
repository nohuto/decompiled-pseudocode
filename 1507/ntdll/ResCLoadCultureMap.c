/*
 * XREFs of ResCLoadCultureMap @ 0x1800FBBFC
 * Callers:
 *     ResCRuntimeViewLoadCultureMap @ 0x1800F7A98 (ResCRuntimeViewLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x1800FBCA0 (ResCReloadCultureMap.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     _ResCDupString @ 0x1800F9568 (_ResCDupString.c)
 *     _ResCLoadFixedSize @ 0x1800F965C (_ResCLoadFixedSize.c)
 *     _ResGetFileAttributesEx @ 0x1800FA684 (_ResGetFileAttributesEx.c)
 *     ResCFreeCultureMap @ 0x1800FBA68 (ResCFreeCultureMap.c)
 */

__int64 __fastcall ResCLoadCultureMap(WCHAR *Src)
{
  __int64 v2; // rdx
  __int64 v3; // rbx
  unsigned int v4; // eax
  char *v5; // rax
  _BYTE v7[20]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v3 = ResCLoadFixedSize(Src);
  if ( v3 )
  {
    if ( (unsigned int)ResGetFileAttributesEx(Src, v2, (__int64)v7) )
    {
      v4 = v8;
      *(_DWORD *)(v3 + 48) = v10;
      *(_QWORD *)(v3 + 56) = __PAIR64__(v9, v4);
      v5 = ResCDupString(Src);
      *(_QWORD *)(v3 + 40) = v5;
      if ( !v5 )
      {
        ResCFreeCultureMap((_QWORD *)v3);
        return 0LL;
      }
    }
    else
    {
      *(_DWORD *)(v3 + 48) = 0;
      *(_QWORD *)(v3 + 56) = 0LL;
    }
  }
  return v3;
}
