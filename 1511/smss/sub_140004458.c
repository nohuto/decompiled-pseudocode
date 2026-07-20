/*
 * XREFs of sub_140004458 @ 0x140004458
 * Callers:
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_1400047B4 @ 0x1400047B4 (sub_1400047B4.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall sub_140004458(void *a1, _DWORD *a2)
{
  NTSTATUS result; // eax
  int v4; // ecx
  int ProcessInformation; // [rsp+50h] [rbp+18h] BYREF

  result = NtQueryInformationProcess(a1, ProcessSessionInformation, &ProcessInformation, 4u, 0LL);
  v4 = ProcessInformation;
  if ( result < 0 )
    v4 = 0;
  *a2 = v4;
  return result;
}
