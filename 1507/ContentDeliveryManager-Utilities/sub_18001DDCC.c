/*
 * XREFs of sub_18001DDCC @ 0x18001DDCC
 * Callers:
 *     sub_18001AFC0 @ 0x18001AFC0 (sub_18001AFC0.c)
 *     sub_18001D8C8 @ 0x18001D8C8 (sub_18001D8C8.c)
 *     sub_180027883 @ 0x180027883 (sub_180027883.c)
 *     sub_180027B14 @ 0x180027B14 (sub_180027B14.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall sub_18001DDCC(int *a1)
{
  _UNKNOWN **v1; // rax
  LPSTREAM v3; // rdi
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v1 = &retaddr;
  if ( a1[2] >= 0 )
  {
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, __int64))(**(_QWORD **)a1 + 40LL))(
      *(_QWORD *)a1,
      0LL,
      0LL,
      0LL,
      -2LL);
    LODWORD(v1) = CoReleaseMarshalData(*(LPSTREAM *)a1);
  }
  v3 = *(LPSTREAM *)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = 0LL;
    LODWORD(v1) = ((__int64 (__fastcall *)(LPSTREAM))v3->lpVtbl->Release)(v3);
  }
  return (int)v1;
}
