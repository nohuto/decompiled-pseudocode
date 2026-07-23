/*
 * XREFs of PiAuAllocateAndInitializeSid @ 0x140571DBC
 * Callers:
 *     PiAuCreateUserSids @ 0x1407B3580 (PiAuCreateUserSids.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlLengthRequiredSid @ 0x1404781C0 (RtlLengthRequiredSid.c)
 *     RtlInitializeSid @ 0x140478448 (RtlInitializeSid.c)
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
