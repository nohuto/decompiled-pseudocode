/*
 * XREFs of ?OnPresentComplete@CEventResponse@@UEAAJXZ @ 0x180101210
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CEventResponse::OnPresentComplete(CEventResponse *this)
{
  return (*(__int64 (__fastcall **)(CEventResponse *, _QWORD))(*(_QWORD *)this + 32LL))(this, 0LL);
}
