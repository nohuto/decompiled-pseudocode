/*
 * XREFs of ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001A00C
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0017E8C (ndisIfReadNetworkGuidFromKey.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A1714 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 */

struct _GUID *__fastcall ndisIfGetDefaultNetworkGuid(struct _GUID *__return_ptr retstr)
{
  _LIST_ENTRY *CompartmentBlock; // rax
  KIRQL v3; // r10
  GUID v4; // xmm6
  GUID v5; // xmm0
  struct _GUID *result; // rax

  KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlock = ndisIfFindCompartmentBlock(1u);
  if ( CompartmentBlock )
  {
    v4 = (GUID)CompartmentBlock[3].Blink[2];
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
