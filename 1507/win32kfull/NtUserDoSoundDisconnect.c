/*
 * XREFs of NtUserDoSoundDisconnect @ 0x1C01322D0
 * Callers:
 *     <none>
 * Callees:
 *     PlaySoundDisconnect @ 0x1C0363128 (PlaySoundDisconnect.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 NtUserDoSoundDisconnect()
{
  __int64 v0; // rcx
  __int64 v1; // rdx
  unsigned int v2; // ebx
  RPC_BINDING_HANDLE Binding; // [rsp+30h] [rbp+8h] BYREF

  EnterCrit(1LL);
  v1 = gPlaySoundRpcHandle;
  if ( gPlaySoundRpcHandle )
  {
    Binding = (RPC_BINDING_HANDLE)gPlaySoundRpcHandle;
    gPlaySoundRpcHandle = 0LL;
    UserSessionSwitchLeaveCrit(v0, gPlaySoundRpcHandle);
    v2 = PlaySoundDisconnect(&Binding);
    EnterCrit(1LL);
  }
  else
  {
    v2 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v0, v1);
  return v2;
}
