/*
 * XREFs of sub_18001AFC0 @ 0x18001AFC0
 * Callers:
 *     sub_18001AD40 @ 0x18001AD40 (sub_18001AD40.c)
 * Callees:
 *     sub_18000A720 @ 0x18000A720 (sub_18000A720.c)
 *     sub_18000A7F8 @ 0x18000A7F8 (sub_18000A7F8.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001DC9C @ 0x18001DC9C (sub_18001DC9C.c)
 *     sub_18001DD1C @ 0x18001DD1C (sub_18001DD1C.c)
 *     sub_18001DDCC @ 0x18001DDCC (sub_18001DDCC.c)
 *     sub_18001E284 @ 0x18001E284 (sub_18001E284.c)
 *     sub_18001E5B8 @ 0x18001E5B8 (sub_18001E5B8.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001AFC0(__int64 a1)
{
  unsigned int v2; // r15d
  __int64 v3; // rdx
  __int64 *v4; // r14
  unsigned int v5; // eax
  __int64 v6; // rdi
  __int64 (__fastcall ***v7)(_QWORD, void *, __int64 *); // rdi
  void *v8; // rdi
  signed __int32 v10[8]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v11; // [rsp+30h] [rbp-48h] BYREF
  _QWORD v12[3]; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+50h] [rbp-28h] BYREF
  LPSTREAM ppstm[3]; // [rsp+60h] [rbp-18h] BYREF
  signed __int32 v15; // [rsp+B0h] [rbp+38h] BYREF
  unsigned int v16; // [rsp+B8h] [rbp+40h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, void *, __int64 *); // [rsp+C0h] [rbp+48h] BYREF
  void *v18; // [rsp+C8h] [rbp+50h] BYREF

  v12[1] = -2LL;
  v2 = 0;
  v15 = -2;
  _InterlockedCompareExchange(&v15, *(_DWORD *)(a1 + 40), -2);
  if ( !v15 )
    _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 40), 1, 0);
  if ( *(int *)(a1 + 104) > 0 && _InterlockedIncrement((volatile signed __int32 *)(a1 + 8)) == 1 )
  {
    v12[0] = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
    v18 = 0LL;
    sub_18001DC9C(a1);
    if ( (int)sub_18001E284(v12, &v18) >= 0 )
    {
      v16 = -2;
      _InterlockedCompareExchange((volatile signed __int32 *)&v16, *(_DWORD *)(a1 + 40), -2);
      v17 = 0LL;
      v4 = (__int64 *)(a1 + 88);
      if ( (int)sub_18001E5B8(a1 + 88, v3, &v17) >= 0 )
      {
        if ( qword_18003AC90 )
        {
          v13 = xmmword_18002C040;
          (*(void (__fastcall **)(__int64, _QWORD, __int64, __int128 *, __int64, _DWORD))(*(_QWORD *)qword_18003AC90
                                                                                        + 72LL))(
            qword_18003AC90,
            0LL,
            2LL,
            &v13,
            a1,
            0);
        }
        v11 = 0LL;
        sub_18000A7F8(v17, &v11);
        sub_18001DD1C(ppstm);
        v5 = (*v17)[3](v17, v18, (__int64 *)v16);
        v2 = sub_18000A720(v5, (__int64)v17);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 104), 0xFFFFFFFF) == 1 )
        {
          _InterlockedOr(v10, 0);
          v6 = *v4;
          if ( *v4 )
          {
            *v4 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
          }
        }
        if ( qword_18003AC90 )
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)qword_18003AC90 + 80LL))(
            qword_18003AC90,
            0LL,
            2LL);
        sub_18001DDCC(ppstm);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      }
      v7 = v17;
      if ( v17 )
      {
        v17 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v7)[2])(v7);
      }
    }
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(void *))(*(_QWORD *)v8 + 16LL))(v8);
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  }
  return v2;
}
