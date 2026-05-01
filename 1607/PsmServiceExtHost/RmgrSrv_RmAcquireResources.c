/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x18001A8A0
 * Callers:
 *     <none>
 * Callees:
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000DD1C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        struct ExecutionModel::_ResourceInfo *a3,
        int a4,
        unsigned int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        unsigned int *a10,
        struct ExecutionModel::_ResourceInfo **a11)
{
  unsigned int *v11; // rdi
  struct ExecutionModel::_ResourceInfo **v13; // r15
  int v16; // ebx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  unsigned __int8 v20; // si
  HANDLE CurrentProcess; // rbx
  HANDLE v22; // rax
  __int64 v23; // rcx
  const GUID *v24; // r8
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r9
  signed int LastError; // eax
  char v29[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v30; // [rsp+64h] [rbp-9Ch] BYREF
  int v31; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v32; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+74h] [rbp-8Ch] BYREF
  int v35; // [rsp+78h] [rbp-88h] BYREF
  struct ExecutionModel::_ResourceInfo *v36; // [rsp+80h] [rbp-80h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v40; // [rsp+C0h] [rbp-40h]
  const struct _TlgProvider_t *v41; // [rsp+C8h] [rbp-38h]
  unsigned int *v42; // [rsp+D0h] [rbp-30h]
  __int64 v43; // [rsp+D8h] [rbp-28h]
  unsigned int *v44; // [rsp+E0h] [rbp-20h]
  const struct _TlgProvider_t *v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  const struct _TlgProvider_t *v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  const struct _TlgProvider_t *v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  const struct _TlgProvider_t *v51; // [rsp+118h] [rbp+18h]

  v11 = a10;
  v13 = a11;
  v36 = a3;
  hSourceHandle = a7;
  v30 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v16 = (int)v44;
  TargetHandle = 0LL;
  v29[0] = 0;
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v31 = v16;
    v40 = &v31;
    v42 = &v32;
    v44 = &v33;
    v46 = &v34;
    v48 = &a8;
    v35 = a9;
    v50 = &v35;
    v41 = v17;
    v32 = a5;
    v43 = (__int64)v17;
    v33 = a2;
    v45 = v17;
    v34 = a4;
    v47 = v17;
    v49 = v17;
    v51 = v17;
    TlgWrite(v17, &unk_18003EBAE, v18, v19, 8u, RpcCallAttributes);
  }
  v20 = a5 == v16;
  CurrentProcess = GetCurrentProcess();
  v22 = GetCurrentProcess();
  if ( DuplicateHandle(v22, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v30 = ExecutionModel::ResourceManager::RmAcquireResources(
            v23,
            a2,
            v36,
            a4,
            a5,
            a6,
            (__int64)TargetHandle,
            a8,
            a9,
            v20,
            (const struct _TlgProvider_t *)v29,
            v13);
    LODWORD(v24) = v30;
    if ( v30 >= 0 )
      *v11 = v29[0] != 0;
  }
  else
  {
    LastError = GetLastError();
    LODWORD(v24) = LastError;
    if ( LastError > 0 )
    {
      LODWORD(v24) = (unsigned __int16)LastError | 0x80070000;
      v30 = (int)v24;
    }
    else
    {
      v30 = LastError;
    }
  }
  if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v41 = v25;
    v40 = &v30;
    v36 = *v13;
    v42 = (unsigned int *)&v36;
    v43 = 8LL;
    v44 = v11;
    v45 = v25;
    TlgWrite(v25, &unk_18003EB21, v24, v26, 5u, RpcCallAttributes);
    LODWORD(v24) = v30;
  }
  return (unsigned int)v24;
}
