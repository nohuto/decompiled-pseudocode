/*
 * XREFs of ndisIfDereferenceCompartmentForUser @ 0x1C0043878
 * Callers:
 *     ?ndisCmDeleteStateObject@@YAXPEAX@Z @ 0x1C00102C0 (-ndisCmDeleteStateObject@@YAXPEAX@Z.c)
 *     ?ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z @ 0x1C0010E38 (-ndisCmSetThreadState@@YAJPEAU_ETHREAD@@PEAI1@Z.c)
 *     ?ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z @ 0x1C0065014 (-ndisCmAssignCompartmentHandleToCmState@@YAXPEAU_NDIS_CM_STATE@@PEAX@Z.c)
 *     ?ndisCmDereferenceCompartment@@YAXPEAX@Z @ 0x1C00650D4 (-ndisCmDereferenceCompartment@@YAXPEAX@Z.c)
 *     ?ndisCmValidateCompartmentChange@@YAPEAXII@Z @ 0x1C0065198 (-ndisCmValidateCompartmentChange@@YAPEAXII@Z.c)
 *     NdisSetSessionCompartmentId @ 0x1C00653A0 (NdisSetSessionCompartmentId.c)
 *     ndisDispatchRequest @ 0x1C00AD4B0 (ndisDispatchRequest.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040174 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     WPP_SF_dq @ 0x1C004BB84 (WPP_SF_dq.c)
 */

__int64 __fastcall ndisIfDereferenceCompartmentForUser(unsigned int *a1)
{
  unsigned int v1; // edi
  bool v3; // si
  KIRQL v4; // dl
  int v5; // eax
  int v6; // eax
  __int64 v7; // rdx

  v1 = 0;
  v3 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0xA1u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (__int64)a1);
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
    ndisIfDeleteCompartment(a1[4], v7);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_dq(162LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v1, a1);
  return v1;
}
