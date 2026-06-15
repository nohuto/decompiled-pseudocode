/*
 * XREFs of s_midiOpenPort @ 0x180074340
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 *     ?GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z @ 0x1800740AC (-GetKsMidiDeviceInfo@@YAJPEBGPEAPEAGPEAI@Z.c)
 *     ?FilterInstantiate2@@YAJPEBGKPEAPEAX@Z @ 0x180083E84 (-FilterInstantiate2@@YAJPEBGKPEAPEAX@Z.c)
 */

__int64 __fastcall s_midiOpenPort(RPC_BINDING_HANDLE BindingHandle, unsigned __int16 *a2, HANDLE *a3)
{
  __int64 v3; // rdi
  unsigned __int16 *v4; // rsi
  signed int v7; // ebx
  int KsMidiDeviceInfo; // eax
  unsigned int v9; // edx
  int v10; // eax
  char *v11; // r14
  HRESULT v12; // eax
  RPC_STATUS v13; // eax
  signed int LastError; // eax
  HANDLE CurrentProcess; // rax
  unsigned __int16 *v17; // [rsp+40h] [rbp-79h] BYREF
  HANDLE FilterHandle; // [rsp+48h] [rbp-71h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-69h] BYREF
  void *ConnectionHandle; // [rsp+58h] [rbp-61h] BYREF
  $58C2C1BF6568EE28BD9B872E6BA03976 Connect[2]; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v22; // [rsp+130h] [rbp+77h] BYREF
  unsigned int Pid; // [rsp+138h] [rbp+7Fh] BYREF

  v3 = -1LL;
  v4 = 0LL;
  v17 = 0LL;
  FilterHandle = (HANDLE)-1LL;
  TargetHandle = (HANDLE)-1LL;
  if ( a3 )
  {
    KsMidiDeviceInfo = GetKsMidiDeviceInfo(a2, &v17, &v22);
    v4 = v17;
    v7 = KsMidiDeviceInfo;
    if ( KsMidiDeviceInfo >= 0 )
    {
      v10 = FilterInstantiate2(v17, v9, &FilterHandle);
      v11 = (char *)FilterHandle;
      v7 = v10;
      if ( v10 >= 0 )
      {
        memset(Connect, 0, 0x88uLL);
        *(&Connect[0].Interface.Alignment + 2) = 0LL;
        *(&Connect[0].Medium.Alignment + 2) = 0LL;
        Connect[0].PinToHandle = 0LL;
        Connect[0].Interface.Set = GUID_1a8766a0_62ce_11cf_a5d6_28db04c10000;
        Connect[0].PinId = v22;
        Connect[0].Priority.PriorityClass = 0x40000000;
        Connect[0].Priority.PrioritySubClass = 0x40000000;
        Connect[0].Medium.Set = GUID_4747b320_62ce_11cf_a5d6_28db04c10000;
        Connect[1].Interface.Set.Data1 = 64;
        *(GUID *)(&Connect[1].Medium.Alignment + 1) = GUID_1d262760_e957_11cf_a5d6_28db04c10000;
        *((GUID *)&Connect[1].Interface.Alignment + 1) = GUID_e725d360_62cc_11cf_a5d6_28db04c10000;
        *(GUID *)&Connect[1].PinId = GUID_0f6417d6_c318_11d0_a43f_00a0c9223196;
        v12 = KsCreatePin2(FilterHandle, Connect, 0xC0000000, &ConnectionHandle);
        v7 = v12;
        if ( v12 > 0 )
          v7 = (unsigned __int16)v12 | 0x80070000;
        if ( v7 >= 0 )
        {
          v13 = I_RpcBindingInqLocalClientPID(BindingHandle, &Pid);
          if ( v13 )
          {
            if ( v13 > 0 )
              v7 = (unsigned __int16)v13 | 0x80070000;
            else
              v7 = v13;
          }
          else if ( !RpcImpersonateClient(BindingHandle) )
          {
            v3 = (__int64)OpenProcess(0x40u, 0, Pid);
            if ( v3
              && (CurrentProcess = GetCurrentProcess(),
                  DuplicateHandle(CurrentProcess, ConnectionHandle, (HANDLE)v3, &TargetHandle, 0xC0000000, 0, 1u)) )
            {
              *a3 = TargetHandle;
            }
            else
            {
              LastError = GetLastError();
              v7 = LastError;
              if ( LastError > 0 )
                v7 = (unsigned __int16)LastError | 0x80070000;
            }
            RpcRevertToSelf();
          }
        }
      }
      if ( (unsigned __int64)(v11 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle(v11);
      if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        CloseHandle((HANDLE)v3);
    }
  }
  else
  {
    v7 = -2147467261;
  }
  CoTaskMemFree(v4);
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("s_midiOpenPort", 214, v7);
  return (unsigned int)v7;
}
