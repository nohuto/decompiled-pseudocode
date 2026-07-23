/*
 * XREFs of RtlpValidateAsciiStd3AndLength @ 0x180056100
 * Callers:
 *     RtlpNameprepAsciiWorker @ 0x180055E74 (RtlpNameprepAsciiWorker.c)
 * Callees:
 *     ValidateStd3Range @ 0x180056DE0 (ValidateStd3Range.c)
 *     FindEmailAt @ 0x1800F04CC (FindEmailAt.c)
 */

char __fastcall RtlpValidateAsciiStd3AndLength(unsigned __int16 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int16 *v4; // rbx
  char v5; // bp
  char v6; // si
  unsigned __int16 v8; // r10
  unsigned __int16 *v9; // r11
  unsigned __int16 *v10; // r9
  unsigned __int16 *v11; // r8

  v4 = a1 - 1;
  v5 = a4;
  v6 = a3;
  v8 = 46;
  v9 = &a1[(int)a2];
  if ( (_BYTE)a3 )
    v10 = &a1[(int)FindEmailAt(a1, a2, a3, a4)];
  else
    v10 = a1 - 1;
  if ( v10 != v9 && (int)a2 > 0 )
  {
    v11 = a1;
    if ( a1 == v9 )
    {
LABEL_12:
      if ( v6
        || (__int64)(((char *)v9 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) <= 128
        && v9 - v10 <= (v8 == 46) + 255
        && (!v5 || v8 != 45) )
      {
        return 1;
      }
    }
    else
    {
      while ( 1 )
      {
        v8 = *v11;
        if ( *v11 >= 0x7Fu )
          break;
        if ( v8 == (v6 != 0 ? 64 : 46) )
        {
          if ( v6 )
          {
            if ( v11 == a1 )
              return 0;
            if ( v11 == v10 - 1 )
              v6 = 0;
          }
          else if ( v11 == v4 + 1
                 || (__int64)(((char *)v11 - (char *)v4) & 0xFFFFFFFFFFFFFFFEuLL) > 128
                 || v5 && v11 > a1 && *(v11 - 1) == 45 )
          {
            return 0;
          }
          v4 = v11;
        }
        else if ( v6 )
        {
          if ( !v8 )
            return 0;
        }
        else if ( v5 && (v8 == 45 && v11 == v4 + 1 || !(unsigned __int8)ValidateStd3Range(v8)) || v8 < 0x20u )
        {
          return 0;
        }
        if ( ++v11 == v9 )
          goto LABEL_12;
      }
    }
  }
  return 0;
}
