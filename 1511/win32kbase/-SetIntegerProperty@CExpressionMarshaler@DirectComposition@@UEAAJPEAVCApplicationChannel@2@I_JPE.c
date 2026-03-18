/*
 * XREFs of ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00DC6B0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D9160 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CExpressionMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        __int64 a4,
        bool *a5)
{
  unsigned int v5; // r11d

  v5 = 0;
  *a5 = 0;
  switch ( a3 )
  {
    case 0:
      if ( *((_DWORD *)this + 12) == (_DWORD)a4 )
        return v5;
      *((_DWORD *)this + 12) = a4;
      goto LABEL_26;
    case 9:
      if ( *((_QWORD *)this + 11) == a4 )
        return v5;
      *((_QWORD *)this + 11) = a4;
      goto LABEL_26;
    case 10:
      if ( *((_QWORD *)this + 12) == a4 )
        return v5;
      *((_QWORD *)this + 12) = a4;
      goto LABEL_26;
    case 11:
      if ( *((_DWORD *)this + 26) == a4 )
        return v5;
      *((_DWORD *)this + 26) = a4;
      goto LABEL_26;
    case 13:
      if ( *((_QWORD *)this + 15) == a4 )
        return v5;
      *((_QWORD *)this + 15) = a4;
      goto LABEL_26;
    case 14:
      if ( *((_QWORD *)this + 16) == a4 )
        return v5;
      *((_QWORD *)this + 16) = a4;
      goto LABEL_26;
    case 15:
      if ( *((_DWORD *)this + 34) == a4 )
        return v5;
      *((_DWORD *)this + 34) = a4;
      goto LABEL_26;
    case 16:
      if ( *((_DWORD *)this + 35) == a4 )
        return v5;
      *((_DWORD *)this + 35) = a4;
LABEL_26:
      *((_DWORD *)this + 4) &= ~0x400u;
      *a5 = 1;
      return v5;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4, a5);
}
