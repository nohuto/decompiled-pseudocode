/*
 * XREFs of sub_180014AD0 @ 0x180014AD0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B438 @ 0x18000B438 (sub_18000B438.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180015AE0 @ 0x180015AE0 (sub_180015AE0.c)
 *     sub_180015B2C @ 0x180015B2C (sub_180015B2C.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_1800170FC @ 0x1800170FC (sub_1800170FC.c)
 *     sub_180017C2C @ 0x180017C2C (sub_180017C2C.c)
 *     sub_180017F00 @ 0x180017F00 (sub_180017F00.c)
 *     sub_1800187A4 @ 0x1800187A4 (sub_1800187A4.c)
 *     sub_180018A44 @ 0x180018A44 (sub_180018A44.c)
 *     sub_1800225F4 @ 0x1800225F4 (sub_1800225F4.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=5
_OWORD *__fastcall sub_180014AD0(int a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, bool *a7)
{
  _DWORD *v10; // rdi
  int v11; // r14d
  _QWORD *v12; // rax
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rax
  void **v17; // r9
  _QWORD *v18; // rdx
  unsigned int v19; // eax
  unsigned int v20; // eax
  void (__fastcall ***v21)(_QWORD, __int64); // rax
  _OWORD *result; // rax
  __int64 v23; // [rsp+30h] [rbp-B1h] BYREF
  __int64 v24; // [rsp+38h] [rbp-A9h]
  __int64 v25; // [rsp+40h] [rbp-A1h]
  bool *v26; // [rsp+48h] [rbp-99h]
  __int64 v27; // [rsp+50h] [rbp-91h] BYREF
  _BYTE *v28; // [rsp+58h] [rbp-89h] BYREF
  _OWORD *v29; // [rsp+60h] [rbp-81h]
  __int64 v30; // [rsp+68h] [rbp-79h]
  void *v31[3]; // [rsp+70h] [rbp-71h] BYREF
  unsigned __int64 v32; // [rsp+88h] [rbp-59h]
  void *v33[3]; // [rsp+90h] [rbp-51h] BYREF
  unsigned __int64 v34; // [rsp+A8h] [rbp-39h]
  _BYTE v35[32]; // [rsp+B0h] [rbp-31h] BYREF

  v30 = -2LL;
  v29 = a2;
  v10 = a6;
  v25 = (__int64)a6;
  v26 = a7;
  v11 = -1;
  if ( (*(_DWORD *)(a5 + 24) & 0x4000) != 0 )
  {
    v12 = sub_18000B438(a5, &v23);
    v24 = sub_1800187A4(v12);
    if ( v23 )
    {
      v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
      if ( v13 )
        (**v13)(v13, 1LL);
      v10 = (_DWORD *)v25;
    }
    v32 = 7LL;
    LODWORD(v31[0]) = 0;
    v31[2] = (void *)1;
    v14 = v24;
    v15 = sub_180015AE0(v24, v33);
    sub_180017C2C(v31, v15, 0LL, -1LL);
    if ( v34 >= 8 )
      operator delete(v33[0]);
    sub_1800170FC(v31, 1LL, 0LL);
    v16 = sub_180015B2C(v14, v33);
    sub_180017C2C(v31, v16, 0LL, -1LL);
    if ( v34 >= 8 )
      operator delete(v33[0]);
    v17 = v31;
    if ( v32 >= 8 )
      v17 = (void **)v31[0];
    v11 = sub_180018A44(a3, a4, 2LL, v17);
    if ( v32 >= 8 )
      operator delete(v31[0]);
  }
  else
  {
    LODWORD(v23) = 0;
    v18 = sub_18000B438(a5, &v27);
    v19 = sub_1800160E4(a1, (unsigned int)v35, a3, a4, *(_DWORD *)(a5 + 24), (__int64)v18);
    v20 = sub_1800225F4(v35, &v28, v19, &v23);
    LODWORD(v24) = v20;
    if ( v27 )
    {
      v21 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
      if ( v21 )
        (**v21)(v21, 1LL);
      v20 = v24;
      v10 = (_DWORD *)v25;
    }
    if ( v28 != v35 && !(_DWORD)v23 && v20 <= 1 )
      v11 = v20;
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( *(_QWORD *)a3 )
  {
    if ( !*(_QWORD *)a4 )
      goto LABEL_31;
    goto LABEL_30;
  }
  if ( !*(_QWORD *)a4 )
LABEL_30:
    *v10 |= 1u;
LABEL_31:
  if ( v11 >= 0 )
    *v26 = v11 != 0;
  else
    *v10 |= 2u;
  result = v29;
  *v29 = *(_OWORD *)a3;
  return result;
}
