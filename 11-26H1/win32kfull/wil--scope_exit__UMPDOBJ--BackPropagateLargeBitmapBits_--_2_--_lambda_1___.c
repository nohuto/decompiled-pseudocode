/*
 * XREFs of wil::scope_exit__UMPDOBJ::BackPropagateLargeBitmapBits_::_2_::_lambda_1___ @ 0x14016E3DC
 * Callers:
 *     ?DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z @ 0x14016DFD0 (-DoFontManagement@@YAKAEAVXDCOBJ@@KKPEAXK1@Z.c)
 *     ?BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z @ 0x14034A094 (-BackPropagateLargeBitmapBits@UMPDOBJ@@QEAAXPEAU_SURFOBJ@@PEAXH@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::scope_exit__UMPDOBJ::BackPropagateLargeBitmapBits_::_2_::_lambda_1___(__int64 a1, _QWORD *a2)
{
  __int64 result; // rax

  *(_QWORD *)a1 = *a2;
  result = a1;
  *(_BYTE *)(a1 + 8) = 1;
  return result;
}
