/*
 * XREFs of IovDetachDevice @ 0x140700F90
 * Callers:
 *     IoDetachDevice @ 0x14007F510 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x14070D9AC (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
