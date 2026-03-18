/*
 * XREFs of ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0018C50
 * Callers:
 *     NtGdiCreateRoundRectRgn @ 0x1C00168A0 (NtGdiCreateRoundRectRgn.c)
 *     NtGdiRoundRect @ 0x1C02937B0 (NtGdiRoundRect.c)
 * Callees:
 *     ?efHalfDiff@@YA?AVEFLOAT@@JJ@Z @ 0x1C0018C18 (-efHalfDiff@@YA-AVEFLOAT@@JJ@Z.c)
 *     ?bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z @ 0x1C001900C (-bToPOINTL@EPOINTFL@@QEAAHAEAU_POINTL@@@Z.c)
 *     ?bIsZero@EFLOAT@@QEAAHXZ @ 0x1C001AA10 (-bIsZero@EFLOAT@@QEAAHXZ.c)
 *     ?vAbs@EFLOAT@@QEAAXXZ @ 0x1C001AA28 (-vAbs@EFLOAT@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall bRoundRect(struct EPATHOBJ *a1, struct EBOX *a2)
{
  LONG v4; // eax
  int v5; // edx
  int v6; // ecx
  unsigned int v7; // esi
  int v8; // r10d
  int v9; // r9d
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm5_4
  float v13; // xmm4_4
  float v14; // xmm1_4
  unsigned int v15; // xmm2_4
  unsigned int v16; // xmm3_4
  LONG x; // edi
  LONG v18; // ebx
  __int64 v19; // r12
  __int64 v20; // r13
  struct _POINTL v21; // rax
  __int64 v22; // rax
  struct _POINTL v23; // rax
  int v24; // eax
  __int64 v25; // rax
  struct _POINTL v27; // [rsp+20h] [rbp-58h] BYREF
  struct _POINTL v28; // [rsp+28h] [rbp-50h] BYREF
  __int64 v29; // [rsp+30h] [rbp-48h] BYREF
  __int64 v30; // [rsp+38h] [rbp-40h] BYREF
  struct _POINTL v31; // [rsp+40h] [rbp-38h] BYREF
  struct _POINTL v32; // [rsp+48h] [rbp-30h] BYREF
  __int64 v33; // [rsp+50h] [rbp-28h]
  int v34; // [rsp+58h] [rbp-20h]
  int v35; // [rsp+5Ch] [rbp-1Ch]

  v4 = efHalfDiff(*((_DWORD *)a2 + 16), *((_DWORD *)a2 + 18));
  v5 = *((_DWORD *)a2 + 19);
  v6 = *((_DWORD *)a2 + 17);
  v28.x = v4;
  v27.x = efHalfDiff(v6, v5);
  v7 = 0;
  if ( (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v28) || (unsigned int)EFLOAT::bIsZero((EFLOAT *)&v27) )
  {
    v10 = FP_0_0;
    v11 = FP_0_0;
  }
  else
  {
    EFLOAT::vAbs((EFLOAT *)&v28);
    EFLOAT::vAbs((EFLOAT *)&v27);
    v10 = (float)v8 / *(float *)&v28.x;
    v11 = (float)v9 / *(float *)&v27.x;
  }
  if ( v10 > FP_2_0 )
    v12 = FP_1_0;
  else
    v12 = v10 * 0.5;
  if ( v11 > FP_2_0 )
    v13 = FP_1_0;
  else
    v13 = v11 * 0.5;
  v14 = (float)*((int *)a2 + 13) * v12;
  *(float *)&v15 = (float)*((int *)a2 + 14) * v13;
  *(float *)&v16 = (float)*((int *)a2 + 15) * v13;
  *(float *)&v29 = (float)*((int *)a2 + 12) * v12;
  *((float *)&v29 + 1) = v14;
  v30 = __PAIR64__(v16, v15);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v29, &v28);
  EPOINTFL::bToPOINTL((EPOINTFL *)&v30, &v31);
  x = v31.x;
  v18 = v28.x;
  v27.y = *((_DWORD *)a2 + 3) - v31.y;
  v30 = (1922922357LL * v31.x) >> 32;
  v19 = (1922922357LL * v28.x) >> 32;
  v29 = (1922922357LL * v31.y) >> 32;
  v20 = (1922922357LL * v28.y) >> 32;
  v27.x = *((_DWORD *)a2 + 2) - v31.x;
  if ( EPATHOBJ::bMoveTo(a1, 0LL, &v27) )
  {
    v32 = (struct _POINTL)*((_QWORD *)a2 + 1);
    v21 = v32;
    v32.x -= v30;
    v32.y -= v29;
    LODWORD(v33) = v21.x - v19;
    HIDWORD(v33) = v21.y - v20;
    v34 = v21.x - v18;
    v35 = v21.y - v28.y;
    if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3u) )
    {
      v27.x = v18 + *((_DWORD *)a2 + 4);
      v27.y = *((_DWORD *)a2 + 5) + v28.y;
      if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v27, 1u) )
      {
        v33 = *((_QWORD *)a2 + 2);
        v22 = v33;
        LODWORD(v33) = v33 - v30;
        HIDWORD(v33) -= v29;
        v32.x = v19 + v22;
        v32.y = v20 + HIDWORD(v22);
        v34 = v22 - x;
        v35 = HIDWORD(v22) - v31.y;
        if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3u) )
        {
          v27.x = x + *((_DWORD *)a2 + 6);
          v27.y = *((_DWORD *)a2 + 7) + v31.y;
          if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v27, 1u) )
          {
            v32 = (struct _POINTL)*((_QWORD *)a2 + 3);
            v23 = v32;
            v32.x += v30;
            v32.y += v29;
            LODWORD(v33) = v19 + v23.x;
            HIDWORD(v33) = v20 + v23.y;
            v34 = v18 + v23.x;
            v35 = v28.y + v23.y;
            if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3u) )
            {
              v24 = *((_DWORD *)a2 + 8);
              v27.y = *((_DWORD *)a2 + 9) - v28.y;
              v27.x = v24 - v18;
              if ( EPATHOBJ::bPolyLineTo(a1, 0LL, &v27, 1u) )
              {
                v33 = *((_QWORD *)a2 + 4);
                v25 = v33;
                LODWORD(v33) = v30 + v33;
                HIDWORD(v33) += v29;
                v32.x = v25 - v19;
                v32.y = HIDWORD(v25) - v20;
                v34 = x + v25;
                v35 = v31.y + HIDWORD(v25);
                if ( EPATHOBJ::bPolyBezierTo(a1, 0LL, &v32, 3u) )
                  return (unsigned int)EPATHOBJ::bCloseFigure(a1);
              }
            }
          }
        }
      }
    }
  }
  return v7;
}
