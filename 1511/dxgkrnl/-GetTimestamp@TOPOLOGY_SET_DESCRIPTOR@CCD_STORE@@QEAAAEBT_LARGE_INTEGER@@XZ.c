/*
 * XREFs of ?GetTimestamp@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAAEBT_LARGE_INTEGER@@XZ @ 0x1C0060CA8
 * Callers:
 *     ?_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@PEAX@Z @ 0x1C005F190 (-_FindTopologySetIdDescriptorCallback@CCD_RECENT_TOPOLOGY_RETRIEVER@@CAJPEAVTOPOLOGY_SET_DESCRIP.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 */

const union _LARGE_INTEGER *__fastcall CCD_STORE::TOPOLOGY_SET_DESCRIPTOR::GetTimestamp(
        CCD_STORE::TOPOLOGY_SET_DESCRIPTOR *this)
{
  __int64 *v1; // rbx
  int v3; // eax
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v7; // rax
  __int64 v8; // [rsp+30h] [rbp-19h] BYREF
  int v9; // [rsp+38h] [rbp-11h]
  const WCHAR *v10; // [rsp+40h] [rbp-9h]
  __int64 *v11; // [rsp+48h] [rbp-1h]
  int v12; // [rsp+50h] [rbp+7h]
  __int64 v13; // [rsp+58h] [rbp+Fh]
  int v14; // [rsp+60h] [rbp+17h]
  __int64 v15; // [rsp+68h] [rbp+1Fh]
  _BYTE v16[48]; // [rsp+70h] [rbp+27h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+67h] BYREF

  v1 = (__int64 *)((char *)this + 56);
  if ( !*((_QWORD *)this + 7) )
  {
    v8 = 0LL;
    v13 = 0LL;
    v14 = 0;
    v15 = 0LL;
    v10 = L"Timestamp";
    v17 = 4294967288LL;
    v9 = 292;
    v11 = &v17;
    v12 = 184549376;
    memset(v16, 0, sizeof(v16));
    v3 = RtlQueryRegistryValuesEx(0x40000000LL, *((_QWORD *)this + 8), &v8, 0LL, 0LL);
    v5 = v3;
    if ( v3 < 0 )
    {
      v7 = WdLogNewEntry5_WdError(v4);
      *(_QWORD *)(v7 + 24) = v5;
      WdLogEvent5_WdError(v7);
    }
    else
    {
      *v1 = v17;
    }
  }
  return (const union _LARGE_INTEGER *)v1;
}
