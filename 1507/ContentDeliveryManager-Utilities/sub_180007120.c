/*
 * XREFs of sub_180007120 @ 0x180007120
 * Callers:
 *     sub_1800067E0 @ 0x1800067E0 (sub_1800067E0.c)
 *     sub_180007DA0 @ 0x180007DA0 (sub_180007DA0.c)
 *     sub_180008320 @ 0x180008320 (sub_180008320.c)
 *     sub_180008470 @ 0x180008470 (sub_180008470.c)
 *     sub_1800084B0 @ 0x1800084B0 (sub_1800084B0.c)
 *     sub_180008590 @ 0x180008590 (sub_180008590.c)
 *     sub_1800085A0 @ 0x1800085A0 (sub_1800085A0.c)
 *     sub_1800086A0 @ 0x1800086A0 (sub_1800086A0.c)
 *     sub_18000E724 @ 0x18000E724 (sub_18000E724.c)
 * Callees:
 *     sub_180007E80 @ 0x180007E80 (sub_180007E80.c)
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180007120(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v4; // esi

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    goto LABEL_9;
  if ( *a2 != -1350114592 || a2[1] != 1282060589 )
    goto LABEL_14;
  if ( a2[2] != -1428727140 || a2[3] != -1877077915 )
  {
    if ( a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
    {
      *a3 = a1;
      v4 = 0;
      goto LABEL_15;
    }
LABEL_14:
    v4 = sub_180007E80(a1 + 8);
    if ( v4 < 0 )
      return (unsigned int)v4;
LABEL_15:
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
    return (unsigned int)v4;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
