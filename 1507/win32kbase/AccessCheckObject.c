/*
 * XREFs of AccessCheckObject @ 0x1C0013C50
 * Callers:
 *     OpenCacheKeyEx @ 0x1C0032120 (OpenCacheKeyEx.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 */

_BOOL8 __fastcall AccessCheckObject(__int64 a1, unsigned int a2, char a3, void *a4)
{
  bool v6; // bl
  __int64 v7; // r9
  __int64 v8; // r8
  char v9; // bl
  _BYTE v11[16]; // [rsp+30h] [rbp-1B8h] BYREF
  _BYTE v12[160]; // [rsp+40h] [rbp-1A8h] BYREF
  _BYTE v13[224]; // [rsp+E0h] [rbp-108h] BYREF

  v6 = a4 == &KeyMapping;
  SeCreateAccessState(v12, v13, a2);
  LOBYTE(v7) = a3;
  LOBYTE(v8) = v6;
  v9 = ObCheckObjectAccess(a1, v12, v8, v7, v11);
  SeDeleteAccessState(v12);
  return v9 == 1;
}
