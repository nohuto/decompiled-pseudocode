/*
 * XREFs of RtlCopyToUserFromUser @ 0x1403E211C
 * Callers:
 *     ?CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z @ 0x14034A334 (-CopyToClientFromUmpd@UMPDOBJ@@QEAAXPEAXQEAX_K@Z.c)
 *     RtlCopyToUserFromUser$thunk$6737528492940246313 @ 0x140357030 (RtlCopyToUserFromUser$thunk$6737528492940246313.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 *     RtlCopyVolatileMemory @ 0x14034FD00 (RtlCopyVolatileMemory.c)
 */

void *__fastcall RtlCopyToUserFromUser(void *a1, void *Src, size_t Size)
{
  ProbeForRead_0(Src, Size, 1u);
  ProbeForRead_0(a1, Size, 1u);
  return RtlCopyVolatileMemory(a1, Src, Size);
}
