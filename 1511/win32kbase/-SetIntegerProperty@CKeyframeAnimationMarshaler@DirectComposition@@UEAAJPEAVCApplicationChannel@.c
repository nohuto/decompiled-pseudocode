/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D8AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C00D8DAC (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D9160 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int updated; // ecx
  __int64 v7; // rdx

  updated = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 0u:
      if ( *((_DWORD *)this + 12) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 12) = a4;
LABEL_32:
      *((_DWORD *)this + 4) &= ~0x400u;
      goto LABEL_33;
    case 8u:
      if ( *((_DWORD *)this + 26) == a4 )
        return updated;
      *((_DWORD *)this + 26) = a4;
      goto LABEL_32;
    case 0xAu:
      if ( *((_QWORD *)this + 11) == a4 )
        return updated;
      *((_QWORD *)this + 11) = a4;
      goto LABEL_32;
    case 0xBu:
      if ( *((_QWORD *)this + 12) == a4 )
        return updated;
      *((_QWORD *)this + 12) = a4;
      goto LABEL_32;
    case 0xEu:
      if ( *((_DWORD *)this + 33) == a4 )
        return updated;
      *((_DWORD *)this + 33) = a4;
      goto LABEL_32;
    case 0xFu:
      if ( *((_DWORD *)this + 36) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 36) = a4;
      goto LABEL_32;
    case 0x10u:
      if ( *((_DWORD *)this + 35) == (_DWORD)a4 )
        return updated;
      v7 = (unsigned int)a4;
      goto LABEL_16;
    case 0x11u:
      if ( *((_DWORD *)this + 34) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 34) = a4;
      if ( !*((_DWORD *)this + 35) )
        goto LABEL_17;
      v7 = 0LL;
LABEL_16:
      updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(this, v7);
      if ( (updated & 0x80000000) != 0 )
        return updated;
LABEL_17:
      *((_DWORD *)this + 4) &= ~0x800u;
LABEL_33:
      *a5 = 1;
      return updated;
    case 0x12u:
      if ( *((_DWORD *)this + 37) == (_DWORD)a4 )
        return updated;
      *((_DWORD *)this + 37) = a4;
      goto LABEL_32;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
