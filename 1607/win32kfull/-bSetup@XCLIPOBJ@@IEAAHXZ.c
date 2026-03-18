/*
 * XREFs of ?bSetup@XCLIPOBJ@@IEAAHXZ @ 0x1C02CBBD4
 * Callers:
 *     ?bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z @ 0x1C02CB3B4 (-bEnumLine@XCLIPOBJ@@QEAAHKPEAU_CLIPLINE@@@Z.c)
 * Callees:
 *     ?bFindFirstScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02CB63C (-bFindFirstScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindFirstSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02CB724 (-bFindFirstSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextScan@XCLIPOBJ@@IEAAHXZ @ 0x1C02CB9F4 (-bFindNextScan@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bFindNextSegment@XCLIPOBJ@@IEAAHXZ @ 0x1C02CBA84 (-bFindNextSegment@XCLIPOBJ@@IEAAHXZ.c)
 *     ?bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z @ 0x1C02CBB00 (-bIntersectWall@XCLIPOBJ@@IEAAHJPEAU_POINTL@@0PEAJ@Z.c)
 *     ?bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z @ 0x1C02CBB54 (-bRecordRun@XCLIPOBJ@@IEAAHAEAJ@Z.c)
 *     ?vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z @ 0x1C02CBFC4 (-vIntersectScan@XCLIPOBJ@@IEAAXJPEAU_POINTL@@0PEAJ@Z.c)
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
  int v10; // edx
  __int64 v11; // rax
  int v12; // edx
  _DWORD *v13; // rcx
  int v14; // edx
  int v15; // r8d
  int v16; // eax
  int v17; // edx
  __int64 v18; // rax
  int v19; // edx
  int i; // eax
  int NextSegment; // eax
  struct _POINTL v22; // [rsp+40h] [rbp+10h] BYREF
  struct _POINTL v23; // [rsp+48h] [rbp+18h] BYREF

  v1 = (_DWORD *)*((_QWORD *)this + 18);
  if ( (v1[6] & 0x20000) != 0 )
  {
    XCLIPOBJ::bRecordRun(this, v1 + 8);
    NextSegment = XCLIPOBJ::bFindNextSegment(this);
    goto LABEL_38;
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
        v10 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(*((_QWORD *)this + 18) + 124LL) >= v10 )
        {
          XCLIPOBJ::vIntersectScan(this, v10, &v23, 0LL, (int *)&v22);
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
        v11 = *((_QWORD *)this + 18);
        v12 = *((_DWORD *)this + 4);
        if ( *(_DWORD *)(v11 + 116) >= v12 )
        {
          XCLIPOBJ::vIntersectScan(this, v12, 0LL, &v22, (int *)(v11 + 160));
          *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
        }
      }
      v13 = (_DWORD *)*((_QWORD *)this + 18);
      v14 = *((_DWORD *)this + 1);
      v15 = v13[28];
      if ( v15 >= v14 || v13[30] >= v14 )
      {
        v16 = *((_DWORD *)this + 3);
        if ( v15 < v16 || v13[30] < v16 )
        {
          if ( (v13[6] & 0x400000) != 0 )
          {
            if ( v15 < v14 )
            {
              XCLIPOBJ::bIntersectWall(this, v14, 0LL, &v22, v13 + 40);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
            }
            v17 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(*((_QWORD *)this + 18) + 120LL) >= v17 )
            {
              XCLIPOBJ::bIntersectWall(this, v17, &v23, 0LL, (int *)&v22);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
            }
          }
          else
          {
            if ( v13[30] < v14 )
            {
              XCLIPOBJ::bIntersectWall(this, v14, &v23, 0LL, (int *)&v22);
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 120LL) = v23;
            }
            v18 = *((_QWORD *)this + 18);
            v19 = *((_DWORD *)this + 3);
            if ( *(_DWORD *)(v18 + 112) >= v19 )
            {
              XCLIPOBJ::bIntersectWall(this, v19, 0LL, &v22, (int *)(v18 + 160));
              *(struct _POINTL *)(*((_QWORD *)this + 18) + 112LL) = v22;
            }
          }
          *(_DWORD *)(*((_QWORD *)this + 18) + 152LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 112LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 156LL) = *(_DWORD *)(*((_QWORD *)this + 18) + 116LL);
          *(_DWORD *)(*((_QWORD *)this + 18) + 24LL) |= 0x20000u;
          for ( i = XCLIPOBJ::bFindFirstScan(this); i; i = XCLIPOBJ::bFindNextScan(this) )
          {
            NextSegment = XCLIPOBJ::bFindFirstSegment(this);
LABEL_38:
            if ( NextSegment )
              return 1LL;
          }
        }
      }
    }
  }
  return 0LL;
}
