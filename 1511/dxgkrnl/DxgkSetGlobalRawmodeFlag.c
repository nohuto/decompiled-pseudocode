/*
 * XREFs of DxgkSetGlobalRawmodeFlag @ 0x1C01560D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C00A5B24 (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 */

__int64 __fastcall DxgkSetGlobalRawmodeFlag(__int64 a1)
{
  bool v1; // bl
  CCD_BTL *v2; // rax

  v1 = (_BYTE)a1 != 0;
  v2 = CCD_BTL::Global(a1);
  return CCD_BTL::SetUnsupportedMonitorModesFlag(v2, v1);
}
