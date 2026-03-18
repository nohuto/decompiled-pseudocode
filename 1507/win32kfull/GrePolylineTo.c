/*
 * XREFs of GrePolylineTo @ 0x1C0293B30
 * Callers:
 *     <none>
 * Callees:
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0032CA0 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1C00CB118 (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C00CB138 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00CC880 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027C0C8 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 */

__int64 __fastcall GrePolylineTo(HDC a1, struct _POINTL *a2, unsigned int a3)
{
  POINTL *v5; // rcx
  unsigned int v6; // ebx
  POINTL v7; // rdx
  int v8; // edi
  int v9; // edi
  struct _POINTFIX Current; // rax
  POINTL *v11; // r9
  __int64 v12; // r8
  struct _XFORMOBJ v14; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v15[6]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+70h] [rbp-90h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-80h] BYREF
  __int64 v18; // [rsp+88h] [rbp-78h]

  DCOBJ::DCOBJ((DCOBJ *)v15, a1);
  v5 = v15[0];
  v6 = 0;
  if ( !v15[0] || (v15[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v9 = 0;
    goto LABEL_17;
  }
  v7 = v15[0][10];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 8LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v15[0], *(_QWORD *)(*(_QWORD *)&v7 + 16LL));
    v5 = v15[0];
  }
  if ( (v8 & 0x2000) != 0 )
    GreDCSelectPen(v5, *(_QWORD *)(*(_QWORD *)&v5[10] + 24LL));
  if ( !a3 )
  {
    v9 = 1;
LABEL_17:
    v6 = v9;
    goto LABEL_18;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v14, (struct XDCOBJ *)v15, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v15, 1);
  if ( v18 )
  {
    if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v14, a2, a3) )
    {
      Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v16);
      v11 = v15[0];
      v12 = a3 - 1;
      *(_DWORD *)(*(_QWORD *)&v15[0][10] + 8LL) &= 0xFFFFFCFF;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 76LL) = a2[v12].x;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 80LL) = a2[v12].y;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 84LL) = *(_DWORD *)Current.x;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
      if ( (v15[0][22].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v15, (LINEATTRS *)&v15[0][23], &v14, 1u) )
      {
        v6 = 1;
      }
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
LABEL_18:
  DCOBJ::~DCOBJ((DCOBJ *)v15);
  return v6;
}
