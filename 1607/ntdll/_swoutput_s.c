/*
 * XREFs of _swoutput_s @ 0x1800A4098
 * Callers:
 *     _vsnwprintf_s @ 0x1800A1440 (_vsnwprintf_s.c)
 *     vswprintf_s @ 0x1800A2370 (vswprintf_s.c)
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     _woutput_s @ 0x1800A41B0 (_woutput_s.c)
 *     _flsbuf @ 0x1800A5A68 (_flsbuf.c)
 */

__int64 __fastcall swoutput_s(char *a1, unsigned __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  char *ptr; // rax
  FILE File; // [rsp+30h] [rbp-30h] BYREF

  if ( !a2 )
    goto LABEL_2;
  if ( a2 == -1LL )
  {
    File._cnt = 0x7FFFFFFF;
  }
  else
  {
    if ( a2 > 0x3FFFFFFF )
    {
LABEL_2:
      invalid_parameter();
      return 0xFFFFFFFFLL;
    }
    File._cnt = 2 * a2;
  }
  File._base = a1;
  File._ptr = a1;
  File._flag = 66;
  result = woutput_s(&File, a3, a4);
  *(_WORD *)&a1[2 * a2 - 2] = 0;
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( --File._cnt < 0 )
    {
      if ( flsbuf(0, &File) == -1 )
        return 4294967294LL;
      ptr = File._ptr;
    }
    else
    {
      *File._ptr = 0;
      ptr = ++File._ptr;
    }
    if ( --File._cnt < 0 )
    {
      if ( flsbuf(0, &File) == -1 )
        return 4294967294LL;
    }
    else
    {
      *ptr = 0;
    }
    return v7;
  }
  if ( File._cnt < 0 )
    return 4294967294LL;
  if ( a1 )
  {
    if ( a2 )
      *(_WORD *)a1 = 0;
  }
  return result;
}
