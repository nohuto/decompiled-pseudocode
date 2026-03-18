/*
 * XREFs of PiAuCheckClientInteractive @ 0x140630CB8
 * Callers:
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14000D6F8 (RtlSubAuthoritySid.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlValidSid @ 0x1404217D0 (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x1404792F0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140479578 (RtlInitializeSid.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  ULONG v2; // eax
  PVOID PoolWithTag; // rax
  void *v4; // rdi
  NTSTATUS v5; // ebx
  struct _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *a1 = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  v2 = RtlLengthRequiredSid(1u);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v2, 0x20207050u);
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    v5 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 1u);
    if ( v5 >= 0 )
    {
      *RtlSubAuthoritySid(v4, 0) = 4;
      if ( !RtlValidSid(v4) )
        v5 = -1073741595;
      if ( v5 >= 0 )
      {
        v5 = PiAuCheckTokenMembership(v4);
        if ( v5 >= 0 )
          *a1 = 0;
      }
    }
    ExFreePoolWithTag(v4, 0);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)v5;
}
