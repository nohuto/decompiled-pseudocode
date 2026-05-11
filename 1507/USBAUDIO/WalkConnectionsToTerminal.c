/*
 * XREFs of WalkConnectionsToTerminal @ 0x1C00191CC
 * Callers:
 *     WalkConnectionsToTerminal @ 0x1C00191CC (WalkConnectionsToTerminal.c)
 *     PropertyDrmAudioStream_SetContentId @ 0x1C0019270 (PropertyDrmAudioStream_SetContentId.c)
 * Callees:
 *     SetCopyProtectionOnTerminal @ 0x1C0019094 (SetCopyProtectionOnTerminal.c)
 *     WalkConnectionsToTerminal @ 0x1C00191CC (WalkConnectionsToTerminal.c)
 */

__int64 __fastcall WalkConnectionsToTerminal(IRP *a1, __int64 a2, unsigned int *a3)
{
  PKSFILTER FilterFromIrp; // rax
  __int64 v7; // r9
  const KSFILTER_DESCRIPTOR *Descriptor; // rax
  ULONG v9; // ebx
  const KSTOPOLOGY_CONNECTION *Connections; // rcx
  ULONG ConnectionsCount; // ebp
  const KSTOPOLOGY_CONNECTION *v12; // rdi
  unsigned int v13; // eax
  const KSTOPOLOGY_CONNECTION *v16; // [rsp+48h] [rbp+10h]

  FilterFromIrp = KsGetFilterFromIrp(a1);
  v7 = 0LL;
  if ( *(_DWORD *)(a2 + 8) == -1 )
  {
    LODWORD(v7) = SetCopyProtectionOnTerminal(a1, *(_DWORD *)(a2 + 12), a3);
  }
  else if ( FilterFromIrp )
  {
    Descriptor = FilterFromIrp->Descriptor;
    v9 = 0;
    Connections = Descriptor->Connections;
    ConnectionsCount = Descriptor->ConnectionsCount;
    v16 = Connections;
    if ( ConnectionsCount )
    {
      v12 = Descriptor->Connections;
      do
      {
        if ( v12->FromNode == *(_DWORD *)(a2 + 8) )
        {
          v13 = WalkConnectionsToTerminal(a1, &Connections[v9], a3, v7);
          Connections = v16;
          v7 = v13;
        }
        if ( (int)v7 < 0 )
          break;
        ++v9;
        ++v12;
      }
      while ( v9 < ConnectionsCount );
    }
  }
  return (unsigned int)v7;
}
