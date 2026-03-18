/*
 * XREFs of GrePolylineTo @ 0x1C02935F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027B610 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
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
  POINTL *v14[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v15; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v16; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+68h] [rbp-98h]

  DCOBJ::DCOBJ((DCOBJ *)v14, a1);
  v5 = v14[0];
  v6 = 0;
  if ( !v14[0] || (v14[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v9 = 0;
    goto LABEL_17;
  }
  v7 = v14[0][10];
  v8 = *(_DWORD *)(*(_QWORD *)&v7 + 8LL);
  if ( (v8 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v14[0], *(_QWORD *)(*(_QWORD *)&v7 + 16LL));
    v5 = v14[0];
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
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v15, (struct XDCOBJ *)v14, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v14, 1);
  if ( v18 )
  {
    if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v15, a2, a3) )
    {
      Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v16);
      v11 = v14[0];
      v12 = a3 - 1;
      *(_DWORD *)(*(_QWORD *)&v14[0][10] + 8LL) &= 0xFFFFFCFF;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 76LL) = a2[v12].x;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 80LL) = a2[v12].y;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 84LL) = *(_DWORD *)Current.x;
      *(_DWORD *)(*(_QWORD *)&v11[10] + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
      if ( (v14[0][22].x & 1) != 0
        || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v14, (LINEATTRS *)&v14[0][23], &v15, 1u) )
      {
        v6 = 1;
      }
    }
  }
  else
  {
    EngSetLastError(8u);
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
LABEL_18:
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v14);
  return v6;
}
