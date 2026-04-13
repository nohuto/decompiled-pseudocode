/*
 * XREFs of sub_180021550 @ 0x180021550
 * Callers:
 *     sub_1800139BC @ 0x1800139BC (sub_1800139BC.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_1800213A0 @ 0x1800213A0 (sub_1800213A0.c)
 *     sub_180021764 @ 0x180021764 (sub_180021764.c)
 *     ?_Setgloballocale@locale@std@@CAXPEAX@Z @ 0x1800217DC (-_Setgloballocale@locale@std@@CAXPEAX@Z.c)
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180021A18 (--1_Lockit@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180021550(char a1)
{
  __int64 v2; // rdi
  char v4; // [rsp+40h] [rbp+8h] BYREF

  sub_180021988(&v4, 0LL);
  v2 = qword_18003A380;
  if ( !qword_18003A380 )
  {
    v2 = sub_180021764(0LL);
    std::locale::_Setgloballocale((void *)v2);
    *(_DWORD *)(v2 + 32) = 63;
    sub_1800213A0((void **)(v2 + 40), byte_18002B40C);
    qword_18003A370 = v2;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    qword_18003A3A8 = qword_18003A370;
  }
  if ( a1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  std::_Lockit::~_Lockit((std::_Lockit *)&v4);
  return v2;
}
