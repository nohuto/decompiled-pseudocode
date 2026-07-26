/*
 * XREFs of NdisAllocateGenericObject @ 0x1C0023E70
 * Callers:
 *     <none>
 * Callees:
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 *     WPP_SF_qLLq @ 0x1C0058E04 (WPP_SF_qLLq_ea_1C0058E04.c)
 */

PNDIS_GENERIC_OBJECT __stdcall NdisAllocateGenericObject(PDRIVER_OBJECT DriverObject, ULONG Tag, USHORT Size)
{
  struct _NDIS_GENERIC_OBJECT *PoolWithTag; // rax
  __int64 v7; // rdx
  void *v8; // rcx
  struct _NDIS_GENERIC_OBJECT *v9; // rbx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( (unsigned __int8)byte_1C008371C >= 4u && traceInited )
    WPP_SF_qdD(130LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, DriverObject, Tag, Size);
  if ( Size > 0xFFDFu )
    return 0LL;
  PoolWithTag = (struct _NDIS_GENERIC_OBJECT *)ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned __int16)(Size + 32), Tag);
  v9 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size + 4LL);
    v8 = retaddr;
    v9->CallersCaller = 0LL;
    v9->Caller = retaddr;
    *(_WORD *)&v9->Header.Type = 257;
    v9->Header.Size = Size + 32;
    v9->DriverObject = DriverObject;
  }
  if ( (unsigned __int8)byte_1C008371C >= 4u )
  {
    if ( traceInited )
      WPP_SF_qLLq(v8, v7, DriverObject, Tag, Size, v9);
  }
  return v9;
}
