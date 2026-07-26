/*
 * XREFs of ndisIovReadSwitchConfiguration @ 0x1C00D9DA0
 * Callers:
 *     ndisIovCreateDefaultNicSwitch @ 0x1C00ABC88 (ndisIovCreateDefaultNicSwitch.c)
 * Callees:
 *     memmove @ 0x1C0023700 (memmove.c)
 *     NdisReadConfiguration @ 0x1C00A9EE0 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisIovReadSwitchConfiguration(NDIS_HANDLE ConfigurationHandle, __int64 a2)
{
  unsigned int v4; // edx
  PNDIS_CONFIGURATION_PARAMETER v5; // rdx
  unsigned __int16 Length; // ax
  int Status; // [rsp+48h] [rbp+18h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+50h] [rbp+20h] BYREF

  Status = 0;
  ParameterValue = 0LL;
  if ( *(_BYTE *)(a2 + 1) && *(_WORD *)(a2 + 2) >= 0x224u )
  {
    NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchFlagsStr, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      *(_DWORD *)(a2 + 4) = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchTypeStr, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        *(_DWORD *)(a2 + 8) = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchIdStr, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          *(_DWORD *)(a2 + 12) = ParameterValue->ParameterData.IntegerData;
          NdisReadConfiguration(&Status, &ParameterValue, ConfigurationHandle, &NicSwitchNameStr, NdisParameterString);
          v4 = Status;
          if ( !Status )
          {
            v5 = ParameterValue;
            Length = ParameterValue->ParameterData.StringData.Length;
            if ( Length <= 0x200u )
            {
              *(_WORD *)(a2 + 16) = Length;
              memmove((void *)(a2 + 18), v5->ParameterData.StringData.Buffer, v5->ParameterData.StringData.Length);
              NdisReadConfiguration(
                &Status,
                &ParameterValue,
                ConfigurationHandle,
                &NicSwitchNumVFsStr,
                NdisParameterInteger);
              v4 = Status;
              if ( !Status )
                *(_DWORD *)(a2 + 532) = ParameterValue->ParameterData.IntegerData;
            }
            else
            {
              return (unsigned int)-1073741811;
            }
          }
        }
      }
    }
  }
  else
  {
    return (unsigned int)-1073676267;
  }
  return v4;
}
