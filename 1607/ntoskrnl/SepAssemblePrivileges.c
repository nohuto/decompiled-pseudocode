/*
 * XREFs of SepAssemblePrivileges @ 0x1404C1BEC
 * Callers:
 *     SepAccessCheck @ 0x140063630 (SepAccessCheck.c)
 *     SepAccessCheckEx @ 0x140136360 (SepAccessCheckEx.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

void __fastcall SepAssemblePrivileges(int a1, char a2, char a3, char a4, LUID **a5)
{
  LUID *PoolWithTag; // rax

  if ( a5 )
  {
    if ( a1 )
    {
      PoolWithTag = (LUID *)ExAllocatePoolWithTag(PagedPool, (unsigned int)(12 * (a1 - 1) + 20), 0x72506553u);
      if ( PoolWithTag )
      {
        PoolWithTag->LowPart = 0;
        PoolWithTag->HighPart = 0;
        if ( a2 )
        {
          PoolWithTag[1] = SeSecurityPrivilege;
          *(&PoolWithTag[2].LowPart + 3 * PoolWithTag->LowPart++) = 0x80000000;
        }
        if ( a3 )
        {
          *(LUID *)((char *)&PoolWithTag[1] + 12 * PoolWithTag->LowPart) = (LUID)SeTakeOwnershipPrivilege;
          *(&PoolWithTag[2].LowPart + 3 * PoolWithTag->LowPart++) = 0x80000000;
        }
        if ( a4 )
        {
          *(LUID *)((char *)PoolWithTag + 12 * PoolWithTag->LowPart + 8) = SeRelabelPrivilege;
          *(&PoolWithTag[2].LowPart + 3 * PoolWithTag->LowPart++) = 0x80000000;
        }
        *a5 = PoolWithTag;
      }
    }
  }
}
