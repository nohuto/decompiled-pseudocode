/*
 * XREFs of ?DxgkCddReportSqmData@@YAXPEAU_DXGK_CDD_SQM_DATA@@@Z @ 0x1C00AAB20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkCddReportSqmData(struct _DXGK_CDD_SQM_DATA *a1)
{
  struct DXGPROCESS *Current; // rax
  char v3; // cl

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  if ( Current )
  {
    v3 = *(_BYTE *)a1;
    ++*((_QWORD *)Current + 37);
    if ( v3 )
      ++*((_QWORD *)Current + 38);
  }
}
