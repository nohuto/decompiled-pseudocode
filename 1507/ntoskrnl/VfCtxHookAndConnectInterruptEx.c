/*
 * XREFs of VfCtxHookAndConnectInterruptEx @ 0x14074E7D4
 * Callers:
 *     VerifierIoConnectInterruptEx @ 0x140739AE8 (VerifierIoConnectInterruptEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoConnectInterruptEx @ 0x14057C8D8 (IoConnectInterruptEx.c)
 *     ViCtxSetPrivateConnectParameters @ 0x14074ECF0 (ViCtxSetPrivateConnectParameters.c)
 */

__int64 __fastcall VfCtxHookAndConnectInterruptEx(struct _IO_CONNECT_INTERRUPT_PARAMETERS *a1)
{
  int v2; // edi
  NTSTATUS v3; // eax
  PVOID v4; // rcx
  ULONG Version; // eax
  ULONG v6; // eax
  _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+20h] [rbp-58h] BYREF
  PVOID P; // [rsp+88h] [rbp+10h] BYREF

  P = 0LL;
  if ( ViCtxInitializedIsrStateBlocks && a1->Version - 1 <= 2 )
  {
    v2 = ViCtxSetPrivateConnectParameters(&Parameters, a1, &P);
    if ( v2 >= 0 )
    {
      v3 = pXdvIoConnectInterruptEx(&Parameters);
      v4 = P;
      v2 = v3;
      if ( P )
      {
        Version = Parameters.Version;
        a1->Version = Parameters.Version;
        if ( v2 < 0 )
        {
          ExFreePoolWithTag(v4, 0);
        }
        else
        {
          v6 = Version - 1;
          if ( !v6 || v6 - 1 <= 1 )
            a1->FullySpecified.InterruptObject = Parameters.FullySpecified.InterruptObject;
        }
      }
    }
  }
  else
  {
    return (unsigned int)pXdvIoConnectInterruptEx(a1);
  }
  return (unsigned int)v2;
}
