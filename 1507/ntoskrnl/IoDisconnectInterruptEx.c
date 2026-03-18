/*
 * XREFs of IoDisconnectInterruptEx @ 0x140568260
 * Callers:
 *     VerifierIoDisconnectInterruptEx @ 0x140739B24 (VerifierIoDisconnectInterruptEx.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 */

void __stdcall IoDisconnectInterruptEx(PIO_DISCONNECT_INTERRUPT_PARAMETERS Parameters)
{
  _DWORD *Generic; // rdi
  unsigned int i; // ebx
  unsigned int j; // ebx

  if ( Parameters->Version != 1 )
  {
    if ( Parameters->Version == 2 )
    {
      Generic = Parameters->ConnectionContext.Generic;
      for ( i = 0; i < Generic[65]; ++i )
        IoDisconnectInterrupt((PKINTERRUPT)(*(_QWORD *)&Generic[2 * i + 66] + 104LL));
LABEL_5:
      ExFreePoolWithTag(Generic, 0);
      return;
    }
    if ( Parameters->Version == 3 )
    {
      Generic = Parameters->ConnectionContext.Generic;
      for ( j = 0; j < Generic[1]; ++j )
        IoDisconnectInterrupt(*(PKINTERRUPT *)&Generic[12 * j + 6]);
      goto LABEL_5;
    }
    if ( Parameters->Version != 4 )
      KeBugCheckEx(0xCAu, 9uLL, Parameters->Version, 0LL, 0LL);
  }
  IoDisconnectInterrupt(Parameters->ConnectionContext.InterruptObject);
}
