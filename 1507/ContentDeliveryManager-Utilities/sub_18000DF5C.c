/*
 * XREFs of sub_18000DF5C @ 0x18000DF5C
 * Callers:
 *     sub_18000FF28 @ 0x18000FF28 (sub_18000FF28.c)
 * Callees:
 *     sub_180002568 @ 0x180002568 (sub_180002568.c)
 *     sub_18000259C @ 0x18000259C (sub_18000259C.c)
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     sub_1800199B8 @ 0x1800199B8 (sub_1800199B8.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18000DF5C(_QWORD *a1)
{
  int v2; // esi
  __int64 v3; // rbx
  _QWORD *v4; // rax
  int v5; // eax
  int v6; // r9d
  int v7; // edx
  __int64 v8; // rsi
  _QWORD *v9; // rax
  int v10; // eax
  int v11; // eax
  int v12; // r9d
  int v13; // edx
  __int64 v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rdi
  __int64 v17; // rdi
  __int64 v19; // [rsp+38h] [rbp-19h] BYREF
  __int64 v20; // [rsp+40h] [rbp-11h] BYREF
  __int64 v21; // [rsp+48h] [rbp-9h] BYREF
  int v22; // [rsp+50h] [rbp-1h] BYREF
  const wchar_t *v23; // [rsp+58h] [rbp+7h]
  __int64 v24; // [rsp+60h] [rbp+Fh]
  HSTRING string; // [rsp+68h] [rbp+17h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  __int64 retaddr; // [rsp+B0h] [rbp+5Fh]

  v24 = -2LL;
  v23 = L"microsoft-contentdeliverymanager";
  *a1 = 0LL;
  v19 = 0LL;
  if ( WindowsCreateStringReference(
         L"Windows.ApplicationModel.AppService.AppServiceConnection",
         0x38u,
         &hstringHeader,
         &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v19 = 0LL;
  v2 = RoActivateInstance(string, &v21);
  if ( v2 < 0
    || (v2 = (**(__int64 (__fastcall ***)(__int64, __int64 *, __int64 *))v21)(v21, &qword_18002EF20, &v19),
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21),
        v3 = v19,
        v2 < 0) )
  {
    v6 = v2;
    v7 = 127;
    goto LABEL_21;
  }
  v4 = (_QWORD *)sub_180018488(&string);
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 56LL))(v3, *v4);
  v2 = v5;
  if ( v5 < 0 )
  {
    v6 = v5;
    v7 = 128;
LABEL_21:
    sub_1800025D0(retaddr, v7, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v6);
    goto LABEL_22;
  }
  v8 = v19;
  v9 = (_QWORD *)sub_180018488(&string);
  v10 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 72LL))(v8, *v9);
  v2 = v10;
  if ( v10 < 0 )
  {
    v6 = v10;
    v7 = 129;
    goto LABEL_21;
  }
  v20 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 80LL))(v19, &v20);
  v2 = v11;
  if ( v11 < 0 )
  {
    v12 = v11;
    v13 = 132;
LABEL_17:
    sub_180002568(retaddr, v13, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v12);
    goto LABEL_18;
  }
  v14 = v20;
  v2 = sub_1800199B8(v20);
  if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 64LL))(v14, &v22), v2 < 0) )
  {
    v12 = v2;
    v13 = 134;
    goto LABEL_17;
  }
  if ( v22 )
  {
    v2 = -2147483629;
    sub_18000259C(
      retaddr,
      136,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      2147483667LL,
      (__int64)"AppServiceConnectionStatus: %d",
      v22);
  }
  else
  {
    v15 = v19;
    v19 = 0LL;
    *a1 = v15;
    v2 = 0;
  }
LABEL_18:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_22:
  v17 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return (unsigned int)v2;
}
