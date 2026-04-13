/*
 * XREFs of sub_180010970 @ 0x180010970
 * Callers:
 *     sub_180011110 @ 0x180011110 (sub_180011110.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_1800056F0 @ 0x1800056F0 (sub_1800056F0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018488 @ 0x180018488 (sub_180018488.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180010970(__int64 (__fastcall ***a1)(_QWORD, void *, __int64 *), __int64 a2, __int64 a3)
{
  __int64 (__fastcall **v5)(_QWORD, void *, __int64 *); // rbx
  __int64 *v6; // rax
  int v7; // eax
  unsigned int v8; // edi
  int ActivationFactory; // eax
  int v10; // eax
  int v11; // edx
  __int64 v12; // r14
  __int64 v13; // rsi
  _QWORD *v14; // rax
  __int64 v15; // rsi
  __int64 v16; // rsi
  __int64 v17; // rsi
  _BYTE v19[8]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+28h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v22[3]; // [rsp+38h] [rbp-48h] BYREF
  HSTRING string; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+A8h] [rbp+28h]

  v22[2] = -2LL;
  v22[1] = a2;
  v21 = 0LL;
  v5 = *a1;
  v6 = sub_1800056F0(&v21);
  v7 = (*v5)(a1, &unk_18002F950, v6);
  v8 = v7;
  if ( v7 < 0 )
  {
    sub_1800025D0(retaddr, 532, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v7);
    goto LABEL_17;
  }
  v20 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &unk_18002C2F8, &v20);
  v8 = ActivationFactory;
  if ( ActivationFactory >= 0 )
  {
    v22[0] = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *))(*(_QWORD *)v20 + 104LL))(v20, a3, v22);
    v8 = v10;
    if ( v10 >= 0 )
    {
      v12 = v21;
      v13 = v22[0];
      v14 = (_QWORD *)sub_180018488(&string);
      v10 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v12 + 80LL))(v12, *v14, v13, v19);
      v8 = v10;
      if ( v10 >= 0 )
      {
        v8 = 0;
LABEL_13:
        v15 = v22[0];
        if ( v22[0] )
        {
          v22[0] = 0LL;
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        goto LABEL_15;
      }
      v11 = 541;
    }
    else
    {
      v11 = 538;
    }
    sub_1800025D0(retaddr, v11, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp", v10);
    goto LABEL_13;
  }
  sub_1800025D0(
    retaddr,
    535,
    (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    ActivationFactory);
LABEL_15:
  v16 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
LABEL_17:
  v17 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  return v8;
}
