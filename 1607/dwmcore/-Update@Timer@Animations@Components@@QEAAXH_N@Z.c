/*
 * XREFs of ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800192E8
 * Callers:
 *     ?UpdateTime@Sequence@Animations@Components@@QEAAXH@Z @ 0x1800191F0 (-UpdateTime@Sequence@Animations@Components@@QEAAXH@Z.c)
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x180019218 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x1800192AC (-ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z.c)
 *     ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180085D0C (-ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall Components::Animations::Timer::Update(Components::Animations::Timer *this, int a2, char a3)
{
  int v3; // edx
  int v4; // eax

  *(_DWORD *)this += a2;
  v3 = *(_DWORD *)this - *((_DWORD *)this + 1);
  if ( v3 >= *((_DWORD *)this + 3) || *(_DWORD *)this >= *((_DWORD *)this + 2) )
  {
    *((_BYTE *)this + 21) = a3;
    *((_BYTE *)this + 20) = 0;
    v4 = *((_DWORD *)this + 2) - *((_DWORD *)this + 1);
    if ( *((_DWORD *)this + 3) < v4 )
      v4 = *((_DWORD *)this + 3);
  }
  else
  {
    v4 = 0;
    if ( v3 >= 0 )
    {
      *((_WORD *)this + 10) = 1;
      *((_DWORD *)this + 4) = v3;
      return;
    }
    *((_WORD *)this + 10) = 0;
  }
  *((_DWORD *)this + 4) = v4;
}
