/*
 * XREFs of ndisIfReferenceCompartmentForUser @ 0x1C0021CBC
 * Callers:
 *     ?ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C000E7B4 (-ndisCmSetThreadNetworkNamespace@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z @ 0x1C00220B8 (-ndisCmAssignCompartmentHandleToNamespace@@YAXPEAU_NDIS_CM_NETWORK_NAMESPACE@@PEAX@Z.c)
 *     ?ndisCmFindCompartment@@YAPEAXI@Z @ 0x1C0061590 (-ndisCmFindCompartment@@YAPEAXI@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00616A0 (NdisSetSessionCompartmentId.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C0012D18 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C003BA18 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_l @ 0x1C003E314 (WPP_SF_l.c)
 *     WPP_SF_dq @ 0x1C0046274 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfReferenceCompartmentForUser(
        struct _GUID *a1,
        __int64 a2,
        struct _NDIS_IF_COMPARTMENT_BLOCK **a3)
{
  unsigned int v4; // esi
  int v6; // ebx
  KIRQL v7; // al
  struct _NDIS_IF_COMPARTMENT_BLOCK *v8; // rcx
  KIRQL v9; // r14
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  int UserRef; // eax

  v4 = a2;
  v6 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_l(159LL, a2, (unsigned int)a2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *a3;
  v9 = v7;
  if ( *a3
    || (a1
      ? (CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(a1))
      : (CompartmentBlockByGuid = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(v4)),
        (v8 = CompartmentBlockByGuid) != 0LL) )
  {
    if ( (v8->Flags & 1) != 0 || (UserRef = v8->UserRef, UserRef == 0x7FFFFFFF) )
    {
      v6 = -1073741811;
    }
    else
    {
      v8->UserRef = UserRef + 1;
      *a3 = v8;
    }
  }
  else
  {
    v6 = -1073741772;
  }
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( v6 < 0 )
    *a3 = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dq(160LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, (unsigned int)v6, a3);
  return (unsigned int)v6;
}
