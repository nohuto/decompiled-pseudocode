/*
 * XREFs of PpmEventTraceProcessorIdleAccounting @ 0x14020CF0C
 * Callers:
 *     <none>
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmTranslateIdleAccounting @ 0x14020A6F0 (PpmTranslateIdleAccounting.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PpmEventTraceProcessorIdleAccounting(__int64 a1)
{
  _QWORD *v1; // rbx
  _BYTE *v3; // rax
  _DWORD *v4; // rsi
  unsigned int v5; // edi
  int v6; // r14d
  _QWORD *PoolWithTag; // rax
  _QWORD *v8; // rdx
  __int64 *v9; // rsi
  __int64 v10; // r8
  __int64 v11; // rax
  PVOID v12; // rax
  void *v13; // rsi
  ULONG v14; // r9d
  __int16 v16; // [rsp+38h] [rbp-49h] BYREF
  unsigned int v17; // [rsp+3Ch] [rbp-45h] BYREF
  unsigned __int64 v18; // [rsp+40h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-39h] BYREF
  __int16 *v20; // [rsp+58h] [rbp-29h]
  __int64 v21; // [rsp+60h] [rbp-21h]
  __int64 v22; // [rsp+68h] [rbp-19h]
  __int64 v23; // [rsp+70h] [rbp-11h]
  unsigned __int64 *v24; // [rsp+78h] [rbp-9h]
  __int64 v25; // [rsp+80h] [rbp-1h]
  int *v26; // [rsp+88h] [rbp+7h]
  __int64 v27; // [rsp+90h] [rbp+Fh]
  _QWORD *v28; // [rsp+98h] [rbp+17h]
  int v29; // [rsp+A0h] [rbp+1Fh]
  int v30; // [rsp+A4h] [rbp+23h]

  v1 = 0LL;
  if ( PpmEtwRegistered )
  {
    if ( EtwEventEnabled(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN) )
    {
      v3 = *(_BYTE **)(a1 + 23808);
      v4 = *(_DWORD **)(a1 + 23816);
      if ( v3 )
      {
        if ( v4 )
        {
          v5 = *v4;
          v6 = 0;
          if ( *v3 == 1 )
          {
            v6 = 80 * v5;
            PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v5, 0x654D5050u);
            v1 = PoolWithTag;
            if ( !PoolWithTag )
              return 0LL;
            memset(PoolWithTag, 0, 80 * v5);
            if ( v5 )
            {
              v8 = v1 + 3;
              v9 = (__int64 *)(v4 + 38);
              v10 = v5;
              do
              {
                *(v8 - 3) = *(v9 - 1);
                v11 = *v9;
                v9 += 124;
                *(v8 - 1) = v11;
                *v8 = *(v9 - 129);
                v8 += 10;
                *(v8 - 9) = *(v9 - 128);
                *(v8 - 6) = *(v9 - 131);
                *(v8 - 5) = *(v9 - 132);
                *(v8 - 4) = *(v9 - 133);
                *(v8 - 12) = *(v9 - 123);
                *(v8 - 8) = *(v9 - 121);
                *(v8 - 7) = *(v9 - 122);
                --v10;
              }
              while ( v10 );
            }
          }
          v12 = ExAllocatePoolWithTag(NonPagedPoolNx, 416 * v5 + 24, 0x654D5050u);
          v13 = v12;
          if ( v12 )
          {
            memset(v12, 0, 416 * v5 + 24);
            PpmTranslateIdleAccounting((_QWORD *)(a1 + 23808), (__int64)v13, &v18);
            v16 = *(unsigned __int8 *)(a1 + 1616);
            v20 = &v16;
            v22 = a1 + 1617;
            v24 = &v18;
            v14 = 5;
            UserData.Ptr = (ULONGLONG)v13;
            UserData.Size = 416 * v5 + 24;
            UserData.Reserved = 0;
            v21 = 2LL;
            v23 = 1LL;
            v25 = 8LL;
            if ( v1 )
            {
              v14 = 6;
              v28 = v1;
              v29 = v6;
              v30 = 0;
              v17 = v5;
            }
            else
            {
              v17 = 0;
            }
            v26 = (int *)&v17;
            v27 = 4LL;
            EtwWrite(PpmEtwHandle, &PPM_ETW_IDLE_ACCOUNTING_RUNDOWN, 0LL, v14, &UserData);
            ExFreePoolWithTag(v13, 0x654D5050u);
          }
          if ( v1 )
            ExFreePoolWithTag(v1, 0x654D5050u);
        }
      }
    }
  }
  return 0LL;
}
