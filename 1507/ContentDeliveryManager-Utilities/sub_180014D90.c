/*
 * XREFs of sub_180014D90 @ 0x180014D90
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000B438 @ 0x18000B438 (sub_18000B438.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800160E4 @ 0x1800160E4 (sub_1800160E4.c)
 *     sub_180017F00 @ 0x180017F00 (sub_180017F00.c)
 *     sub_1800225F4 @ 0x1800225F4 (sub_1800225F4.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_OWORD *__fastcall sub_180014D90(int a1, _OWORD *a2, __int64 a3, __int64 a4, __int64 a5, _DWORD *a6, _WORD *a7)
{
  _QWORD *v11; // rdx
  unsigned int v12; // r13d
  void (__fastcall ***v13)(_QWORD, __int64); // rax
  char *v14; // rdi
  unsigned int v15; // ebx
  int v17; // [rsp+30h] [rbp-51h] BYREF
  char *v18; // [rsp+38h] [rbp-49h] BYREF
  _WORD *v19; // [rsp+40h] [rbp-41h]
  _QWORD v20[2]; // [rsp+48h] [rbp-39h] BYREF
  char v21; // [rsp+58h] [rbp-29h] BYREF
  char v22; // [rsp+59h] [rbp-28h] BYREF

  v20[1] = -2LL;
  v19 = a7;
  v17 = 0;
  v11 = sub_18000B438(a5, v20);
  v12 = sub_1800160E4(a1, (unsigned int)&v21, a3, a4, *(_DWORD *)(a5 + 24), (__int64)v11);
  if ( v20[0] )
  {
    v13 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v20[0] + 16LL))(v20[0]);
    if ( v13 )
      (**v13)(v13, 1LL);
  }
  v14 = &v22;
  if ( v21 != 45 )
    v14 = &v21;
  v15 = sub_1800225F4(v14, &v18, v12, &v17);
  if ( !*(_BYTE *)(a3 + 8) )
    sub_180017F00(a3);
  if ( !*(_BYTE *)(a4 + 8) )
    sub_180017F00(a4);
  if ( !*(_QWORD *)a3 )
  {
    if ( *(_QWORD *)a4 )
      goto LABEL_15;
    goto LABEL_14;
  }
  if ( *(_QWORD *)a4 )
LABEL_14:
    *a6 |= 1u;
LABEL_15:
  if ( v18 == v14 || v17 || v15 > 0xFFFF )
  {
    *a6 |= 2u;
  }
  else
  {
    if ( v21 == 45 )
      LOWORD(v15) = -(__int16)v15;
    *v19 = v15;
  }
  *a2 = *(_OWORD *)a3;
  return a2;
}
