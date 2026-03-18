/*
 * XREFs of ?ProcessUpdatePlaybackState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE@@@Z @ 0x18011150C
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessUpdatePlaybackState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_UPDATEPLAYBACKSTATE *a3)
{
  unsigned int v3; // ebx
  unsigned int v4; // eax
  bool v5; // zf
  unsigned int v7; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( !*((_QWORD *)this + 27) )
  {
    v7 = 421;
LABEL_5:
    v3 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, v7);
    return v3;
  }
  v4 = *((_DWORD *)a3 + 2);
  if ( v4 > 2 )
  {
    v7 = 428;
    goto LABEL_5;
  }
  *((_DWORD *)this + 64) = v4;
  if ( !*((_DWORD *)this + 63) && v4 )
  {
    if ( *((_DWORD *)a3 + 5) )
      *((_QWORD *)this + 28) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    else
      *((_QWORD *)this + 28) = *(_QWORD *)((char *)a3 + 12);
    v5 = *((_DWORD *)this + 64) == 1;
    *((_QWORD *)this + 29) = *((_QWORD *)this + 28);
    if ( v5 )
    {
      ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
      *((_BYTE *)this + 260) |= 1u;
    }
  }
  return v3;
}
