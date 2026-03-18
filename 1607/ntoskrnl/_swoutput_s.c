/*
 * XREFs of _swoutput_s @ 0x140153E4C
 * Callers:
 *     vswprintf_s @ 0x140151980 (vswprintf_s.c)
 *     _vsnwprintf_s @ 0x14015219C (_vsnwprintf_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     _flsbuf @ 0x14014FB84 (_flsbuf.c)
 *     _woutput_s @ 0x140153F60 (_woutput_s.c)
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
      xHalFreeMessageTarget();
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
