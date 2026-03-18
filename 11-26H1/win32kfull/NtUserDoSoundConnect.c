/*
 * XREFs of NtUserDoSoundConnect @ 0x140235090
 * Callers:
 *     <none>
 * Callees:
 *     ?DisconnectPlaySound@CUserPlaySound@@SAJXZ @ 0x1402351D8 (-DisconnectPlaySound@CUserPlaySound@@SAJXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14023526C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 */

__int64 NtUserDoSoundConnect()
{
  NTSTATUS v0; // ebx
  void **v1; // rax
  void **v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rcx
  void *v6; // rbx
  __int64 UserSessionState; // rax
  ULONG TokenInformationLength; // [rsp+40h] [rbp+10h] BYREF
  HANDLE TokenHandle; // [rsp+48h] [rbp+18h] BYREF

  TokenInformationLength = 0;
  TokenHandle = 0LL;
  CUserPlaySound::DisconnectPlaySound();
  v0 = OpenEffectiveToken(&TokenHandle);
  if ( v0 >= 0 )
  {
    v0 = ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    if ( (int)(v0 + 0x80000000) < 0 || v0 == -1073741789 )
    {
      v1 = (void **)Win32AllocPoolZInit(TokenInformationLength, 1869902677LL);
      v2 = v1;
      if ( v1 )
      {
        v0 = ZwQueryInformationToken(TokenHandle, TokenUser, v1, TokenInformationLength, &TokenInformationLength);
        ZwClose(TokenHandle);
        if ( v0 >= 0 )
        {
          v6 = *v2;
          UserSessionState = W32GetUserSessionState(v4, v3);
          v0 = CUserPlaySound::Connect(*(CUserPlaySound **)(UserSessionState + 70536), v6);
        }
        Win32FreePool(v2);
      }
      else
      {
        ZwClose(TokenHandle);
        return (unsigned int)-1073741801;
      }
    }
    else
    {
      ZwClose(TokenHandle);
    }
  }
  return (unsigned int)v0;
}
