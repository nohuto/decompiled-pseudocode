/*
 * XREFs of ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0020CA8
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0013F54 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A1440 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A7BD4 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0020D08 (ndisIfFindCompartmentBlock.c)
 */

struct _GUID *__fastcall ndisIfGetDefaultNetworkGuid(struct _GUID *__return_ptr retstr)
{
  __int64 CompartmentBlock; // rax
  KIRQL v3; // r10
  GUID v4; // xmm6
  GUID v5; // xmm0
  struct _GUID *result; // rax

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(1LL);
  if ( CompartmentBlock )
  {
    v4 = *(GUID *)(*(_QWORD *)(CompartmentBlock + 56) + 32LL);
    KeReleaseSpinLock(&ndisIfListLock, v3);
    v5 = v4;
  }
  else
  {
    KeReleaseSpinLock(&ndisIfListLock, v3);
    v5 = ndisDefaultNetworkGuid;
  }
  result = retstr;
  *retstr = v5;
  return result;
}
