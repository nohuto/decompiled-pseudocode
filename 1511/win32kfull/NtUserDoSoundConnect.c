/*
 * XREFs of NtUserDoSoundConnect @ 0x1C010F5C0
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundConnect @ 0x1C0363128 (PlaySoundConnect.c)
 *     PlaySoundDisconnect @ 0x1C0363318 (PlaySoundDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 NtUserDoSoundConnect()
{
  __int64 v0; // rdx
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // rdx
  ULONG TokenInformationLength; // [rsp+50h] [rbp+20h] BYREF
  HANDLE TokenHandle; // [rsp+58h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+60h] [rbp+30h] BYREF

  EnterCrit(0LL, 1LL);
  if ( gPlaySoundRpcHandle )
  {
    Binding = (RPC_BINDING_HANDLE)gPlaySoundRpcHandle;
    gPlaySoundRpcHandle = 0LL;
    UserSessionSwitchLeaveCrit(gPlaySoundRpcHandle, v0);
    PlaySoundDisconnect(&Binding);
    EnterCrit(0LL, 1LL);
  }
  v3 = OpenEffectiveToken(&TokenHandle);
  if ( v3 >= 0 )
  {
    ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    v4 = (__int64 *)Win32AllocPool(TokenInformationLength);
    v5 = v4;
    if ( v4 )
    {
      v3 = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
      ZwClose(TokenHandle);
      if ( v3 >= 0 )
      {
        v8 = *v5;
        UserSessionSwitchLeaveCrit(v7, v6);
        v3 = PlaySoundConnect(gSessionId, v8, &Binding);
        EnterCrit(0LL, 1LL);
        if ( v3 >= 0 )
        {
          if ( gPlaySoundRpcHandle )
          {
            UserSessionSwitchLeaveCrit(gPlaySoundRpcHandle, v9);
            PlaySoundDisconnect(&Binding);
            EnterCrit(0LL, 1LL);
            v3 = -1073741823;
          }
          else
          {
            MEMORY[0] = Binding;
          }
        }
      }
      Win32FreePool(v5);
    }
    else
    {
      ZwClose(TokenHandle);
      v3 = -1073741801;
    }
  }
  UserSessionSwitchLeaveCrit(v2, v1);
  return (unsigned int)v3;
}
