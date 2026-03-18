/*
 * XREFs of ?ConfigureTimer@Sequence@Animations@Components@@QEAAXXZ @ 0x180085D0C
 * Callers:
 *     ?Repeat@Sequence@Animations@Components@@QEAAXXZ @ 0x180019218 (-Repeat@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x1800192AC (-ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z.c)
 *     ?Play@Sequence@Animations@Components@@QEAAXXZ @ 0x180085E78 (-Play@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?Update@Timer@Animations@Components@@QEAAXH_N@Z @ 0x1800192E8 (-Update@Timer@Animations@Components@@QEAAXH_N@Z.c)
 */

void __fastcall Components::Animations::Sequence::ConfigureTimer(int **this)
{
  int v1; // edx
  Components::Animations::Sequence *v2; // r9
  int v3; // eax
  int v4; // r8d
  float v5; // xmm1_4
  char *v6; // rcx
  float v7; // xmm1_4

  v1 = *((_DWORD *)this + 61);
  v2 = (Components::Animations::Sequence *)this;
  v3 = 0;
  v4 = v1;
  if ( *((int *)this + 2) > 0 )
    v3 = **this;
  v5 = *((float *)this + 65);
  if ( v5 < 1.0 )
    v4 = (int)(float)((float)v1 * v5);
  v6 = (char *)(this + 26);
  *((_DWORD *)v6 + 1) = v3;
  *((_DWORD *)v6 + 2) = v4;
  *((_DWORD *)v6 + 3) = v1;
  *(_DWORD *)v6 = 0;
  *((_DWORD *)v6 + 4) = 0;
  *((_WORD *)v6 + 10) = 0;
  v7 = *((float *)v2 + 64);
  if ( v7 > 0.0 )
    Components::Animations::Timer::Update(
      (Components::Animations::Timer *)v6,
      (int)(float)(fminf(v7, *((float *)v2 + 65)) * (float)*((int *)v2 + 61)),
      0);
  *((_BYTE *)v2 + 264) |= 0x10u;
}
