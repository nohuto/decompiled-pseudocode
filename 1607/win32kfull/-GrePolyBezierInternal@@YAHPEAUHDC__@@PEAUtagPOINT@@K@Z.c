/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02916EC
 * Callers:
 *     GrePolyBezier @ 0x1C0291EE0 (GrePolyBezier.c)
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

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v9; // ecx
  struct _XFORMOBJ v11; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v12[2]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v13[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v15; // [rsp+78h] [rbp-88h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = v12[0];
  v6 = 0;
  if ( !v12[0] || (v12[0][4].y & 0x10000) != 0 )
  {
    v9 = 6;
    goto LABEL_19;
  }
  if ( a3 < 4 || a3 % 3 != 1 )
  {
    v9 = 87;
LABEL_19:
    EngSetLastError(v9);
    goto LABEL_20;
  }
  v7 = v12[0][10];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 8LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v12[0], *(_QWORD *)(*(_QWORD *)&v7 + 16LL));
    v5 = v12[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v11, (struct XDCOBJ *)v12, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v12, 1);
  if ( v15 )
  {
    if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v11, a2)
      && EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v11, a2 + 1, a3 - 1)
      && ((v12[0][22].x & 1) != 0
       || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v12, (LINEATTRS *)&v12[0][23], &v11, 1u)) )
    {
      v6 = 1;
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_20:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v13);
  return v6;
}
