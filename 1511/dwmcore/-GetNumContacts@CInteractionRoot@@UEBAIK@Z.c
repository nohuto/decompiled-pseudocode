/*
 * XREFs of ?GetNumContacts@CInteractionRoot@@UEBAIK@Z @ 0x180127C90
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CInteractionRoot::GetNumContacts(CInteractionRoot *this, unsigned int a2)
{
  __int64 v3; // rdi

  v3 = (*(__int64 (__fastcall **)(CInteractionRoot *))(*(_QWORD *)this + 96LL))(this);
  return (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 112LL))(v3, a2);
}
