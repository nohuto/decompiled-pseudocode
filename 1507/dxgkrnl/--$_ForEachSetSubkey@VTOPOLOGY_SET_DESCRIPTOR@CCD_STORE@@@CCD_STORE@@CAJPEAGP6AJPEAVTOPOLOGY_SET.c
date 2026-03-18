/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C009C868
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00B09A0 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C009C700 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     _CcdRetrieveSubkeyInfoFromRegistry @ 0x1C009C9C8 (_CcdRetrieveSubkeyInfoFromRegistry.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C009CCE8 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     _CcdOpenRegistrySubkey @ 0x1C009D3BC (_CcdOpenRegistrySubkey.c)
 *     _CcdOpenRegistrySubkey_0 @ 0x1C009D410 (_CcdOpenRegistrySubkey_0.c)
 */

__int64 __fastcall CCD_STORE::_ForEachSetSubkey<CCD_STORE::TOPOLOGY_SET_DESCRIPTOR>(
        __int64 a1,
        void *a2,
        CCD_RECENT_TOPOLOGY_RETRIEVER *a3)
{
  int v4; // eax
  __int64 v5; // rcx
  __int64 TopologySetIdDescriptorCallback; // rbx
  ULONG i; // edi
  int SubkeyInfoFromRegistry; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  void *v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax
  _QWORD *v24; // rax
  __int64 v25; // rax
  _QWORD *v26; // rax
  _QWORD *v27; // rax
  _QWORD *v28; // rax
  _WORD v29[4]; // [rsp+38h] [rbp-29h] BYREF
  char *v30; // [rsp+40h] [rbp-21h]
  _BYTE v31[112]; // [rsp+48h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF
  void *v34; // [rsp+E0h] [rbp+7Fh]

  Handle = a2;
  KeyHandle = 0LL;
  v4 = CcdOpenRegistrySubkey(
         (int)&KeyHandle,
         131097,
         0,
         L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\",
         (PULONG)&Handle);
  TopologySetIdDescriptorCallback = v4;
  if ( v4 < 0 )
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v24[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v24[3] = TopologySetIdDescriptorCallback;
    v24[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v24[6] = a3;
    WdLogEvent5_WdError(v24);
  }
  else
  {
    for ( i = 0; ; ++i )
    {
      Handle = 0LL;
      SubkeyInfoFromRegistry = CcdRetrieveSubkeyInfoFromRegistry(KeyHandle, i);
      TopologySetIdDescriptorCallback = SubkeyInfoFromRegistry;
      if ( SubkeyInfoFromRegistry == -2147483622 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v22[3] = i;
        v22[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v22[6] = a3;
        goto LABEL_11;
      }
      if ( SubkeyInfoFromRegistry < 0 )
        break;
      v13 = v34;
      v29[0] = *((_WORD *)v34 + 6);
      v29[1] = *((_WORD *)v34 + 6);
      v30 = (char *)v34 + 16;
      if ( v29[0] != *((_DWORD *)v34 + 3) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v29[0], v9, v11, v12);
        WdLogEvent5_WdAssertion(v25);
      }
      TopologySetIdDescriptorCallback = (int)CcdOpenRegistrySubkey_0(
                                               (int)&Handle,
                                               983103,
                                               (int)KeyHandle,
                                               (int)v29,
                                               0LL);
      operator delete(v13);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v27 = (_QWORD *)WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        v27[4] = i;
        v27[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v27[3] = TopologySetIdDescriptorCallback;
        v27[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v27[7] = a3;
        WdLogEvent5_WdWarning(v27);
        goto LABEL_11;
      }
      CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::TOPOLOGY_SET_DESCRIPTOR(
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v31,
        Handle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v31,
                                               a3);
      ZwClose(Handle);
      if ( (int)TopologySetIdDescriptorCallback < 0 )
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v19, v18, v20, v21);
        v26[4] = i;
        v26[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v26[3] = TopologySetIdDescriptorCallback;
        v26[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v26[7] = a3;
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v31);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v31);
    }
    v28 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
    v28[4] = i;
    v28[6] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
    v28[3] = TopologySetIdDescriptorCallback;
    v28[5] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
    v28[7] = a3;
LABEL_11:
    ZwClose(KeyHandle);
  }
  return (unsigned int)TopologySetIdDescriptorCallback;
}
