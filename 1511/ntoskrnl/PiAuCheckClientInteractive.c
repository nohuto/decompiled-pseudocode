/*
 * XREFs of PiAuCheckClientInteractive @ 0x14060689C
 * Callers:
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 * Callees:
 *     RtlSubAuthoritySid @ 0x14003D36C (RtlSubAuthoritySid.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     RtlValidSid @ 0x14046C1EC (RtlValidSid.c)
 *     RtlLengthRequiredSid @ 0x14046C3B0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1404AA898 (RtlInitializeSid.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
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
