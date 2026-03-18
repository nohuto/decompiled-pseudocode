/*
 * XREFs of ?GetNumContacts@CInteractionRoot@@UEBAIK@Z @ 0x18010CF80
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CInteractionRoot::GetNumContacts(CInteractionRoot *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = (*(__int64 (__fastcall **)(CInteractionRoot *))(*(_QWORD *)this + 96LL))(this);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 112LL))(v3, a2);
}
