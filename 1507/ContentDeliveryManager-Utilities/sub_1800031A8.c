/*
 * XREFs of sub_1800031A8 @ 0x1800031A8
 * Callers:
 *     sub_180003BE0 @ 0x180003BE0 (sub_180003BE0.c)
 * Callees:
 *     sub_1800025D0 @ 0x1800025D0 (sub_1800025D0.c)
 *     sub_180004FEC @ 0x180004FEC (sub_180004FEC.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     __security_check_cookie @ 0x180026050 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800031A8(char a1)
{
  int v2; // esi
  __int64 v3; // rdx
  int v4; // eax
  int v5; // edx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v9; // [rsp+20h] [rbp-50h] BYREF
  __int64 v10; // [rsp+28h] [rbp-48h] BYREF
  _QWORD v11[2]; // [rsp+30h] [rbp-40h] BYREF
  HSTRING string; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  __int64 retaddr; // [rsp+88h] [rbp+18h]

  v11[1] = -2LL;
  v9 = 0LL;
  if ( WindowsCreateStringReference(L"ContentManagement.ContentManagementService", 0x2Au, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  v9 = 0LL;
  v2 = RoActivateInstance(string, v11);
  if ( v2 < 0
    || (v2 = (**(__int64 (__fastcall ***)(_QWORD, __int128 *, __int64 *))v11[0])(v11[0], &xmmword_18002C030, &v9),
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v11[0] + 16LL))(v11[0]),
        v2 < 0) )
  {
    sub_1800025D0(retaddr, 35, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v2);
    goto LABEL_14;
  }
  v10 = 0LL;
  LOBYTE(v3) = a1;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v9 + 48LL))(v9, v3, &v10);
  v2 = v4;
  if ( v4 < 0 )
  {
    v5 = 37;
LABEL_9:
    sub_1800025D0(retaddr, v5, (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp", v4);
    goto LABEL_11;
  }
  v4 = sub_180004FEC(v10);
  v2 = v4;
  if ( v4 < 0 )
  {
    v5 = 38;
    goto LABEL_9;
  }
  v2 = 0;
LABEL_11:
  v6 = v10;
  if ( v10 )
  {
    v10 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  }
LABEL_14:
  v7 = v9;
  if ( v9 )
  {
    v9 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  return (unsigned int)v2;
}
