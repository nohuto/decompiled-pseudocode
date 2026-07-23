/*
 * XREFs of ObpCreateDefaultObjectTypeSD @ 0x140552C6C
 * Callers:
 *     ObpInitObjectTypeSD @ 0x140552BD4 (ObpInitObjectTypeSD.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

__int64 __fastcall ObpCreateDefaultObjectTypeSD(_QWORD *a1)
{
  ULONG v2; // ebx
  ULONG v3; // ebx
  ULONG v4; // eax
  __int64 v5; // rdi
  ULONG v6; // ebp
  char *PoolWithTag; // rbx
  NTSTATUS Acl; // edi

  v2 = RtlLengthSid(SeWorldSid);
  v3 = RtlLengthSid(SeAliasAdminsSid) + v2;
  v4 = RtlLengthSid(SeLocalSystemSid);
  v5 = v3 + v4 + 44;
  v6 = v3 + v4 + 44;
  PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, v5 + 20, 0x6C636144u);
  if ( PoolWithTag )
  {
    *(_QWORD *)PoolWithTag = 0LL;
    *((_QWORD *)PoolWithTag + 1) = 0LL;
    *((_DWORD *)PoolWithTag + 4) = 0;
    *PoolWithTag = 1;
    memset(PoolWithTag + 20, 0, v6);
    Acl = RtlCreateAcl((PACL)(PoolWithTag + 20), v5, 2u);
    if ( Acl < 0
      || (Acl = RtlAddAccessAllowedAce((PACL)(PoolWithTag + 20), 2u, 0xF0001u, SeWorldSid), Acl < 0)
      || (Acl = RtlAddAccessAllowedAce((PACL)(PoolWithTag + 20), 2u, 0xF0001u, SeAliasAdminsSid), Acl < 0)
      || (Acl = RtlAddAccessAllowedAce((PACL)(PoolWithTag + 20), 2u, 0xF0001u, SeLocalSystemSid), Acl < 0) )
    {
      ExFreePoolWithTag(PoolWithTag, 0);
    }
    else
    {
      *((_WORD *)PoolWithTag + 1) |= 0x8004u;
      *((_DWORD *)PoolWithTag + 4) = 20;
      *a1 = PoolWithTag;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Acl;
}
