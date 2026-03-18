/*
 * XREFs of ?DxgkCddReportSqmData@@YAXPEAU_DXGK_CDD_SQM_DATA@@@Z @ 0x1C00BE3F0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkCddReportSqmData(struct _DXGK_CDD_SQM_DATA *a1)
{
  struct DXGPROCESS *Current; // rax
  char v3; // cl

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    v3 = *(_BYTE *)a1;
    ++*((_QWORD *)Current + 37);
    if ( v3 )
      ++*((_QWORD *)Current + 38);
  }
}
