/*
 * XREFs of sub_180012508 @ 0x180012508
 * Callers:
 *     sub_18001F020 @ 0x18001F020 (sub_18001F020.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800188EC @ 0x1800188EC (sub_1800188EC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall sub_180012508(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rsi
  __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rsi
  int v9; // eax
  int v10; // edx
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rdi
  _BYTE v17[8]; // [rsp+28h] [rbp-49h] BYREF
  __int64 v18; // [rsp+30h] [rbp-41h] BYREF
  _QWORD v19[4]; // [rsp+38h] [rbp-39h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-19h] BYREF
  __int64 v21; // [rsp+70h] [rbp-1h]
  HSTRING_HEADER v22; // [rsp+78h] [rbp+7h] BYREF
  __int64 v23; // [rsp+90h] [rbp+1Fh]
  __int64 retaddr; // [rsp+D0h] [rbp+5Fh]

  v19[3] = -2LL;
  v19[1] = a3;
  v19[2] = a2;
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 < 0 )
  {
    sub_1800025D0(retaddr, 125, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v4);
    return (unsigned int)v4;
  }
  v18 = 0LL;
  v5 = *(_QWORD *)(a1 + 8);
  v6 = sub_1800188EC(&hstringHeader);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64 *))(*(_QWORD *)v5 + 144LL))(v5, *(_QWORD *)(v6 + 24), &v18);
  v4 = v7;
  v21 = 0LL;
  if ( v7 < 0 )
  {
    sub_1800025D0(retaddr, 128, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v7);
LABEL_5:
    v8 = v18;
    if ( v18 )
    {
      v18 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
    }
    return (unsigned int)v4;
  }
  v17[0] = 0;
  v19[0] = 0LL;
  v9 = (***(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a1)(*(_QWORD *)a1, &unk_18002F950, v19);
  v4 = v9;
  if ( v9 < 0 )
  {
    v10 = 132;
    goto LABEL_9;
  }
  v12 = v19[0];
  v13 = sub_1800188EC(&v22);
  v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v12 + 80LL))(
         v12,
         *(_QWORD *)(v13 + 24),
         v18,
         v17);
  v4 = v9;
  v23 = 0LL;
  if ( v9 < 0 )
  {
    v10 = 134;
LABEL_9:
    sub_1800025D0(retaddr, v10, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v9);
    v11 = v19[0];
    if ( v19[0] )
    {
      v19[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    goto LABEL_5;
  }
  v14 = v19[0];
  if ( v19[0] )
  {
    v19[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  v15 = v18;
  if ( v18 )
  {
    v18 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  return 0;
}
