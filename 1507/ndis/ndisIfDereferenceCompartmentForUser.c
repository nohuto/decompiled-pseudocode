/*
 * XREFs of ndisIfDereferenceCompartmentForUser @ 0x1C0021E20
 * Callers:
 *     ?ndisCmDeleteNetworkNamespace@@YAXPEAX@Z @ 0x1C000E7A0 (-ndisCmDeleteNetworkNamespace@@YAXPEAX@Z.c)
 *     ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000E7B4 (-ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z @ 0x1C00220B8 (-ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C0061588 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00616A0 (NdisSetSessionCompartmentId.c)
 *     ndisDispatchRequest @ 0x1C0098EF0 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(unsigned int *a1)
{
  unsigned int v1; // edi
  bool v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(161LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v5 = a1[12];
  if ( v5 <= 0 )
  {
    v1 = -1073741811;
  }
  else
  {
    v6 = v5 - 1;
    a1[12] = v6;
    v3 = !v6 && (a1[10] & 2) != 0;
  }
  KeReleaseSpinLock(&ndisIfListLock, v4);
  if ( v3 )
    ndisIfDeleteCompartment(a1[4]);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dq(162LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v1, a1);
  return v1;
}
