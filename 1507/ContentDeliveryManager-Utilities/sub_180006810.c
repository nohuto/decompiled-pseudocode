/*
 * XREFs of sub_180006810 @ 0x180006810
 * Callers:
 *     <none>
 * Callees:
 *     sub_180004160 @ 0x180004160 (sub_180004160.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001012C @ 0x18001012C (sub_18001012C.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180006810(_QWORD *a1, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rcx
  __int64 v7; // rsi

  *a1 = off_18002CE90;
  a1[1] = off_18002C908;
  a1[4] = off_18002C640;
  a1[5] = off_18002C6A0;
  a1[6] = off_18002CAC8;
  a1[7] = off_18002C988;
  a1[8] = off_18002CD80;
  sub_18001012C(a1);
  v4 = a1[14];
  if ( v4 )
  {
    a1[14] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  v5 = a1[12];
  if ( v5 )
  {
    a1[12] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  v6 = a1[10];
  if ( v6 < 0 )
    sub_180004160((volatile signed __int32 *)(2 * v6));
  v7 = a1[3];
  if ( v7 )
  {
    a1[3] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
