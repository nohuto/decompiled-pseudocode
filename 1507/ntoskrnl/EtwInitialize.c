/*
 * XREFs of EtwInitialize @ 0x140595964
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 * Callees:
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
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
