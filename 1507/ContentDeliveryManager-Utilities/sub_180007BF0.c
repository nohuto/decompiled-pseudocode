/*
 * XREFs of sub_180007BF0 @ 0x180007BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180007BF0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915
    || *a2 == 53 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    return (unsigned int)-2147467262;
  }
  return v3;
}
