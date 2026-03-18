/*
 * XREFs of ?DxgkPowerRuntimeComponentIdleCallback@@YAXPEAXK@Z @ 0x1C0010830
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z @ 0x1C0010894 (-PowerRuntimeComponentActiveCallback@DXGADAPTER@@QEAAXKE@Z.c)
 *     Template_pqq @ 0x1C001C1F0 (Template_pqq.c)
 */

void __fastcall DxgkPowerRuntimeComponentIdleCallback(DXGADAPTER *this, unsigned int a2, int a3)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pqq((_DWORD)this, (unsigned int)&Dxgk_PowerRuntimeComponentActiveCallback, a3, (_DWORD)this, a2, 0);
  DXGADAPTER::PowerRuntimeComponentActiveCallback(this, a2, 0);
  PoFxCompleteIdleCondition(*((_QWORD *)this + 254), a2);
}
