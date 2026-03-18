/*
 * XREFs of ?SetIntegerProperty@CAnimationMarshaler@DirectComposition@@UEAAJI_JPEA_N@Z @ 0x1C002C5A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CAnimationMarshaler::SetIntegerProperty(
        DirectComposition::CAnimationMarshaler *this,
        int a2,
        unsigned __int64 a3,
        bool *a4)
{
  __int64 result; // rax
  int v5; // edx
  int v6; // edx
  int v7; // edx
  char v8; // dl

  result = 0LL;
  *a4 = 0;
  v5 = a2 - 1;
  if ( v5 )
  {
    v6 = v5 - 1;
    if ( v6 )
    {
      v7 = v6 - 7;
      if ( v7 )
      {
        if ( v7 == 2 )
        {
          v8 = *((_BYTE *)this + 192);
          if ( (v8 & 2) == 0 )
          {
            if ( a3 )
            {
              *((_BYTE *)this + 192) = v8 | 2;
LABEL_11:
              *a4 = 1;
              return result;
            }
          }
        }
      }
      else if ( a3 <= 2 )
      {
        *((_DWORD *)this + 37) = a3;
        goto LABEL_11;
      }
      return 3221225485LL;
    }
    if ( *((_QWORD *)this + 11) == a3 )
      return result;
    *((_QWORD *)this + 11) = a3;
LABEL_10:
    *((_DWORD *)this + 4) &= ~0x80u;
    goto LABEL_11;
  }
  if ( *((_QWORD *)this + 10) != a3 )
  {
    *((_QWORD *)this + 10) = a3;
    goto LABEL_10;
  }
  return result;
}
