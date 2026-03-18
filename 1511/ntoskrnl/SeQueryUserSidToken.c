/*
 * XREFs of SeQueryUserSidToken @ 0x140479360
 * Callers:
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     ExpWnfQueryCurrentUserSID @ 0x1403E5EDC (ExpWnfQueryCurrentUserSID.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     AlpcpCheckConnectionSecurity @ 0x14046ACE4 (AlpcpCheckConnectionSecurity.c)
 *     EtwpGetSidExtendedHeaderItem @ 0x1404795EC (EtwpGetSidExtendedHeaderItem.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404A32FC (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpQuerySidToken @ 0x1404A6148 (AlpcpQuerySidToken.c)
 *     PiDqOpenUserObjectRegKey @ 0x1404F8E2C (PiDqOpenUserObjectRegKey.c)
 *     PiDqSameUserHive @ 0x140607634 (PiDqSameUserHive.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlCopySid @ 0x1404793FC (RtlCopySid.c)
 */

__int64 __fastcall SeQueryUserSidToken(__int64 a1, void *a2, ULONG a3, ULONG *a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v9; // ebp
  unsigned __int8 *v10; // r8
  ULONG v11; // edi

  CurrentThread = KeGetCurrentThread();
  v9 = -1073741789;
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(*(PERESOURCE *)(a1 + 48), 1u);
  v10 = **(unsigned __int8 ***)(a1 + 152);
  v11 = 4 * v10[1] + 8;
  if ( a3 >= v11 )
  {
    RtlCopySid(v11, a2, v10);
    v9 = 0;
  }
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegion();
  if ( a4 )
    *a4 = v11;
  return v9;
}
