/*
 * XREFs of RtlSetThreadIsCritical @ 0x180080730
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x180093B50 (ZwQueryInformationThread.c)
 */

__int64 __fastcall RtlSetThreadIsCritical(unsigned __int8 a1, _BYTE *a2, char a3)
{
  int v6; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 )
    *a2 = 0;
  if ( a3 && (NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag & 0x100000) == 0 )
    return 3221225473LL;
  if ( a2 )
  {
    ZwQueryInformationThread(-2LL, 18LL, &v6);
    *a2 = v6;
  }
  v6 = a1;
  return NtSetInformationThread(-2LL, 18LL, &v6);
}
