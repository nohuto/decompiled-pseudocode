/*
 * XREFs of EtwEventWriteEndScenario @ 0x18000CDE0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x18000CD00 (EtwEventEnabled.c)
 *     EtwpGetKmRegHandle @ 0x18000CD88 (EtwpGetKmRegHandle.c)
 *     EtwEventWrite @ 0x18000F6B0 (EtwEventWrite.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtTraceControl @ 0x180095360 (NtTraceControl.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall EtwEventWriteEndScenario(unsigned __int64 a1, _OWORD *a2, unsigned int a3, __int64 a4)
{
  __int64 result; // rax
  _GUID ActivityId; // xmm1
  int v10; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v11[6]; // [rsp+38h] [rbp-50h] BYREF

  v10 = 0;
  if ( !a2 )
    return 87LL;
  if ( !EtwEventEnabled(a1, (__int64)a2) )
    return 6LL;
  memset(v11, 0, sizeof(v11));
  result = EtwpGetKmRegHandle(a1, v11);
  if ( !(_DWORD)result )
  {
    *(_OWORD *)&v11[1] = *a2;
    ActivityId = NtCurrentTeb()->ActivityId;
    LODWORD(v11[5]) = 11;
    *(_GUID *)&v11[3] = ActivityId;
    NtTraceControl(13LL, v11, 48LL, 0LL, 0, &v10);
    return EtwEventWrite(a1, a2, a3, a4);
  }
  return result;
}
