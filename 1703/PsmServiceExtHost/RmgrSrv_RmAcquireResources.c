/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x18001B360
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@K_KPEAXKW44PendType@2@_NPEA_NPEAPEAUResourceHandle__@2@@Z @ 0x18000BD0C (-RmAcquireResources@ResourceManager@ExecutionModel@@QEAAJKPEAU_ResourceInfo@2@W4Enum@Priority@2@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        __int64 a6,
        void *a7,
        int a8,
        int a9,
        unsigned int *a10,
        _QWORD *a11)
{
  unsigned int *v12; // rdi
  _QWORD *v13; // r14
  int v16; // r13d
  int v17; // ebx
  const struct _TlgProvider_t *v18; // rcx
  const GUID *v19; // r8
  const GUID *v20; // r9
  HANDLE CurrentProcess; // rbx
  HANDLE v22; // rax
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r9
  signed int LastError; // eax
  char v29; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int8 v30; // [rsp+61h] [rbp-9Fh]
  int v31; // [rsp+64h] [rbp-9Ch] BYREF
  int v32; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v33; // [rsp+6Ch] [rbp-94h] BYREF
  unsigned int v34; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v35; // [rsp+74h] [rbp-8Ch] BYREF
  int v36; // [rsp+78h] [rbp-88h] BYREF
  _DWORD *v37; // [rsp+80h] [rbp-80h] BYREF
  HANDLE TargetHandle; // [rsp+88h] [rbp-78h] BYREF
  HANDLE hSourceHandle; // [rsp+90h] [rbp-70h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+A0h] [rbp-60h] BYREF
  int *v41; // [rsp+C0h] [rbp-40h]
  void *v42; // [rsp+C8h] [rbp-38h]
  unsigned int *v43; // [rsp+D0h] [rbp-30h]
  __int64 v44; // [rsp+D8h] [rbp-28h]
  unsigned int *v45; // [rsp+E0h] [rbp-20h]
  void *v46; // [rsp+E8h] [rbp-18h]
  unsigned int *v47; // [rsp+F0h] [rbp-10h]
  const GUID *v48; // [rsp+F8h] [rbp-8h]
  int *v49; // [rsp+100h] [rbp+0h]
  const GUID *v50; // [rsp+108h] [rbp+8h]
  int *v51; // [rsp+110h] [rbp+10h]
  const GUID *v52; // [rsp+118h] [rbp+18h]

  v12 = a10;
  v13 = a11;
  v31 = 0;
  v37 = a3;
  hSourceHandle = a7;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v16 = a9;
  v17 = (int)v45;
  TargetHandle = 0LL;
  v29 = 0;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(0LL, 2uLL) )
  {
    v32 = v17;
    v41 = &v32;
    v43 = &v33;
    v45 = &v34;
    v47 = &v35;
    v49 = &a8;
    v51 = &v36;
    v42 = (void *)v19;
    v33 = a5;
    v44 = (__int64)v19;
    v34 = a2;
    v46 = (void *)v19;
    v35 = a4;
    v48 = v19;
    v50 = v19;
    v36 = v16;
    v52 = v19;
    TlgWrite(v18, &unk_18003F273, v19, v20, 8u, RpcCallAttributes);
  }
  v30 = a5 == v17;
  CurrentProcess = GetCurrentProcess();
  v22 = GetCurrentProcess();
  if ( DuplicateHandle(v22, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v31 = ExecutionModel::ResourceManager::RmAcquireResources(
            v23,
            a2,
            v37,
            a4,
            a5,
            a6,
            (__int64)TargetHandle,
            a8,
            v16,
            v30,
            &v29,
            v13);
    LODWORD(v24) = v31;
    if ( v31 >= 0 )
      *v12 = v29 != 0;
  }
  else
  {
    LastError = GetLastError();
    LODWORD(v24) = LastError;
    if ( LastError > 0 )
    {
      LODWORD(v24) = (unsigned __int16)LastError | 0x80070000;
      v31 = (int)v24;
    }
    else
    {
      v31 = LastError;
    }
  }
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v42 = v25;
    v41 = &v31;
    v37 = (_DWORD *)*v13;
    v43 = (unsigned int *)&v37;
    v44 = 8LL;
    v45 = v12;
    v46 = v25;
    TlgWrite(v25, &unk_18003F1E6, v24, v26, 5u, RpcCallAttributes);
    LODWORD(v24) = v31;
  }
  return (unsigned int)v24;
}
