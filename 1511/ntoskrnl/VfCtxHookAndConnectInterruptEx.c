/*
 * XREFs of VfCtxHookAndConnectInterruptEx @ 0x1406CB140
 * Callers:
 *     VerifierIoConnectInterruptEx @ 0x1406B94F8 (VerifierIoConnectInterruptEx.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IoConnectInterruptEx @ 0x140502D88 (IoConnectInterruptEx.c)
 *     ViCtxSetPrivateConnectParameters @ 0x1406CB65C (ViCtxSetPrivateConnectParameters.c)
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
