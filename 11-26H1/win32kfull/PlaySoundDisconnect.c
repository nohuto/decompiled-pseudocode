/*
 * XREFs of PlaySoundDisconnect @ 0x1403E3A48
 * Callers:
 *     ?Disconnect@CUserPlaySound@@AEAAJXZ @ 0x140235200 (-Disconnect@CUserPlaySound@@AEAAJXZ.c)
 *     ?Connect@CUserPlaySound@@AEAAJPEAX@Z @ 0x14023526C (-Connect@CUserPlaySound@@AEAAJPEAX@Z.c)
 *     CleanupPlaySound @ 0x14025F2D0 (CleanupPlaySound.c)
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
