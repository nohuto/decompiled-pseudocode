/*
 * XREFs of PlaySoundDisconnect @ 0x1C0363318
 * Callers:
 *     NtUserDoSoundConnect @ 0x1C010F5C0 (NtUserDoSoundConnect.c)
 *     NtUserDoSoundDisconnect @ 0x1C0113710 (NtUserDoSoundDisconnect.c)
 *     PlaySoundDisconnectWrap @ 0x1C01D3940 (PlaySoundDisconnectWrap.c)
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
