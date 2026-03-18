/*
 * XREFs of ?TokenThread@CTokenManager@@SAJPEAXPEAUCSM_TOKEN_ADAPTER_INFO@@I@Z @ 0x1C004E418
 * Callers:
 *     NtTokenManagerThread @ 0x1C004E290 (NtTokenManagerThread.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x1C003D07C (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 *     GreSfmGetPresentQueueEvent @ 0x1C004E560 (GreSfmGetPresentQueueEvent.c)
 *     GreSfmOpenTokenEvent @ 0x1C004E600 (GreSfmOpenTokenEvent.c)
 *     Win32AllocPoolZInit @ 0x1C004F690 (Win32AllocPoolZInit.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C004FB78 (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall CTokenManager::TokenThread(void *a1, struct CSM_TOKEN_ADAPTER_INFO *a2, unsigned int a3)
{
  __int64 v3; // rsi
  void **v7; // rdi
  int PresentQueueEvent; // ebx
  CTokenManager *v9; // rcx
  unsigned int *v10; // r15
  HANDLE *v11; // r14
  HANDLE v13; // [rsp+30h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-48h] BYREF
  void *v15; // [rsp+40h] [rbp-40h] BYREF
  void *v16[5]; // [rsp+48h] [rbp-38h] BYREF

  v13 = 0LL;
  v3 = 0LL;
  Handle = 0LL;
  memset(v16, 0, sizeof(v16));
  v7 = v16;
  if ( a3 > 5 )
  {
    v7 = (void **)Win32AllocPoolZInit(8LL * a3);
    if ( !v7 )
      return 3221225495LL;
  }
  PresentQueueEvent = CTokenManager::ValidateUserEvent(a1, &v13);
  if ( PresentQueueEvent >= 0 )
  {
    PresentQueueEvent = GreSfmOpenTokenEvent(&Handle);
    if ( PresentQueueEvent >= 0 )
    {
      if ( a3 )
      {
        v10 = (unsigned int *)((char *)a2 + 8);
        while ( 1 )
        {
          PresentQueueEvent = GreSfmGetPresentQueueEvent(*v10, &v15);
          if ( PresentQueueEvent < 0 )
            break;
          v10 += 8;
          v7[v3] = v15;
          v3 = (unsigned int)(v3 + 1);
          if ( (unsigned int)v3 >= a3 )
            goto LABEL_8;
        }
      }
      else
      {
LABEL_8:
        if ( g_pTokenManager )
          PresentQueueEvent = CTokenManager::ProcessTokens(v9, v13, Handle, a2, v7, a3);
        else
          PresentQueueEvent = -1073741823;
      }
    }
    if ( (_DWORD)v3 )
    {
      v11 = v7;
      do
      {
        ObCloseHandle(*v11++, 1);
        --v3;
      }
      while ( v3 );
    }
  }
  if ( Handle )
    ObCloseHandle(Handle, 1);
  if ( v13 )
    ObCloseHandle(v13, 0);
  if ( v7 != v16 )
    Win32FreePool();
  return (unsigned int)PresentQueueEvent;
}
