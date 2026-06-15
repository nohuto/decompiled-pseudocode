/*
 * XREFs of ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800A5048
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18003F870 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     ??1?$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ @ 0x180067078 (--1-$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800A4C30 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A56E8 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x1800A4B9C (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 */

CConnectorProcessingModeCharacteristics *__fastcall CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(
        CConnectorProcessingModeCharacteristics *this)
{
  CConnectorProcessingModeCharacteristics::~CConnectorProcessingModeCharacteristics(this);
  operator delete(this);
  return this;
}
