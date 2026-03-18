/*
 * XREFs of xxxEvaluateDestRectForMonitorMigration @ 0x1C020CAEC
 * Callers:
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C0091108 (xxxDeferWindowPosAndCheckPoint.c)
 *     ?xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z @ 0x1C0206D70 (-xxxApplyArrangeAction@@YAHPEAUtagWND@@W4_WARR_STATES@@W4_WARR_ACTIONS@@JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z @ 0x1C0205AD4 (-IsDockTargetActive@@YAEPEAU_MOVESIZEDATA@@PEAUtagMONITOR@@W4eTHRESHOLD_MARGIN_DIRECTION@@@Z.c)
 *     ?xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITOR@@PEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0207A2C (-xxxForceSizeRecToDockTarget@@YAHPEAU_MOVESIZEDATA@@W4eTHRESHOLD_MARGIN_DIRECTION@@PEAUtagMONITO.c)
 *     MigrateRectMonitors @ 0x1C020B510 (MigrateRectMonitors.c)
 */

__int64 __fastcall xxxEvaluateDestRectForMonitorMigration(int a1, __int64 a2, __m128i *a3, __int64 a4, int a5)
{
  unsigned int v8; // r9d
  _DWORD *v9; // r15
  _DWORD *v10; // r14
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v15; // edx
  unsigned int v16; // eax
  int v17; // edx
  int v18; // edx
  __int64 v19; // rdx
  _QWORD *v20; // r13
  __int64 v21; // rdx
  _DWORD *v22; // r9
  int v23; // r10d
  _DWORD *v24; // r9
  int v25; // r10d
  __int64 v26; // rax
  _QWORD *v27; // rdi
  __int64 v29; // [rsp+40h] [rbp-68h]
  struct tagCHECKPOINT *v30; // [rsp+48h] [rbp-60h] BYREF
  __int64 v31; // [rsp+50h] [rbp-58h] BYREF
  struct tagRECT v32; // [rsp+58h] [rbp-50h] BYREF

  LODWORD(v31) = 0;
  v30 = 0LL;
  v29 = 0LL;
  v8 = 0;
  v9 = 0LL;
  v10 = 0LL;
  v11 = a1 - 1;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
          return (unsigned int)MigrateRectMonitors(
                                 (__int64)a3,
                                 a3 + 7,
                                 *(_QWORD *)(a2 + 208),
                                 (int *)(a2 + 24),
                                 a4,
                                 0LL,
                                 (_DWORD *)a2,
                                 32);
        return v8;
      }
      if ( a5 )
      {
        v15 = *(_DWORD *)(a2 + 180);
        if ( (v15 & 0x4200) == 0x4200 && (v15 & 0x6000) != 0x6000 && (v15 & 0x300) != 0x300 )
        {
          v16 = MigrateRectMonitors(
                  (__int64)a3,
                  a3 + 7,
                  *(_QWORD *)(a2 + 208),
                  (int *)(a2 + 24),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  3);
LABEL_19:
          v8 = v16;
          *(_DWORD *)(a2 + 180) ^= (*(_DWORD *)(a2 + 180) ^ (v16 << 19)) & 0x80000;
          return v8;
        }
      }
      v17 = 2;
    }
    else
    {
      if ( a5 )
      {
        v18 = *(_DWORD *)(a2 + 180);
        if ( (v18 & 0x2100) == 0x2100 && (v18 & 0x6000) != 0x6000 && (v18 & 0x300) != 0x300 )
        {
          v16 = MigrateRectMonitors(
                  (__int64)a3,
                  a3 + 7,
                  *(_QWORD *)(a2 + 208),
                  (int *)(a2 + 24),
                  a4,
                  0LL,
                  (_DWORD *)a2,
                  5);
          goto LABEL_19;
        }
      }
      v17 = 1;
    }
    v16 = xxxForceSizeRecToDockTarget((struct _MOVESIZEDATA *)a2, v17, (__int16 *)a4, (unsigned int *)&v31, &v32, &v30);
    goto LABEL_19;
  }
  if ( IsDockTargetActive(a2, a4, 0) || IsDockTargetActive(a2, v19, 3) )
  {
    v8 = MigrateRectMonitors((__int64)a3, a3 + 7, *(_QWORD *)(a2 + 208), &v32.left, a4, 0LL, (_DWORD *)a2, 1);
    if ( v8 )
    {
      v31 = a4;
      v20 = (_QWORD *)(gpDispInfo + 192LL);
      do
      {
        if ( IsDockTargetActive(a2, a4, 0) && *v22 <= v23 && v23 <= v22[2] )
        {
          v9 = v22;
          v30 = (struct tagCHECKPOINT *)a4;
        }
        if ( IsDockTargetActive(a2, v21, 3) && *v24 <= v25 && v25 <= v24[2] )
        {
          v26 = a4;
          v10 = v24;
          v29 = a4;
        }
        else
        {
          v26 = v29;
        }
        v27 = *(_QWORD **)(a4 + 496);
        if ( v27 == v20 )
          v27 = (_QWORD *)*v20;
        a4 = (__int64)(v27 - 62);
      }
      while ( a4 != v31 );
      if ( !v10 || !v9 )
        return 0;
      return (unsigned int)MigrateRectMonitors(
                             (__int64)a3,
                             a3 + 7,
                             *(_QWORD *)(a2 + 208),
                             (int *)(a2 + 24),
                             (__int64)v30,
                             v26,
                             (_DWORD *)a2,
                             1);
    }
  }
  return v8;
}
