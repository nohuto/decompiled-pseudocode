/*
 * XREFs of IovDetachDevice @ 0x1407352B8
 * Callers:
 *     IoDetachDevice @ 0x14000748C (IoDetachDevice.c)
 * Callees:
 *     VfIoDetachDevice @ 0x140743140 (VfIoDetachDevice.c)
 */

__int64 IovDetachDevice()
{
  __int64 result; // rax

  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
    return VfIoDetachDevice();
  return result;
}
