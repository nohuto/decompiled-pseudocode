/*
 * XREFs of SizeBoxHwnd @ 0x140258834
 * Callers:
 *     ?xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHUtagRECT@@KW4tagTARGETING_PROPERTY@@@Z @ 0x140088A18 (-xxxTargetingHitTest@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@1PEAUtagPNTRWINDOWHITTTESTARGS@@PEAHU.c)
 *     FindNCHit @ 0x14008AB60 (FindNCHit.c)
 *     ?xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z @ 0x14008B280 (-xxxWindowHitTest2@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAHW4WindowHitTestOption@@@Z.c)
 *     ?xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_ARGS@@@Z @ 0x14008E350 (-xxxDCEWindowHitTestIndirect@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@_NPEAUtagDCE_WINDOW_HIT_TEST_.c)
 *     DrawSize @ 0x140258578 (DrawSize.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SizeBoxHwnd(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // r9
  int v3; // r11d
  int v4; // r10d
  int v5; // ebx
  __int64 v6; // rdx
  char v7; // cl
  int v8; // r8d

  v1 = *(_QWORD *)(a1 + 40);
  v2 = a1;
  v3 = *(_DWORD *)(v1 + 100);
  v4 = *(_BYTE *)(v1 + 26) & 0x40;
  v5 = *(_DWORD *)((-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + v1 + 96);
  while ( 1 )
  {
    v6 = *(_QWORD *)(v2 + 40);
    if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0x29D )
      return 0LL;
    v7 = *(_BYTE *)(v6 + 31);
    if ( (*(_BYTE *)(v6 + 30) & 4) != 0 )
      break;
    if ( (v7 & 0x40) == 0 || (*(_BYTE *)(v6 + 16) & 8) != 0 )
      return 0LL;
    v2 = *(_QWORD *)(v2 + 104);
  }
  if ( (v7 & 1) != 0 )
    return 0LL;
  v8 = *(_DWORD *)((-(__int64)(v4 != 0) & 0xFFFFFFFFFFFFFFF8uLL) + v6 + 112);
  if ( v4 )
  {
    if ( v5 - 2 > v8 )
      return 0LL;
  }
  else if ( v5 + 2 < v8 )
  {
    return 0LL;
  }
  if ( v3 + 2 < *(_DWORD *)(v6 + 116) )
    return 0LL;
  return v2;
}
