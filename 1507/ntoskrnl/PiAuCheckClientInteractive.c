/*
 * XREFs of PiAuCheckClientInteractive @ 0x140681644
 * Callers:
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x140044DFC (RtlSubAuthoritySid.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlValidSid @ 0x1404CA0C0 (RtlValidSid.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 */

__int64 __fastcall PiAuCheckClientInteractive(_BYTE *a1)
{
  ULONG v2; // eax
  PVOID PoolWithTag; // rax
  void *v4; // rdi
  NTSTATUS v5; // ebx
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0;
  *(_DWORD *)IdentifierAuthority.Value = 0;
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
