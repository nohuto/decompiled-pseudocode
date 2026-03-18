/*
 * XREFs of ?LockForRead@CSystemMemoryBitmap@@UEBAJAEBV?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@PEAPEAVIBitmapLock@@@Z @ 0x180182710
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSystemMemoryBitmap::LockForRead(__int64 a1, int *a2, __int64 a3)
{
  __int64 v3; // rax
  __int64 *v7; // rcx
  int v8; // r8d
  int v9; // edx
  int v10; // eax
  __int64 v11; // rax
  _DWORD v13[4]; // [rsp+30h] [rbp-28h] BYREF

  v3 = a1 - 256;
  v7 = 0LL;
  if ( v3 )
    v7 = (__int64 *)(a1 - 232);
  v8 = a2[1];
  v9 = *a2;
  v13[2] = a2[2] - v9;
  v10 = a2[3];
  v13[0] = v9;
  v13[3] = v10 - v8;
  v11 = *v7;
  v13[1] = v8;
  return (*(__int64 (__fastcall **)(__int64 *, _DWORD *, __int64, __int64))(v11 + 24))(v7, v13, 1LL, a3);
}
