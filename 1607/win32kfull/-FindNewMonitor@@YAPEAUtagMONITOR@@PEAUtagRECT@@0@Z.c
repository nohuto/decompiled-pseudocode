/*
 * XREFs of ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01CD3A4
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 *     ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918 (-NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z.c)
 * Callees:
 *     <none>
 */

struct tagMONITOR *__fastcall FindNewMonitor(struct tagRECT *a1, struct tagRECT *a2)
{
  _QWORD *i; // r9
  __int64 v4; // r8
  __int64 v5; // rcx

  for ( i = *(_QWORD **)(gpDispInfo + 96LL); ; i = (_QWORD *)i[2] )
  {
    if ( !i )
      return 0LL;
    v4 = *(_QWORD *)&a1->left - *(_QWORD *)((char *)i + 28);
    if ( *(_QWORD *)&a1->left == *(_QWORD *)((char *)i + 28) )
      v4 = *(_QWORD *)&a1->right - *(_QWORD *)((char *)i + 36);
    if ( !v4 )
    {
      v5 = *(_QWORD *)&a2->left - *(_QWORD *)((char *)i + 76);
      if ( *(_QWORD *)&a2->left == *(_QWORD *)((char *)i + 76) )
        v5 = *(_QWORD *)&a2->right - *(_QWORD *)((char *)i + 84);
      if ( !v5 )
        break;
    }
  }
  return (struct tagMONITOR *)i;
}
