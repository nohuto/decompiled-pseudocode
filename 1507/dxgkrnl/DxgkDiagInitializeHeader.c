/*
 * XREFs of DxgkDiagInitializeHeader @ 0x1C0010E30
 * Callers:
 *     ?DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT_TYPE@@III@Z @ 0x1C0008568 (-DxgkDiagInitializeCodePointPacket@@YAXPEAU_DXGK_DIAG_CODE_POINT_PACKET@@W4_DXGK_DIAG_CODE_POINT.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DxgkDiagInitializeHeader(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  *(_DWORD *)(a1 + 40) = 0;
  result = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)a1 = a2;
  *(_DWORD *)(a1 + 4) = a3;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  return result;
}
