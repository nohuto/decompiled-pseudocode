/*
 * XREFs of PpmEventTracePlatformIdleAccounting @ 0x1406740A8
 * Callers:
 *     PpmEventTraceControlCallback @ 0x140581BF8 (PpmEventTraceControlCallback.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmTranslatePlatformIdleAccounting @ 0x14020A91C (PpmTranslatePlatformIdleAccounting.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void PpmEventTracePlatformIdleAccounting()
{
  _QWORD *v0; // rbx
  __int64 v1; // r13
  int v2; // esi
  unsigned int v3; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rdx
  __int64 v8; // rax
  PVOID v9; // rax
  void *v10; // r14
  ULONG v11; // r9d
  char v12; // [rsp+38h] [rbp-39h] BYREF
  __int16 v13; // [rsp+3Ch] [rbp-35h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+48h] [rbp-29h] BYREF
  __int16 *v16; // [rsp+58h] [rbp-19h]
  __int64 v17; // [rsp+60h] [rbp-11h]
  char *v18; // [rsp+68h] [rbp-9h]
  __int64 v19; // [rsp+70h] [rbp-1h]
  int *v20; // [rsp+78h] [rbp+7h]
  __int64 v21; // [rsp+80h] [rbp+Fh]
  _QWORD *v22; // [rsp+88h] [rbp+17h]
  int v23; // [rsp+90h] [rbp+1Fh]
  int v24; // [rsp+94h] [rbp+23h]

  v0 = 0LL;
  v12 = 64;
  v13 = 20;
  if ( PpmEtwRegistered && EtwEventEnabled(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN) && PpmPlatformStates )
  {
    v1 = *(_QWORD *)(PpmPlatformStates + 48);
    v2 = 0;
    v3 = *(_DWORD *)(v1 + 4);
    if ( *(_DWORD *)(PpmPlatformStates + 4) == 1 )
    {
      v2 = 80 * v3;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 80 * v3, 0x654D5050u);
      v0 = PoolWithTag;
      if ( !PoolWithTag )
        return;
      memset(PoolWithTag, 0, 80 * v3);
      if ( v3 )
      {
        v5 = v0 + 2;
        v6 = v3;
        v7 = (__int64 *)(v1 + 112);
        do
        {
          *(v5 - 1) = *(v7 - 1);
          v8 = *v7;
          v7 += 125;
          *v5 = v8;
          v5 += 10;
          *(v5 - 9) = *(v7 - 123);
          *(v5 - 8) = *(v7 - 124);
          *(v5 - 5) = *(v7 - 128);
          *(v5 - 4) = *(v7 - 129);
          *(v5 - 3) = *(v7 - 130);
          *(v5 - 12) = *(v7 - 120);
          *(v5 - 7) = *(v7 - 118);
          *(v5 - 6) = *(v7 - 119);
          --v6;
        }
        while ( v6 );
      }
    }
    v9 = ExAllocatePoolWithTag(NonPagedPoolNx, 664 * v3 + 32, 0x654D5050u);
    v10 = v9;
    if ( v9 )
    {
      memset(v9, 0, 664 * v3 + 32);
      PpmTranslatePlatformIdleAccounting(v1, (__int64)v10);
      UserData.Ptr = (ULONGLONG)v10;
      UserData.Size = 664 * v3 + 32;
      v16 = &v13;
      UserData.Reserved = 0;
      v17 = 2LL;
      v18 = &v12;
      v11 = 4;
      v19 = 1LL;
      if ( v0 )
      {
        v11 = 5;
        v22 = v0;
        v23 = v2;
        v24 = 0;
        v14 = v3;
      }
      else
      {
        v14 = 0;
      }
      v20 = (int *)&v14;
      v21 = 4LL;
      EtwWrite(PpmEtwHandle, &PPM_ETW_PLATFORM_IDLE_ACCOUNTING_RUNDOWN, 0LL, v11, &UserData);
      ExFreePoolWithTag(v10, 0x654D5050u);
    }
    if ( v0 )
      ExFreePoolWithTag(v0, 0x654D5050u);
  }
}
