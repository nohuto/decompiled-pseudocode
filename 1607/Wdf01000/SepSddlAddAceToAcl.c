/*
 * XREFs of SepSddlAddAceToAcl @ 0x1C00CB9DC
 * Callers:
 *     SepSddlGetAclForString @ 0x1C00CB670 (SepSddlGetAclForString.c)
 * Callees:
 *     memmove @ 0x1C003C440 (memmove.c)
 *     memset @ 0x1C003C780 (memset.c)
 */

NTSTATUS __fastcall SepSddlAddAceToAcl(
        _ACL **Acl,
        unsigned int *TrueAclSize,
        unsigned int AccessMask,
        unsigned int RemainingAces,
        ACCESS_MASK SidPtr,
        unsigned int Acl_0,
        void *TrueAclSize_0)
{
  _ACL *v7; // rsi
  size_t v10; // rbp
  ULONG v11; // ebx
  unsigned int v12; // r15d
  unsigned int v14; // ebx
  _ACL *PoolWithTag; // rax
  _ACL *v16; // rdi

  v7 = *Acl;
  v10 = *TrueAclSize;
  v11 = RtlLengthSid(TrueAclSize_0) + 8;
  v12 = v11 + v10;
  if ( v11 + (unsigned int)v10 <= v7->AclSize )
    goto LABEL_2;
  v14 = v10 + Acl_0 * v11;
  PoolWithTag = (_ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x6C416553u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v14);
    memmove(v16, *Acl, v10);
    v16->AclSize = v14;
    ExFreePoolWithTag(v7, 0);
    *Acl = v16;
    v7 = v16;
LABEL_2:
    *TrueAclSize = v12;
    return RtlAddAccessAllowedAce(v7, 2u, SidPtr, TrueAclSize_0);
  }
  return -1073741670;
}
