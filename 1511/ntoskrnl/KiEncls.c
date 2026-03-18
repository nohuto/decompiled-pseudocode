/*
 * XREFs of KiEncls @ 0x140154AE0
 * Callers:
 *     KeAddEnclavePage @ 0x14069EC48 (KeAddEnclavePage.c)
 *     KeCreateEnclave @ 0x14069ED88 (KeCreateEnclave.c)
 *     KeDebugWriteEnclaveMemory @ 0x14069EF1C (KeDebugWriteEnclaveMemory.c)
 *     KeInitializeEnclave @ 0x14069EFA0 (KeInitializeEnclave.c)
 *     KeRemoveEnclavePage @ 0x14069F04C (KeRemoveEnclavePage.c)
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
