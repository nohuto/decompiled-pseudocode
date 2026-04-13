/*
 * XREFs of sub_18001F844 @ 0x18001F844
 * Callers:
 *     sub_18001A270 @ 0x18001A270 (sub_18001A270.c)
 *     sub_18001BB40 @ 0x18001BB40 (sub_18001BB40.c)
 *     sub_18001BEC0 @ 0x18001BEC0 (sub_18001BEC0.c)
 *     sub_18001C240 @ 0x18001C240 (sub_18001C240.c)
 *     sub_18001C5C0 @ 0x18001C5C0 (sub_18001C5C0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001F8C4 @ 0x18001F8C4 (sub_18001F8C4.c)
 */

_QWORD *__fastcall sub_18001F844(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)sub_18001F8C4(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}
