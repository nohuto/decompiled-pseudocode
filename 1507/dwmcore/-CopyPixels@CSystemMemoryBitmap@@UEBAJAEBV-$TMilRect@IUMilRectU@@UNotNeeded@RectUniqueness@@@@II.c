/*
 * XREFs of ?CopyPixels@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x180143920
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CSystemMemoryBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 *v5; // rdi
  int v8; // edx
  int v9; // r10d
  int v10; // eax
  __int64 v11; // rax
  _DWORD v13[4]; // [rsp+30h] [rbp-48h] BYREF

  v5 = 0LL;
  if ( a1 != 256 )
    v5 = (__int64 *)(a1 - 240);
  v8 = *a2;
  v9 = a2[1];
  v13[2] = a2[2] - v8;
  v10 = a2[3] - v9;
  v13[0] = v8;
  v13[3] = v10;
  v11 = *v5;
  v13[1] = v9;
  return (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD, __int64))(v11 + 72))(v5, v13, a3, a4, a5);
}
