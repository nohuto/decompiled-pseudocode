/*
 * XREFs of NtGdiRoundRect @ 0x140112B50
 * Callers:
 *     <none>
 * Callees:
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x14006DB98 (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z @ 0x140111980 (-bRoundRect@@YAHAEAVEPATHOBJ@@AEAVEBOX@@JJ@Z.c)
 *     ??0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z @ 0x140113AD4 (--0EBOX@@QEAA@AEAVXDCOBJ@@AEAU_RECTL@@PEAU_LINEATTRS@@H@Z.c)
 *     ??1PATHSTACKOBJ@@QEAA@XZ @ 0x140114F08 (--1PATHSTACKOBJ@@QEAA@XZ.c)
 *     NtGdiRectangle @ 0x1401166F0 (NtGdiRectangle.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtGdiRoundRect(HDC a1, LONG a2, LONG a3, LONG a4, int a5, int a6, int a7)
{
  DC *v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // rdx
  int v14; // ebx
  unsigned int v15; // esi
  __int64 v16; // rbx
  struct _RECTFX v17; // [rsp+30h] [rbp-D0h] BYREF
  DC *v18[14]; // [rsp+40h] [rbp-C0h] BYREF
  struct _RECTL v19; // [rsp+B0h] [rbp-50h] BYREF
  _DWORD v20[20]; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v21[8]; // [rsp+110h] [rbp+10h] BYREF
  __int64 v22; // [rsp+118h] [rbp+18h]

  if ( !a6 || !a7 )
    return NtGdiRectangle(a1, a5);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v18, a1);
  v10 = v18[0];
  if ( !v18[0] || (*((_DWORD *)v18[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
LABEL_5:
    v11 = 0;
LABEL_6:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
    return v11;
  }
  v13 = *((_QWORD *)v18[0] + 122);
  v14 = *(_DWORD *)(v13 + 152);
  if ( (v14 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v18[0], *(_QWORD *)(v13 + 160));
    v10 = v18[0];
  }
  if ( (v14 & 0x2000) != 0 )
  {
    GreDCSelectPen(v10, *(_QWORD *)(*((_QWORD *)v10 + 122) + 168LL));
    v10 = v18[0];
  }
  v19.bottom = a5;
  v19.left = a2;
  v19.top = a3;
  v19.right = a4;
  DC::QuickInitXform(v10, &v17, 516LL);
  v11 = 1;
  EBOX::EBOX((EBOX *)v20, (struct XDCOBJ *)v18, &v19, (struct _LINEATTRS *)((char *)v18[0] + 208), 1);
  if ( v20[0] )
    goto LABEL_6;
  PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)v21, v18, 1);
  if ( !v22 )
  {
    EngSetLastError(8u);
    goto LABEL_20;
  }
  if ( !bRoundRect((struct EPATHOBJ *)v21, (struct EBOX *)v20) )
  {
LABEL_20:
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v21);
    goto LABEL_5;
  }
  if ( (*((_DWORD *)v18[0] + 62) & 1) != 0 )
  {
    PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v21);
    goto LABEL_6;
  }
  if ( v20[1] )
  {
    v16 = *((_QWORD *)v18[0] + 17);
    *((_QWORD *)v18[0] + 17) = *((_QWORD *)v18[0] + 18);
    *((_DWORD *)v18[0] + 79) |= 1u;
    v15 = EPATHOBJ_bStrokeAndOrFill((struct EPATHOBJ *)v21, (struct XDCOBJ *)v18, 0LL, 0LL, 2u);
    *((_QWORD *)v18[0] + 17) = v16;
    *((_DWORD *)v18[0] + 79) |= 1u;
  }
  else
  {
    v15 = EPATHOBJ_bStrokeAndOrFill(
            (struct EPATHOBJ *)v21,
            (struct XDCOBJ *)v18,
            (LINEATTRS *)((char *)v18[0] + 208),
            &v17,
            3u);
  }
  PATHSTACKOBJ::~PATHSTACKOBJ((PATHSTACKOBJ *)v21);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v18);
  return v15;
}
