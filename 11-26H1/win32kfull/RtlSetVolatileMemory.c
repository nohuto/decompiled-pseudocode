/*
 * XREFs of RtlSetVolatileMemory @ 0x14034FD20
 * Callers:
 *     ?ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z @ 0x14034CF40 (-ZeroUserMemory@UMPDOBJ@@QEAAXPEAX_K@Z.c)
 *     RtlSetUserMemory @ 0x1403E227C (RtlSetUserMemory.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void *__cdecl RtlSetVolatileMemory(void *a1, int Val, size_t Size)
{
  return memset_0(a1, Val, Size);
}
