/*
 * XREFs of GrePolyPolylineInternal @ 0x1C0292770
 * Callers:
 *     GrePolyPolyline @ 0x1C0292660 (GrePolyPolyline.c)
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
  struct _XFORMOBJ v17; // [rsp+30h] [rbp-D0h] BYREF
  POINTL *v18[2]; // [rsp+40h] [rbp-C0h] BYREF
  char v19[32]; // [rsp+50h] [rbp-B0h] BYREF
  PATHOBJ ppo; // [rsp+70h] [rbp-90h] BYREF
  __int64 v21; // [rsp+78h] [rbp-88h]

  v6 = a4;
  v8 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v18, a1);
  if ( !v18[0] || (v18[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
  }
  else
  {
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v17, (struct XDCOBJ *)v18, 0x204u);
    v9 = v18[0];
    v10 = v18[0][10];
    v11 = *(_DWORD *)(*(_QWORD *)&v10 + 8LL);
    if ( (v11 & 0x1000) != 0 )
    {
      GreDCSelectBrush(v18[0], *(_QWORD *)(*(_QWORD *)&v10 + 16LL));
      v9 = v18[0];
    }
    if ( (v11 & 0x2000) != 0 )
      GreDCSelectPen(v9, *(_QWORD *)(*(_QWORD *)&v9[10] + 24LL));
    if ( (_DWORD)v6 )
    {
      PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v18, 1);
      if ( v21 )
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
          if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v17, a2)
            || !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v17, a2 + 1, v15 - 1) )
          {
            goto LABEL_19;
          }
          ++a3;
          a2 += v15;
        }
        while ( a3 < v14 );
        if ( (v18[0][22].x & 1) != 0
          || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v18, (LINEATTRS *)&v18[0][23], &v17, 1u) )
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
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)&ppo);
    }
    else
    {
      v8 = 1;
    }
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v18);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>((__int64)v19);
  return v8;
}
