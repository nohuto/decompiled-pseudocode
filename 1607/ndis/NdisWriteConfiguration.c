/*
 * XREFs of NdisWriteConfiguration @ 0x1C009D980
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ndisOidPostIovNicSwitchParameters @ 0x1C0069440 (ndisOidPostIovNicSwitchParameters.c)
 *     ?ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z @ 0x1C00C3CC0 (-ndisIfSetFilterIfInfoInRegistry@@YAHPEAU_NDIS_FILTER_BLOCK@@U_GUID@@@Z.c)
 *     ndisUpdateHDSplitKeyword @ 0x1C00C731C (ndisUpdateHDSplitKeyword.c)
 *     ndisWritePMAdminConfigState @ 0x1C00CB2B0 (ndisWritePMAdminConfigState.c)
 *     ndisWriteConfigurationIfPresent @ 0x1C00CCA10 (ndisWriteConfigurationIfPresent.c)
 *     ndisWmiChangeSingleInstance @ 0x1C00D4BB0 (ndisWmiChangeSingleInstance.c)
 *     ndisNDKHandleWmiChangeRequest @ 0x1C00D7164 (ndisNDKHandleWmiChangeRequest.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __stdcall NdisWriteConfiguration(
        PNDIS_STATUS Status,
        NDIS_HANDLE ConfigurationHandle,
        PNDIS_STRING Keyword,
        PNDIS_CONFIGURATION_PARAMETER ParameterValue)
{
  char v7; // r13
  _NDIS_PARAMETER_TYPE ParameterType; // eax
  wchar_t *Buffer; // r14
  _NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *ValueData; // r15
  ULONG ValueLength; // ebx
  ULONG v13; // ebp
  unsigned __int16 Length; // cx
  wchar_t *PoolWithTag; // rax
  const WCHAR *v16; // rdx
  ULONG v17; // ecx

  v7 = 0;
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_q(0x15u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, (__int64)ConfigurationHandle);
  *Status = 0;
  ParameterType = ParameterValue->ParameterType;
  Buffer = Keyword->Buffer;
  if ( ParameterValue->ParameterType < NdisParameterInteger )
    goto LABEL_25;
  if ( ParameterType <= NdisParameterHexInteger )
  {
    ValueData = &ParameterValue->ParameterData;
    ValueLength = 4;
    v13 = 4;
    goto LABEL_6;
  }
  if ( ParameterType == NdisParameterString )
  {
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v13 = 1;
    ValueLength = ParameterValue->ParameterData.StringData.Length + 2;
  }
  else
  {
    v13 = 3;
    if ( ParameterType != NdisParameterMultiString )
    {
      if ( ParameterType == NdisParameterBinary )
      {
        ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
        ValueLength = ParameterValue->ParameterData.StringData.Length;
        goto LABEL_6;
      }
LABEL_25:
      *Status = -1073741637;
      goto LABEL_14;
    }
    ValueData = (_NDIS_CONFIGURATION_PARAMETER::<unnamed_type_ParameterData> *)ParameterValue->ParameterData.StringData.Buffer;
    v13 = 7;
    ValueLength = ParameterValue->ParameterData.StringData.Length;
  }
LABEL_6:
  Length = Keyword->Length;
  if ( Keyword->Length < 2u || Buffer[((unsigned __int64)Length >> 1) - 1] )
  {
    PoolWithTag = (wchar_t *)ExAllocatePoolWithTag(NonPagedPoolNx, Length + 2LL, 0x2020444Eu);
    Buffer = PoolWithTag;
    if ( !PoolWithTag )
    {
      *Status = -1073741670;
      goto LABEL_14;
    }
    v7 = 1;
    memmove(PoolWithTag, Keyword->Buffer, Keyword->Length);
    Buffer[(unsigned __int64)Keyword->Length >> 1] = 0;
  }
  if ( (*(_DWORD *)(*((_QWORD *)ConfigurationHandle + 2) + 16LL) & 2) == 0 || *((_QWORD *)ConfigurationHandle + 4) )
  {
    v16 = (const WCHAR *)*((_QWORD *)ConfigurationHandle + 4);
    v17 = 0x40000000;
  }
  else
  {
    v16 = (const WCHAR *)((char *)ConfigurationHandle + 176);
    v17 = 1;
  }
  *Status = RtlWriteRegistryValue(v17, v16, (PCWSTR)Buffer, v13, ValueData, ValueLength);
  if ( v7 )
    ExFreePoolWithTag(Buffer, 0);
LABEL_14:
  if ( (unsigned __int8)byte_1C00895CF >= 4u )
    WPP_SF_q(0x16u, &WPP_88e16e7e343236ed4c0ce3da79f3a552_Traceguids, (__int64)ConfigurationHandle);
}
