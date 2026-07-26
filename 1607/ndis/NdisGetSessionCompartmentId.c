/*
 * XREFs of NdisGetSessionCompartmentId @ 0x1C000D3B0
 * Callers:
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     NdisGetJobObjectCompartmentId @ 0x1C0065320 (NdisGetJobObjectCompartmentId.c)
 *     NdisGetProcessObjectCompartmentId @ 0x1C0065360 (NdisGetProcessObjectCompartmentId.c)
 *     NdisSetSessionCompartmentId @ 0x1C00653A0 (NdisSetSessionCompartmentId.c)
 *     ndisNsiGetAllSessionInformation @ 0x1C009BB00 (ndisNsiGetAllSessionInformation.c)
 * Callees:
 *     ?ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z @ 0x1C00650DC (-ndisCmGetThreadSessionId@@YAKPEAU_ETHREAD@@@Z.c)
 */

__int64 __fastcall NdisGetSessionCompartmentId(unsigned int a1)
{
  unsigned int ThreadSessionId; // ebx
  unsigned int v3; // edi
  KIRQL v4; // r8

  ThreadSessionId = a1;
  if ( a1 == -1 )
    ThreadSessionId = ndisCmGetThreadSessionId(KeGetCurrentThread());
  if ( ThreadSessionId >= ndisCmSessionCount )
    return 1LL;
  v3 = 0;
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisCmSessionLock);
  if ( ThreadSessionId < ndisCmSessionCount )
    v3 = *((_DWORD *)ndisCmSession + 6 * ThreadSessionId);
  KeReleaseSpinLock(&ndisCmSessionLock, v4);
  if ( !v3 )
    return 1;
  return v3;
}
