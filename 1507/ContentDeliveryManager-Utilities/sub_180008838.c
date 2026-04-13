/*
 * XREFs of sub_180008838 @ 0x180008838
 * Callers:
 *     sub_1800272AB @ 0x1800272AB (sub_1800272AB.c)
 *     unknown_libname_23 @ 0x1800272ED (unknown_libname_23.c)
 *     ?dtor$1@?0???0_Pad@std@@QEAA@XZ@4HA_0 @ 0x18002733B (-dtor$1@-0---0_Pad@std@@QEAA@XZ@4HA_0.c)
 * Callees:
 *     <none>
 */

HRESULT __fastcall sub_180008838(HSTRING *a1)
{
  HRESULT result; // eax

  result = WindowsDeleteString(*a1);
  *a1 = 0LL;
  return result;
}
