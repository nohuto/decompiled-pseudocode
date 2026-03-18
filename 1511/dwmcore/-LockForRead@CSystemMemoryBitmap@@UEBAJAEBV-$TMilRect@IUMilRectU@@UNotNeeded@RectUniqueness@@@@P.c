/*
 * XREFs of ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x1801520B0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CSystemMemoryBitmap::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  __int64 *v3; // rdi
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // rax
  _DWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF

  v3 = 0LL;
  if ( a1 != 256 )
    v3 = (__int64 *)(a1 - 232);
  v6 = *a2;
  v7 = a2[1];
  v11[2] = a2[2] - v6;
  v8 = a2[3] - v7;
  v11[0] = v6;
  v11[3] = v8;
  v9 = *v3;
  v11[1] = v7;
  return (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64, __int64))(v9 + 24))(v3, v11, 1LL, a3);
}
