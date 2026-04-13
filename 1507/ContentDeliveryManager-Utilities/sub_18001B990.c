/*
 * XREFs of sub_18001B990 @ 0x18001B990
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000A720 @ 0x18000A720 (sub_18000A720.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001DC9C @ 0x18001DC9C (sub_18001DC9C.c)
 *     sub_18001E284 @ 0x18001E284 (sub_18001E284.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001B990(__int64 a1)
{
  unsigned int v2; // r14d
  unsigned int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int128 v7; // [rsp+40h] [rbp-10h] BYREF
  signed __int32 v8; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v9; // [rsp+88h] [rbp+38h] BYREF
  __int64 v10; // [rsp+90h] [rbp+40h] BYREF
  __int64 v11; // [rsp+98h] [rbp+48h] BYREF

  v2 = 0;
  v8 = -2;
  _InterlockedCompareExchange(&v8, *(_DWORD *)(a1 + 40), -2);
  if ( !v8 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  if ( *(_QWORD *)(a1 + 16) && _InterlockedIncrement((volatile signed __int32 *)(a1 + 8)) == 1 )
  {
    v11 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v10 = 0LL;
    sub_18001DC9C(a1);
    if ( (int)sub_18001E284(&v11, &v10) >= 0 )
    {
      v9 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v9, *(_DWORD *)(a1 + 40), -2);
      if ( qword_18003AC90 )
      {
        v7 = xmmword_18002C040;
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, _DWORD, __int64))(*(_QWORD *)qword_18003AC90
                                                                                               + 72LL))(
          qword_18003AC90,
          0LL,
          2LL,
          &v7,
          a1,
          0,
          -2LL);
      }
      v3 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**(_QWORD **)(a1 + 16) + 24LL))(
             *(_QWORD *)(a1 + 16),
             v10,
             v9);
      v2 = sub_18000A720(v3, *(_QWORD *)(a1 + 16));
      v4 = *(_QWORD *)(a1 + 16);
      if ( v4 )
      {
        *(_QWORD *)(a1 + 16) = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
      }
      if ( qword_18003AC90 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18003AC90 + 80LL))(
          qword_18003AC90,
          0LL,
          2LL);
    }
    v5 = v10;
    if ( v10 )
    {
      v10 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
