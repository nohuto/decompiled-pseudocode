/*
 * XREFs of sub_18001A710 @ 0x18001A710
 * Callers:
 *     sub_18001FAB0 @ 0x18001FAB0 (sub_18001FAB0.c)
 *     sub_18001FB30 @ 0x18001FB30 (sub_18001FB30.c)
 *     sub_18001FB70 @ 0x18001FB70 (sub_18001FB70.c)
 *     sub_18001FC20 @ 0x18001FC20 (sub_18001FC20.c)
 *     sub_18001FD80 @ 0x18001FD80 (sub_18001FD80.c)
 *     sub_18001FDB0 @ 0x18001FDB0 (sub_18001FDB0.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 *     sub_18001F1E0 @ 0x18001F1E0 (sub_18001F1E0.c)
 */

__int64 __fastcall sub_18001A710(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  __int64 v4; // r14
  int v5; // esi

  v3 = 0;
  v4 = a1;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
    || *a2 == -1350114592 && a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
  {
    *a3 = a1;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  }
  else
  {
    if ( *a2 == 54 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120
      || (a1 += 64LL, *a2 == -1796592748) && a2[1] == 1239476684 && a2[2] == 1693384640 && a2[3] == -1873047606
      || *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *a3 = a1;
      v5 = 0;
    }
    else
    {
      v5 = -2147467262;
    }
    if ( v5 >= 0 || (v5 = sub_18001F1E0(v4 + 136), v5 >= 0) )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v5;
  }
  return v3;
}
