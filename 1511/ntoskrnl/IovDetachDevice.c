/*
 * XREFs of IovDetachDevice @ 0x1406B5128
 * Callers:
 *     IoDetachDevice @ 0x1400F2664 (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x1406C1914 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
