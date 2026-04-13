/*
 * XREFs of sub_18000A560 @ 0x18000A560
 * Callers:
 *     sub_18001FE60 @ 0x18001FE60 (sub_18001FE60.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_18000A560(_QWORD *a1, char a2)
{
  __int64 v4; // rsi
  __int64 v5; // rsi
  __int64 v6; // rsi

  *a1 = &off_18002E0F8;
  a1[2] = off_18002D238;
  if ( *((_BYTE *)a1 + 40) )
  {
    v4 = a1[4];
    if ( v4 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 24LL))(a1[4]);
  }
  v5 = a1[4];
  if ( v5 )
  {
    a1[4] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  *((_DWORD *)a1 + 7) = -1073741823;
  *a1 = off_18002D398;
  v6 = a1[1];
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(a1[1]);
    a1[1] = 0LL;
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
