/*
 * XREFs of NtTokenManagerThread @ 0x1C000E260
 * Callers:
 *     <none>
 * Callees:
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAII@Z @ 0x1C000E3E8 (-TokenThread@CTokenManager@@SAJPEAXPEAII@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  int v1; // ebx
  char *v2; // rsi
  int *v3; // rdi
  size_t v4; // r8
  void *Src[2]; // [rsp+28h] [rbp-60h]
  unsigned int v7[2]; // [rsp+38h] [rbp-50h]
  int v8; // [rsp+58h] [rbp-30h] BYREF
  __int64 v9; // [rsp+5Ch] [rbp-2Ch]
  __int64 v10; // [rsp+64h] [rbp-24h]

  v1 = 0;
  Src[0] = 0LL;
  v2 = 0LL;
  v7[0] = 0;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v3 = &v8;
  if ( a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)a1;
    *(_QWORD *)v7 = *(_QWORD *)(a1 + 16);
    v2 = *(char **)(a1 + 8);
  }
  else
  {
    v1 = -1073741811;
  }
  if ( v1 >= 0 )
  {
    if ( !v7[0] )
      v1 = -1073741811;
    if ( v1 >= 0 )
    {
      if ( v7[0] > 5 )
        v3 = (int *)Win32AllocPool(4LL * v7[0], 1650675028LL);
      if ( v3 )
      {
        v4 = 4LL * v7[0];
        if ( &v2[v4] < v2 || &v2[v4] > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v3, v2, v4);
      }
      else
      {
        v1 = -1073741801;
      }
      if ( v1 >= 0 )
      {
        if ( (unsigned int)UserIsCurrentProcessDwm(a1) )
          v1 = CTokenManager::TokenThread(Src[0], (unsigned int *)v3, v7[0]);
        else
          v1 = -1073741790;
      }
    }
  }
  if ( v3 && v3 != &v8 )
    Win32FreePool(v3);
  return (unsigned int)v1;
}
