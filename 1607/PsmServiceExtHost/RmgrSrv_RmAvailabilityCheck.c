/*
 * XREFs of RmgrSrv_RmAvailabilityCheck @ 0x1800287E0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     ?RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K@Z @ 0x18002D09C (-RmAvailabilityCheck@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2.c)
 */

__int64 __fastcall RmgrSrv_RmAvailabilityCheck(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5)
{
  const struct _TlgProvider_t *v9; // rcx
  const GUID *v10; // r8
  const GUID *v11; // r9
  unsigned int v12; // eax
  const struct _TlgProvider_t *v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  unsigned int v17; // [rsp+30h] [rbp-D0h] BYREF
  int v18; // [rsp+34h] [rbp-CCh] BYREF
  int v19; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v20; // [rsp+3Ch] [rbp-C4h] BYREF
  unsigned int v21; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD RpcCallAttributes[2]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v23[56]; // [rsp+58h] [rbp-A8h] BYREF
  int v24; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+C0h] [rbp-40h] BYREF
  int *v26; // [rsp+E0h] [rbp-20h]
  int v27; // [rsp+E8h] [rbp-18h]
  int v28; // [rsp+ECh] [rbp-14h]
  int *v29; // [rsp+F0h] [rbp-10h]
  int v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+FCh] [rbp-4h]
  int *v32; // [rsp+100h] [rbp+0h]
  int v33; // [rsp+108h] [rbp+8h]
  int v34; // [rsp+10Ch] [rbp+Ch]
  int *v35; // [rsp+110h] [rbp+10h]
  int v36; // [rsp+118h] [rbp+18h]
  int v37; // [rsp+11Ch] [rbp+1Ch]

  v17 = 0;
  RpcCallAttributes[0] = 2;
  RpcCallAttributes[1] = 16;
  memset_0(v23, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v9, 2uLL) )
  {
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v37 = 0;
    v18 = v24;
    v26 = &v18;
    v29 = &v19;
    v32 = (int *)&v20;
    v35 = (int *)&v21;
    v27 = 4;
    v19 = a5;
    v30 = 4;
    v20 = a2;
    v33 = 4;
    v21 = a4;
    v36 = 4;
    TlgWrite(v9, &unk_18003EABB, v10, v11, 6u, &pData);
  }
  v12 = ExecutionModel::ResourceManager::RmAvailabilityCheck(v9, a2, a3, a4, a5);
  LODWORD(v13) = v12;
  v17 = v12;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)v12, 2uLL) )
  {
    v28 = 0;
    v26 = (int *)&v17;
    v27 = 4;
    TlgWrite(v13, &unk_18003EC8D, v14, v15, 3u, &pData);
    LODWORD(v13) = v17;
  }
  return (unsigned int)v13;
}
