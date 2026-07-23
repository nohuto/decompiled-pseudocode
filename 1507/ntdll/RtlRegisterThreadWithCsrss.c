/*
 * XREFs of RtlRegisterThreadWithCsrss @ 0x1800726A0
 * Callers:
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 * Callees:
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

NTSTATUS RtlRegisterThreadWithCsrss(void)
{
  NTSTATUS v0; // ecx
  _CLIENT_ID ClientId; // xmm0
  _QWORD v3[6]; // [rsp+20h] [rbp-1C8h] BYREF
  int v4; // [rsp+50h] [rbp-198h]
  __int64 v5; // [rsp+60h] [rbp-188h]
  _CLIENT_ID v6; // [rsp+68h] [rbp-180h]

  v0 = 0;
  if ( CsrClientProcess || !CsrInitOnceDone || !CsrServerApiRoutine )
    return v0;
  if ( !LdrpIsSecureProcess )
  {
    v5 = 0LL;
    ClientId = NtCurrentTeb()->ClientId;
    v3[5] = 0LL;
    v3[0] = 5767216LL;
    v6 = ClientId;
    v4 = 65561;
    return ((__int64 (__fastcall *)(_QWORD *, _QWORD *))CsrServerApiRoutine)(v3, v3);
  }
  return -1073741637;
}
