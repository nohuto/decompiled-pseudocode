/*
 * XREFs of ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x180019114
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x1800191B8 (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 *     ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x1800192AC (-ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x18002D3CC (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x1800865D0 (-PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSeek(Components::Animations::Animation *this, float a2)
{
  char v2; // al
  unsigned int v3; // ebx
  unsigned int *v4; // r11
  float TimeLength; // xmm0_4
  int v6; // ecx
  float v7; // xmm2_4
  int v8; // edx
  unsigned int v9; // eax
  __int64 v10; // r11

  if ( a2 < 0.0 )
  {
    return (unsigned int)-2147024809;
  }
  else
  {
    v2 = *((_BYTE *)this + 104);
    v3 = 0;
    if ( (v2 & 4) != 0 && (v2 & 0x10) == 0 )
    {
      TimeLength = Components::Animations::Animation::GetTimeLength(this);
      v6 = v4[12];
      v7 = TimeLength;
      v8 = (int)(float)(a2 / TimeLength);
      if ( v6 >= 0 && (v4[11] = v8, v4[13] = v6 - v8, v6 - v8 < 0) )
      {
        v4[13] = 0;
        v4[11] = v6;
      }
      else
      {
        v4[11] = v8;
        v7 = a2 - (float)((float)v8 * TimeLength);
      }
      Components::Animations::Animation::PrepareSequenceForIteration((Components::Animations::Animation *)v4, v4[11]);
      v9 = Components::Animations::Math::Round(v7 * 1000.0);
      Components::Animations::Sequence::ResetTime(*(Components::Animations::Sequence **)(v10 + 16), v9, 0);
    }
  }
  return v3;
}
