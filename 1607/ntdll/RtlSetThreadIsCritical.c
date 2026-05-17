/*
 * XREFs of RtlSetThreadIsCritical @ 0x18008D100
 * Callers:
 *     <none>
 * Callees:
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     ZwQueryInformationThread @ 0x1800A68C0 (ZwQueryInformationThread.c)
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
    ZwQueryInformationThread(-2LL, 18LL, &v6, 4LL, 0LL);
    *a2 = v6;
  }
  v6 = a1;
  return NtSetInformationThread(-2LL, 18LL, &v6);
}
