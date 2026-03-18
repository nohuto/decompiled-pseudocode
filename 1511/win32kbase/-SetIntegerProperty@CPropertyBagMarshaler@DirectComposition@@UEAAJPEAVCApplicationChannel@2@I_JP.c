/*
 * XREFs of ?SetIntegerProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x1C00D9C00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::SetIntegerProperty(
        DirectComposition::CPropertyBagMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        int a3,
        unsigned __int64 a4,
        bool *a5)
{
  __int64 result; // rax
  int v6; // r8d
  unsigned __int64 v7; // rdx

  result = 0LL;
  *a5 = 0;
  v6 = a3 - 3;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      if ( *((_DWORD *)this + 10) == (_DWORD)a4 )
        return result;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_DWORD *)this + 10) = a4;
LABEL_9:
      *a5 = 1;
      return result;
    }
  }
  else if ( a4 >= 0x10 )
  {
    v7 = *((_QWORD *)this + 7);
    if ( a4 >= v7 )
    {
      if ( v7 == a4 )
        return result;
      *((_QWORD *)this + 8) = v7;
      *((_QWORD *)this + 7) = a4;
      goto LABEL_9;
    }
  }
  return 3221225485LL;
}
