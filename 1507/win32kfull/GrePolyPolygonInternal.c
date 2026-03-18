/*
 * XREFs of GrePolyPolygonInternal @ 0x1C00CA9F4
 * Callers:
 *     GrePolyPolygon @ 0x1C00CA940 (GrePolyPolygon.c)
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GrePolyPolygonInternal(HDC a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned int v8; // ebx
  __int64 v9; // rcx
  __int64 v10; // rdx
  int v11; // edi
  struct _XFORMOBJ v13; // [rsp+30h] [rbp-D0h] BYREF
  _QWORD v14[6]; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v16; // [rsp+78h] [rbp-88h]

  v8 = 1;
  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v9 = v14[0];
  if ( !v14[0] || (*(_DWORD *)(v14[0] + 36LL) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v8 = 0;
  }
  else
  {
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
      if ( v16 )
      {
        v8 = bPolyPolygon(&ppo, &v13, a2, a3, a4, a5);
        if ( !v8 )
        {
LABEL_14:
          XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
          goto LABEL_15;
        }
        ppo.fl |= 0x4000u;
        if ( (*(_DWORD *)(v14[0] + 176LL) & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(
                             &ppo,
                             (struct XDCOBJ *)v14,
                             (LINEATTRS *)(v14[0] + 184LL),
                             &v13,
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
  DCOBJ::~DCOBJ((DCOBJ *)v14);
  return v8;
}
