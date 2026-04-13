/*
 * XREFs of sub_18000F640 @ 0x18000F640
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180007200 @ 0x180007200 (sub_180007200.c)
 *     sub_180007270 @ 0x180007270 (sub_180007270.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001E094 @ 0x18001E094 (sub_18001E094.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180026428 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_18000F640(__int64 a1, char a2, _QWORD *a3)
{
  volatile signed __int64 *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // r15
  int v9; // r14d
  __int64 v10; // rdi
  __int64 v11; // rax
  _DWORD v13[4]; // [rsp+28h] [rbp-28h] BYREF
  volatile signed __int64 *v14; // [rsp+38h] [rbp-18h]
  char v15; // [rsp+40h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+38h]
  __int64 v17; // [rsp+90h] [rbp+40h] BYREF
  int v18; // [rsp+98h] [rbp+48h] BYREF
  const wchar_t *v19; // [rsp+A0h] [rbp+50h] BYREF
  __int64 v20; // [rsp+A8h] [rbp+58h]

  v5 = (volatile signed __int64 *)(a1 - 64);
  v20 = a1 - 64;
  if ( a1 != 64 )
    sub_180007200(a1 - 64);
  v14 = v5;
  if ( v5 )
    sub_180007200((__int64)v5);
  v15 = a2;
  v13[0] = 3;
  v13[1] = 128;
  v13[2] = 0;
  v8 = operator new(0x18uLL, (const struct std::nothrow_t *)&unk_180031BC0);
  if ( v8 )
  {
    *v8 = off_18002DF18;
    v8[1] = v5;
    if ( v5 )
      sub_180007200((__int64)v5);
    *((_BYTE *)v8 + 16) = a2;
  }
  else
  {
    v8 = 0LL;
  }
  v18 = 0;
  v19 = L"Windows.Foundation.IAsyncAction";
  *a3 = 0LL;
  v9 = v8 == 0LL ? 0x8007000E : 0;
  if ( v8 )
  {
    ((void (__fastcall *)(__int64 *, _DWORD *, const wchar_t **, int *, __int64))sub_18001E094)(
      &v17,
      v13,
      &v19,
      &v18,
      -2LL);
    v10 = v17;
    v9 = v17 == 0 ? 0x8007000E : 0;
    if ( v17 )
    {
      *(_QWORD *)(v17 + 224) = v8;
      v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 104LL))(v10 + 8);
      v8 = 0LL;
      if ( v9 < 0 )
      {
LABEL_18:
        if ( v10 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v10 + 8) + 16LL))(v10 + 8);
        goto LABEL_20;
      }
      v11 = v10;
      v10 = 0LL;
      v17 = 0LL;
      if ( v11 )
        v11 += 152LL;
      *a3 = v11;
    }
    if ( v8 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v8)(v8, 1LL);
    goto LABEL_18;
  }
LABEL_20:
  if ( v5 )
    sub_180007270(v5, v6, v7);
  if ( v9 < 0 )
    sub_1800025D0(retaddr, 353, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v9);
  if ( v5 )
    sub_180007270(v5, v6, v7);
  return (unsigned int)v9;
}
