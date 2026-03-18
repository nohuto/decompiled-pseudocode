/*
 * XREFs of MiDereferenceSession @ 0x14045F498
 * Callers:
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     MiCleanEmbryonicProcess @ 0x14045F008 (MiCleanEmbryonicProcess.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 * Callees:
 *     MiDereferenceSessionFinal @ 0x140531AD0 (MiDereferenceSessionFinal.c)
 */

__int64 MiDereferenceSession()
{
  _KPROCESS *Process; // rbx
  __int64 result; // rax

  Process = KeGetCurrentThread()->ApcState.Process;
  result = (unsigned int)_InterlockedExchangeAdd(
                           (volatile signed __int32 *)Process[1].ActiveProcessors.Bitmap[2],
                           0xFFFFFFFF);
  if ( (_DWORD)result == 1 )
    result = MiDereferenceSessionFinal();
  _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase + 1, 0xFFFEFFFF);
  return result;
}
