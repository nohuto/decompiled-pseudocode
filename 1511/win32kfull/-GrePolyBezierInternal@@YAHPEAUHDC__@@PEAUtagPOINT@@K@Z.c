/*
 * XREFs of ?GrePolyBezierInternal@@YAHPEAUHDC__@@PEAUtagPOINT@@K@Z @ 0x1C02923B8
 * Callers:
 *     GrePolyBezier @ 0x1C0292BB0 (GrePolyBezier.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyBezierInternal(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // esi
  ULONG v9; // ecx
  POINTL *v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v12; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v14; // [rsp+58h] [rbp-A8h]

  DCOBJ::DCOBJ((DCOBJ *)v11, a1);
  v5 = v11[0];
  v6 = 0;
  if ( !v11[0] || (v11[0][4].y & 0x10000) != 0 )
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
  v7 = v11[0][10];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 8LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v11[0], *(_QWORD *)(*(_QWORD *)&v7 + 16LL));
    v5 = v11[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[10] + 24LL));
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v12, (struct XDCOBJ *)v11, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v11, 1);
  if ( v14 )
  {
    if ( EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v12, a2)
      && EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v12, a2 + 1, a3 - 1)
      && ((v11[0][22].x & 1) != 0
       || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v11, (LINEATTRS *)&v11[0][23], &v12, 1u)) )
    {
      v6 = 1;
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
LABEL_20:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  return v6;
}
