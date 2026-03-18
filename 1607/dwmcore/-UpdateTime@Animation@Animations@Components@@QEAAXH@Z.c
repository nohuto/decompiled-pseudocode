/*
 * XREFs of ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801135A4
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x1800191B8 (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 *     ?UpdateTime@Sequence@Animations@Components@@QEAAXH@Z @ 0x1800191F0 (-UpdateTime@Sequence@Animations@Components@@QEAAXH@Z.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x18002D3CC (-Round@Math@Animations@Components@@SAHM@Z.c)
 */

void __fastcall Components::Animations::Animation::UpdateTime(Components::Animations::Sequence **this, int a2)
{
  float TimeLength; // xmm0_4
  __int64 v4; // r9
  int v5; // eax
  __int64 v6; // r9
  int v7; // eax
  int v8; // ecx
  int v9; // ecx

  if ( ((_BYTE)this[13] & 2) != 0 )
  {
    if ( *((_DWORD *)this + 10) == 2 )
    {
      TimeLength = Components::Animations::Animation::GetTimeLength((Components::Animations::Animation *)this);
      v5 = Components::Animations::Math::Round((float)(TimeLength * *(float *)(v4 + 60)) * 1000.0);
      Components::Animations::Sequence::ResetTime(*(Components::Animations::Sequence **)(v6 + 16), v5, 0);
    }
    else
    {
      v7 = *((_DWORD *)this + 9);
      v8 = *((_DWORD *)this + 8);
      if ( v7 < v8 )
      {
        v9 = v8 - v7;
        if ( a2 < v9 )
          v9 = a2;
        *((_DWORD *)this + 9) = v9 + v7;
        a2 -= v9;
      }
      Components::Animations::Sequence::UpdateTime(this[2], a2);
    }
  }
}
