/*
 * XREFs of GrePolyPolygonInternal @ 0x1C0010084
 * Callers:
 *     GrePolyPolygon @ 0x1C000FFD0 (GrePolyPolygon.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edi
  _QWORD v13[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v14; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+58h] [rbp-A8h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v13, a1);
  v9 = v13[0];
  if ( !v13[0] || (*(_DWORD *)(v13[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  else
  {
    v10 = *(_QWORD *)(v13[0] + 80LL);
    v11 = *(_DWORD *)(v10 + 8);
    if ( (v11 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v13[0], *(_QWORD *)(v10 + 16));
      v9 = v13[0];
    }
    if ( (v11 & 0x2000) != 0 )
      GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)(v9 + 80) + 24LL));
    if ( a4 )
    {
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v13, 0x204u);
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (struct XDCOBJ *)v13, 1);
      if ( v16 )
      {
        v8 = bPolyPolygon(&ppo, &v14, a2, a3, a4, a5);
        if ( !v8 )
        {
LABEL_14:
          PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
          goto LABEL_15;
        }
        ppo.fl |= 0x4000u;
        if ( (*(_DWORD *)(v13[0] + 176LL) & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(
                             &ppo,
                             (struct XDCOBJ *)v13,
                             (LINEATTRS *)(v13[0] + 184LL),
                             &v14,
                             3u) )
        {
          v8 = 1;
          goto LABEL_14;
        }
      }
      else
      {
        EngSetLastError(8u);
      }
      v8 = 0;
      goto LABEL_14;
    }
  }
LABEL_15:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v13);
  return v8;
}
