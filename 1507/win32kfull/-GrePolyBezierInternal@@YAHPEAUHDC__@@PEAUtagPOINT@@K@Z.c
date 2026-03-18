/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C0007534
 * Callers:
 *     GrePolyBezier @ 0x1C0007490 (GrePolyBezier.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  ULONG v7; // ecx
  __int64 v8; // rdx
  int v9; // esi
  struct _XFORMOBJ v11; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v12[6]; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v14; // [rsp+78h] [rbp-88h]

  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  v5 = v12[0];
  v6 = 0;
  if ( !v12[0] || (*(_DWORD *)(v12[0] + 36LL) & 0x10000) != 0 )
  {
    v7 = 6;
LABEL_3:
    EngSetLastError(v7);
    goto LABEL_17;
  }
  if ( a3 < 4 || a3 % 3 != 1 )
  {
    v7 = 87;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)(v12[0] + 80LL);
  v9 = *(_DWORD *)(v8 + 8);
  if ( (v9 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v12[0], *(_QWORD *)(v8 + 16));
    v5 = v12[0];
  }
  if ( (v9 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)(v5 + 80) + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v11, (struct XDCOBJ *)v12, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v12, 1);
  if ( v14 )
  {
    if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v11, a2)
      && EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v11, a2 + 1, a3 - 1)
      && ((*(_DWORD *)(v12[0] + 176LL) & 1) != 0
       || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v12, (LINEATTRS *)(v12[0] + 184LL), &v11, 1u)) )
    {
      v6 = 1;
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_17:
  DCOBJ::~DCOBJ((DCOBJ *)v12);
  return v6;
}
