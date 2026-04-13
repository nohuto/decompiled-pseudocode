/*
 * XREFs of sub_1800034B0 @ 0x1800034B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_18000263C @ 0x18000263C (sub_18000263C.c)
 *     sub_18000526C @ 0x18000526C (sub_18000526C.c)
 *     sub_180005348 @ 0x180005348 (sub_180005348.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_1800034B0(__int64 a1, __int64 a2)
{
  HRESULT v3; // eax
  int v4; // eax
  unsigned int v5; // edi
  int v6; // eax
  int v7; // eax
  int v8; // eax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 (__fastcall ***v12)(_QWORD, void *, _QWORD *); // rsi
  char v14; // [rsp+28h] [rbp-19h]
  char v15; // [rsp+30h] [rbp-11h]
  __int64 (__fastcall ***v16)(_QWORD, void *, __int64 *); // [rsp+48h] [rbp+7h] BYREF
  __int64 v17; // [rsp+50h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+58h] [rbp+17h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp+1Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+2Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+47h] BYREF
  __int64 retaddr; // [rsp+A0h] [rbp+5Fh]

  v19[1] = -2LL;
  v16 = 0LL;
  string = 0LL;
  v3 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Store.Preview.InstallControl.AppInstallManager",
         0x47u,
         &hstringHeader,
         &string);
  if ( v3 < 0 )
  {
    sub_18000263C(v3);
    __debugbreak();
  }
  v4 = sub_18000526C(string, &v16);
  v5 = v4;
  if ( v4 >= 0 )
  {
    v17 = 0LL;
    v6 = (**v16)(v16, &unk_18002C228, &v17);
    v5 = v6;
    if ( v6 >= 0 )
    {
      v18 = 0LL;
      v15 = 0;
      v14 = 0;
      v7 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, char, __int64 *))(*(_QWORD *)v17 + 72LL))(
             v17,
             a2,
             0LL,
             0LL,
             v14,
             v15,
             &v18);
      v5 = v7;
      if ( v7 >= 0 )
      {
        v19[0] = 0LL;
        v8 = sub_180005348(v18, v19);
        v5 = v8;
        if ( v8 >= 0 )
          v5 = 0;
        else
          sub_1800025D0(
            retaddr,
            81,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
            v8);
        v9 = v19[0];
        if ( v19[0] )
        {
          v19[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
      }
      else
      {
        sub_1800025D0(
          retaddr,
          78,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
          v7);
      }
      v10 = v18;
      if ( v18 )
      {
        v18 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
      }
    }
    else
    {
      sub_1800025D0(retaddr, 69, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v6);
    }
    v11 = v17;
    if ( v17 )
    {
      v17 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
  }
  else
  {
    sub_1800025D0(retaddr, 66, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v4);
  }
  v12 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, void *, _QWORD *)))(*v12)[2])(v12);
  }
  return v5;
}
