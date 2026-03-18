/*
 * XREFs of GrePolyDraw @ 0x1C0292E74
 * Callers:
 *     NtGdiPolyDraw @ 0x1C02A7690 (NtGdiPolyDraw.c)
 * Callees:
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x1C0010348 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0010368 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C00161E0 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C0019C30 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C0036AA0 (--1DCOBJ@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEAA?AU_POINTFIX@@XZ @ 0x1C027B610 (-ptfxGetCurrent@EPATHOBJ@@QEAA-AU_POINTFIX@@XZ.c)
 */

__int64 __fastcall GrePolyDraw(HDC a1, struct _POINTL *a2, char *a3, unsigned int a4)
{
  __int64 v4; // r14
  POINTL *v7; // rcx
  unsigned int v8; // esi
  POINTL v9; // rdx
  int v10; // ebx
  unsigned int v11; // ebx
  ULONG v12; // ecx
  char *v13; // r12
  char v14; // al
  struct _POINTFIX Current; // rax
  POINTL *v16; // rdx
  signed __int64 v18; // [rsp+38h] [rbp-360h]
  signed __int64 v19; // [rsp+38h] [rbp-360h]
  POINTL *v20[2]; // [rsp+50h] [rbp-348h] BYREF
  char *v21; // [rsp+60h] [rbp-338h]
  struct _XFORMOBJ v22; // [rsp+68h] [rbp-330h] BYREF
  __int64 v23; // [rsp+78h] [rbp-320h] BYREF
  PATHOBJ ppo; // [rsp+80h] [rbp-318h] BYREF
  __int64 v25; // [rsp+88h] [rbp-310h]

  v4 = a4;
  DCOBJ::DCOBJ((DCOBJ *)v20, a1);
  v7 = v20[0];
  v8 = 0;
  if ( !v20[0] || (v20[0][4].y & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return 0LL;
  }
  v9 = v20[0][10];
  v10 = *(_DWORD *)(*(_QWORD *)&v9 + 8LL);
  if ( (v10 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v20[0], *(_QWORD *)(*(_QWORD *)&v9 + 16LL));
    v7 = v20[0];
  }
  if ( (v10 & 0x2000) != 0 )
    GreDCSelectPen(v7, *(_QWORD *)(*(_QWORD *)&v7[10] + 24LL));
  if ( !(_DWORD)v4 )
  {
    v11 = 1;
LABEL_44:
    DCOBJ::~DCOBJ((DCOBJ *)v20);
    return v11;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v22, (struct XDCOBJ *)v20, 0x204u);
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, (DC **)v20, 1);
  if ( !v25 )
  {
    v12 = 8;
LABEL_11:
    EngSetLastError(v12);
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
    v11 = 0;
    goto LABEL_44;
  }
  v13 = &a3[v4];
  while ( a3 < v13 )
  {
    v21 = a3;
    v14 = *a3++;
    switch ( v14 )
    {
      case 2:
        while ( a3 < v13 )
        {
          if ( *a3 != 2 )
          {
            if ( a3 < v13 && (*a3 & 0xFE) == 2 )
              ++a3;
            break;
          }
          ++a3;
        }
LABEL_38:
        v19 = a3 - v21;
        if ( !EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v22, a2, (_DWORD)a3 - (_DWORD)v21) )
          goto LABEL_43;
        a2 += v19;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 3:
        goto LABEL_38;
      case 4:
        while ( a3 < v13 )
        {
          if ( *a3 != 4 )
          {
            if ( a3 < v13 && (*a3 & 0xFE) == 4 )
              ++a3;
            break;
          }
          ++a3;
        }
        v18 = a3 - v21;
        if ( a3 - v21 != 3 * ((a3 - v21) / 3uLL) )
        {
LABEL_27:
          v12 = 87;
          goto LABEL_11;
        }
        if ( !EPATHOBJ::bPolyBezierTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v22, a2, (_DWORD)a3 - (_DWORD)v21) )
        {
LABEL_43:
          PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
          v11 = 0;
          goto LABEL_44;
        }
        a2 += v18;
        if ( (*(a3 - 1) & 1) != 0 )
          EPATHOBJ::bCloseFigure((EPATHOBJ *)&ppo);
        break;
      case 6:
        if ( !EPATHOBJ::bMoveTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)&v22, a2) )
          goto LABEL_43;
        ++a2;
        break;
      default:
        goto LABEL_27;
    }
  }
  Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo, &v23);
  v16 = v20[0];
  *(_DWORD *)(*(_QWORD *)&v20[0][10] + 8LL) &= 0xFFFFFCFF;
  *(_DWORD *)(*(_QWORD *)&v16[10] + 76LL) = a2[-1].x;
  *(_DWORD *)(*(_QWORD *)&v16[10] + 80LL) = a2[-1].y;
  *(_DWORD *)(*(_QWORD *)&v16[10] + 84LL) = *(_DWORD *)Current.x;
  *(_DWORD *)(*(_QWORD *)&v16[10] + 88LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
  if ( (v20[0][22].x & 1) != 0
    || (unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, v20, (LINEATTRS *)&v20[0][23], &v22, 1u) )
  {
    v8 = 1;
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)&ppo);
  DCOBJ::~DCOBJ((DCOBJ *)v20);
  return v8;
}
