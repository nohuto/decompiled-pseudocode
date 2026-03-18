/*
 * XREFs of ?UpdateTime@Sequence@Animations@Components@@QEAAXH@Z @ 0x1800191F0
 * Callers:
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801135A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 * Callees:
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800192E8 (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 */

void __fastcall Components::Animations::Sequence::UpdateTime(Components::Animations::Sequence *this, int a2)
{
  if ( (*((_BYTE *)this + 264) & 2) != 0 )
    Components::Animations::Timer::Update((Components::Animations::Sequence *)((char *)this + 208), a2, 1);
}
