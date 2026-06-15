/*
 * XREFs of ??_GCConnectorProcessingModeCharacteristics@@QEAAPEAXI@Z @ 0x1800A7850
 * Callers:
 *     ?DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x18003B090 (-DeserializeProcessingModeCharacteristics@@YAJKPEAEPEAPEAV-$CSimpleArray@PEAVCConnectorProcessin.c)
 *     ??1?$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ @ 0x1800686FC (--1-$CAutoPtr@VCConnectorProcessingModeCharacteristics@@@ATL@@QEAA@XZ.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800A746C (--1CEndpointCharacteristics@@MEAA@XZ.c)
 *     ?DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@IPEATKSDATAFORMAT@@PEAU_KSAUDIO_PACKETSIZE_CONSTRAINTS@@_N_JPEAPEAV?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@@Z @ 0x1800A7CF0 (-DiscoverConnectorProcessingModeCharacteristics@CEndpointCharacteristics@@AEAAJW4__MIDL___MIDL_i.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800686B8 (--_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z.c)
 *     ??A?$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V?$CSimpleArrayEqualHelper@PEAUCConnectorFormatCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAUCConnectorFormatCharacteristics@@H@Z @ 0x1800A7748 (--A-$CSimpleArray@PEAUCConnectorFormatCharacteristics@@V-$CSimpleArrayEqualHelper@PEAUCConnector.c)
 */

CConnectorProcessingModeCharacteristics *__fastcall CConnectorProcessingModeCharacteristics::`scalar deleting destructor'(
        CConnectorProcessingModeCharacteristics *this)
{
  int i; // edi
  LPVOID *v3; // rcx
  void *v4; // rcx

  for ( i = 0; i < *((_DWORD *)this + 6); ++i )
  {
    v3 = *(LPVOID **)ATL::CSimpleArray<CConnectorFormatCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorFormatCharacteristics *>>::operator[](
                       (__int64)this + 16,
                       i);
    if ( v3 )
      CConnectorFormatCharacteristics::`scalar deleting destructor'(v3);
  }
  v4 = (void *)*((_QWORD *)this + 2);
  if ( v4 )
  {
    free(v4);
    *((_QWORD *)this + 2) = 0LL;
  }
  *((_DWORD *)this + 6) = 0;
  *((_DWORD *)this + 7) = 0;
  operator delete(this);
  return this;
}
