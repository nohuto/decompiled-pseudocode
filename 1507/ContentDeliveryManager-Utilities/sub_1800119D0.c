/*
 * XREFs of sub_1800119D0 @ 0x1800119D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_1800119D0(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == 1204800526 && a2[1] == 1137336338 && a2[2] == 2074847617 && a2[3] == -724211000 )
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
