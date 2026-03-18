/*
 * XREFs of NtGdiDdDDIEnumAdapters @ 0x1C00B8C60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiDdDDIEnumAdapters(__int64 a1, __int64 a2, __int64 a3)
{
  LOBYTE(a3) = 1;
  LOBYTE(a2) = 1;
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, __int64))qword_1C0103EE0)(a1, a2, a3, 6LL);
}
