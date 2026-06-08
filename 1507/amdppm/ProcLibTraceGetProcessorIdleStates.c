/*
 * XREFs of ProcLibTraceGetProcessorIdleStates @ 0x1C00140E8
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130D0 (ProcLibTraceControlCallback.c)
 *     InitPepIdleStates @ 0x1C001914C (InitPepIdleStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001BB4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0005E20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005F40 (_guard_dispatch_icall_nop.c)
 */

char __fastcall ProcLibTraceGetProcessorIdleStates(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rsi
  int ProcessorNumber; // eax
  SIZE_T v5; // r14
  _BYTE *PoolWithTag; // rax
  _BYTE *v7; // rdi
  __int64 v8; // r9
  __int64 v9; // rcx
  __int64 v10; // r8
  unsigned int v11; // eax
  int v12; // ecx
  unsigned int v14; // [rsp+30h] [rbp-29h] BYREF
  struct _PROCESSOR_NUMBER v15; // [rsp+34h] [rbp-25h] BYREF
  int v16; // [rsp+38h] [rbp-21h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-19h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp-9h]
  int v19; // [rsp+58h] [rbp-1h]
  int v20; // [rsp+5Ch] [rbp+3h]
  int *v21; // [rsp+60h] [rbp+7h]
  int v22; // [rsp+68h] [rbp+Fh]
  int v23; // [rsp+6Ch] [rbp+13h]
  unsigned int *v24; // [rsp+70h] [rbp+17h]
  int v25; // [rsp+78h] [rbp+1Fh]
  int v26; // [rsp+7Ch] [rbp+23h]
  PVOID v27; // [rsp+80h] [rbp+27h]
  int i; // [rsp+88h] [rbp+2Fh]
  int v29; // [rsp+8Ch] [rbp+33h]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_IDLE_STATES;
  if ( a2 )
    v3 = &PPM_ETW_GET_IDLE_STATES_RUNDOWN;
  LOBYTE(ProcessorNumber) = EtwEventEnabled(ProcLibEtwHandle, v3);
  if ( (_BYTE)ProcessorNumber )
  {
    if ( *(_QWORD *)(a1 + 1080) )
    {
      ProcessorNumber = ProcLibGetProcessorNumber(a1, &v15);
      if ( ProcessorNumber >= 0 )
      {
        (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
          WdfDriverGlobals,
          *(_QWORD *)(a1 + 192),
          0LL);
        v5 = (unsigned int)(13 * *(_DWORD *)(a1 + 1068));
        v14 = *(_DWORD *)(a1 + 1068);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x72637250u);
        v7 = PoolWithTag;
        if ( PoolWithTag )
        {
          v29 = 0;
          v8 = 0LL;
          v27 = PoolWithTag;
          for ( i = v5; (unsigned int)v8 < v14; *(_DWORD *)&v7[v10 + 8] = (v11 >> 2) & 1 )
          {
            v9 = *(_QWORD *)(a1 + 1080);
            v10 = 13LL * (unsigned int)v8;
            v7[v10 + 12] = (*(_DWORD *)(v9 + 4 * v8 + 8) >> 3) & 0xF;
            *(_DWORD *)&v7[v10 + 4] = (*(_DWORD *)(v9 + 4 * v8 + 8) >> 1) & 1;
            *(_DWORD *)&v7[v10] = *(_BYTE *)(v9 + 4 * v8 + 8) & 1;
            v11 = *(_DWORD *)(v9 + 4 * v8 + 8);
            v8 = (unsigned int)(v8 + 1);
          }
          v12 = *(_DWORD *)(*(_QWORD *)(a1 + 1080) + 4LL);
          UserData.Reserved = 0;
          v20 = 0;
          v23 = 0;
          v26 = 0;
          UserData.Ptr = (unsigned __int64)&v15;
          p_Number = &v15.Number;
          v16 = v12;
          v21 = &v16;
          v24 = &v14;
          v22 = 4;
          v25 = 4;
          UserData.Size = 2;
          v19 = 1;
          EtwWrite(ProcLibEtwHandle, v3, 0LL, 5u, &UserData);
          ExFreePoolWithTag(v7, 0x72637250u);
        }
        LOBYTE(ProcessorNumber) = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
                                    WdfDriverGlobals,
                                    *(_QWORD *)(a1 + 192));
      }
    }
  }
  return ProcessorNumber;
}
