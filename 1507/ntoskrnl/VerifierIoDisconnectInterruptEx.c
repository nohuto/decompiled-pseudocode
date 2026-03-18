/*
 * XREFs of VerifierIoDisconnectInterruptEx @ 0x140739B24
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoDisconnectInterruptEx @ 0x140568260 (IoDisconnectInterruptEx.c)
 */

void __fastcall VerifierIoDisconnectInterruptEx(PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters)
{
  void *v1; // rbx
  ULONG Version; // ecx
  _QWORD *Generic; // rcx

  v1 = 0LL;
  Version = Parameters->Version;
  if ( !ViCtxInitializedIsrStateBlocks )
    goto LABEL_8;
  if ( Version - 1 <= 1 )
  {
    Generic = Parameters->ConnectionContext.Generic;
  }
  else
  {
    if ( Version != 3 )
      goto LABEL_8;
    Generic = (_QWORD *)*((_QWORD *)Parameters->ConnectionContext.Generic + 3);
  }
  if ( Generic )
    v1 = (void *)Generic[6];
LABEL_8:
  pXdvIoDisconnectInterruptEx(Parameters);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
}
