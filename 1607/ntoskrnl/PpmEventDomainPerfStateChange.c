/*
 * XREFs of PpmEventDomainPerfStateChange @ 0x1401322C4
 * Callers:
 *     PpmPerfApplyDomainState @ 0x1400D1F60 (PpmPerfApplyDomainState.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     KeAndGroupAffinityEx @ 0x140132BB0 (KeAndGroupAffinityEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     PpmFireWmiEvent @ 0x14020B15C (PpmFireWmiEvent.c)
 */

BOOLEAN __fastcall PpmEventDomainPerfStateChange(__int64 a1)
{
  BOOLEAN result; // al
  __int64 v3; // rax
  __int64 v4; // rcx
  unsigned __int16 v5; // ax
  unsigned __int16 v6; // bx
  __int64 *v7; // rdx
  bool v8; // cf
  __int64 v9; // rcx
  bool v10; // zf
  unsigned int v11; // r9d
  _OWORD *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  unsigned int v18; // r9d
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int v22; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v23; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v24; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v25; // [rsp+50h] [rbp-B8h]
  __int64 v26; // [rsp+58h] [rbp-B0h]
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-A0h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-90h]
  __int64 v29; // [rsp+80h] [rbp-88h]
  int *v30; // [rsp+88h] [rbp-80h]
  __int64 v31; // [rsp+90h] [rbp-78h]
  _OWORD v32[20]; // [rsp+358h] [rbp+250h] BYREF

  v22 = *(_DWORD *)(a1 + 384);
  LODWORD(v23) = *(_DWORD *)(a1 + 348);
  result = WmiPerfStateDomainEventEnabled;
  if ( WmiPerfStateDomainEventEnabled )
  {
    v25 = 0LL;
    v24 = v22;
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(_QWORD *)(a1 + 16);
    v26 = v3;
    LODWORD(v25) = v23;
    result = PpmFireWmiEvent(v4 + 24032, &PPM_PERFSTATE_DOMAIN_CHANGE_GUID, 24LL, &v24);
  }
  if ( PpmEtwRegistered )
  {
    result = EtwEventEnabled(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE);
    if ( result )
    {
      v5 = 0;
      v6 = 0;
      LOWORD(v21) = 0;
      do
      {
        v7 = (__int64 *)&v32[v5];
        v8 = v6 < LOWORD(KeActiveProcessors[0]);
        *v7 = 0LL;
        v7[1] = 0LL;
        *((_WORD *)v7 + 4) = v6;
        if ( v8 )
          v9 = qword_1403AA618[v6];
        else
          v9 = 0LL;
        *v7 = v9;
        v10 = (unsigned int)KeAndGroupAffinityEx(a1 + 24, v7, v7) == 0;
        v5 = v21;
        if ( !v10 )
        {
          v5 = v21 + 1;
          LOWORD(v21) = v21 + 1;
        }
        ++v6;
      }
      while ( v6 < 0x14u );
      *(_QWORD *)&UserData.Size = 4LL;
      UserData.Ptr = (ULONGLONG)&v22;
      v28 = &v23;
      v29 = 4LL;
      v30 = &v21;
      v31 = 2LL;
      v11 = 3;
      if ( v5 )
      {
        v12 = v32;
        v13 = v5;
        do
        {
          v14 = 2LL * v11;
          *(&UserData.Ptr + v14) = (ULONGLONG)v12 + 8;
          *((_QWORD *)&UserData.Size + v14) = 2LL;
          v15 = 2LL * (v11 + 1);
          v11 += 2;
          *(&UserData.Ptr + v15) = (ULONGLONG)v12++;
          *((_QWORD *)&UserData.Size + v15) = 8LL;
          --v13;
        }
        while ( v13 );
      }
      v16 = 2LL * v11;
      *(&UserData.Ptr + v16) = a1 + 344;
      *((_QWORD *)&UserData.Size + v16) = 4LL;
      v17 = v11 + 1;
      v18 = v11 + 2;
      v17 *= 2LL;
      *(&UserData.Ptr + v17) = a1 + 368;
      *((_QWORD *)&UserData.Size + v17) = 4LL;
      v19 = v18++;
      v19 *= 2LL;
      *(&UserData.Ptr + v19) = a1 + 364;
      *((_QWORD *)&UserData.Size + v19) = 4LL;
      v20 = 2LL * v18;
      *(&UserData.Ptr + v20) = a1 + 376;
      *((_QWORD *)&UserData.Size + v20) = 4LL;
      return EtwWrite(PpmEtwHandle, &PPM_ETW_DOMAIN_PERF_STATE_CHANGE, 0LL, v18 + 1, &UserData);
    }
  }
  return result;
}
