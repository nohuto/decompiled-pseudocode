/*
 * XREFs of LdrpMapDllFullPath @ 0x180042CB4
 * Callers:
 *     LdrpProcessWork @ 0x18003913C (LdrpProcessWork.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     LdrpMapDllNtFileName @ 0x18003F1F8 (LdrpMapDllNtFileName.c)
 *     LdrpResolveDllName @ 0x18003F930 (LdrpResolveDllName.c)
 *     LdrpAppCompatRedirect @ 0x180042DFC (LdrpAppCompatRedirect.c)
 *     LdrpLoadContextReplaceModule @ 0x1800452D4 (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // rax
  int v3; // esi
  int v4; // r14d
  unsigned int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  _QWORD v9[2]; // [rsp+38h] [rbp-D0h] BYREF
  _UNICODE_STRING v10; // [rsp+48h] [rbp-C0h] BYREF
  _WORD v11[128]; // [rsp+58h] [rbp-B0h] BYREF

  *(_DWORD *)&v10.Length = 0x1000000;
  v10.Buffer = v11;
  v1 = *(_QWORD *)(a1 + 48);
  v9[0] = 0LL;
  v11[0] = 0;
  v3 = v1 + 72;
  v4 = v1 + 88;
  v5 = LdrpResolveDllName(
         (_UNICODE_STRING *)a1,
         &v10,
         (_UNICODE_STRING *)(v1 + 88),
         (_OWORD *)(v1 + 72),
         (__int64)v9,
         *(_DWORD *)(a1 + 24));
  v6 = v5;
  if ( v9[0] || (v7 = LdrpAppCompatRedirect(a1, v3, v4, (unsigned int)&v10, (__int64)v9, v5), v6 = v7, v9[0]) )
  {
    LdrpLoadContextReplaceModule(a1);
  }
  else if ( v7 >= 0 )
  {
    v6 = LdrpMapDllNtFileName(a1, &v10);
    if ( v6 == 1073741838 )
      v6 = -1073741701;
  }
  if ( v11 != v10.Buffer )
    NtdllpFreeStringRoutine(v10.Buffer);
  return v6;
}
