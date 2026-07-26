/*
 * XREFs of NdisAllocateRefCount @ 0x1C00A2C80
 * Callers:
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001491C (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F8FC (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisInitializeZeroBasedRef @ 0x1C00A0D44 (ndisInitializeZeroBasedRef.c)
 *     ndisMInitializeMiniportBlock @ 0x1C00A0D70 (ndisMInitializeMiniportBlock.c)
 *     ndisAllocateOpenBlock @ 0x1C00A23B4 (ndisAllocateOpenBlock.c)
 *     ndisInitializeRef @ 0x1C00A2C40 (ndisInitializeRef.c)
 * Callees:
 *     ?ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0010AE0 (-ndisRefCountHandleFromRefCountBlock@@YAPEAUNDIS_REFCOUNT_HANDLE__@@PEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall NdisAllocateRefCount(unsigned __int8 a1, unsigned __int8 a2)
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
