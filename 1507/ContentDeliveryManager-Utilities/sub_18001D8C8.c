/*
 * XREFs of sub_18001D8C8 @ 0x18001D8C8
 * Callers:
 *     sub_18001A4A0 @ 0x18001A4A0 (sub_18001A4A0.c)
 * Callees:
 *     sub_18000A720 @ 0x18000A720 (sub_18000A720.c)
 *     sub_18000A7F8 @ 0x18000A7F8 (sub_18000A7F8.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001DD1C @ 0x18001DD1C (sub_18001DD1C.c)
 *     sub_18001DDCC @ 0x18001DDCC (sub_18001DDCC.c)
 *     sub_18001E300 @ 0x18001E300 (sub_18001E300.c)
 *     sub_18001E65C @ 0x18001E65C (sub_18001E65C.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18001D8C8(volatile signed __int32 *a1, unsigned int a2)
{
  unsigned int v4; // r12d
  void *v5; // rdi
  signed __int32 v6; // edx
  __int64 v7; // rdx
  __int64 *v8; // r15
  __int64 v9; // rdi
  unsigned int v10; // eax
  __int64 v11; // rdi
  __int64 (__fastcall ***v12)(_QWORD, void *, __int64 *); // rdi
  signed __int32 v14[8]; // [rsp+0h] [rbp-60h] BYREF
  volatile signed __int32 *v15; // [rsp+30h] [rbp-30h] BYREF
  __int64 v16; // [rsp+38h] [rbp-28h]
  __int128 v17; // [rsp+40h] [rbp-20h] BYREF
  LPSTREAM ppstm[2]; // [rsp+50h] [rbp-10h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, void *, __int64 *); // [rsp+A0h] [rbp+40h] BYREF
  void *v20; // [rsp+B0h] [rbp+50h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+58h] BYREF

  v16 = -2LL;
  v4 = 0;
  v15 = a1;
  if ( a1 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 8LL))(a1);
  v5 = 0LL;
  v20 = 0LL;
  v6 = *((_DWORD *)a1 + 32);
  if ( v6 > 0 )
  {
    do
    {
      if ( v6 == _InterlockedCompareExchange(a1 + 32, v6 + 1, v6) )
        break;
      v6 = *((_DWORD *)a1 + 32);
    }
    while ( v6 > 0 );
    if ( v6 > 0 && (int)sub_18001E300(&v15, &v20) >= 0 )
    {
      v19 = 0LL;
      v8 = (__int64 *)(a1 + 28);
      if ( (int)sub_18001E65C(a1 + 28, v7, &v19) >= 0 )
      {
        if ( qword_18003AC90 )
        {
          v17 = xmmword_18002C040;
          (*(void (__fastcall **)(__int64, __int64, __int64, __int128 *, volatile signed __int32 *, int, volatile signed __int32 *, __int64))(*(_QWORD *)qword_18003AC90 + 72LL))(
            qword_18003AC90,
            1LL,
            2LL,
            &v17,
            a1,
            1,
            v15,
            v16);
        }
        v21 = 0LL;
        sub_18000A7F8(v19, &v21);
        v9 = v21;
        sub_18001DD1C(ppstm);
        v10 = (*v19)[3](v19, v20, (__int64 *)a2);
        v4 = sub_18000A720(v10, (__int64)v19);
        if ( qword_18003AC90 )
          (*(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)qword_18003AC90 + 80LL))(
            qword_18003AC90,
            1LL,
            2LL,
            1LL);
        sub_18001DDCC(ppstm);
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
      }
      if ( _InterlockedExchangeAdd(a1 + 32, 0xFFFFFFFF) == 1 )
      {
        _InterlockedOr(v14, 0);
        v11 = *v8;
        if ( *v8 )
        {
          *v8 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        }
      }
      v12 = v19;
      if ( v19 )
      {
        v19 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, __int64 *)))(*v12)[2])(v12);
      }
    }
    v5 = v20;
  }
  if ( v5 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(void *))(*(_QWORD *)v5 + 16LL))(v5);
  }
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)a1 + 16LL))(a1);
  return v4;
}
