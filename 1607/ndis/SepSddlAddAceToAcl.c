/*
 * XREFs of SepSddlAddAceToAcl @ 0x1C009D74C
 * Callers:
 *     SepSddlGetAclForString @ 0x1C009D468 (SepSddlGetAclForString.c)
 * Callees:
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

NTSTATUS __fastcall SepSddlAddAceToAcl(
        const void **a1,
        _DWORD *a2,
        __int64 a3,
        __int64 a4,
        ACCESS_MASK AccessMask,
        int a6,
        PSID Sid)
{
  ACL *v7; // rsi
  size_t v10; // rbp
  ULONG v11; // ebx
  int v12; // r15d
  unsigned int v14; // ebx
  ACL *PoolWithTag; // rax
  ACL *v16; // rdi

  v7 = (ACL *)*a1;
  v10 = (unsigned int)*a2;
  v11 = RtlLengthSid(Sid) + 8;
  v12 = v11 + v10;
  if ( v11 + (unsigned int)v10 <= v7->AclSize )
    goto LABEL_2;
  v14 = v10 + a6 * v11;
  PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v14, 0x6C416553u);
  v16 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v14);
    memmove(v16, *a1, v10);
    v16->AclSize = v14;
    ExFreePoolWithTag(v7, 0);
    *a1 = v16;
    v7 = v16;
LABEL_2:
    *a2 = v12;
    return RtlAddAccessAllowedAce(v7, 2u, AccessMask, Sid);
  }
  return -1073741670;
}
