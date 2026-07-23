/*
 * XREFs of PopDiagTraceFxDefaultPepWorkerEnd @ 0x1400C10B0
 * Callers:
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

char __fastcall PopDiagTraceFxDefaultPepWorkerEnd(__int64 a1, int a2, char a3, int a4, int a5)
{
  _UNKNOWN **v5; // rax
  REGHANDLE v10; // rbx
  UINT32 cData; // r9d
  int v12; // r10d
  const void *v13; // rdx
  char v14; // al
  char v16; // [rsp+38h] [rbp-51h] BYREF
  char v17; // [rsp+39h] [rbp-50h] BYREF
  char v18; // [rsp+3Ah] [rbp-4Fh] BYREF
  int v19; // [rsp+3Ch] [rbp-4Dh] BYREF
  __int64 v20; // [rsp+40h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-41h] BYREF
  char *v22; // [rsp+58h] [rbp-31h]
  int v23; // [rsp+60h] [rbp-29h]
  int v24; // [rsp+64h] [rbp-25h]
  char *v25; // [rsp+68h] [rbp-21h]
  int v26; // [rsp+70h] [rbp-19h]
  int v27; // [rsp+74h] [rbp-15h]
  char *v28; // [rsp+78h] [rbp-11h]
  int v29; // [rsp+80h] [rbp-9h]
  int v30; // [rsp+84h] [rbp-5h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-1h] BYREF
  int *v32; // [rsp+A8h] [rbp+1Fh]
  int v33; // [rsp+B0h] [rbp+27h]
  int v34; // [rsp+B4h] [rbp+2Bh]
  _UNKNOWN *retaddr; // [rsp+E0h] [rbp+57h] BYREF

  v5 = &retaddr;
  if ( a4 == 2 )
  {
    if ( hProvider.LevelPlus1 > 5 )
    {
      LOBYTE(v5) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
      if ( (_BYTE)v5 )
      {
        v13 = &unk_14027D35C;
        goto LABEL_14;
      }
    }
  }
  else if ( a4 == 3 && hProvider.LevelPlus1 > 5 )
  {
    LOBYTE(v5) = TlgKeywordOn(&hProvider, 0x400000000000uLL);
    if ( (_BYTE)v5 )
    {
      v13 = &unk_14027D23E;
LABEL_14:
      v34 = 0;
      v32 = &v19;
      v33 = v12;
      v19 = a5;
      LOBYTE(v5) = TlgWrite(&hProvider, v13, 0LL, 0LL, cData, &pData);
    }
  }
  if ( PopDiagHandleRegistered )
  {
    v10 = PopDiagHandle;
    if ( EtwEventEnabled(PopDiagHandle, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END)
      || EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED)
      || (LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED), (_BYTE)v5) )
    {
      if ( a2 )
      {
        if ( a2 == 1 )
        {
          v16 = -1;
        }
        else
        {
          v14 = a3;
          if ( a2 == 3 )
            v14 = -2;
          v16 = v14;
        }
      }
      else
      {
        v16 = -3;
      }
      v20 = 0LL;
      if ( a1 )
        v20 = *(_QWORD *)(a1 + 48);
      UserData.Reserved = 0;
      v24 = 0;
      v27 = 0;
      v30 = 0;
      UserData.Ptr = (ULONGLONG)&v20;
      v22 = &v16;
      v25 = &v17;
      v23 = 1;
      v26 = 1;
      v29 = 1;
      v28 = &v18;
      v17 = a4;
      v18 = a5;
      UserData.Size = 8;
      LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END);
      if ( (_BYTE)v5 )
      {
        LOBYTE(v5) = EtwWrite(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_END, 0LL, 4u, &UserData);
        v10 = PopDiagHandle;
      }
      if ( a4 == 2 )
      {
        LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED);
        if ( !(_BYTE)v5 )
          return (char)v5;
        LOBYTE(v5) = EtwWrite(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_RECOVERED, 0LL, 4u, &UserData);
        v10 = PopDiagHandle;
      }
      if ( a4 == 3 )
      {
        LOBYTE(v5) = EtwEventEnabled(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED);
        if ( (_BYTE)v5 )
          LOBYTE(v5) = EtwWrite(v10, &POP_ETW_EVENT_DEFAULT_PEP_WORKER_DEVICE_ORPHANED, 0LL, 4u, &UserData);
      }
    }
  }
  return (char)v5;
}
