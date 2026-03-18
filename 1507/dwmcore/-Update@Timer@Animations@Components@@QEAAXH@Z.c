/*
 * XREFs of ?Update@Timer@Animations@Components@@QEAAXH@Z @ 0x1801571D8
 * Callers:
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801557A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 *     ?Repeat@Sequence@Animations@Components@@QEAAJXZ @ 0x180156B44 (-Repeat@Sequence@Animations@Components@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Timer::Update(Components::Animations::Timer *this, int a2)
{
  int v2; // edx
  int v3; // r8d

  *((_DWORD *)this + 1) += a2;
  v2 = *((_DWORD *)this + 1) - *((_DWORD *)this + 2);
  v3 = *((_DWORD *)this + 3);
  if ( v2 < v3 )
  {
    if ( v2 >= 0 )
    {
      *((_WORD *)this + 10) = 1;
      *((_DWORD *)this + 4) = v2;
    }
    else
    {
      *((_WORD *)this + 10) = 0;
      *((_DWORD *)this + 4) = 0;
    }
  }
  else
  {
    *((_WORD *)this + 10) = 256;
    *((_DWORD *)this + 4) = v3;
  }
}
