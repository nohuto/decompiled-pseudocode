/*
 * XREFs of _dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultValue__ @ 0x18009C7B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x180097954 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 */

void dynamic_atexit_destructor_for__Components::Animations::Sequence::s_rpDefaultValue__()
{
  Components::Animations::Input *v0; // rcx

  v0 = Components::Animations::Sequence::s_rpDefaultValue;
  Components::Animations::Sequence::s_rpDefaultValue = 0LL;
  if ( v0 )
    Components::Animations::Input::Release(v0);
}
