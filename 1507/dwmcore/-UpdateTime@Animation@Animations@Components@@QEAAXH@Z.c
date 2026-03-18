/*
 * XREFs of ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801557A4
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 * Callees:
 *     ?Update@Timer@Animations@Components@@QEAAXH@Z @ 0x1801571D8 (-Update@Timer@Animations@Components@@QEAAXH@Z.c)
 */

void __fastcall Components::Animations::Animation::UpdateTime(Components::Animations::Animation *this, int a2)
{
  char v2; // al
  int v4; // eax
  int v5; // edx
  int v6; // edx
  __int64 v7; // rcx

  v2 = *((_BYTE *)this + 252);
  if ( (v2 & 2) != 0 )
  {
    if ( (v2 & 0x20) == 0 )
    {
      a2 = 0;
      *((_BYTE *)this + 252) = v2 | 0x20;
    }
    v4 = *((_DWORD *)this + 53);
    v5 = *((_DWORD *)this + 52);
    if ( v4 < v5 )
    {
      v6 = v5 - v4;
      if ( a2 < v6 )
        v6 = a2;
      *((_DWORD *)this + 53) = v6 + v4;
      a2 -= v6;
    }
    v7 = *((_QWORD *)this + 3);
    if ( (*(_BYTE *)(v7 + 244) & 2) != 0 )
      Components::Animations::Timer::Update(*(Components::Animations::Timer **)(v7 + 224), a2);
  }
}
