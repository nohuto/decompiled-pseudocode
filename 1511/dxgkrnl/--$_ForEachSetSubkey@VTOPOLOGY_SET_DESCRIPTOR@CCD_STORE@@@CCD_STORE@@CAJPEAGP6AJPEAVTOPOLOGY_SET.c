/*
 * XREFs of ??$_ForEachSetSubkey@VTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@@CCD_STORE@@CAJPEAGP6AJPEAVTOPOLOGY_SET_DESCRIPTOR@0@PEAX@Z2@Z @ 0x1C005F3AC
 * Callers:
 *     ?_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C00C4770 (-_ProcessConnectedSetDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVCONNECTED_SET_DESC.c)
 * Callees:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 *     sub_1C005F2F8 @ 0x1C005F2F8 (sub_1C005F2F8.c)
 *     sub_1C005F34C @ 0x1C005F34C (sub_1C005F34C.c)
 *     sub_1C005F50C @ 0x1C005F50C (sub_1C005F50C.c)
 *     ??0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z @ 0x1C0060C00 (--0TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@AEAA@PEAXPEBU_STRING@@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0061B74 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
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
  int v8; // eax
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
  struct _UNICODE_STRING v29; // [rsp+38h] [rbp-29h] BYREF
  _BYTE v30[112]; // [rsp+48h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+C8h] [rbp+67h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+6Fh] BYREF
  void *v33; // [rsp+E0h] [rbp+7Fh]

  Handle = a2;
  KeyHandle = 0LL;
  v4 = sub_1C005F2F8(
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
      v8 = sub_1C005F50C(KeyHandle, i);
      TopologySetIdDescriptorCallback = v8;
      if ( v8 == -2147483622 )
      {
        v22 = (_QWORD *)WdLogNewEntry5_WdTrace(v10, v9, v11, v12);
        LODWORD(TopologySetIdDescriptorCallback) = 0;
        v22[3] = i;
        v22[5] = CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback;
        v22[4] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\GraphicsDrivers\\Configuration\\";
        v22[6] = a3;
        goto LABEL_11;
      }
      if ( v8 < 0 )
        break;
      v13 = v33;
      v29.Length = *((_WORD *)v33 + 6);
      v29.MaximumLength = *((_WORD *)v33 + 6);
      v29.Buffer = (wchar_t *)((char *)v33 + 16);
      if ( v29.Length != *((_DWORD *)v33 + 3) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v29.Length);
        WdLogEvent5_WdAssertion(v25);
      }
      TopologySetIdDescriptorCallback = sub_1C005F34C(&Handle, 0xF003Fu, KeyHandle, &v29, 0LL);
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
        (CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v30,
        Handle,
        0LL);
      TopologySetIdDescriptorCallback = (int)CCD_RECENT_TOPOLOGY_RETRIEVER::_FindTopologySetIdDescriptorCallback(
                                               (struct CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *)v30,
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
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v30);
        goto LABEL_11;
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)v30);
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
