/*
 * XREFs of sub_180014648 @ 0x180014648
 * Callers:
 *     sub_180011A94 @ 0x180011A94 (sub_180011A94.c)
 *     sub_180011BC0 @ 0x180011BC0 (sub_180011BC0.c)
 * Callees:
 *     sub_18000B37C @ 0x18000B37C (sub_18000B37C.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180014648(__int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rdi
  __int64 v4; // rcx
  int v5; // edx

  try
  {
    result = *a1;
    v3 = *(int *)(*a1 + 4);
    if ( !*(_DWORD *)((char *)a1 + v3 + 16) && (*((_BYTE *)a1 + v3 + 24) & 2) != 0 )
    {
      result = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)((char *)a1 + v3 + 72) + 104LL))(*(__int64 *)((char *)a1 + v3 + 72));
      if ( (_DWORD)result == -1 )
      {
        v4 = (__int64)a1 + *(int *)(*a1 + 4);
        v5 = *(_DWORD *)(v4 + 16) | 4;
        result = sub_18000B37C(v4, v5, 0);
      }
    }
  }
  catch ( ... )
  {
  }
  return result;
}
