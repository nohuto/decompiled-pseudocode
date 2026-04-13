/*
 * XREFs of sub_180010860 @ 0x180010860
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

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180010860(__int64 (__fastcall ***a1)(_QWORD, void *, __int64 *), __int64 a2, _BYTE *a3)
{
  __int64 (__fastcall **v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int v9; // edx
  __int64 v10; // rsi
  _QWORD *v11; // rax
  __int64 v12; // rsi
  __int64 v14[3]; // [rsp+20h] [rbp-58h] BYREF
  HSTRING string; // [rsp+38h] [rbp-40h] BYREF
  __int64 retaddr; // [rsp+78h] [rbp+0h]

  v14[2] = -2LL;
  v14[1] = a2;
  *a3 = 0;
  v14[0] = 0LL;
  v5 = *a1;
  v6 = sub_1800056F0(v14);
  v7 = (*v5)(a1, &unk_18002F950, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 523;
LABEL_5:
    sub_1800025D0(retaddr, v9, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v7);
    goto LABEL_7;
  }
  v10 = v14[0];
  v11 = (_QWORD *)sub_180018488(&string);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, _BYTE *))(*(_QWORD *)v10 + 64LL))(v10, *v11, a3);
  v8 = v7;
  if ( v7 < 0 )
  {
    v9 = 524;
    goto LABEL_5;
  }
  v8 = 0;
LABEL_7:
  v12 = v14[0];
  if ( v14[0] )
  {
    v14[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return v8;
}
