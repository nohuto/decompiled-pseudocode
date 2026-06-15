/*
 * XREFs of _lambda_54c77e54e42ef152cdcef462696c326e_::operator() @ 0x180087520
 * Callers:
 *     ??$FindFirstMatchingPreferredFormat@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@CEndpointCharacteristics@@AEAAJPEAUWAVEFORMATEXTENSIBLE@@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@Z @ 0x18008510C (--$FindFirstMatchingPreferredFormat@V_lambda_33f85ea5a64814e7f8077c61f279f339_@@@CEndpointCharac.c)
 *     ??$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@U_GUID@@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@Z @ 0x1800854E4 (--$ForEachCandidateFormatForMode@V_lambda_54c77e54e42ef152cdcef462696c326e_@@@CEndpointCharacter.c)
 *     ??$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180085CB4 (--$GetComputedDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristic.c)
 *     ??$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086A7C (--$GetDefaultFormat@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ.c)
 *     ??$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics@@AEAAJ_N0W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x180086DDC (--$GetDeviceFormatInternal@V_lambda_55a42c7c3426bff891a3f62b8d46795a_@@@CEndpointCharacteristics.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18002DA58 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ?DeviceInUse@AEError@@YA_NJ@Z @ 0x18006ACE4 (-DeviceInUse@AEError@@YA_NJ@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800874E8 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 *     ?AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z @ 0x180087824 (-AddProbableConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z @ 0x1800878AC (-AddUnsupportedFormat@CUnsupportedConnectorFormats@@QEAAXU_GUID@@PEAUtWAVEFORMATEX@@J@Z.c)
 *     ?DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@PEAUPacketSizeConstraints@@_N_JPEAI6666@Z @ 0x1800883A0 (-DiscoverPeriodicityCharacteristicsForFormat@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_.c)
 */

__int64 __fastcall lambda_54c77e54e42ef152cdcef462696c326e_::operator()(__int64 a1, struct tWAVEFORMATEX *a2, bool *a3)
{
  CConnectorProcessingModeCharacteristics *v6; // rax
  int v7; // r14d
  const struct tWAVEFORMATEX ***v8; // rax
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v9; // edx
  CEndpointCharacteristics *v10; // rcx
  int v11; // eax
  __int64 result; // rax
  int v13; // r9d
  CUnsupportedConnectorFormats *v14; // rcx
  struct PacketSizeConstraints *v15; // [rsp+20h] [rbp-60h]
  char v16; // [rsp+28h] [rbp-58h]
  __int64 v17; // [rsp+30h] [rbp-50h]
  unsigned int v18; // [rsp+60h] [rbp-20h] BYREF
  unsigned int v19[3]; // [rsp+64h] [rbp-1Ch] BYREF
  struct _GUID v20; // [rsp+70h] [rbp-10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+30h] BYREF
  unsigned int v22; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+C8h] [rbp+48h] BYREF

  if ( a3 )
    *a3 = 0;
  v6 = *(CConnectorProcessingModeCharacteristics **)a1;
  v7 = 0;
  if ( *(int *)(*(_QWORD *)a1 + 24LL) <= 0 )
  {
LABEL_6:
    v9 = *(_DWORD *)(a1 + 16);
    v10 = *(CEndpointCharacteristics **)(a1 + 8);
    v17 = *(_QWORD *)(a1 + 56);
    v16 = *(_BYTE *)(a1 + 48);
    v15 = *(struct PacketSizeConstraints **)(a1 + 40);
    v20 = *(struct _GUID *)(a1 + 20);
    v11 = CEndpointCharacteristics::DiscoverPeriodicityCharacteristicsForFormat(
            v10,
            v9,
            &v20,
            a2,
            v15,
            v16,
            v17,
            v19,
            &v18,
            &v23,
            &v22,
            &v21);
    if ( v11 < 0 )
    {
      if ( AEError::DeviceInUse((AEError *)(unsigned int)v11) )
      {
        CConnectorProcessingModeCharacteristics::AddProbableConnectorFormat(
          *(CConnectorProcessingModeCharacteristics **)a1,
          a2);
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 404LL) = 1;
      }
      else
      {
        v14 = *(CUnsupportedConnectorFormats **)(a1 + 64);
        if ( v14 )
        {
          v20 = *(struct _GUID *)(a1 + 20);
          CUnsupportedConnectorFormats::AddUnsupportedFormat(v14, &v20, a2, v13);
        }
      }
      return 0LL;
    }
    else
    {
      result = CConnectorProcessingModeCharacteristics::AddConnectorFormat(
                 *(CConnectorProcessingModeCharacteristics **)a1,
                 a2,
                 v19[0],
                 v18,
                 v23,
                 v22,
                 v21);
      if ( a3 )
        *a3 = (int)result >= 0;
    }
  }
  else
  {
    while ( 1 )
    {
      v8 = (const struct tWAVEFORMATEX ***)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                                             (__int64)v6 + 16,
                                             v7);
      if ( (unsigned int)CompareWaveFormat(a2, **v8) )
        break;
      v6 = *(CConnectorProcessingModeCharacteristics **)a1;
      if ( ++v7 >= *(_DWORD *)(*(_QWORD *)a1 + 24LL) )
        goto LABEL_6;
    }
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
  return result;
}
