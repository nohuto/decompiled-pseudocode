/*
 * XREFs of ?SetIntegerProperty@CKeyframeAnimationMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D6B30
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimationPlaybackState@@@Z @ 0x1C00D6DFC (-UpdatePlaybackState@CKeyframeAnimationMarshaler@DirectComposition@@IEAAJW4Enum@KeyframeAnimatio.c)
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D71C0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CKeyframeAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CKeyframeAnimationMarshaler *this,
        unsigned int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int updated; // ecx
  __int64 v7; // rdx

  updated = 0;
  *a4 = 0;
  switch ( a2 )
  {
    case 0u:
      if ( *((_DWORD *)this + 12) == (_DWORD)a3 )
        return updated;
      *((_DWORD *)this + 12) = a3;
      goto LABEL_29;
    case 7u:
      if ( *((_DWORD *)this + 26) == a3 )
        return updated;
      *((_DWORD *)this + 26) = a3;
      goto LABEL_29;
    case 9u:
      if ( *((_QWORD *)this + 11) == a3 )
        return updated;
      *((_QWORD *)this + 11) = a3;
      goto LABEL_29;
    case 0xAu:
      if ( *((_QWORD *)this + 12) == a3 )
        return updated;
      *((_QWORD *)this + 12) = a3;
      goto LABEL_29;
    case 0xDu:
      if ( *((_DWORD *)this + 33) == a3 )
        return updated;
      *((_DWORD *)this + 33) = a3;
      goto LABEL_29;
    case 0xEu:
      if ( *((_DWORD *)this + 36) == (_DWORD)a3 )
        return updated;
      *((_DWORD *)this + 36) = a3;
LABEL_29:
      *((_DWORD *)this + 4) &= ~0x400u;
      *a4 = 1;
      return updated;
    case 0xFu:
      if ( *((_DWORD *)this + 35) == (_DWORD)a3 )
        return updated;
      v7 = (unsigned int)a3;
      goto LABEL_15;
    case 0x10u:
      if ( *((_DWORD *)this + 34) == (_DWORD)a3 )
        return updated;
      *((_DWORD *)this + 34) = a3;
      if ( !*((_DWORD *)this + 35) )
      {
LABEL_16:
        *((_DWORD *)this + 4) &= ~0x800u;
        *a4 = 1;
        return updated;
      }
      v7 = 0LL;
LABEL_15:
      updated = DirectComposition::CKeyframeAnimationMarshaler::UpdatePlaybackState(this, v7);
      if ( (updated & 0x80000000) != 0 )
        return updated;
      goto LABEL_16;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4);
}
