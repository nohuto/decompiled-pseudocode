/*
 * XREFs of ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0
 * Callers:
 *     ?Invoke@Animation@Animations@Components@@UEAAJII@Z @ 0x180154FC0 (-Invoke@Animation@Animations@Components@@UEAAJII@Z.c)
 * Callees:
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x180153810 (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x180153EEC (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180153F58 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x1801548BC (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180154B5C (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801557A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiInstantAdvance(
        Components::Animations::Animation *this,
        float a2)
{
  int v3; // edi
  char v4; // si
  bool v5; // si
  char v6; // bp
  bool v7; // bp
  int v8; // eax

  if ( a2 >= 0.0 )
  {
    v4 = *((_BYTE *)this + 252);
    if ( (v4 & 0x10) != 0 )
      return 0;
    v5 = (v4 & 2) != 0;
    v3 = Components::Animations::Animation::ApiPlay(this);
    if ( v3 >= 0 )
    {
      v6 = *((_BYTE *)this + 252);
      *((_BYTE *)this + 252) = v6 | 0x20;
      v7 = (v6 & 0x20) != 0;
      v8 = Components::Animations::Math::Round(a2 * 1000.0);
      Components::Animations::Animation::UpdateTime(this, v8);
      Components::Animations::Animation::Calculate(this);
      v3 = Components::Animations::Animation::Commit(this);
      if ( v3 >= 0 )
      {
        *((_BYTE *)this + 252) &= ~0x20u;
        *((_BYTE *)this + 252) |= 32 * v7;
        if ( (*((_BYTE *)this + 252) & 2) == 0 )
          return 0;
        if ( v5 )
          return 0;
        v3 = Components::Animations::Animation::ApiPause(this);
        if ( v3 >= 0 )
          return 0;
      }
    }
  }
  else
  {
    v3 = -2147024809;
  }
  Components::Animations::Animation::ApiReset(this, 1);
  return (unsigned int)v3;
}
