/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x1405B5958
 * Callers:
 *     PiAuCreateUserSids @ 0x1407DE000 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x140470D24 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x1405447D8 (RtlInitializeSid.c)
 */

__int64 __fastcall PiAuAllocateAndInitializeSid(PVOID *a1, _SID_IDENTIFIER_AUTHORITY *a2, ULONG a3)
{
  UCHAR v4; // bl
  ULONG v6; // eax
  PVOID PoolWithTag; // rax
  NTSTATUS v8; // ebx

  v4 = a3;
  v6 = RtlLengthRequiredSid(a3);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, v6, 0x20207050u);
  *a1 = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = RtlInitializeSid(PoolWithTag, a2, v4);
    if ( v8 >= 0 )
      return (unsigned int)v8;
  }
  else
  {
    v8 = -1073741670;
  }
  if ( *a1 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v8;
}
