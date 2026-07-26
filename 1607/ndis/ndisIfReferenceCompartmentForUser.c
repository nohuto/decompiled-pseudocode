/*
 * XREFs of ndisIfReferenceCompartmentForUser @ 0x1C0043988
 * Callers:
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0065014 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0065198 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindCompartmentBlock @ 0x1C000D750 (ndisIfFindCompartmentBlock.c)
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C000FD90 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     WPP_SF_l @ 0x1C0043094 (WPP_SF_l.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
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
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlock; // rax
  int UserRef; // eax

  v4 = a2;
  v6 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_l(0x9Fu, a2, a2);
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v8 = *a3;
  v9 = v7;
  if ( *a3
    || (!a1
      ? (CompartmentBlock = (struct _NDIS_IF_COMPARTMENT_BLOCK *)ndisIfFindCompartmentBlock(v4))
      : (CompartmentBlock = ndisIfFindCompartmentBlockByGuid(a1)),
        (v8 = CompartmentBlock) != 0LL) )
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
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_dq(160LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (unsigned int)v6, a3);
  return (unsigned int)v6;
}
