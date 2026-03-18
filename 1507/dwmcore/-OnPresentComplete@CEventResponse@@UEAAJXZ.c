/*
 * XREFs of ?OnPresentComplete@CEventResponse@@UEAAJXZ @ 0x1800E3120
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CEventResponse::OnPresentComplete(CEventResponse *this)
{
  return (*(__int64 (__fastcall **)(CEventResponse *, _QWORD))(*(_QWORD *)this + 32LL))(this, 0LL);
}
