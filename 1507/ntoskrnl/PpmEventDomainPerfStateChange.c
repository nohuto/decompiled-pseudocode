/*
 * XREFs of PpmEventDomainPerfStateChange @ 0x14015A2B8
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1400EA8F0 (PpmPerfApplyDomainState.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400EA070 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x140240638 (PpmFireWmiEvent.c)
 */

BOOLEAN __fastcall PpmEventDomainPerfStateChange(__int64 a1)
{
  BOOLEAN result; // al
  REGHANDLE v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int16 v6; // r11
  unsigned __int16 v7; // r8
  unsigned __int16 v8; // r10
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  unsigned int v12; // r9d
  _QWORD *v13; // rdx
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  unsigned int v19; // r9d
  __int64 v20; // r8
  __int64 v21; // r8
  __int16 v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  unsigned int v24; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v25; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v26; // [rsp+48h] [rbp-B8h]
  __int64 v27; // [rsp+50h] [rbp-B0h]
  _QWORD v28[40]; // [rsp+60h] [rbp-A0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+1A0h] [rbp+A0h] BYREF
  int *v30; // [rsp+1B0h] [rbp+B0h]
  __int64 v31; // [rsp+1B8h] [rbp+B8h]
  __int16 *v32; // [rsp+1C0h] [rbp+C0h]
  __int64 v33; // [rsp+1C8h] [rbp+C8h]

  v24 = *(_DWORD *)(a1 + 376);
  v23 = *(_DWORD *)(a1 + 340);
  result = WmiPerfStateDomainEventEnabled;
  if ( WmiPerfStateDomainEventEnabled )
  {
    v26 = 0LL;
    v25 = v24;
    v4 = *(_QWORD *)(a1 + 32);
    v5 = *(_QWORD *)(a1 + 16);
    v27 = v4;
    LODWORD(v26) = v23;
    result = PpmFireWmiEvent(v5 + 24032, &PPM_PERFSTATE_DOMAIN_CHANGE_GUID, 24LL, &v25);
  }
  if ( PpmEtwRegistered )
  {
    v3 = PpmEtwHandle;
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE);
    if ( result )
    {
      v6 = *(_WORD *)(a1 + 24);
      v7 = 0;
      v8 = KeActiveProcessors[0];
      v9 = 0;
      v22 = 0;
      do
      {
        v10 = 2LL * v7;
        v28[v10] = 0LL;
        v28[v10 + 1] = 0LL;
        LOWORD(v28[v10 + 1]) = v9;
        if ( v9 >= v8 )
          v11 = 0LL;
        else
          v11 = qword_1403D15E8[v9];
        v28[2 * v7] = v11;
        *(_DWORD *)((char *)&v28[2 * v7 + 1] + 2) = 0;
        HIWORD(v28[2 * v7 + 1]) = 0;
        if ( v6 <= v9 )
          v28[2 * v7] = 0LL;
        else
          v28[2 * v7] &= *(_QWORD *)(a1 + 8LL * v9 + 32);
        if ( v28[2 * v7] )
          v22 = ++v7;
        ++v9;
      }
      while ( v9 < 0x14u );
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v24;
      v30 = &v23;
      v32 = &v22;
      v12 = 3;
      v31 = 4LL;
      v33 = 2LL;
      if ( v7 )
      {
        v13 = v28;
        v14 = v7;
        do
        {
          v15 = 2LL * v12;
          *(&UserData.Ptr + v15) = (ULONGLONG)(v13 + 1);
          *((_QWORD *)&UserData.Size + v15) = 2LL;
          v16 = 2LL * (v12 + 1);
          v12 += 2;
          *(&UserData.Ptr + v16) = (ULONGLONG)v13;
          v13 += 2;
          *((_QWORD *)&UserData.Size + v16) = 8LL;
          --v14;
        }
        while ( v14 );
      }
      v17 = 2LL * v12;
      *(&UserData.Ptr + v17) = a1 + 336;
      *((_QWORD *)&UserData.Size + v17) = 4LL;
      v18 = v12 + 1;
      v19 = v12 + 2;
      v18 *= 2LL;
      v20 = 2LL * v19++;
      *(&UserData.Ptr + v18) = a1 + 360;
      *((_QWORD *)&UserData.Size + v18) = 4LL;
      *(&UserData.Ptr + v20) = a1 + 356;
      *((_QWORD *)&UserData.Size + v20) = 4LL;
      v21 = 2LL * v19;
      *(&UserData.Ptr + v21) = a1 + 368;
      *((_QWORD *)&UserData.Size + v21) = 4LL;
      return EtwWrite(v3, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE, 0LL, v19 + 1, &UserData);
    }
  }
  return result;
}
