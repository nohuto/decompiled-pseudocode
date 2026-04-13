/*
 * XREFs of sub_18001CD68 @ 0x18001CD68
 * Callers:
 *     sub_18001FE40 @ 0x18001FE40 (sub_18001FE40.c)
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001D470 @ 0x18001D470 (sub_18001D470.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18001CD68(_QWORD *a1, char a2)
{
  _QWORD *v4; // rsi
  void (__fastcall ***v5)(_QWORD, __int64); // r14
  __int64 v6; // r14
  __int64 v7; // rcx
  __int64 v8; // r14

  *a1 = off_18002DF28;
  v4 = a1 + 1;
  a1[1] = off_18002D258;
  a1[9] = off_18002D9A8;
  a1[18] = off_18002DC10;
  a1[19] = off_18002D318;
  a1[20] = off_18002E4B8;
  a1[21] = off_18002DC30;
  a1[22] = off_18002E0D8;
  v5 = (void (__fastcall ***)(_QWORD, __int64))a1[28];
  if ( v5 )
    (**v5)(a1[28], 1LL);
  a1[28] = 0LL;
  v6 = a1[33];
  if ( v6 )
  {
    a1[33] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
  v7 = v4[23];
  if ( v7 < 0 )
    sub_180004160((volatile signed __int32 *)(2 * v7));
  v8 = v4[14];
  if ( v8 )
  {
    v4[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  }
  sub_18001D470(v4);
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
