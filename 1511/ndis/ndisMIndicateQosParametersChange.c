/*
 * XREFs of ndisMIndicateQosParametersChange @ 0x1C0059A7C
 * Callers:
 *     ?ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@Z @ 0x1C001B908 (-ndisMRawIndicateStatusEx@@YAXPEAUNDIS_MINIPORT_ADAPTER_HANDLE__@@PEAU_NDIS_STATUS_INDICATION@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 * Callees:
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     ndisValidateQosParameters @ 0x1C0045088 (ndisValidateQosParameters.c)
 *     ?NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006E0CC (-NdisTraceLoggingQosOperationalStatus@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
    if ( (unsigned __int8)byte_1C008371F >= 2u )
      WPP_SF_(0x9Eu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids);
    return 0;
  }
  v8 = ndisValidateQosParameters((__int64)a1, a2 == 1073873056, (_DWORD *)a3, v7, 0LL);
  if ( v8 )
  {
    if ( (unsigned __int8)byte_1C008371F >= 2u )
      WPP_SF_d(0x9Fu, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v8);
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
      if ( (unsigned __int8)byte_1C008371F >= 4u )
        WPP_SF_d(0xA1u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a2);
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
      if ( (unsigned __int8)byte_1C008371F >= 2u )
        WPP_SF_dd(0xA0u, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, v11, a2);
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
