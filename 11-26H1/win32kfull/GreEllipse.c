/*
 * XREFs of GreEllipse @ 0x140113870
 * Callers:
 *     NtGdiEllipse @ 0x140113850 (NtGdiEllipse.c)
 *     ?DrawSonar@@YAXPEAUHDC__@@@Z @ 0x1402A3FDC (-DrawSonar@@YAXPEAUHDC__@@@Z.c)
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z @ 0x140112DD0 (-bEllipse@@YAHAEAVEPATHOBJ@@AEAVEBOX@@@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x140113AD4 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall GreEllipse(HDC a1, LONG a2, LONG a3, LONG a4, LONG a5)
{
  DC *v8; // rcx
  __int64 v9; // rdx
  LINEATTRS *v10; // rbx
  int v11; // edi
  unsigned int v12; // edi
  unsigned int v14; // esi
  __int64 v15; // rbx
  struct _RECTFX v16; // [rsp+30h] [rbp-D0h] BYREF
  DC *v17[14]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v18; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v19[20]; // [rsp+C0h] [rbp-40h] BYREF
  _DWORD v20[2]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v21; // [rsp+118h] [rbp+18h]

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v17, a1);
  if ( !v17[0] || (*((_DWORD *)v17[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
    return 0LL;
  }
  v18.bottom = a5;
  v18.left = a2;
  v18.top = a3;
  v18.right = a4;
  DC::QuickInitXform(v17[0], &v16, 516LL);
  v8 = v17[0];
  v9 = *((_QWORD *)v17[0] + 122);
  v10 = (LINEATTRS *)((char *)v17[0] + 208);
  v11 = *(_DWORD *)(v9 + 152);
  if ( (v11 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v17[0], *(_QWORD *)(v9 + 160));
    v8 = v17[0];
  }
  if ( (v11 & 0x2000) != 0 )
    GreDCSelectPen(v8, *(_QWORD *)(*((_QWORD *)v8 + 122) + 168LL));
  v12 = 1;
  EBOX::EBOX((EBOX *)v19, (struct XDCOBJ *)v17, &v18, v10, 1);
  if ( v19[0] )
    goto LABEL_8;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v20, v17, 1);
  if ( !v21 )
  {
    EngSetLastError(8u);
    goto LABEL_20;
  }
  if ( !(unsigned int)bEllipse((struct EPATHOBJ *)v20, (struct EBOX *)v19) )
  {
LABEL_20:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v20);
    v12 = 0;
LABEL_8:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
    return v12;
  }
  if ( (*(_BYTE *)(*(_QWORD *)&v16.xLeft + 32LL) & 1) != 0 && v20[1] == 5 )
    v20[0] |= 2u;
  if ( (*((_DWORD *)v17[0] + 62) & 1) != 0 )
  {
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v20);
    goto LABEL_8;
  }
  if ( v19[1] )
  {
    v15 = *((_QWORD *)v17[0] + 17);
    *((_QWORD *)v17[0] + 17) = *((_QWORD *)v17[0] + 18);
    *((_DWORD *)v17[0] + 79) |= 1u;
    v14 = EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v20, (struct XDCOBJ *)v17, 0LL, 0LL, 2u);
    *((_QWORD *)v17[0] + 17) = v15;
    *((_DWORD *)v17[0] + 79) |= 1u;
  }
  else
  {
    v14 = EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v20, (struct XDCOBJ *)v17, v10, &v16, 3u);
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v20);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v17);
  return v14;
}
