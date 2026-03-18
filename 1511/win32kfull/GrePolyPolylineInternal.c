/*
 * XREFs of GrePolyPolylineInternal @ 0x1C0293414
 * Callers:
 *     GrePolyPolyline @ 0x1C0293310 (GrePolyPolyline.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall GrePolyPolylineInternal(HDC a1, struct _POINTL *a2, int *a3, unsigned int a4, int a5)
{
  __int64 v6; // rsi
  unsigned int v8; // ebx
  POINTL *v9; // rcx
  POINTL v10; // rdx
  int v11; // edi
  ULONG v12; // ecx
  int *v14; // r13
  __int64 v15; // rsi
  POINTL *v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  struct _XFORMOBJ v18; // [rsp+40h] [rbp-C0h] BYREF
  PATHOBJ ppo; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v17, a1);
  if ( !v17[0] || (v17[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v18, (struct XDCOBJ *)v17, 0x204u);
    v9 = v17[0];
    v10 = v17[0][10];
    v11 = *(_DWORD *)(*(_QWORD *)&v10 + 8LL);
    if ( (v11 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v17[0], *(_QWORD *)(*(_QWORD *)&v10 + 16LL));
      v9 = v17[0];
    }
    if ( (v11 & 0x2000) != 0 )
      GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[10] + 24LL));
    if ( (_DWORD)v6 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v17, 1);
      if ( v20 )
      {
        v14 = &a3[v6];
        do
        {
          v15 = *a3;
          a5 -= v15;
          if ( a5 < 0 || (int)v15 < 2 )
          {
            v12 = 87;
            goto LABEL_21;
          }
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v18, a2)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v18, a2 + 1, v15 - 1) )
          {
            goto LABEL_19;
          }
          ++a3;
          a2 += v15;
        }
        while ( a3 < v14 );
        if ( (v17[0][22].x & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v17, (LINEATTRS *)&v17[0][23], &v18, 1u) )
        {
          v8 = 1;
        }
      }
      else
      {
        v12 = 8;
LABEL_21:
        EngSetLastError(v12);
      }
LABEL_19:
      PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
    }
    else
    {
      v8 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v17);
  return v8;
}
