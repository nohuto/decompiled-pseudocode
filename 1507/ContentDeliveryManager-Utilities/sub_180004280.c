/*
 * XREFs of sub_180004280 @ 0x180004280
 * Callers:
 *     sub_1800033F0 @ 0x1800033F0 (sub_1800033F0.c)
 *     sub_180006280 @ 0x180006280 (sub_180006280.c)
 *     sub_180006300 @ 0x180006300 (sub_180006300.c)
 *     sub_180006310 @ 0x180006310 (sub_180006310.c)
 * Callees:
 *     _guard_check_icall_nop @ 0x18000B5A0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall sub_180004280(__int64 a1, _DWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi
  int v5; // esi
  __int64 v6; // rcx

  v3 = 0;
  *a3 = 0LL;
  if ( !*a2 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    goto LABEL_9;
  if ( *a2 != -1350114592 || a2[1] != 1282060589 )
    goto LABEL_15;
  if ( a2[2] != -1428727140 || a2[3] != -1877077915 )
  {
    if ( a2[1] == 1282060589 && a2[2] == -1428727140 && a2[3] == -1877077915 )
    {
      *a3 = a1;
LABEL_14:
      v5 = 0;
      goto LABEL_37;
    }
LABEL_15:
    v6 = a1 + 8;
    if ( *a2 == -1796592748 && a2[1] == 1239476684 && a2[2] == 1693384640 && a2[3] == -1873047606 )
      goto LABEL_19;
    if ( *a2 == 3 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
    {
      *a3 = v6;
    }
    else
    {
      v6 = a1 + 32;
      if ( *a2 == 56 && !a2[1] && a2[2] == 192 && a2[3] == 1174405120 )
      {
LABEL_19:
        *a3 = v6;
        goto LABEL_14;
      }
      if ( *a2 != -1219019771 || a2[1] != 1127004961 || a2[2] != -2139839837 || a2[3] != 355603347 )
      {
        v5 = -2147467262;
LABEL_36:
        if ( v5 < 0 )
          return (unsigned int)v5;
LABEL_37:
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
        return (unsigned int)v5;
      }
      *a3 = a1 + 40;
    }
    v5 = 0;
    goto LABEL_36;
  }
LABEL_9:
  *a3 = a1;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
  return v3;
}
