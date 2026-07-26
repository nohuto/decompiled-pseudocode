/*
 * XREFs of NdisAllocateMemoryWithTag @ 0x1C001FAE0
 * Callers:
 *     Duplicate802_11AttachAttributesCommon @ 0x1C0073FC0 (Duplicate802_11AttachAttributesCommon.c)
 * Callees:
 *     <none>
 */

NDIS_STATUS __stdcall NdisAllocateMemoryWithTag(PVOID *VirtualAddress, UINT Length, ULONG Tag)
{
  bool v4; // zf
  ULONG v5; // r8d
  PVOID PoolWithTag; // rax

  v4 = Tag == 0;
  v5 = 1835091022;
  if ( !v4 )
    v5 = Tag;
  PoolWithTag = ExAllocatePoolWithTag(ndisDriverPoolType, Length, v5);
  *VirtualAddress = PoolWithTag;
  return PoolWithTag == 0LL ? 0xC0000001 : 0;
}
