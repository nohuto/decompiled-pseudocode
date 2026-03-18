/*
 * XREFs of SdbpMatchList @ 0x1405737E8
 * Callers:
 *     SdbpCheckForMatch @ 0x140573228 (SdbpCheckForMatch.c)
 *     SdbpMatchOne @ 0x1406C3A50 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetNextChild @ 0x140504604 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1405049C4 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x14050589C (SdbGetFirstChild.c)
 *     SdbpFindMatcher @ 0x14057388C (SdbpFindMatcher.c)
 */

__int64 __fastcall SdbpMatchList(int *a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, int a6, int a7)
{
  unsigned int FirstChild; // ebx
  __int64 (__fastcall *Matcher)(int *, __int64, __int64, _QWORD, unsigned int, __int64, __int64); // r10
  int v13; // eax
  unsigned int v14; // ecx
  __int64 v16; // [rsp+40h] [rbp-28h] BYREF

  a7 = 1;
  FirstChild = SdbGetFirstChild(a3, a4);
  if ( FirstChild )
  {
    while ( 1 )
    {
      Matcher = (__int64 (__fastcall *)(int *, __int64, __int64, _QWORD, unsigned int, __int64, __int64))SdbpFindMatcher(&v16, a2, a3, FirstChild);
      if ( Matcher )
      {
        v14 = Matcher(&a7, a2, a3, a4, FirstChild, a5, v16);
        if ( !v14 )
          return v14;
        if ( (unsigned int)SdbFindFirstTag(a3, FirstChild, 4099) )
        {
          v13 = a7 == 0;
          a7 = v13;
        }
        else
        {
          v13 = a7;
        }
        if ( v13 == a6 )
          break;
      }
      FirstChild = SdbGetNextChild(a3, a4, FirstChild);
      if ( !FirstChild )
        goto LABEL_4;
    }
  }
  else
  {
LABEL_4:
    v13 = a7;
  }
  v14 = 1;
  *a1 = v13;
  return v14;
}
