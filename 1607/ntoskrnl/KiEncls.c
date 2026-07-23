/*
 * XREFs of KiEncls @ 0x14015EA70
 * Callers:
 *     KeAddEnclavePage @ 0x1406E5CDC (KeAddEnclavePage.c)
 *     KeCreateEnclave @ 0x1406E5E1C (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x1406E5FB0 (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x1406E6034 (KeInitializeEnclave.c)
 *     KeRemoveEnclavePage @ 0x1406E60E0 (KeRemoveEnclavePage.c)
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
