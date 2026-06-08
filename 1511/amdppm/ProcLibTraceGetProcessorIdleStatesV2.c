/*
 * XREFs of ProcLibTraceGetProcessorIdleStatesV2 @ 0x1C00142F4
 * Callers:
 *     ProcLibTraceControlCallback @ 0x1C00130E0 (ProcLibTraceControlCallback.c)
 *     InitPepIdleStates @ 0x1C001916C (InitPepIdleStates.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C00018D4 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0005940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0005DE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ProcLibTraceGetProcessorIdleStatesV2(__int64 a1, char a2)
{
  const EVENT_DESCRIPTOR *v3; // rsi
  _DWORD *v4; // rbx
  unsigned int v5; // r14d
  _BYTE *PoolWithTag; // rdi
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct _PROCESSOR_NUMBER v11[4]; // [rsp+30h] [rbp-19h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-9h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp+7h]
  int v14; // [rsp+58h] [rbp+Fh]
  int v15; // [rsp+5Ch] [rbp+13h]
  _DWORD *v16; // [rsp+60h] [rbp+17h]
  int v17; // [rsp+68h] [rbp+1Fh]
  int v18; // [rsp+6Ch] [rbp+23h]
  _BYTE *v19; // [rsp+70h] [rbp+27h]
  unsigned int i; // [rsp+78h] [rbp+2Fh]
  int v21; // [rsp+7Ch] [rbp+33h]

  v3 = (const EVENT_DESCRIPTOR *)&PPM_ETW_GET_IDLE_STATES_V2;
  if ( a2 )
    v3 = &PPM_ETW_GET_IDLE_STATES_V2_RUNDOWN;
  if ( EtwEventEnabled(ProcLibEtwHandle, v3) )
  {
    v4 = *(_DWORD **)(a1 + 1080);
    if ( v4 )
    {
      if ( (int)ProcLibGetProcessorNumber(a1, v11) >= 0 )
      {
        v5 = 29 * *v4;
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, v5, 0x72637250u);
        if ( PoolWithTag )
        {
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
            WdfDriverGlobals,
            qword_1C00093B0,
            0LL);
          v21 = 0;
          v7 = 0LL;
          v19 = PoolWithTag;
          for ( i = v5; (unsigned int)v7 < *v4; *(_DWORD *)&PoolWithTag[v9 + 25] = v4[v8 + 3] )
          {
            v8 = 3 * v7;
            v9 = 29LL * (unsigned int)v7;
            v10 = v4[3 * v7 + 1];
            v7 = (unsigned int)(v7 + 1);
            PoolWithTag[v9 + 12] = (v10 >> 3) & 0xF;
            *(_DWORD *)&PoolWithTag[v9 + 4] = (v4[v8 + 1] >> 1) & 1;
            *(_DWORD *)&PoolWithTag[v9] = v4[v8 + 1] & 1;
            *(_DWORD *)&PoolWithTag[v9 + 8] = (v4[v8 + 1] >> 2) & 1;
            *(_DWORD *)&PoolWithTag[v9 + 13] = (v4[v8 + 1] >> 7) & 1;
            *(_DWORD *)&PoolWithTag[v9 + 17] = (v4[v8 + 1] >> 8) & 1;
            *(_DWORD *)&PoolWithTag[v9 + 21] = v4[v8 + 2];
          }
          UserData.Reserved = 0;
          v15 = 0;
          v18 = 0;
          UserData.Ptr = (unsigned __int64)v11;
          p_Number = &v11[0].Number;
          UserData.Size = 2;
          v14 = 1;
          v16 = v4;
          v17 = 4;
          EtwWrite(ProcLibEtwHandle, v3, 0LL, 4u, &UserData);
          (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
            WdfDriverGlobals,
            qword_1C00093B0);
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        }
      }
    }
  }
}
