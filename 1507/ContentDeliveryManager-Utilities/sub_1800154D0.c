/*
 * XREFs of sub_1800154D0 @ 0x1800154D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B438 @ 0x18000B438 (sub_18000B438.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_180017F00 @ 0x180017F00 (sub_180017F00.c)
 *     sub_1800220B4 @ 0x1800220B4 (sub_1800220B4.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_1800154D0(int a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, __int64 *a7)
{
  _QWORD *v11; // rdx
  unsigned int v12; // eax
  __int64 v13; // r13
  void (__fastcall ***v14)(_QWORD, __int64); // rax
  int v16; // [rsp+30h] [rbp-98h] BYREF
  _BYTE *v17; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v18[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-78h] BYREF

  v18[1] = -2LL;
  v16 = 0;
  v11 = sub_18000B438(a5, v18);
  v12 = sub_1800160E4(a1, (unsigned int)v19, a3, a4, *(_DWORD *)(a5 + 24), (__int64)v11);
  v13 = sub_1800220B4(v19, &v17, v12, &v16);
  if ( v18[0] )
  {
    v14 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v18[0] + 16LL))(v18[0]);
    if ( v14 )
      (**v14)(v14, 1LL);
  }
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_13;
    goto LABEL_12;
  }
  if ( *(_QWORD *)a4 )
LABEL_12:
    *a6 |= 1u;
LABEL_13:
  if ( v17 == v19 || v16 )
    *a6 |= 2u;
  else
    *a7 = v13;
  *a2 = *(_OWORD *)a3;
  return a2;
}
