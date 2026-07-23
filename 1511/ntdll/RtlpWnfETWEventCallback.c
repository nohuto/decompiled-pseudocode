/*
 * XREFs of RtlpWnfETWEventCallback @ 0x1800D1658
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000840C (RtlpWnfWalkUserSubscriptionList.c)
 * Callees:
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x1800A5C70 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventCallback(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6, int a7)
{
  _BYTE Fields[6]; // [rsp+30h] [rbp-21h] BYREF
  __int16 v9; // [rsp+36h] [rbp-1Bh]
  __int64 v10; // [rsp+50h] [rbp-1h]
  __int64 v11; // [rsp+58h] [rbp+7h]
  __int64 v12; // [rsp+60h] [rbp+Fh]
  __int64 v13; // [rsp+68h] [rbp+17h]
  int v14; // [rsp+70h] [rbp+1Fh]
  int v15; // [rsp+74h] [rbp+23h]
  int v16; // [rsp+78h] [rbp+27h]

  v9 = 3362;
  v10 = a1;
  v15 = a6;
  v11 = a3;
  v12 = a4;
  v14 = a2;
  v16 = a7;
  v13 = a5;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE038E], 0x20402u, 0x2Cu, Fields);
}
