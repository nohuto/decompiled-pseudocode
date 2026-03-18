/*
 * XREFs of NtGdiEllipse @ 0x1C0292B20
 * Callers:
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1C01DDF80 (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x1C000A694 (--0EBOX@@QEAA@AEAVDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x1C02A9B84 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 */

__int64 __fastcall NtGdiEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  POINTL *v8; // rcx
  POINTL v9; // rdx
  LINEATTRS *v10; // rsi
  int v11; // ebx
  unsigned int v12; // edi
  unsigned int v13; // ecx
  POINTL v14; // rbx
  struct _RECTL v16; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v17[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v18[32]; // [rsp+50h] [rbp-B0h] BYREF
  struct _XFORMOBJ v19[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD v20[20]; // [rsp+80h] [rbp-80h] BYREF
  PATHOBJ ppo; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+D8h] [rbp-28h]

  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v12 = 0;
    goto LABEL_22;
  }
  v16.bottom = a5;
  v16.left = a2;
  v16.top = a3;
  v16.right = a4;
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v19, (struct XDCOBJ *)v17, 0x204u);
  v8 = v17[0];
  v9 = v17[0][10];
  v10 = (LINEATTRS *)&v17[0][23];
  v11 = *(_DWORD *)(*(_QWORD *)&v9 + 8LL);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v9 + 16LL));
    v8 = v17[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*(_QWORD *)&v8[10] + 24LL));
  v12 = 1;
  EBOX::EBOX((EBOX *)v20, (struct DCOBJ *)v17, &v16, v10, 1);
  if ( !v20[0] )
  {
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
    if ( v22 )
    {
      if ( (unsigned int)bEllipse((struct EPATHOBJ *)&ppo, (struct EBOX *)v20) )
      {
        if ( (*(_DWORD *)(*(_QWORD *)&v19[0].ulReserved + 32LL) & 1) != 0 && ppo.cCurves == 5 )
          ppo.fl |= 2u;
        if ( (v17[0][22].x & 1) == 0 )
        {
          if ( v20[1] )
          {
            v14 = v17[0][18];
            v17[0][18] = v17[0][19];
            v17[0][41].y |= 1u;
            v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, 0LL, 0LL, 2u);
            v17[0][18] = v14;
            v17[0][41].y |= 1u;
          }
          else
          {
            v13 = EPATHOBJ::bStrokeAndOrFill(&ppo, v17, v10, v19, 3u);
          }
          v12 = v13;
        }
        goto LABEL_20;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v12 = 0;
LABEL_20:
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
  }
LABEL_22:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v18);
  return v12;
}
