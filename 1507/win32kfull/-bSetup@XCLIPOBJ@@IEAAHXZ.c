/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C0001978
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C0001DF8 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C0001474 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C00014C8 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C000150C (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C000158C (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C00015C4 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C0001818 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C00018A8 (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 */

__int64 __fastcall XCLIPOBJ::bSetup(XCLIPOBJ *this)
{
  _DWORD *v1; // rdx
  _DWORD *v3; // rcx
  _DWORD *v4; // rcx
  _DWORD *v5; // rcx
  int v6; // edx
  int v7; // r8d
  int v8; // eax
  int v9; // edx
  __int64 v10; // rax
  int v11; // edx
  _DWORD *v12; // rcx
  int v13; // edx
  int v14; // r8d
  int v15; // eax
  __int64 v16; // rax
  int v17; // edx
  int i; // eax
  int NextSegment; // eax
  int v21; // edx
  struct _POINTL v22; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v23; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_25;
  }
  v1[40] = -1;
  v3 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v3[28] > v3[30] )
  {
    v3[6] &= ~0x400000u;
    *((_DWORD *)this + 25) = -1;
  }
  else
  {
    v3[6] |= 0x400000u;
    *((_DWORD *)this + 25) = 1;
  }
  v4 = (_DWORD *)*((_QWORD *)this + 18);
  if ( v4[29] <= v4[31] )
    v4[6] |= 0x800000u;
  v5 = (_DWORD *)*((_QWORD *)this + 18);
  v6 = *((_DWORD *)this + 2);
  v7 = v5[29];
  if ( v7 >= v6 || v5[31] >= v6 )
  {
    v8 = *((_DWORD *)this + 4);
    if ( v7 < v8 || v5[31] < v8 )
    {
      if ( (v5[6] & 0x800000) != 0 )
      {
        if ( v7 < v6 )
        {
          XCLIPOBJ::vIntersectScan(this, v6, 0LL, &v22, v5 + 40);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
        }
        v9 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) >= v9 )
        {
          XCLIPOBJ::vIntersectScan(this, v9, &v23, 0LL, (int *)&v22);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
        }
      }
      else
      {
        if ( v5[31] < v6 )
        {
          XCLIPOBJ::vIntersectScan(this, v6, &v23, 0LL, (int *)&v22);
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
        }
        v10 = *((_QWORD *)this + 18);
        v11 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v10 + 116) >= v11 )
        {
          XCLIPOBJ::vIntersectScan(this, v11, 0LL, &v22, (int *)(v10 + 160));
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
        }
      }
      v12 = (_DWORD *)*((_QWORD *)this + 18);
      v13 = *((_DWORD *)this + 1);
      v14 = v12[28];
      if ( v14 >= v13 || v12[30] >= v13 )
      {
        v15 = *((_DWORD *)this + 3);
        if ( v14 < v15 || v12[30] < v15 )
        {
          if ( (v12[6] & 0x400000) != 0 )
          {
            if ( v14 < v13 )
            {
              XCLIPOBJ::bIntersectWall(this, v13, 0LL, &v22, v12 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
            }
            v21 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) >= v21 )
            {
              XCLIPOBJ::bIntersectWall(this, v21, &v23, 0LL, (int *)&v22);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
            }
          }
          else
          {
            if ( v12[30] < v13 )
            {
              XCLIPOBJ::bIntersectWall(this, v13, &v23, 0LL, (int *)&v22);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
            }
            v16 = *((_QWORD *)this + 18);
            v17 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v16 + 112) >= v17 )
            {
              XCLIPOBJ::bIntersectWall(this, v17, 0LL, &v22, (int *)(v16 + 160));
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_25:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
