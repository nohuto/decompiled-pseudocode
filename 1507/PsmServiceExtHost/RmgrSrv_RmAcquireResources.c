/*
 * XREFs of RmgrSrv_RmAcquireResources @ 0x18002FA70
 * Callers:
 *     <none>
 * Callees:
 *     ?_Delete@?$auto_xxx@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ @ 0x180005394 (-_Delete@-$auto_xxx@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@Z$0A@@tlx@@AEAAXXZ.c)
 *     _TlgWrite @ 0x180005FCC (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1800073AC (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x180024EDE (memset_0.c)
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
        _DWORD *a10,
        __int64 *a11)
{
  __int64 *v11; // rsi
  _DWORD *v13; // r15
  DWORD v16; // ebx
  const struct _TlgProvider_t *v17; // rcx
  const GUID *v18; // r8
  const GUID *v19; // r9
  bool v20; // r14
  HANDLE v21; // rbx
  HANDLE CurrentProcess; // rax
  signed int LastError; // eax
  unsigned int v24; // ebx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  int v29; // eax
  _BYTE v30[4]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v31; // [rsp+64h] [rbp-9Ch] BYREF
  int v32; // [rsp+68h] [rbp-98h]
  unsigned int v33; // [rsp+6Ch] [rbp-94h]
  __int64 v34; // [rsp+70h] [rbp-90h]
  unsigned int v35; // [rsp+78h] [rbp-88h] BYREF
  void *v36; // [rsp+80h] [rbp-80h] BYREF
  int v37; // [rsp+88h] [rbp-78h] BYREF
  unsigned int v38; // [rsp+8Ch] [rbp-74h] BYREF
  DWORD v39; // [rsp+90h] [rbp-70h] BYREF
  __int64 v40; // [rsp+98h] [rbp-68h] BYREF
  int v41; // [rsp+A0h] [rbp-60h] BYREF
  HANDLE TargetHandle; // [rsp+A8h] [rbp-58h] BYREF
  HANDLE hSourceHandle; // [rsp+B0h] [rbp-50h]
  EVENT_DATA_DESCRIPTOR RpcCallAttributes[2]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int *v45; // [rsp+E0h] [rbp-20h]
  const struct _TlgProvider_t *v46; // [rsp+E8h] [rbp-18h]
  int *v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  DWORD dwProcessId[2]; // [rsp+100h] [rbp+0h]
  const struct _TlgProvider_t *v50; // [rsp+108h] [rbp+8h]
  int *v51; // [rsp+110h] [rbp+10h]
  const struct _TlgProvider_t *v52; // [rsp+118h] [rbp+18h]
  int *v53; // [rsp+120h] [rbp+20h]
  const struct _TlgProvider_t *v54; // [rsp+128h] [rbp+28h]
  int *v55; // [rsp+130h] [rbp+30h]
  const struct _TlgProvider_t *v56; // [rsp+138h] [rbp+38h]

  v11 = a11;
  v13 = a10;
  v32 = a6;
  v40 = a3;
  v33 = a4;
  hSourceHandle = a7;
  v34 = (__int64)a11;
  v31 = 0;
  RpcCallAttributes[0].Ptr = 0x1000000002LL;
  memset_0(&RpcCallAttributes[0].Size, 0, 0x68uLL);
  RpcServerInqCallAttributesW(ClientBinding, RpcCallAttributes);
  v16 = dwProcessId[0];
  v36 = 0LL;
  TargetHandle = 0LL;
  v30[0] = 0;
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v38 = a4;
    v45 = &v39;
    v39 = v16;
    v47 = &v41;
    *(_QWORD *)dwProcessId = &v35;
    v51 = (int *)&v38;
    v53 = &a8;
    v37 = a9;
    v55 = &v37;
    v46 = v17;
    v41 = a5;
    v48 = (__int64)v17;
    v35 = a2;
    v50 = v17;
    v52 = v17;
    v54 = v17;
    v56 = v17;
    TlgWrite(v17, &unk_180059A9A, v18, v19, 8u, RpcCallAttributes);
  }
  v20 = a5 == v16;
  v21 = OpenProcess(0x40u, 0, v16);
  if ( v21
    && (tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v36),
        v36 = v21,
        CurrentProcess = GetCurrentProcess(),
        DuplicateHandle(v21, hSourceHandle, CurrentProcess, &TargetHandle, 0, 0, 2u)) )
  {
    v29 = ((__int64 (__fastcall *)(struct IUnknown *, _QWORD, __int64, _QWORD, int, _QWORD, HANDLE, int, int, bool, _BYTE *, __int64))g_pResourceManager->lpVtbl[7].QueryInterface)(
            g_pResourceManager,
            a2,
            v40,
            v33,
            a5,
            v32,
            TargetHandle,
            a8,
            a9,
            v20,
            v30,
            v34);
    v11 = (__int64 *)v34;
    v31 = v29;
    v24 = v29;
    if ( v29 >= 0 )
      *v13 = v30[0] != 0;
  }
  else
  {
    LastError = GetLastError();
    v24 = LastError;
    if ( LastError <= 0 )
    {
      v31 = LastError;
    }
    else
    {
      v24 = (unsigned __int16)LastError | 0x80070000;
      v31 = v24;
    }
  }
  if ( (unsigned int)dword_1800690A0 > 4 && TlgKeywordOn((TraceLoggingHProvider)4, 2uLL) )
  {
    v46 = v25;
    v45 = &v31;
    v40 = *v11;
    v47 = (int *)&v40;
    v48 = 8LL;
    *(_QWORD *)dwProcessId = v13;
    v50 = v25;
    TlgWrite(v25, &unk_1800596D1, v26, v27, 5u, RpcCallAttributes);
    v24 = v31;
  }
  tlx::auto_xxx<void *,int (*)(void *),&int CloseHandle(void *),0>::_Delete(&v36);
  return v24;
}
