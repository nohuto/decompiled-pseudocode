/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C005DF1C
 * Callers:
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C0018568 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 * Callees:
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0042EFC (WPP_SF_dd_ea_1C0042EFC.c)
 *     ndisValidateQosParameters @ 0x1C00485C8 (ndisValidateQosParameters.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0072FC8 (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
    if ( (unsigned __int8)byte_1C00895DF >= 2u )
      WPP_SF_(0x9Eu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids);
    return 0;
  }
  v8 = ndisValidateQosParameters((__int64)a1, a2 == 1073873056, (_DWORD *)a3, v7, 0LL);
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C00895DF >= 2u )
      WPP_SF_d(0x9Fu, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v8);
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
      if ( (unsigned __int8)byte_1C00895DF >= 4u )
        WPP_SF_d(0xA1u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a2);
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
      if ( (unsigned __int8)byte_1C00895DF >= 2u )
        WPP_SF_dd(0xA0u, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, v11, a2);
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
