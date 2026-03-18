/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C01064D0
 * Callers:
 *     ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C01063E4 (-MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C01066B8 (xxxMNOpenHierarchy.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C0215C20 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     SubtractRect @ 0x1C008B93C (SubtractRect.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C00918C4 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

void __fastcall MNGetPopupBoundsRect(struct tagPOPUPMENU *a1, const struct tagRECT *a2, struct tagRECT *a3, int a4)
{
  __int64 v8; // rdx
  int v9; // r8d
  const struct tagRECT *v10; // r8
  int v11; // r8d
  LONG *p_bottom; // rax
  struct tagMONITOR *v13; // rax
  BOOL v14; // eax
  int v15; // r9d
  BOOL v16; // eax
  LONG *v17; // rcx
  LONG *v18; // rdx
  struct tagMONITOR *v19; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v20; // [rsp+28h] [rbp-28h] BYREF
  __int128 v21; // [rsp+38h] [rbp-18h] BYREF

  if ( *(int *)a1 >= 0 )
  {
    v8 = *((_QWORD *)a1 + 2);
LABEL_3:
    v9 = *(_DWORD *)(v8 + 344);
    if ( v9 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
    {
      if ( v9 != 1
        || (v10 = (const struct tagRECT *)((char *)a2 + 60),
            (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
      {
        v10 = (const struct tagRECT *)((char *)a2 + 28);
      }
    }
    else
    {
      v10 = (const struct tagRECT *)((char *)a2 + 44);
    }
    goto LABEL_6;
  }
  v14 = IsRectEmptyInl(a2 + 32);
  v8 = *((_QWORD *)a1 + 2);
  if ( v14 )
    goto LABEL_3;
  v15 = *(_DWORD *)(v8 + 344);
  if ( v15 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v15 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
      v10 = a2 + 34;
  }
  else
  {
    v10 = a2 + 33;
  }
LABEL_6:
  v20 = *v10;
  v11 = *(_DWORD *)(v8 + 344);
  if ( v11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v11 != 1
      || (p_bottom = &a2[3].bottom,
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      p_bottom = &a2[1].bottom;
    }
  }
  else
  {
    p_bottom = &a2[2].bottom;
  }
  v21 = *(_OWORD *)p_bottom;
  if ( *(_DWORD *)(v8 + 344) != 2 )
  {
    v13 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v8 + 352));
    v19 = v13;
    if ( v13 )
    {
      if ( v13 != (struct tagMONITOR *)a2 )
      {
        if ( *(int *)a1 >= 0 || (v16 = IsRectEmptyInl(a2 + 32), v18 = v17, v16) )
          v18 = &a2[1].bottom;
        PhysicalToLogicalDPIRect(&v20, v18, 0LL, &v19);
        if ( !a4 )
          goto LABEL_13;
        PhysicalToLogicalDPIRect(&v21, &a2[1].bottom, 0LL, &v19);
      }
    }
  }
  if ( !a4 )
  {
LABEL_13:
    *a3 = v20;
    return;
  }
  SubtractRect((__int64)a3, (__int64)&v21, (__int64)&v20);
}
