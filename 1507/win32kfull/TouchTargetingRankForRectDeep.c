/*
 * XREFs of TouchTargetingRankForRectDeep @ 0x1C024C428
 * Callers:
 *     ?TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagRECT@@PEAGPEAU2@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022BADC (-TouchTargetingLayerHitTest@@YAHPEAUtagWND@@UtagPOINT@@HPEBUtagTOUCHTARGETINGCONTACT@@PEAUtagREC.c)
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x1C022C4C8 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUt.c)
 * Callees:
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     IntersectRect @ 0x1C008E444 (IntersectRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     TouchTargetingRank @ 0x1C024BEF0 (TouchTargetingRank.c)
 *     TouchTargetingSnapToSegment @ 0x1C024C6E0 (TouchTargetingSnapToSegment.c)
 *     _TTIntersectLine @ 0x1C024C9C0 (_TTIntersectLine.c)
 *     _TTLimitDeepTargetingPoint @ 0x1C024CC94 (_TTLimitDeepTargetingPoint.c)
 */

__int64 __fastcall TouchTargetingRankForRectDeep(__int128 *a1, unsigned int *a2, int *a3, _DWORD *a4, int a5)
{
  bool v5; // zf
  unsigned __int16 v9; // r12
  unsigned int v10; // esi
  unsigned int v11; // ebx
  __int64 v12; // rbx
  __int64 v13; // rcx
  unsigned __int16 v14; // ax
  int v15; // ebx
  __int64 v17; // [rsp+30h] [rbp-40h]
  __int128 v18; // [rsp+40h] [rbp-30h] BYREF
  unsigned __int64 v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+58h] [rbp-18h] BYREF
  __int64 v21; // [rsp+60h] [rbp-10h] BYREF

  v5 = a2[45] == 0;
  v18 = *a1;
  v9 = 4094;
  if ( !v5
    && (!a3 || (unsigned int)IntersectRect(&v18, (int *)&v18, a3))
    && (_DWORD)v18 != DWORD2(v18)
    && DWORD1(v18) != HIDWORD(v18)
    && (unsigned int)TTIntersectLine(*((_QWORD *)a2 + 4), a2[8] + *a4, (_DWORD)a2, (unsigned int)&v21, (__int64)&v20) )
  {
    if ( !a5 )
    {
      v10 = a2[46];
      TTLimitDeepTargetingPoint(a2[8], v10, &v21);
      v11 = a2[47];
      TTLimitDeepTargetingPoint(a2[9], v11, (char *)&v21 + 4);
      TTLimitDeepTargetingPoint(a2[8], v10, &v20);
      TTLimitDeepTargetingPoint(a2[9], v11, (char *)&v20 + 4);
    }
    LODWORD(v17) = (*(_DWORD *)a1 + *((_DWORD *)a1 + 2)) / 2;
    HIDWORD(v17) = (*((_DWORD *)a1 + 1) + *((_DWORD *)a1 + 3)) / 2;
    TouchTargetingSnapToSegment(v21, v20, v17, &v19);
    v12 = v19;
    if ( PtInRect(&v18, v19) )
    {
      v13 = *((_QWORD *)a2 + 4);
      v18 = *a1;
      v14 = TouchTargetingRank(v13, v12, &v18, v17);
      v15 = v12 - a2[8];
      v9 = v14;
      a4[1] = HIDWORD(v19) - a2[9];
      *a4 = v15;
    }
  }
  return v9;
}
