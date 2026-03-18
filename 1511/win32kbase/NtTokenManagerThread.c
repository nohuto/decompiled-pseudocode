/*
 * XREFs of NtTokenManagerThread @ 0x1C004E290
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004E418 (-TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtTokenManagerThread(__int64 a1, __int64 a2)
{
  ULONG64 v2; // rsi
  char *v3; // r14
  _DWORD *v4; // rdi
  int v5; // ebx
  size_t v6; // r8
  void *Src[2]; // [rsp+20h] [rbp-F8h]
  unsigned int v9[2]; // [rsp+30h] [rbp-E8h]
  _DWORD v10[40]; // [rsp+60h] [rbp-B8h] BYREF

  v2 = a1;
  Src[0] = 0LL;
  v3 = 0LL;
  v9[0] = 0;
  memset(v10, 0, sizeof(v10));
  v4 = v10;
  v5 = 0;
  if ( !UserIsCurrentProcessDwm(a1, a2) )
    v5 = -1073741790;
  if ( v5 >= 0 && v2 )
  {
    if ( v2 + 24 < v2 || v2 + 24 > MmUserProbeAddress )
      v2 = MmUserProbeAddress;
    *(_OWORD *)Src = *(_OWORD *)v2;
    *(_QWORD *)v9 = *(_QWORD *)(v2 + 16);
    v3 = *(char **)(v2 + 8);
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
        v4 = (_DWORD *)Win32AllocPool();
      if ( v4 )
      {
        v6 = 32LL * v9[0];
        if ( &v3[v6] < v3 || &v3[v6] > W32UserProbeAddress )
          *(_BYTE *)W32UserProbeAddress = 0;
        memmove(v4, v3, v6);
      }
      else
      {
        v5 = -1073741801;
      }
      if ( v5 >= 0 )
        v5 = CTokenManager::TokenThread(Src[0], (struct CSM_TOKEN_ADAPTER_INFO *)v4, v9[0]);
    }
  }
  if ( v4 && v4 != v10 )
    Win32FreePool();
  return (unsigned int)v5;
}
