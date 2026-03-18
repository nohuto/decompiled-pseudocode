/*
 * XREFs of ?DxgkPowerRuntimeComponentActiveCallback@@YAXPEAXK@Z @ 0x1C00191A0
 * Callers:
 *     <none>
 * Callees:
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeComponentActiveCallback(DXGADAPTER *this, unsigned int a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pqq((_DWORD)this, (unsigned int)&Dxgk_PowerRuntimeComponentActiveCallback, a3, (_DWORD)this, a2, 1);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 1u);
}
