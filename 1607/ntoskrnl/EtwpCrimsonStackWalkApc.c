/*
 * XREFs of EtwpCrimsonStackWalkApc @ 0x140224AA8
 * Callers:
 *     <none>
 * Callees:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCrimsonStackWalkApc(void *a1, _QWORD *a2, _WORD *a3, _DWORD *a4, _DWORD *a5)
{
  int v7; // edx
  __int64 v9; // [rsp+90h] [rbp-80h]
  _QWORD v10[50]; // [rsp+A0h] [rbp-70h] BYREF

  *a2 = 0LL;
  ExFreePoolWithTag(a1, 0);
  LODWORD(v9) = *a4;
  HIDWORD(v9) = *a5;
  memset(v10, 0, sizeof(v10));
  v10[16] = -1LL;
  LOBYTE(v7) = 1;
  v10[8] = v9;
  v10[47] = EtwpHostSiloState;
  HIWORD(v10[14]) = *a3;
  *(GUID *)&v10[3] = EventTracingProvGuid;
  LODWORD(v10[14]) = 1;
  LODWORD(v10[15]) = 68;
  BYTE4(v10[14]) = -1;
  v10[17] = 0LL;
  return EtwpEventWriteFull(
           v10,
           v7,
           0,
           0,
           ETW_EVENT_USER_STACK_TRACE,
           0,
           0,
           0LL,
           0LL,
           0,
           0LL,
           0LL,
           0LL,
           0LL,
           0,
           0LL,
           0LL);
}
