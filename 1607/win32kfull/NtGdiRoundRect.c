/*
 * XREFs of NtGdiRoundRect @ 0x1C0292D40
 * Callers:
 *     <none>
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000A694 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     NtGdiRectangle @ 0x1C000E8C0 (NtGdiRectangle.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x1C0013B98 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, __int64 a2, __int64 a3, __int64 a4, LONG a5, unsigned int a6, int a7)
{
  LONG v7; // r12d
  LONG v8; // r15d
  LONG v9; // edi
  POINTL *v10; // rcx
  POINTL v11; // rdx
  int v12; // ebx
  unsigned int v13; // edi
  unsigned int v14; // ecx
  POINTL v15; // rbx
  struct _RECTL v17; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  struct _XFORMOBJ v20; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v21[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v23; // [rsp+D8h] [rbp-28h]

  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( a6 && a7 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v18, a1);
    v10 = v18[0];
    if ( !v18[0] || (v18[0][4].y & 0x10000) != 0 )
    {
      EngSetLastError(6u);
      v13 = 0;
      goto LABEL_21;
    }
    v11 = v18[0][10];
    v12 = *(_DWORD *)(*(_QWORD *)&v11 + 8LL);
    if ( (v12 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v18[0], *(_QWORD *)(*(_QWORD *)&v11 + 16LL));
      v10 = v18[0];
    }
    if ( (v12 & 0x2000) != 0 )
      GreDCSelectPen(v10, *(_QWORD *)(*(_QWORD *)&v10[10] + 24LL));
    v17.bottom = a5;
    v17.left = v9;
    v17.top = v8;
    v17.right = v7;
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v20, (struct XDCOBJ *)v18, 0x204u);
    v13 = 1;
    EBOX::EBOX((EBOX *)v21, (struct DCOBJ *)v18, &v17, (struct _LINEATTRS *)&v18[0][23], 1);
    if ( v21[0] )
      goto LABEL_21;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v18, 1);
    if ( v23 )
    {
      if ( (unsigned int)bRoundRect((struct EPATHOBJ *)&ppo, (struct EBOX *)v21, a6) )
      {
        if ( (v18[0][22].x & 1) == 0 )
        {
          if ( v21[1] )
          {
            v15 = v18[0][18];
            v18[0][18] = v18[0][19];
            v18[0][41].y |= 1u;
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v18, 0LL, 0LL, 2u);
            v18[0][18] = v15;
            v18[0][41].y |= 1u;
          }
          else
          {
            v14 = EPATHOBJ::bStrokeAndOrFill(&ppo, v18, (LINEATTRS *)&v18[0][23], &v20, 3u);
          }
          v13 = v14;
        }
        goto LABEL_19;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v13 = 0;
LABEL_19:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_21:
    XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
    UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v19);
    return v13;
  }
  return NtGdiRectangle(a1, a2, a3, a4, a5);
}
