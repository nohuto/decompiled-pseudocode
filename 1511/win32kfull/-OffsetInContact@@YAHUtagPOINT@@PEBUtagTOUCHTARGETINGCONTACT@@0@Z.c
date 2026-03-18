/*
 * XREFs of ?OffsetInContact@@YAHUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@0@Z @ 0x1C022B160
 * Callers:
 *     ?xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHW4tagTARGETING_PROPERTY@@UtagRECT@@@Z @ 0x1C022CF48 (-xxxWindowHitTestFromTargetingProperty@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHI.c)
 * Callees:
 *     TouchTargetingIntersectSegment @ 0x1C024BCBC (TouchTargetingIntersectSegment.c)
 */

__int64 __fastcall OffsetInContact(struct tagPOINT a1, const struct tagTOUCHTARGETINGCONTACT *a2, struct tagPOINT a3)
{
  unsigned int v3; // ebx
  int v5; // esi
  int v6; // edi
  _DWORD v7[2]; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v8[4]; // [rsp+38h] [rbp-10h] BYREF

  v3 = 0;
  if ( a3 )
  {
    v5 = a1.x + a3.x;
    v6 = a3.y + a1.y;
    if ( (unsigned int)TouchTargetingIntersectSegment(a1.x, a1.x + a3.x, (_DWORD)a2, (unsigned int)v7, (__int64)v8)
      && (v7[0] == v5 && v7[1] == v6 || v8[0] == v5 && v8[1] == v6) )
    {
      return 1;
    }
    return v3;
  }
  else
  {
    return *((unsigned int *)a2 + 44);
  }
}
