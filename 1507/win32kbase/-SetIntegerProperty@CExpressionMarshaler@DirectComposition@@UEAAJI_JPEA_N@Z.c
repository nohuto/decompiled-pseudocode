/*
 * XREFs of ?SetIntegerProperty@CExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00DA190
 * Callers:
 *     <none>
 * Callees:
 *     ?SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D71C0 (-SetIntegerProperty@CBaseExpressionMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z.c)
 */

__int64 __fastcall DirectComposition::CExpressionMarshaler::SetIntegerProperty(
        DirectComposition::CExpressionMarshaler *this,
        int a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v4; // r10d

  v4 = 0;
  *a4 = 0;
  switch ( a2 )
  {
    case 0:
      if ( *((_DWORD *)this + 12) == (_DWORD)a3 )
        return v4;
      *((_DWORD *)this + 12) = a3;
      goto LABEL_26;
    case 8:
      if ( *((_QWORD *)this + 11) == a3 )
        return v4;
      *((_QWORD *)this + 11) = a3;
      goto LABEL_26;
    case 9:
      if ( *((_QWORD *)this + 12) == a3 )
        return v4;
      *((_QWORD *)this + 12) = a3;
      goto LABEL_26;
    case 10:
      if ( *((_DWORD *)this + 26) == a3 )
        return v4;
      *((_DWORD *)this + 26) = a3;
      goto LABEL_26;
    case 12:
      if ( *((_QWORD *)this + 15) == a3 )
        return v4;
      *((_QWORD *)this + 15) = a3;
      goto LABEL_26;
    case 13:
      if ( *((_QWORD *)this + 16) == a3 )
        return v4;
      *((_QWORD *)this + 16) = a3;
      goto LABEL_26;
    case 14:
      if ( *((_DWORD *)this + 34) == a3 )
        return v4;
      *((_DWORD *)this + 34) = a3;
      goto LABEL_26;
    case 15:
      if ( *((_DWORD *)this + 35) == a3 )
        return v4;
      *((_DWORD *)this + 35) = a3;
LABEL_26:
      *((_DWORD *)this + 4) &= ~0x400u;
      *a4 = 1;
      return v4;
  }
  return (unsigned int)DirectComposition::CBaseExpressionMarshaler::SetIntegerProperty(this, a2, a3, a4);
}
