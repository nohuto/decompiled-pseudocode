/*
 * XREFs of KiEncls @ 0x14015E500
 * Callers:
 *     KeAddEnclavePage @ 0x1406E5BA4 (KeAddEnclavePage.c)
 *     KeCreateEnclave @ 0x1406E5CE4 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1406E5E78 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1406E5EFC (KeInitializeEnclave.c)
 *     KeRemoveEnclavePage @ 0x1406E5FA8 (KeRemoveEnclavePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiEncls(unsigned int a1)
{
  __int64 result; // rax

  result = a1;
  __asm { encls }
  return result;
}
