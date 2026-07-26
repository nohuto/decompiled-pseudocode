/*
 * XREFs of NdisCopyBuffer @ 0x1C00503F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisCopyBuffer(
        PNDIS_STATUS Status,
        PNDIS_BUFFER *Buffer,
        NDIS_HANDLE PoolHandle,
        PVOID MemoryDescriptor,
        UINT Offset,
        UINT Length)
{
  void *v9; // rbx
  PMDL Mdl; // rax

  v9 = (void *)(Offset + *((_QWORD *)MemoryDescriptor + 4) + *((unsigned int *)MemoryDescriptor + 11));
  *Status = -1073741823;
  Mdl = IoAllocateMdl(v9, Length, 0, 0, 0LL);
  *Buffer = Mdl;
  if ( Mdl )
  {
    IoBuildPartialMdl((PMDL)MemoryDescriptor, Mdl, v9, Length);
    (*Buffer)->Next = 0LL;
    *Status = 0;
  }
}
