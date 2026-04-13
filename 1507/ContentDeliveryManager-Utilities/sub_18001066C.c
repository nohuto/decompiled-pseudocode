/*
 * XREFs of sub_18001066C @ 0x18001066C
 * Callers:
 *     sub_180010DF0 @ 0x180010DF0 (sub_180010DF0.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18001066C(__int64 (__fastcall ***a1)(_QWORD, void *, __int64 *), __int64 a2, _QWORD *a3)
{
  __int64 (__fastcall **v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  __int64 v9; // rsi
  _QWORD *v10; // rax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  __int64 v14; // rsi
  __int64 (__fastcall ***v15)(_QWORD, void *, _QWORD *); // rsi
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-50h] BYREF
  __int64 (__fastcall ***v19)(_QWORD, void *, _QWORD *); // [rsp+28h] [rbp-48h] BYREF
  _QWORD v20[3]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v20[2] = -2LL;
  v20[1] = L"LastCreativeId";
  *a3 = 0LL;
  v18 = 0LL;
  v5 = *a1;
  v6 = sub_1800056F0(&v18);
  v7 = (*v5)(a1, &unk_18002F950, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_1800025D0(retaddr, 505, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v7);
    goto LABEL_15;
  }
  v19 = 0LL;
  v9 = v18;
  v10 = (_QWORD *)sub_180018488(&string);
  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, *v10, &v19);
  v8 = v11;
  if ( v11 >= 0 )
  {
    v20[0] = 0LL;
    v12 = (**v19)(v19, &unk_18002BB30, v20);
    v8 = v12;
    if ( v12 >= 0 )
    {
      v12 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(*(_QWORD *)v20[0] + 152LL))(v20[0], a3);
      v8 = v12;
      if ( v12 >= 0 )
      {
        v8 = 0;
LABEL_11:
        v14 = v20[0];
        if ( v20[0] )
        {
          v20[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
        }
        goto LABEL_13;
      }
      v13 = 513;
    }
    else
    {
      v13 = 511;
    }
    sub_1800025D0(retaddr, v13, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v12);
    goto LABEL_11;
  }
  sub_1800025D0(retaddr, 508, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v11);
LABEL_13:
  v15 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v15)[2])(v15);
  }
LABEL_15:
  v16 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  return v8;
}
