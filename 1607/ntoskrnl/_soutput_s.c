/*
 * XREFs of _soutput_s @ 0x140154224
 * Callers:
 *     _vsnprintf_s @ 0x140152670 (_vsnprintf_s.c)
 *     vsprintf_s @ 0x1401530CC (vsprintf_s.c)
 * Callees:
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     _output_s @ 0x1401538E4 (_output_s.c)
 *     _flsbuf @ 0x1401569B8 (_flsbuf.c)
 */

__int64 __fastcall soutput_s(char *a1, unsigned __int64 a2, char *a3, int *a4)
{
  __int64 result; // rax
  unsigned int v7; // esi
  FILE File; // [rsp+30h] [rbp-38h] BYREF

  if ( !a2 )
    goto LABEL_2;
  if ( a2 == -1LL )
  {
    File._cnt = 0x7FFFFFFF;
  }
  else
  {
    if ( a2 > 0x7FFFFFFF )
    {
LABEL_2:
      xHalFreeMessageTarget();
      return 0xFFFFFFFFLL;
    }
    File._cnt = a2;
  }
  File._base = a1;
  File._ptr = a1;
  File._flag = 66;
  result = output_s(&File, a3, a4);
  a1[a2 - 1] = 0;
  v7 = result;
  if ( (int)result >= 0 )
  {
    if ( --File._cnt < 0 )
    {
      if ( flsbuf(0, &File) == -1 )
        return 4294967294LL;
    }
    else
    {
      *File._ptr = 0;
    }
    return v7;
  }
  if ( File._cnt < 0 )
    return 4294967294LL;
  if ( a1 )
  {
    if ( a2 )
      *a1 = 0;
  }
  return result;
}
