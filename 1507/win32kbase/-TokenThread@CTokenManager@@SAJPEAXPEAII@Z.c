/*
 * XREFs of ?TokenThread@CTokenManager@@SAJPEAXPEAII@Z @ 0x1C000E3E8
 * Callers:
 *     NtTokenManagerThread @ 0x1C000E260 (NtTokenManagerThread.c)
 * Callees:
 *     GreSfmGetPresentQueueEvent @ 0x1C000E530 (GreSfmGetPresentQueueEvent.c)
 *     GreSfmOpenTokenEvent @ 0x1C000E5D0 (GreSfmOpenTokenEvent.c)
 *     ?ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z @ 0x1C000EA60 (-ValidateUserEvent@CTokenManager@@CAJPEAXPEAPEAX@Z.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     ?ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z @ 0x1C0047418 (-ProcessTokens@CTokenManager@@IEAAJPEAX0PEAIPEAPEAXI@Z.c)
 *     Win32AllocPoolZInit @ 0x1C004CEA0 (Win32AllocPoolZInit.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall CTokenManager::TokenThread(void *a1, unsigned int *a2, unsigned int a3)
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
        v10 = a2;
        while ( 1 )
        {
          PresentQueueEvent = GreSfmGetPresentQueueEvent(*v10, &v15);
          if ( PresentQueueEvent < 0 )
            break;
          ++v10;
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
    Win32FreePool(v7);
  return (unsigned int)PresentQueueEvent;
}
