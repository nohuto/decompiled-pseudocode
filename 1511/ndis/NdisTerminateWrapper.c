/*
 * XREFs of NdisTerminateWrapper @ 0x1C00CBF20
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     ndisMUnload @ 0x1C00EC5A0 (ndisMUnload.c)
 */

void __stdcall NdisTerminateWrapper(NDIS_HANDLE NdisWrapperHandle, PVOID SystemSpecific)
{
  _WORD *DriverObjectExtension; // rax
  __int64 v4; // rbx
  __int16 v5; // ax
  unsigned __int16 v6; // cx

  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0xCu, &WPP_d846d484cf1120be40243b5ff6d3deb2_Traceguids, (__int64)NdisWrapperHandle);
  if ( NdisWrapperHandle && *(_QWORD *)NdisWrapperHandle )
  {
    DriverObjectExtension = IoGetDriverObjectExtension(*(PDRIVER_OBJECT *)NdisWrapperHandle, (PVOID)0x4E4D4944);
    v4 = (__int64)DriverObjectExtension;
    if ( DriverObjectExtension )
    {
      DriverObjectExtension[13] |= 4u;
      v5 = DriverObjectExtension[13];
      if ( *(_QWORD *)(v4 + 16) || v5 < 0 )
      {
        if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
          return;
        v6 = 13;
        goto LABEL_16;
      }
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
        WPP_SF_q(0xEu, &WPP_d846d484cf1120be40243b5ff6d3deb2_Traceguids, v4);
      *(_QWORD *)(v4 + 104) = 0LL;
      *(_WORD *)(v4 + 26) |= 0x10u;
      ndisMUnload(*(PDRIVER_OBJECT *)NdisWrapperHandle);
    }
    else
    {
      ExFreePoolWithTag(NdisWrapperHandle, 0);
    }
  }
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag < 4u )
    return;
  v6 = 15;
LABEL_16:
  WPP_SF_(v6, &WPP_d846d484cf1120be40243b5ff6d3deb2_Traceguids);
}
