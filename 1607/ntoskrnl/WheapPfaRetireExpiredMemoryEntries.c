/*
 * XREFs of WheapPfaRetireExpiredMemoryEntries @ 0x1406BB950
 * Callers:
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     WheapSqmCollectWheaPolicyTelemetry @ 0x1406BAFF0 (WheapSqmCollectWheaPolicyTelemetry.c)
 *     WheapSqmAddToStream @ 0x1406BBCB4 (WheapSqmAddToStream.c)
 */

void __fastcall WheapPfaRetireExpiredMemoryEntries(unsigned __int64 a1)
{
  PVOID *v2; // rdi
  unsigned __int64 v3; // rsi
  PVOID *v4; // rbx
  PVOID *v5; // rcx
  PVOID **v6; // rax
  int v7; // eax
  _DWORD v8[12]; // [rsp+20h] [rbp-48h] BYREF

  if ( WheapPolicyMemPfaTimeout && a1 >= WheapPolicyMemPfaTimeout )
  {
    v2 = (PVOID *)WheapPfaList;
    v3 = a1 - WheapPolicyMemPfaTimeout;
    while ( v2 != &WheapPfaList )
    {
      v4 = v2;
      v2 = (PVOID *)*v2;
      if ( (unsigned __int64)v4[4] <= v3 )
      {
        v5 = (PVOID *)*v4;
        v6 = (PVOID **)v4[1];
        if ( *((PVOID **)*v4 + 1) != v4 || *v6 != v4 )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = v6;
        v7 = *((unsigned __int16 *)v4 + 8);
        v8[6] = (a1 - (unsigned __int64)v4[3]) / 0x989680;
        v8[2] = 2;
        v8[0] = 1;
        v8[4] = 1;
        v8[10] = v7;
        v8[8] = 1;
        WheapSqmAddToStream(7213LL, 3LL, v8);
        WheapSqmCollectWheaPolicyTelemetry();
        ExFreePoolWithTag(v4, 0x61656857u);
      }
    }
  }
}
