/*
 * XREFs of SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x140015FC4
 * Callers:
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     NtDuplicateToken @ 0x140436B68 (NtDuplicateToken.c)
 * Callees:
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall SeCaptureObjectAttributeSecurityDescriptorPresent(__int64 a1, char a2, char *a3)
{
  char v4; // al

  *a3 = 0;
  if ( a2 )
  {
    if ( a1 )
    {
      if ( (a1 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( *(_QWORD *)(a1 + 32) )
        *a3 = 1;
    }
  }
  else if ( a1 )
  {
    v4 = *a3;
    if ( *(_QWORD *)(a1 + 32) )
      v4 = 1;
    *a3 = v4;
  }
  return 0LL;
}
