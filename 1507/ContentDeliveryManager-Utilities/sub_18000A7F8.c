/*
 * XREFs of sub_18000A7F8 @ 0x18000A7F8
 * Callers:
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 *     sub_18001D8C8 @ 0x18001D8C8 (sub_18001D8C8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18000A7F8(__int64 (__fastcall ***a1)(_QWORD, void *, __int64 *), _QWORD *a2)
{
  signed int v4; // edi
  __int64 v5; // rsi
  __int64 v7; // [rsp+50h] [rbp+8h] BYREF
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF

  *a2 = 0LL;
  if ( a1 )
  {
    v7 = 0LL;
    v4 = (**a1)(a1, &unk_18002F920, &v7);
    if ( v4 >= 0
      && (v4 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall ***)(_QWORD, void *, __int64 *), __int64, __int64 *, __int64))(*(_QWORD *)v7 + 32LL))(
                 v7,
                 a1,
                 2LL,
                 &v8,
                 -2LL),
          v4 >= 0)
      && (v4 = v8 != 1 ? 0x80004002 : 0, v8 == 1) )
    {
      v5 = 0LL;
      *a2 = v7;
    }
    else
    {
      v5 = v7;
    }
    if ( v5 )
    {
      v7 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return (unsigned int)v4;
}
