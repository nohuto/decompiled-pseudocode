/*
 * XREFs of ResCLoadCultureMap @ 0x180105A7C
 * Callers:
 *     ResCRuntimeViewLoadCultureMap @ 0x1800FF784 (ResCRuntimeViewLoadCultureMap.c)
 *     ResCReloadCultureMap @ 0x180105B20 (ResCReloadCultureMap.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     _ResCDupString @ 0x180103814 (_ResCDupString.c)
 *     _ResCLoadFixedSize @ 0x180103908 (_ResCLoadFixedSize.c)
 *     _ResGetFileAttributesEx @ 0x180104948 (_ResGetFileAttributesEx.c)
 *     ResCFreeCultureMap @ 0x1801058E8 (ResCFreeCultureMap.c)
 */

unsigned __int64 __fastcall ResCLoadCultureMap(_WORD *Src)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // rbx
  unsigned int v4; // eax
  char *v5; // rax
  _BYTE v7[20]; // [rsp+28h] [rbp-40h] BYREF
  unsigned int v8; // [rsp+3Ch] [rbp-2Ch]
  unsigned int v9; // [rsp+40h] [rbp-28h]
  int v10; // [rsp+48h] [rbp-20h]

  v3 = ResCLoadFixedSize((__int64)Src);
  if ( v3 )
  {
    if ( (unsigned int)ResGetFileAttributesEx((int)Src, v2, (__int64)v7) )
    {
      v4 = v8;
      *(_DWORD *)(v3 + 48) = v10;
      *(_QWORD *)(v3 + 56) = __PAIR64__(v9, v4);
      v5 = ResCDupString(Src);
      *(_QWORD *)(v3 + 40) = v5;
      if ( !v5 )
      {
        ResCFreeCultureMap(v3);
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
