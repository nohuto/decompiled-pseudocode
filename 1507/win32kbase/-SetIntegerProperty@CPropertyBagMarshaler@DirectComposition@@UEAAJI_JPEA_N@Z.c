/*
 * XREFs of ?SetIntegerProperty@CPropertyBagMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C00D7A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CPropertyBagMarshaler::SetIntegerProperty(
        DirectComposition::CPropertyBagMarshaler *this,
        int a2,
        unsigned __int64 a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  unsigned __int64 v6; // rdx

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 3;
  if ( v5 )
  {
    if ( v5 == 1 )
    {
      if ( *((_DWORD *)this + 10) == (_DWORD)a3 )
        return result;
      *((_DWORD *)this + 4) |= 0x80u;
      *((_DWORD *)this + 10) = a3;
LABEL_9:
      *a4 = 1;
      return result;
    }
  }
  else if ( a3 >= 0x10 )
  {
    v6 = *((_QWORD *)this + 7);
    if ( a3 >= v6 )
    {
      if ( v6 == a3 )
        return result;
      *((_QWORD *)this + 8) = v6;
      *((_QWORD *)this + 7) = a3;
      goto LABEL_9;
    }
  }
  return 3221225485LL;
}
