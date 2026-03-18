/*
 * XREFs of PlaySoundDisconnect @ 0x1C0363128
 * Callers:
 *     NtUserDoSoundDisconnect @ 0x1C01322D0 (NtUserDoSoundDisconnect.c)
 *     NtUserDoSoundConnect @ 0x1C01534A0 (NtUserDoSoundConnect.c)
 *     PlaySoundDisconnectWrap @ 0x1C01D1EF0 (PlaySoundDisconnectWrap.c)
 * Callees:
 *     <none>
 */

RPC_STATUS __fastcall PlaySoundDisconnect(RPC_BINDING_HANDLE *Binding)
{
  RPC_STATUS result; // eax

  result = RpcBindingUnbind(*Binding);
  if ( !result )
  {
    result = RpcBindingFree(Binding);
    if ( !result )
      *Binding = 0LL;
  }
  return result;
}
