/*
 * XREFs of FsRtlAllocateResource @ 0x14066BE54
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PERESOURCE FsRtlAllocateResource(void)
{
  __int64 v0; // rax

  v0 = 104LL * (FsRtlPagingIoResourceSelector++ & 0xF);
  return (PERESOURCE)(FsRtlPagingIoResources + v0);
}
