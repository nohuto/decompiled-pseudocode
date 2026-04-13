/*
 * XREFs of sub_180011A94 @ 0x180011A94
 * Callers:
 *     sub_180011A94 @ 0x180011A94 (sub_180011A94.c)
 *     sub_1800146D4 @ 0x1800146D4 (sub_1800146D4.c)
 * Callees:
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_180011A94 @ 0x180011A94 (sub_180011A94.c)
 *     sub_180014648 @ 0x180014648 (sub_180014648.c)
 *     __uncaught_exception @ 0x180021A54 (__uncaught_exception.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_180011A94(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 v5; // rcx
  int v6; // edx
  __int64 v7; // rcx
  __int64 v8; // rdi

  v2 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v3 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v3 + a1 + 16) )
    {
      v3 = *(_QWORD *)(v3 + a1 + 80);
      if ( v3 )
        sub_180011A94(v3);
    }
    v4 = *(int *)(*(_QWORD *)a1 + 4LL);
    if ( !*(_DWORD *)(v4 + a1 + 16)
      && (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(v4 + a1 + 72) + 104LL))(*(_QWORD *)(v4 + a1 + 72)) == -1 )
    {
      v5 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
      v6 = *(_DWORD *)(v5 + 16) | 4;
      sub_18000B37C(v5, v6, 0);
    }
    if ( !(unsigned __int8)_uncaught_exception(v3) )
      sub_180014648(a1);
    v7 = *(int *)(*(_QWORD *)a1 + 4LL);
    v8 = *(_QWORD *)(v7 + a1 + 72);
    if ( v8 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 16LL))(*(_QWORD *)(v7 + a1 + 72));
  }
  return a1;
}
