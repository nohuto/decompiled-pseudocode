/*
 * XREFs of RtlSetEnvironmentVariable @ 0x180046B40
 * Callers:
 *     RtlpResetDriveEnvironment @ 0x180045F2C (RtlpResetDriveEnvironment.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x1800469FC (RtlpWow64ThunkEnvironment32To64.c)
 * Callees:
 *     RtlSetEnvironmentVar @ 0x180046B90 (RtlSetEnvironmentVar.c)
 */

__int64 __fastcall RtlSetEnvironmentVariable(int a1, unsigned __int16 *a2, unsigned __int16 *a3)
{
  __int64 v3; // r9
  unsigned __int64 v4; // rax

  LODWORD(v3) = 0;
  if ( a3 )
    v4 = (unsigned __int64)*a3 >> 1;
  else
    v4 = 0LL;
  if ( a3 )
    v3 = *((_QWORD *)a3 + 1);
  return RtlSetEnvironmentVar(a1, *((_QWORD *)a2 + 1), (unsigned __int64)*a2 >> 1, v3, v4);
}
