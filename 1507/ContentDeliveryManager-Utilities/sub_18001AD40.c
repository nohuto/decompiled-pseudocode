/*
 * XREFs of sub_18001AD40 @ 0x18001AD40
 * Callers:
 *     sub_18001A270 @ 0x18001A270 (sub_18001A270.c)
 *     sub_18001BB40 @ 0x18001BB40 (sub_18001BB40.c)
 *     sub_18001BEC0 @ 0x18001BEC0 (sub_18001BEC0.c)
 *     sub_18001C240 @ 0x18001C240 (sub_18001C240.c)
 *     sub_18001C5C0 @ 0x18001C5C0 (sub_18001C5C0.c)
 *     sub_18001D5FC @ 0x18001D5FC (sub_18001D5FC.c)
 *     sub_18001D700 @ 0x18001D700 (sub_18001D700.c)
 *     sub_18001F8B0 @ 0x18001F8B0 (sub_18001F8B0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 */

__int64 __fastcall sub_18001AD40(__int64 a1)
{
  unsigned int v2; // esi
  __int64 v3; // rdi
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  v2 = sub_18001AFC0();
  if ( *(int *)(a1 + 128) > 0 && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF) == 1 )
  {
    _InterlockedOr(v5, 0);
    v3 = *(_QWORD *)(a1 + 112);
    if ( v3 )
    {
      *(_QWORD *)(a1 + 112) = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
  }
  return v2;
}
