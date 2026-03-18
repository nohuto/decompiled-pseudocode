/*
 * XREFs of ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x1800192AC
 * Callers:
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x180019114 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801135A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 * Callees:
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180085D0C (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::Sequence::ResetTime(Components::Animations::Sequence *this, int a2, bool a3)
{
  __int64 v5; // r11

  Components::Animations::Sequence::ConfigureTimer(this);
  *(_DWORD *)(v5 + 208) = a2;
  Components::Animations::Timer::Update((Components::Animations::Timer *)(v5 + 208), 0, a3);
}
