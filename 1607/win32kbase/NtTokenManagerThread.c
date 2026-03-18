/*
 * XREFs of NtTokenManagerThread @ 0x1C004DD60
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004DEE4 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(ULONG64 a1)
{
  char *v2; // r14
  _BYTE *v3; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  size_t v6; // r8
  void *Src[2]; // [rsp+28h] [rbp-F0h]
  unsigned int v9[2]; // [rsp+38h] [rbp-E0h]
  _BYTE v10[160]; // [rsp+60h] [rbp-B8h] BYREF

  Src[0] = 0LL;
  v2 = 0LL;
  v9[0] = 0;
  memset(v10, 0, sizeof(v10));
  v3 = v10;
  v5 = 0;
  if ( !UserIsCurrentProcessDwm(v4) )
    v5 = -1073741790;
  if ( v5 >= 0 && a1 )
  {
    if ( a1 + 24 < a1 || a1 + 24 > MmUserProbeAddress )
      a1 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)a1;
    *(_QWORD *)v9 = *(_QWORD *)(a1 + 16);
    v2 = *(char **)(a1 + 8);
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    if ( !v9[0] )
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      if ( v9[0] > 5 )
        v3 = (_BYTE *)Win32AllocPool();
      if ( v3 )
      {
        v6 = 32LL * v9[0];
        if ( &v2[v6] < v2 || (unsigned __int64)&v2[v6] > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v3, v2, v6);
      }
      else
      {
        v5 = -1073741801;
      }
      if ( v5 >= 0 )
        v5 = CTokenManager::TokenThread(Src[0], (struct CSM_TOKEN_ADAPTER_INFO *)v3, v9[0]);
    }
  }
  if ( v3 && v3 != v10 )
    Win32FreePool();
  return (unsigned int)v5;
}
