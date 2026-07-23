/*
 * XREFs of SdbpMatchList @ 0x140573D28
 * Callers:
 *     SdbpCheckForMatch @ 0x140573768 (SdbpCheckForMatch.c)
 *     SdbpMatchOne @ 0x1406C3B88 (SdbpMatchOne.c)
 * Callees:
 *     SdbGetNextChild @ 0x1404E7594 (SdbGetNextChild.c)
 *     SdbFindFirstTag @ 0x1404E7954 (SdbFindFirstTag.c)
 *     SdbGetFirstChild @ 0x1404E882C (SdbGetFirstChild.c)
 *     SdbpFindMatcher @ 0x140573DCC (SdbpFindMatcher.c)
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
