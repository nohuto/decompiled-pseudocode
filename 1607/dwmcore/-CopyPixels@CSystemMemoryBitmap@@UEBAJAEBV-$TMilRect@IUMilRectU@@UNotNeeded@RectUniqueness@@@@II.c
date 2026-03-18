/*
 * XREFs of ?CopyPixels@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@IIPEAE@Z @ 0x1801820F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::CopyPixels(__int64 a1, int *a2, unsigned int a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rax
  __int64 *v10; // rcx
  int v11; // edx
  int v12; // r10d
  int v13; // eax
  __int64 v14; // rax
  _DWORD v16[4]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a1 - 256;
  v10 = 0LL;
  if ( v5 )
    v10 = (__int64 *)(a1 - 240);
  v11 = *a2;
  v12 = a2[1];
  v16[2] = a2[2] - v11;
  v13 = a2[3];
  v16[0] = v11;
  v16[3] = v13 - v12;
  v14 = *v10;
  v16[1] = v12;
  return (*(__int64 (__fastcall **)(__int64 *, _DWORD *, _QWORD, _QWORD, __int64))(v14 + 72))(v10, v16, a3, a4, a5);
}
