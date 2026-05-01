/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x180001170
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x18001CC7C (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x18001CED4 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall RmgrSrv_RmAcquireResources(
        RPC_BINDING_HANDLE ClientBinding,
        unsigned int a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        void *a7,
        int a8,
        int a9,
        int *a10,
        __int64 *a11)
{
  int *v11; // r14
  __int64 *v13; // r13
  int v16; // ebx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  bool v20; // r15
  HANDLE CurrentProcess; // rbx
  HANDLE v22; // rax
  const GUID *v23; // r9
  const struct _TlgProvider_t *v24; // rcx
  const GUID *v25; // r8
  signed int LastError; // eax
  _BYTE v28[4]; // [rsp+60h] [rbp-A0h] BYREF
  int v29; // [rsp+64h] [rbp-9Ch] BYREF
  int v30; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v31; // [rsp+6Ch] [rbp-94h]
  int v32; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v33; // [rsp+74h] [rbp-8Ch]
  unsigned int v34; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v35; // [rsp+7Ch] [rbp-84h] BYREF
  int v36; // [rsp+80h] [rbp-80h] BYREF
  __int64 v37; // [rsp+88h] [rbp-78h] BYREF
  int v38; // [rsp+90h] [rbp-70h]
  HANDLE TargetHandle; // [rsp+98h] [rbp-68h] BYREF
  HANDLE hSourceHandle; // [rsp+A0h] [rbp-60h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+B0h] [rbp-50h] BYREF
  int *v42; // [rsp+D0h] [rbp-30h]
  const struct _TlgProvider_t *v43; // [rsp+D8h] [rbp-28h]
  int *v44; // [rsp+E0h] [rbp-20h]
  __int64 v45; // [rsp+E8h] [rbp-18h]
  int *v46; // [rsp+F0h] [rbp-10h]
  const struct _TlgProvider_t *v47; // [rsp+F8h] [rbp-8h]
  int *v48; // [rsp+100h] [rbp+0h]
  const struct _TlgProvider_t *v49; // [rsp+108h] [rbp+8h]
  int *v50; // [rsp+110h] [rbp+10h]
  const struct _TlgProvider_t *v51; // [rsp+118h] [rbp+18h]
  int *v52; // [rsp+120h] [rbp+20h]
  const struct _TlgProvider_t *v53; // [rsp+128h] [rbp+28h]

  v11 = a10;
  v13 = a11;
  v38 = a6;
  v37 = a3;
  v33 = a2;
  v31 = a4;
  hSourceHandle = a7;
  v29 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v16 = (int)v46;
  TargetHandle = 0LL;
  v28[0] = 0;
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v35 = a2;
    v42 = &v36;
    v36 = v16;
    v44 = &v32;
    v46 = (int *)&v35;
    v48 = (int *)&v34;
    v50 = &a8;
    v30 = a9;
    v52 = &v30;
    v43 = v17;
    v32 = a5;
    v45 = (__int64)v17;
    v47 = v17;
    v34 = a4;
    v49 = v17;
    v51 = v17;
    v53 = v17;
    TlgWrite(v17, &unk_180061270, v18, v19, 8u, RpcCallAttributes);
  }
  v20 = a5 == v16;
  CurrentProcess = GetCurrentProcess();
  v22 = GetCurrentProcess();
  if ( DuplicateHandle(v22, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u) )
  {
    v29 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64, _QWORD, int, _QWORD, HANDLE, int, int, bool, _BYTE *, __int64 *))g_pResourceManager->lpVtbl[7].QueryInterface)(
            g_pResourceManager,
            v33,
            v37,
            v31,
            a5,
            v38,
            TargetHandle,
            a8,
            a9,
            v20,
            v28,
            v13);
    LODWORD(v23) = v29;
    if ( v29 >= 0 )
      *v11 = v28[0] != 0;
  }
  else
  {
    LastError = GetLastError();
    LODWORD(v23) = LastError;
    if ( LastError > 0 )
    {
      LODWORD(v23) = (unsigned __int16)LastError | 0x80070000;
      v29 = (int)v23;
    }
    else
    {
      v29 = LastError;
    }
  }
  if ( (unsigned int)dword_180071060 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v43 = v24;
    v42 = &v29;
    v37 = *v13;
    v44 = (int *)&v37;
    v45 = 8LL;
    v46 = v11;
    v47 = v24;
    TlgWrite(v24, &unk_180060EB4, v25, v23, 5u, RpcCallAttributes);
    LODWORD(v23) = v29;
  }
  return (unsigned int)v23;
}
