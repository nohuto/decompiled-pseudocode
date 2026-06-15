/*
 * XREFs of ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x18008800C
 * Callers:
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x180067B44 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 * Callees:
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x180024740 (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003462C (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 */

char __fastcall CEndpointCharacteristics::ConnectorProbablySupportsFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  __int64 *v4; // r15
  int i; // edi
  int **v8; // rax
  int *v9; // rbx
  __int64 v10; // rax
  int v11; // esi
  __int64 v12; // r14

  v4 = (__int64 *)((char *)this + 416);
  if ( a2 != eKeywordDetectorConnector )
    v4 = (__int64 *)((char *)this + 408);
  for ( i = 0; ; ++i )
  {
    if ( i >= *(_DWORD *)(*v4 + 8) )
      return 0;
    v8 = (int **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                   *v4,
                   i);
    v9 = *v8;
    v10 = *(_QWORD *)*v8 - *(_QWORD *)&a3->Data1;
    if ( !v10 )
      v10 = *((_QWORD *)v9 + 1) - *(_QWORD *)a3->Data4;
    if ( !v10 )
    {
      v11 = 0;
      if ( v9[10] > 0 )
        break;
    }
LABEL_14:
    ;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 < 0 || v11 >= v9[10] )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      __debugbreak();
    }
    if ( (unsigned int)CompareWaveFormat(a4, *(const struct tWAVEFORMATEX **)(v12 + *((_QWORD *)v9 + 4))) )
      return 1;
    ++v11;
    v12 += 8LL;
    if ( v11 >= v9[10] )
      goto LABEL_14;
  }
}
