/*
 * XREFs of GrePolyPolygonInternal @ 0x1C00116E0
 * Callers:
 *     GrePolyPolygon @ 0x1C00115D0 (GrePolyPolygon.c)
 * Callees:
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C0011870 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0011890 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C0014BC0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0039508 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edi
  struct _XFORMOBJ v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v15[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v17; // [rsp+78h] [rbp-88h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v9 = v14[0];
  if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
    goto LABEL_17;
  }
  v10 = *(_QWORD *)(v14[0] + 80LL);
  v11 = *(_DWORD *)(v10 + 8);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(v10 + 16));
    v9 = v14[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 80) + 24LL));
  if ( a4 )
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v13, (struct XDCOBJ *)v14, 0x204u);
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v14, 1);
    if ( v17 )
    {
      v8 = bPolyPolygon(&ppo, &v13, a2, a3, a4, a5);
      if ( !v8 )
      {
LABEL_15:
        XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
        goto LABEL_17;
      }
      ppo.fl |= 0x4000u;
      if ( (*(_DWORD *)(v14[0] + 176LL) & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v14, (LINEATTRS *)(v14[0] + 184LL), &v13, 3u) )
      {
        v8 = 1;
        goto LABEL_15;
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v8 = 0;
    goto LABEL_15;
  }
LABEL_17:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v14);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v15);
  return v8;
}
