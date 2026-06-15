/*
 * XREFs of ?ConnectorProbablySupportsFormat@CEndpointCharacteristics@@QEAA_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEBUtWAVEFORMATEX@@@Z @ 0x1800A5624
 * Callers:
 *     ?ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@H@Z @ 0x18007F914 (-ConfirmDeviceCanRenderFormat@CPolicyConfig@@CAJPEAVCEndpointCharacteristics@@PEBUtWAVEFORMATEX@.c)
 * Callees:
 *     ??A?$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V?$CSimpleArrayEqualHelper@PEAVCConnectorProcessingModeCharacteristics@@@ATL@@@ATL@@QEAAAEAPEAVCConnectorProcessingModeCharacteristics@@H@Z @ 0x18003FC90 (--A-$CSimpleArray@PEAVCConnectorProcessingModeCharacteristics@@V-$CSimpleArrayEqualHelper@PEAVCC.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180069C8C (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z @ 0x18008B80C (-CompareWaveFormat@@YAHPEBUtWAVEFORMATEX@@0@Z.c)
 */

char __fastcall CEndpointCharacteristics::ConnectorProbablySupportsFormat(
        CEndpointCharacteristics *this,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a2,
        struct _GUID *a3,
        const struct tWAVEFORMATEX *a4)
{
  char *v4; // rsi
  __int64 v7; // rax
  int v8; // ebp
  int **v9; // rax
  int *v10; // rbx
  int v11; // edi
  __int64 v12; // r14

  v4 = (char *)this + 424;
  if ( a2 != eKeywordDetectorConnector )
    v4 = (char *)this + 416;
  v7 = *(_QWORD *)v4;
  v8 = 0;
  if ( *(int *)(*(_QWORD *)v4 + 8LL) <= 0 )
    return 0;
  while ( 1 )
  {
    v9 = (int **)ATL::CSimpleArray<CConnectorProcessingModeCharacteristics *,ATL::CSimpleArrayEqualHelper<CConnectorProcessingModeCharacteristics *>>::operator[](
                   v7,
                   v8);
    v10 = *v9;
    if ( *(_QWORD *)*v9 == *(_QWORD *)&a3->Data1 && *((_QWORD *)v10 + 1) == *(_QWORD *)a3->Data4 )
    {
      v11 = 0;
      if ( v10[10] > 0 )
        break;
    }
LABEL_12:
    v7 = *(_QWORD *)v4;
    if ( ++v8 >= *(_DWORD *)(*(_QWORD *)v4 + 8LL) )
      return 0;
  }
  v12 = 0LL;
  while ( 1 )
  {
    if ( v12 < 0 || v11 >= v10[10] )
    {
      ATL::_AtlRaiseException(0xC000008C);
      JUMPOUT(0x1800A56E0LL);
    }
    if ( (unsigned int)CompareWaveFormat(a4, *(const struct tWAVEFORMATEX **)(v12 + *((_QWORD *)v10 + 4))) )
      return 1;
    ++v11;
    v12 += 8LL;
    if ( v11 >= v10[10] )
      goto LABEL_12;
  }
}
