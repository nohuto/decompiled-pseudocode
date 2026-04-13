/*
 * XREFs of sub_180008C58 @ 0x180008C58
 * Callers:
 *     sub_180009508 @ 0x180009508 (sub_180009508.c)
 *     sub_1800099E4 @ 0x1800099E4 (sub_1800099E4.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

void __fastcall sub_180008C58(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // r14

  v1 = *(_QWORD **)a1;
  if ( *(_QWORD *)a1 )
  {
    *(_QWORD *)a1 = v1[3];
    v1[3] = 0LL;
    if ( *(_QWORD **)(a1 + 8) == v1 )
      *(_QWORD *)(a1 + 8) = 0LL;
    while ( v1 )
    {
      v3 = v1[2];
      if ( v3 )
      {
        v1[2] = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
      }
      operator delete(v1);
      v1 = *(_QWORD **)a1;
      if ( !*(_QWORD *)a1 )
        break;
      *(_QWORD *)a1 = v1[3];
      v1[3] = 0LL;
      if ( *(_QWORD **)(a1 + 8) == v1 )
        *(_QWORD *)(a1 + 8) = 0LL;
    }
  }
}
