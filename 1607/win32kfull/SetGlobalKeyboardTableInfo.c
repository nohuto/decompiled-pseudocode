/*
 * XREFs of SetGlobalKeyboardTableInfo @ 0x1C00E7048
 * Callers:
 *     xxxChangeForegroundKeyboardTable @ 0x1C00A9E68 (xxxChangeForegroundKeyboardTable.c)
 *     ?xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_INTERNAL@@PEBGII@Z @ 0x1C00E67CC (-xxxLoadKeyboardLayoutEx@@YAPEAUHKL__@@PEAUtagWINDOWSTATION@@PEAXPEAU1@IIPEAUtagKBDTABLE_MULT_IN.c)
 *     ?SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z @ 0x1C01D0DA0 (-SearchAndSetKbdTbl@@YAXPEAUDEVICEINFO@@KK@Z.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall SetGlobalKeyboardTableInfo(__int64 a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  gpKbdTbl = *(_QWORD *)(*(_QWORD *)(a1 + 48) + 32LL);
  if ( gpKL != a1 )
    gpKL = a1;
  v1 = *(_QWORD *)(a1 + 48);
  ghKbdTblBase = *(PVOID *)(v1 + 24);
  guKbdTblSize = *(_DWORD *)(v1 + 40);
  result = *(_QWORD *)(v1 + 48);
  gpKbdNlsTbl = result;
  return result;
}
