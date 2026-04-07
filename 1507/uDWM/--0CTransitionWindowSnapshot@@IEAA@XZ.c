/*
 * XREFs of ??0CTransitionWindowSnapshot@@IEAA@XZ @ 0x180011930
 * Callers:
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUtagRECT@@PEAPEAV1@@Z @ 0x1800092FC (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEAVCTopLevelWindow@@PEAVCVisual@@PEBUt.c)
 *     ?Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z @ 0x1800477D8 (-Create@CTransitionWindowSnapshot@@SAJQEAUMIL_CHANNEL__@@PEBUtagRECT@@PEAVCVisual@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??0CVisual@@IEAA@XZ @ 0x18001CC18 (--0CVisual@@IEAA@XZ.c)
 */

CTransitionWindowSnapshot *__fastcall CTransitionWindowSnapshot::CTransitionWindowSnapshot(
        CTransitionWindowSnapshot *this)
{
  __int64 v1; // rcx
  CTransitionWindowSnapshot *result; // rax

  CVisual::CVisual(this);
  *(_DWORD *)(v1 + 336) = 1065353216;
  *(_QWORD *)v1 = &CTransitionWindowSnapshot::`vftable';
  result = (CTransitionWindowSnapshot *)v1;
  *(_BYTE *)(v1 + 340) = 1;
  return result;
}
