/*
 * XREFs of ndisAllocateRefCount @ 0x1C00A01D4
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001AD78 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisInitializeZeroBasedRef @ 0x1C009CC20 (ndisInitializeZeroBasedRef.c)
 *     ndisAllocateOpenBlock @ 0x1C00A0064 (ndisAllocateOpenBlock.c)
 *     ndisInitializeRef @ 0x1C00A01A0 (ndisInitializeRef.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00A94B4 (ndisMInitializeMiniportBlock.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C00117D0 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisAllocateRefCount(unsigned __int8 a1, unsigned __int8 a2)
{
  unsigned __int8 v2; // bl
  char v4; // di
  unsigned int v5; // eax
  unsigned int v6; // r14d
  struct _NDIS_REFCOUNT_BLOCK *PoolWithTag; // rax
  struct _NDIS_REFCOUNT_BLOCK *v8; // rsi

  v2 = a2;
  if ( !ndisDebugLoggingMode )
    return 0LL;
  v4 = 1;
  if ( ndisDebugLoggingMode == 2 )
    v2 = a2 | 1;
  if ( (v2 & 1) != 0 )
  {
    v5 = (a1 << 6) + 8;
  }
  else
  {
    v5 = (((((unsigned __int64)a1 + 7) >> 3) + 3) & 0xFFFFFFFC) + 16;
    v4 = 0;
  }
  v6 = v5;
  PoolWithTag = (struct _NDIS_REFCOUNT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v5, 0x7872444Eu);
  v8 = PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, v6);
  v8->Flags = v2;
  v8->Type = v4;
  v8->NumRefTags = a1;
  return ndisRefCountHandleFromRefCountBlock(v8);
}
