/*
 * XREFs of sub_180012108 @ 0x180012108
 * Callers:
 *     sub_18000F804 @ 0x18000F804 (sub_18000F804.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800188EC @ 0x1800188EC (sub_1800188EC.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_180012108(__int64 a1, __int64 a2, unsigned int a3)
{
  int v4; // edi
  int v5; // eax
  __int64 v6; // rsi
  int v7; // eax
  int v8; // edx
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rdi
  _BYTE v15[8]; // [rsp+20h] [rbp-50h] BYREF
  __int64 v16; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v17[3]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 v19; // [rsp+60h] [rbp-10h]
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v17[2] = -2LL;
  v17[1] = L"TriggerId";
  v4 = *(_DWORD *)(a1 + 16);
  if ( v4 < 0 )
  {
    sub_1800025D0(retaddr, 125, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v4);
    return (unsigned int)v4;
  }
  v16 = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(a1 + 8) + 80LL))(
         *(_QWORD *)(a1 + 8),
         a3,
         &v16);
  v4 = v5;
  if ( v5 < 0 )
  {
    sub_1800025D0(retaddr, 128, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v5);
LABEL_5:
    v6 = v16;
    if ( v16 )
    {
      v16 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    return (unsigned int)v4;
  }
  v15[0] = 0;
  v17[0] = 0LL;
  v7 = (***(__int64 (__fastcall ****)(_QWORD, void *, _QWORD *))a1)(*(_QWORD *)a1, &unk_18002F950, v17);
  v4 = v7;
  if ( v7 < 0 )
  {
    v8 = 132;
    goto LABEL_9;
  }
  v10 = v17[0];
  v11 = sub_1800188EC(&hstringHeader);
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _BYTE *))(*(_QWORD *)v10 + 80LL))(
         v10,
         *(_QWORD *)(v11 + 24),
         v16,
         v15);
  v4 = v7;
  v19 = 0LL;
  if ( v7 < 0 )
  {
    v8 = 134;
LABEL_9:
    sub_1800025D0(retaddr, v8, (__int64)"shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h", v7);
    v9 = v17[0];
    if ( v17[0] )
    {
      v17[0] = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_5;
  }
  v12 = v17[0];
  if ( v17[0] )
  {
    v17[0] = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  v13 = v16;
  if ( v16 )
  {
    v16 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  return 0;
}
