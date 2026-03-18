/*
 * XREFs of EtwInitialize @ 0x14052554C
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwpInitialize @ 0x140757334 (EtwpInitialize.c)
 */

__int64 __fastcall EtwInitialize(unsigned int a1)
{
  __int64 result; // rax

  if ( a1 < 2 )
    return EtwpInitialize();
  if ( a1 == 2 )
    EtwpFileSystemReady = 1;
  return result;
}
