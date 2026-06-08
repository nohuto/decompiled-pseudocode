/*
 * XREFs of ProcLibTracePerfStatesRundown @ 0x1C001A384
 * Callers:
 *     DecodeMWaitCState @ 0x1C0016660 (DecodeMWaitCState.c)
 * Callees:
 *     ProcLibGetProcessorNumber @ 0x1C0001524 (ProcLibGetProcessorNumber.c)
 *     __security_check_cookie @ 0x1C0002100 (__security_check_cookie.c)
 */

void __fastcall ProcLibTracePerfStatesRundown(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _BYTE *PoolWithTag; // rbx
  unsigned int v5; // ecx
  __int64 i; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned int v10; // [rsp+30h] [rbp-9h] BYREF
  struct _PROCESSOR_NUMBER v11[3]; // [rsp+34h] [rbp-5h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp+7h] BYREF
  unsigned __int8 *p_Number; // [rsp+50h] [rbp+17h]
  int v14; // [rsp+58h] [rbp+1Fh]
  int v15; // [rsp+5Ch] [rbp+23h]
  unsigned int *v16; // [rsp+60h] [rbp+27h]
  int v17; // [rsp+68h] [rbp+2Fh]
  int v18; // [rsp+6Ch] [rbp+33h]
  _BYTE *v19; // [rsp+70h] [rbp+37h]
  int v20; // [rsp+78h] [rbp+3Fh]
  int v21; // [rsp+7Ch] [rbp+43h]

  if ( EtwEventEnabled(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN) )
  {
    if ( (int)ProcLibGetProcessorNumber(a1, v11) >= 0 )
    {
      v2 = *(_QWORD *)(a1 + 200);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 16);
        v10 = *(_DWORD *)(v3 + 40);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 6LL * v10, 0x72637250u);
        if ( PoolWithTag )
        {
          v5 = v10;
          for ( i = 0LL; (unsigned int)i < v10; v5 = v10 )
          {
            v7 = 3 * i;
            v8 = 32LL * (unsigned int)i;
            i = (unsigned int)(i + 1);
            v9 = *(_QWORD *)(v3 + 32) + v8;
            *(_DWORD *)&PoolWithTag[2 * v7] = *(_DWORD *)(v9 + 16);
            PoolWithTag[2 * v7 + 4] = *(_BYTE *)(v9 + 24);
            PoolWithTag[2 * v7 + 5] = *(_BYTE *)(v9 + 25);
          }
          UserData.Reserved = 0;
          v15 = 0;
          v18 = 0;
          v21 = 0;
          UserData.Ptr = (unsigned __int64)v11;
          p_Number = &v11[0].Number;
          v16 = &v10;
          v20 = 6 * v5;
          UserData.Size = 2;
          v14 = 1;
          v17 = 4;
          v19 = PoolWithTag;
          EtwWrite(ProcLibEtwHandle, &PPM_ETW_PERF_STATES_RUNDOWN, 0LL, 4u, &UserData);
          ExFreePoolWithTag(PoolWithTag, 0x72637250u);
        }
      }
    }
  }
}
