/*
 * XREFs of sub_18001865C @ 0x18001865C
 * Callers:
 *     sub_180011ED8 @ 0x180011ED8 (sub_180011ED8.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180018D7C @ 0x180018D7C (sub_180018D7C.c)
 *     sub_180021500 @ 0x180021500 (sub_180021500.c)
 *     sub_180021540 @ 0x180021540 (sub_180021540.c)
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180021A18 (--1_Lockit@std@@QEAA@XZ.c)
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_18001865C(__int64 *a1)
{
  __int64 v2; // rsi
  unsigned __int64 v3; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdi
  __int64 v6; // rax
  _BYTE pExceptionObject[48]; // [rsp+28h] [rbp-30h] BYREF
  char v9; // [rsp+60h] [rbp+8h] BYREF
  char v10; // [rsp+68h] [rbp+10h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  sub_180021988(&v10, 0LL);
  v2 = qword_18003AD28;
  v11 = qword_18003AD28;
  v3 = qword_18003AE48;
  if ( !qword_18003AE48 )
  {
    sub_180021988(&v9, 0LL);
    if ( !qword_18003AE48 )
      qword_18003AE48 = ++dword_18003A36C;
    std::_Lockit::~_Lockit((std::_Lockit *)&v9);
    v3 = qword_18003AE48;
  }
  v4 = *a1;
  if ( v3 >= *(_QWORD *)(*a1 + 24) )
    v5 = 0LL;
  else
    v5 = *(_QWORD *)(*(_QWORD *)(v4 + 16) + 8 * v3);
  if ( !v5 )
  {
    if ( *(_BYTE *)(v4 + 36) )
    {
      v6 = sub_180021540(v4);
      if ( v3 >= *(_QWORD *)(v6 + 24) )
        v5 = 0LL;
      else
        v5 = *(_QWORD *)(*(_QWORD *)(v6 + 16) + 8 * v3);
    }
    if ( !v5 )
    {
      if ( v2 )
      {
        v5 = v2;
      }
      else
      {
        if ( sub_180018D7C(&v11, a1) == -1 )
        {
          bad_cast::bad_cast((bad_cast *)pExceptionObject, "bad cast");
          throw (bad_cast *)pExceptionObject;
        }
        v5 = v11;
        qword_18003AD28 = v11;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 8LL))(v11);
        sub_180021500(v5);
      }
    }
  }
  std::_Lockit::~_Lockit((std::_Lockit *)&v10);
  return v5;
}
