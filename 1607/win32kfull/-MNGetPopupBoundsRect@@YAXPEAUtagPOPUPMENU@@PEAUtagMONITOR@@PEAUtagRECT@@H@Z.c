/*
 * XREFs of ?MNGetPopupBoundsRect@@YAXPEAUtagPOPUPMENU@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C0140258
 * Callers:
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z @ 0x1C013EE04 (-MNCheckScroll@@YAHPEAUtagPOPUPMENU@@PEAUtagMENU@@PEAUtagMONITOR@@@Z.c)
 *     xxxMNOpenHierarchy @ 0x1C0140574 (xxxMNOpenHierarchy.c)
 *     ?xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x1C020E760 (-xxxMNPositionHierarchy@@YAIPEAUtagPOPUPMENU@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z.c)
 * Callees:
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x1C0035534 (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     SubtractRect @ 0x1C0113BD0 (SubtractRect.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall MNGetPopupBoundsRect(struct tagPOPUPMENU *a1, const struct tagRECT *a2, struct tagRECT *a3, int a4)
{
  __int64 v8; // r8
  __int64 v9; // rax
  const struct tagRECT *v10; // rdx
  __int64 v11; // rax
  int v12; // ecx
  LONG *p_bottom; // rax
  struct tagMONITOR *v14; // rax
  BOOL v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  BOOL v20; // eax
  LONG *v21; // rcx
  LONG *v22; // rdx
  struct tagMONITOR *v23; // [rsp+20h] [rbp-30h] BYREF
  struct tagRECT v24; // [rsp+28h] [rbp-28h] BYREF
  __int128 v25; // [rsp+38h] [rbp-18h] BYREF

  if ( *(int *)a1 >= 0 )
  {
    v8 = *((_QWORD *)a1 + 2);
LABEL_3:
    if ( (*(_DWORD *)(v8 + 352) & 0xF) == 0
      && (v18 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 408LL)) != 0
      && (*(_DWORD *)(*(_QWORD *)(v18 + 8) + 244LL) & 1) != 0 )
    {
      v10 = (const struct tagRECT *)((char *)a2 + 44);
    }
    else if ( (*(_DWORD *)(v8 + 352) & 0xF) != 1
           || (v9 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 408LL)) == 0
           || (v10 = (const struct tagRECT *)((char *)a2 + 60), (*(_DWORD *)(*(_QWORD *)(v9 + 8) + 244LL) & 1) == 0) )
    {
      v10 = (const struct tagRECT *)((char *)a2 + 28);
    }
    goto LABEL_7;
  }
  v15 = IsRectEmptyInl(a2 + 32);
  v8 = *((_QWORD *)a1 + 2);
  if ( v15 )
    goto LABEL_3;
  if ( (*(_DWORD *)(v8 + 352) & 0xF) == 0
    && (v16 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v16 + 8) + 244LL) & 1) != 0 )
  {
    v10 = a2 + 33;
  }
  else if ( (*(_DWORD *)(v8 + 352) & 0xF) == 1 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 408LL);
    if ( v17 )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(v17 + 8) + 244LL) & 1) != 0 )
        v10 = a2 + 34;
    }
  }
LABEL_7:
  v24 = *v10;
  if ( (*(_DWORD *)(v8 + 352) & 0xF) == 0
    && (v19 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v19 + 8) + 244LL) & 1) != 0 )
  {
    p_bottom = &a2[2].bottom;
  }
  else if ( (*(_DWORD *)(v8 + 352) & 0xF) != 1
         || (v11 = *(_QWORD *)(*(_QWORD *)(v8 + 16) + 408LL)) == 0
         || (v12 = *(_DWORD *)(*(_QWORD *)(v11 + 8) + 244LL), p_bottom = &a2[3].bottom, (v12 & 1) == 0) )
  {
    p_bottom = &a2[1].bottom;
  }
  v25 = *(_OWORD *)p_bottom;
  if ( (*(_DWORD *)(v8 + 352) & 0xF) != 2 )
  {
    v14 = (struct tagMONITOR *)ValidateHmonitorNoRip(*(_QWORD *)(v8 + 344));
    v23 = v14;
    if ( v14 )
    {
      if ( v14 != (struct tagMONITOR *)a2 )
      {
        if ( *(int *)a1 >= 0 || (v20 = IsRectEmptyInl(a2 + 32), v22 = v21, v20) )
          v22 = &a2[1].bottom;
        PhysicalToLogicalDPIRect(&v24, v22, 0LL, &v23);
        if ( !a4 )
          goto LABEL_15;
        PhysicalToLogicalDPIRect(&v25, &a2[1].bottom, 0LL, &v23);
      }
    }
  }
  if ( !a4 )
  {
LABEL_15:
    *a3 = v24;
    return;
  }
  SubtractRect((__int64)a3, (int *)&v25, &v24.left);
}
