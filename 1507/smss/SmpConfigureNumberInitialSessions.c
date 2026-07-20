/*
 * XREFs of SmpConfigureNumberInitialSessions @ 0x14000C0F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall SmpConfigureNumberInitialSessions(__int64 a1, int a2, unsigned int *a3, int a4)
{
  unsigned int v4; // eax
  int v6; // eax
  _BYTE JobInformation[40]; // [rsp+30h] [rbp-28h] BYREF

  if ( a4 == 4 && a2 == 4 )
    v4 = *a3;
  else
    v4 = 1;
  if ( v4 > 2 )
    v4 = 2;
  if ( !v4 )
    v4 = 1;
  if ( SmpManufacturingMode == 1 )
    v4 = 1;
  SmpNumberInitialSessions = v4;
  if ( NtQueryInformationJobObject(0LL, (JOBOBJECTINFOCLASS)36, JobInformation, 0x20u, 0LL) >= 0 )
  {
    v6 = SmpNumberInitialSessions;
    if ( JobInformation[24] )
      v6 = 1;
    SmpNumberInitialSessions = v6;
  }
  return 0LL;
}
