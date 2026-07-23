/*
 * XREFs of RtlpWnfETWEventUnsubscribe @ 0x1800C8E30
 * Callers:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000B100 (RtlpRemoveUserSubFromNameSub.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceEvent @ 0x180093EE0 (NtTraceEvent.c)
 */

NTSTATUS __fastcall RtlpWnfETWEventUnsubscribe(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, int a6)
{
  _BYTE Fields[6]; // [rsp+30h] [rbp-19h] BYREF
  __int16 v8; // [rsp+36h] [rbp-13h]
  __int64 v9; // [rsp+50h] [rbp+7h]
  __int64 v10; // [rsp+58h] [rbp+Fh]
  __int64 v11; // [rsp+60h] [rbp+17h]
  __int64 v12; // [rsp+68h] [rbp+1Fh]
  int v13; // [rsp+70h] [rbp+27h]
  int v14; // [rsp+74h] [rbp+2Bh]

  v8 = 3361;
  v9 = a1;
  v10 = a2;
  v11 = a3;
  v13 = a4;
  v14 = a6;
  v12 = a5;
  return NtTraceEvent((HANDLE)MEMORY[0x7FFE038E], 0x20402u, 0x28u, Fields);
}
