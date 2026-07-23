/*
 * XREFs of LdrpMapDllFullPath @ 0x18000946C
 * Callers:
 *     LdrpProcessWork @ 0x18000928C (LdrpProcessWork.c)
 * Callees:
 *     LdrpMapDllNtFileName @ 0x180007960 (LdrpMapDllNtFileName.c)
 *     LdrpAppCompatRedirect @ 0x1800090C4 (LdrpAppCompatRedirect.c)
 *     LdrpResolveDllName @ 0x18000CFF8 (LdrpResolveDllName.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     LdrpLoadContextReplaceModule @ 0x18007665C (LdrpLoadContextReplaceModule.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 */

__int64 __fastcall LdrpMapDllFullPath(__int64 a1)
{
  __int64 v1; // rax
  __int64 v3; // rsi
  __int64 v4; // r14
  int v5; // eax
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
  v5 = LdrpResolveDllName(a1, &v10, v1 + 88, v1 + 72, v9, *(_DWORD *)(a1 + 24));
  v6 = v5;
  if ( v9[0] || (v7 = LdrpAppCompatRedirect(a1, v3, v4, (__int64)&v10, (__int64)v9, v5), v6 = v7, v9[0]) )
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
    NtdllpFreeStringRoutine();
  return v6;
}
