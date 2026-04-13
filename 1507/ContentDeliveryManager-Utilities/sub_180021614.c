/*
 * XREFs of sub_180021614 @ 0x180021614
 * Callers:
 *     sub_1800214A0 @ 0x1800214A0 (sub_1800214A0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180021988 @ 0x180021988 (sub_180021988.c)
 *     ??1_Lockit@std@@QEAA@XZ @ 0x180021A18 (--1_Lockit@std@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_180021614(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  void (__fastcall ***v4)(_QWORD, __int64); // rax
  char v5; // [rsp+40h] [rbp+8h] BYREF

  sub_180021988(&v5, 0LL);
  v2 = *(_QWORD *)(a1 + 24);
  while ( v2 )
  {
    --v2;
    v3 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 8 * v2);
    if ( v3 )
    {
      v4 = (void (__fastcall ***)(_QWORD, __int64))(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      if ( v4 )
        (**v4)(v4, 1LL);
    }
  }
  free(*(void **)(a1 + 16));
  std::_Lockit::~_Lockit((std::_Lockit *)&v5);
}
