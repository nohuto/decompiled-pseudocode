/*
 * XREFs of NtUserDoSoundConnect @ 0x1C012FF40
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundConnect @ 0x1C03680CC (PlaySoundConnect.c)
 *     PlaySoundDisconnect @ 0x1C0368314 (PlaySoundDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 NtUserDoSoundConnect()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  __int64 v2; // rcx
  NTSTATUS v3; // ebx
  __int64 *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbx
  __int64 v10; // rcx
  ULONG TokenInformationLength; // [rsp+50h] [rbp+20h] BYREF
  HANDLE TokenHandle; // [rsp+58h] [rbp+28h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+60h] [rbp+30h] BYREF

  EnterCrit(0LL, 1LL);
  v0 = gPlaySoundRpcHandle;
  if ( gPlaySoundRpcHandle )
  {
    Binding = (RPC_BINDING_HANDLE)gPlaySoundRpcHandle;
    gPlaySoundRpcHandle = 0LL;
    if ( gdwInAtomicOperation )
    {
      v0 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v0, gdwInAtomicOperation);
    PlaySoundDisconnect(&Binding);
    EnterCrit(0LL, 1LL);
  }
  v3 = OpenEffectiveToken(&TokenHandle);
  if ( v3 >= 0 )
  {
    ZwQueryInformationToken(TokenHandle, TokenUser, 0LL, 0, &TokenInformationLength);
    v4 = (__int64 *)Win32AllocPool(TokenInformationLength, 1869902677LL);
    v5 = v4;
    if ( v4 )
    {
      v3 = ZwQueryInformationToken(TokenHandle, TokenUser, v4, TokenInformationLength, &TokenInformationLength);
      ZwClose(TokenHandle);
      if ( v3 >= 0 )
      {
        v9 = *v5;
        if ( gdwInAtomicOperation )
        {
          v7 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v7, gdwInAtomicOperation);
        v3 = PlaySoundConnect(gSessionId, v9, &Binding);
        EnterCrit(0LL, 1LL);
        if ( v3 >= 0 )
        {
          v10 = gPlaySoundRpcHandle;
          if ( gPlaySoundRpcHandle )
          {
            if ( gdwInAtomicOperation )
            {
              v10 = gdwExtraInstrumentations;
              if ( (gdwExtraInstrumentations & 1) != 0 )
                KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            }
            UserSessionSwitchLeaveCrit(v10, gdwInAtomicOperation);
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
      Win32FreePool(v5, v6, v8);
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
