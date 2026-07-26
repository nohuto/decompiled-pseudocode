/*
 * XREFs of ndisReadMiniportSpecificPortAuthStates @ 0x1C009F434
 * Callers:
 *     ndisReadMiniportDefaultPortAuthStates @ 0x1C009ECAC (ndisReadMiniportDefaultPortAuthStates.c)
 *     ndisReadMiniportMediaSpecificPortAuthStates @ 0x1C009ED9C (ndisReadMiniportMediaSpecificPortAuthStates.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     NdisReadConfiguration @ 0x1C00A0620 (NdisReadConfiguration.c)
 */

__int64 __fastcall ndisReadMiniportSpecificPortAuthStates(_DWORD *a1, void *a2)
{
  unsigned int v4; // edi
  unsigned int IntegerData; // r12d
  unsigned int v7; // r15d
  unsigned int v8; // r14d
  unsigned int v9; // r8d
  UNICODE_STRING Keyword; // [rsp+30h] [rbp-40h] BYREF
  UNICODE_STRING v11; // [rsp+40h] [rbp-30h] BYREF
  UNICODE_STRING v12; // [rsp+50h] [rbp-20h] BYREF
  UNICODE_STRING v13; // [rsp+60h] [rbp-10h] BYREF
  int Status; // [rsp+B0h] [rbp+40h] BYREF
  PNDIS_CONFIGURATION_PARAMETER ParameterValue; // [rsp+B8h] [rbp+48h] BYREF

  *(_DWORD *)&Keyword.Length = 3276848;
  Keyword.Buffer = L"PortAuthSendControlState";
  *(_DWORD *)&v11.Length = 3670070;
  v11.Buffer = L"PortAuthReceiveControlState";
  *(_DWORD *)&v12.Length = 4063292;
  v12.Buffer = L"PortAuthSendAuthorizationState";
  *(_DWORD *)&v13.Length = 4456514;
  v13.Buffer = L"PortAuthReceiveAuthorizationState";
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_q(0x31u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, (__int64)a1);
  NdisReadConfiguration(&Status, &ParameterValue, a2, &Keyword, NdisParameterInteger);
  v4 = Status;
  if ( !Status && ParameterValue->ParameterData.StringData.Length <= 2u )
  {
    IntegerData = ParameterValue->ParameterData.IntegerData;
    NdisReadConfiguration(&Status, &ParameterValue, a2, &v11, NdisParameterInteger);
    v4 = Status;
    if ( !Status )
    {
      v7 = ParameterValue->ParameterData.IntegerData;
      NdisReadConfiguration(&Status, &ParameterValue, a2, &v12, NdisParameterInteger);
      v4 = Status;
      if ( !Status )
      {
        v8 = ParameterValue->ParameterData.IntegerData;
        NdisReadConfiguration(&Status, &ParameterValue, a2, &v13, NdisParameterInteger);
        v4 = Status;
        if ( !Status )
        {
          v9 = ParameterValue->ParameterData.IntegerData;
          a1[844] = v8;
          a1[845] = v9;
          a1[842] = IntegerData;
          a1[843] = v7;
          a1[840] = v8;
          a1[841] = v9;
          a1[838] = IntegerData;
          a1[839] = v7;
        }
      }
    }
  }
  if ( (unsigned __int8)byte_1C00895D4 >= 4u )
    WPP_SF_qD(0x32u, &WPP_a222eda86a353c9b09f74c8666d4f83e_Traceguids, (__int64)a1, v4);
  return v4;
}
