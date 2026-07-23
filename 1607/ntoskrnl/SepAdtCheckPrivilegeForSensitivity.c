/*
 * XREFs of SepAdtCheckPrivilegeForSensitivity @ 0x14021A0C0
 * Callers:
 *     SepAdtAuditPrivilegeUseWithContext @ 0x140413B78 (SepAdtAuditPrivilegeUseWithContext.c)
 * Callees:
 *     <none>
 */

void __fastcall SepAdtCheckPrivilegeForSensitivity(unsigned int *a1, _BYTE *a2, _BYTE *a3)
{
  unsigned int v4; // r10d
  __int64 v5; // r9
  LUID **v6; // rcx

  *a2 = 0;
  *a3 = 0;
  if ( a1 )
  {
    v4 = *a1;
    if ( *a1 )
    {
      v5 = 0LL;
      do
      {
        if ( *a2 && *a3 )
          break;
        v6 = &SepSensitivePrivileges;
        do
        {
          if ( a1[3 * v5 + 2] == (*v6)->LowPart && a1[3 * v5 + 3] == (*v6)->HighPart )
            break;
          ++v6;
        }
        while ( *v6 );
        if ( *v6 )
          *a2 = 1;
        else
          *a3 = 1;
        v5 = (unsigned int)(v5 + 1);
      }
      while ( (unsigned int)v5 < v4 );
    }
  }
}
