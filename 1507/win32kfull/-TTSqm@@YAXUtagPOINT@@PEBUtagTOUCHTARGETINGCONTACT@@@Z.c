/*
 * XREFs of ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022B390
 * Callers:
 *     xxxPointerWindowHitTest @ 0x1C022DAC8 (xxxPointerWindowHitTest.c)
 * Callees:
 *     _TTPixelsToHm @ 0x1C024CCE8 (_TTPixelsToHm.c)
 */

void __fastcall TTSqm(struct tagPOINT a1, const struct tagTOUCHTARGETINGCONTACT *a2)
{
  unsigned int v2; // ebx
  int v4; // edi
  __int64 v5; // r8
  int v6; // eax
  int v7; // r10d
  __int64 v8; // r8

  v2 = 0;
  if ( gSqmIsOptedIn )
  {
    if ( a1 )
    {
      v4 = 1;
      v5 = 1000LL;
    }
    else
    {
      v4 = 0;
      v5 = 0LL;
    }
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8657LL, v5);
    if ( v4 )
    {
      TTPixelsToHm(abs32(a1.y), *((unsigned int *)a2 + 47));
      v6 = TTPixelsToHm(abs32(a1.x), *((unsigned int *)a2 + 46));
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8293LL, (unsigned int)(v6 + v7));
      v8 = 0LL;
      if ( a1.x > 0 )
        v8 = 1000LL;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8294LL, v8);
      if ( a1.y > 0 )
        v2 = 1000;
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8634LL, v2);
    }
  }
}
