/*
 * XREFs of ?ProcessSetSeekState@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETSEEKSTATE@@@Z @ 0x1800196A4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetSeekState(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_KEYFRAMEANIMATION_SETSEEKSTATE *a3)
{
  unsigned int v3; // ebx
  __int64 v5; // rcx

  v3 = 0;
  if ( *((_QWORD *)this + 48) )
  {
    if ( *((_DWORD *)a3 + 6) )
      *((_QWORD *)this + 53) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    else
      *((_QWORD *)this + 53) = *((_QWORD *)a3 + 1);
    v5 = *((_QWORD *)a3 + 2);
    *((_BYTE *)this + 452) |= 2u;
    *((_QWORD *)this + 54) = v5;
    *(_BYTE *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 384LL) |= 2u;
  }
  else
  {
    v3 = -2003303421;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003303421, 0x2EFu);
  }
  return v3;
}
