/*
 * XREFs of sub_1800101E4 @ 0x1800101E4
 * Callers:
 *     sub_180010DF0 @ 0x180010DF0 (sub_180010DF0.c)
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 *     sub_180011520 @ 0x180011520 (sub_180011520.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800101E4(_QWORD *a1)
{
  int ActivationFactory; // eax
  unsigned int v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edx
  __int64 v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rsi
  __int64 v13; // [rsp+20h] [rbp-50h] BYREF
  __int64 v14; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v15[1] = -2LL;
  *a1 = 0LL;
  v13 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Storage.ApplicationData", 0x1Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &unk_18002C158, &v13);
  v3 = ActivationFactory;
  if ( ActivationFactory < 0 )
  {
    sub_1800025D0(
      retaddr,
      459,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      ActivationFactory);
    goto LABEL_17;
  }
  v14 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v13 + 48LL))(v13, &v14);
  v3 = v4;
  if ( v4 >= 0 )
  {
    v15[0] = 0LL;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v14 + 80LL))(v14, v15);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v7 = v15[0];
      v8 = (_QWORD *)sub_180018488(&string);
      v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD *))(*(_QWORD *)v7 + 80LL))(v7, *v8, 0LL, a1);
      v3 = v5;
      if ( v5 >= 0 )
      {
        v3 = 0;
LABEL_13:
        v9 = v15[0];
        if ( v15[0] )
        {
          v15[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        }
        goto LABEL_15;
      }
      v6 = 467;
    }
    else
    {
      v6 = 465;
    }
    sub_1800025D0(retaddr, v6, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v5);
    goto LABEL_13;
  }
  sub_1800025D0(retaddr, 462, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v4);
LABEL_15:
  v10 = v14;
  if ( v14 )
  {
    v14 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  }
LABEL_17:
  v11 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v3;
}
