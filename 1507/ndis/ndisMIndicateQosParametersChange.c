/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C0059ADC
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0016C08 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memcmp @ 0x1C00235F0 (memcmp.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     ndisValidateQosParameters @ 0x1C0043AF0 (ndisValidateQosParameters.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006EC4C (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

char __fastcall ndisMIndicateQosParametersChange(struct _NDIS_MINIPORT_BLOCK *a1, int a2, __int64 a3, unsigned int a4)
{
  unsigned __int16 v7; // ax
  int v8; // eax
  _NDIS_QOS_PARAMETERS **p_QosOperationalParameters; // r14
  unsigned int *p_QosOperationalParametersBufferSize; // r15
  unsigned int v11; // esi
  _NDIS_QOS_PARAMETERS *PoolWithTag; // r12

  if ( !a1->QosHwCapabilities )
    return 0;
  if ( a4 < 0x34 || *(_BYTE *)a3 != 0xB6 || (v7 = *(_WORD *)(a3 + 2), v7 < 0x34u) || *(_BYTE *)(a3 + 1) != 1 || a4 < v7 )
  {
    if ( (unsigned __int8)byte_1C008531F >= 2u )
      WPP_SF_(0x9Bu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids);
    return 0;
  }
  v8 = ndisValidateQosParameters((__int64)a1, a2 == 1073873056, (_DWORD *)a3, v7, 0LL);
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C008531F >= 2u )
      WPP_SF_d(0x9Cu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v8);
    return 0;
  }
  if ( a2 == 1073873056 )
  {
    p_QosOperationalParameters = &a1->QosOperationalParameters;
    p_QosOperationalParametersBufferSize = &a1->QosOperationalParametersBufferSize;
  }
  else
  {
    p_QosOperationalParameters = &a1->QosRemoteParameters;
    p_QosOperationalParametersBufferSize = &a1->QosRemoteParametersBufferSize;
  }
  v11 = *(unsigned __int16 *)(a3 + 2);
  if ( v11 <= *p_QosOperationalParametersBufferSize )
  {
    if ( (*p_QosOperationalParameters)->Header.Size == (_WORD)v11
      && !memcmp(*p_QosOperationalParameters, (const void *)a3, *(unsigned __int16 *)(a3 + 2)) )
    {
      if ( (unsigned __int8)byte_1C008531F >= 4u )
        WPP_SF_d(0x9Eu, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a2);
      return 0;
    }
  }
  else
  {
    PoolWithTag = (_NDIS_QOS_PARAMETERS *)ExAllocatePoolWithTag(
                                            NonPagedPoolNx,
                                            *(unsigned __int16 *)(a3 + 2),
                                            0x7371444Eu);
    if ( !PoolWithTag )
    {
      if ( (unsigned __int8)byte_1C008531F >= 2u )
        WPP_SF_dd(0x9Du, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, v11, a2);
      return 0;
    }
    if ( *p_QosOperationalParameters )
      ExFreePoolWithTag(*p_QosOperationalParameters, 0);
    *p_QosOperationalParameters = PoolWithTag;
    *p_QosOperationalParametersBufferSize = v11;
  }
  memmove(*p_QosOperationalParameters, (const void *)a3, *(unsigned __int16 *)(a3 + 2));
  if ( a2 == 1073873056 )
    NdisTraceLoggingQosOperationalStatus(a1);
  return 1;
}
