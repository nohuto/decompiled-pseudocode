/*
 * XREFs of sub_18000384C @ 0x18000384C
 * Callers:
 *     sub_180003420 @ 0x180003420 (sub_180003420.c)
 *     sub_1800036E0 @ 0x1800036E0 (sub_1800036E0.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 *     sub_18000526C @ 0x18000526C (sub_18000526C.c)
 *     sub_180005AC0 @ 0x180005AC0 (sub_180005AC0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_18000384C(__int64 a1, __int64 a2, HSTRING a3, HSTRING a4, char a5, _QWORD *a6)
{
  HRESULT v9; // eax
  int v10; // eax
  int v11; // edi
  int v12; // eax
  __int64 v13; // r9
  int v14; // eax
  int v15; // edx
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rsi
  __int64 v19; // rsi
  __int64 v20; // rsi
  __int64 v22; // [rsp+30h] [rbp-50h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h] BYREF
  __int64 v24; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v25[2]; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  __int64 retaddr; // [rsp+B8h] [rbp+38h]

  v25[1] = -2LL;
  v25[0] = 0LL;
  string = 0LL;
  v9 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
         0x47u,
         &hstringHeader,
         &string);
  if ( v9 < 0 )
  {
    sub_18000263C(v9);
    __debugbreak();
  }
  v10 = sub_18000526C(string, v25);
  v11 = v10;
  if ( v10 < 0 )
  {
    sub_1800025D0(retaddr, 106, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v10);
    goto LABEL_26;
  }
  v23 = 0LL;
  v12 = (**(__int64 (__fastcall ***)(_QWORD, void *, __int64 *))v25[0])(v25[0], &unk_18002C228, &v23);
  v11 = v12;
  if ( v12 >= 0 )
  {
    v22 = 0LL;
    if ( WindowsGetStringLen(a3) && WindowsGetStringLen(a4) )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING, HSTRING, char, __int64 *))(*(_QWORD *)v23 + 64LL))(
              v23,
              a2,
              a3,
              a4,
              a5,
              &v22);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 119;
LABEL_13:
        sub_1800025D0(
          retaddr,
          v15,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          v14);
LABEL_22:
        v18 = v22;
        if ( v22 )
        {
          v22 = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
        }
        goto LABEL_24;
      }
    }
    else
    {
      LOBYTE(v13) = a5;
      v14 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64 *))(*(_QWORD *)v23 + 56LL))(
              v23,
              a2,
              0LL,
              v13,
              &v22);
      v11 = v14;
      if ( v14 < 0 )
      {
        v15 = 127;
        goto LABEL_13;
      }
    }
    v24 = 0LL;
    v16 = v22;
    v11 = sub_180005AC0(v22);
    if ( v11 < 0 || (v11 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v16 + 64LL))(v16, &v24), v11 < 0) )
    {
      sub_1800025D0(
        retaddr,
        131,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
        v11);
      v17 = v24;
    }
    else
    {
      v17 = v24;
      if ( v24 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
        v17 = v24;
      }
      *a6 = v17;
      v11 = 0;
    }
    if ( v17 )
    {
      v24 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
    }
    goto LABEL_22;
  }
  sub_1800025D0(retaddr, 109, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v12);
LABEL_24:
  v19 = v23;
  if ( v23 )
  {
    v23 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
LABEL_26:
  v20 = v25[0];
  if ( v25[0] )
  {
    v25[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  }
  return (unsigned int)v11;
}
