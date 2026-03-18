/*
 * XREFs of NtGdiDdDDICheckSharedResourceAccess @ 0x1C00B8970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDICheckSharedResourceAccess(__int64 *a1)
{
  __int64 v2; // [rsp+38h] [rbp+10h] BYREF

  if ( a1 >= W32UserProbeAddress )
    a1 = (__int64 *)W32UserProbeAddress;
  v2 = *a1;
  return ((__int64 (__fastcall *)(__int64 *))qword_1C01041A8)(&v2);
}
