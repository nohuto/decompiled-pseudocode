/*
 * XREFs of sub_180002654 @ 0x180002654
 * Callers:
 *     sub_180003BF0 @ 0x180003BF0 (sub_180003BF0.c)
 *     sub_180003DC0 @ 0x180003DC0 (sub_180003DC0.c)
 *     sub_180004FEC @ 0x180004FEC (sub_180004FEC.c)
 *     sub_1800057DC @ 0x1800057DC (sub_1800057DC.c)
 *     sub_180005AC0 @ 0x180005AC0 (sub_180005AC0.c)
 *     sub_1800079F0 @ 0x1800079F0 (sub_1800079F0.c)
 *     sub_180007FCC @ 0x180007FCC (sub_180007FCC.c)
 *     sub_1800080BC @ 0x1800080BC (sub_1800080BC.c)
 *     sub_180019730 @ 0x180019730 (sub_180019730.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     sub_180019C40 @ 0x180019C40 (sub_180019C40.c)
 *     sub_18001E37C @ 0x18001E37C (sub_18001E37C.c)
 *     sub_18001E700 @ 0x18001E700 (sub_18001E700.c)
 *     sub_18001E93C @ 0x18001E93C (sub_18001E93C.c)
 *     sub_18001EB78 @ 0x18001EB78 (sub_18001EB78.c)
 *     sub_18001EDB4 @ 0x18001EDB4 (sub_18001EDB4.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

_QWORD *__fastcall sub_180002654(_QWORD *a1)
{
  __int64 *v1; // rsi
  __int64 v3; // rdi
  LPUNKNOWN v4; // rdi
  LPUNKNOWN v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0LL;
  v1 = a1 + 2;
  *a1 = &off_18002E3D0;
  a1[2] = 0LL;
  if ( CoCreateFreeThreadedMarshaler(0LL, &v6) >= 0 )
  {
    v3 = *v1;
    if ( *v1 )
    {
      *v1 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    ((void (__fastcall *)(LPUNKNOWN, void *, __int64 *))v6->lpVtbl->QueryInterface)(v6, &unk_18002C2E8, v1);
  }
  v4 = v6;
  if ( v6 )
  {
    v6 = 0LL;
    ((void (__fastcall *)(LPUNKNOWN))v4->lpVtbl->Release)(v4);
  }
  return a1;
}
