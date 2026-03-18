/*
 * XREFs of NtGdiStrokeAndFillPath @ 0x1402280F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC (-vDestroy@DC@@QEAAXXZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiStrokeAndFillPath(HDC a1)
{
  ULONG v1; // ecx
  DC *v3; // r8
  __int64 v4; // rdx
  int v5; // ebx
  unsigned int v6; // ebx
  DC *v7[14]; // [rsp+30h] [rbp-D0h] BYREF
  struct _PATHOBJ v8[10]; // [rsp+A0h] [rbp-60h] BYREF
  _BYTE v9[48]; // [rsp+F0h] [rbp-10h] BYREF
  struct _RECTFX v10; // [rsp+138h] [rbp+38h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v7, a1);
  if ( !v7[0] || (*((_DWORD *)v7[0] + 9) & 0x10000) != 0 )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_4:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v7[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  v4 = *((_QWORD *)v3 + 122);
  v5 = *(_DWORD *)(v4 + 152);
  if ( (v5 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v3, *(_QWORD *)(v4 + 160));
    v3 = v7[0];
  }
  if ( (v5 & 0x2000) != 0 )
    GreDCSelectPen(v3, *(_QWORD *)(*((_QWORD *)v3 + 122) + 168LL));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v8, v7);
  if ( !*(_QWORD *)&v8[1] )
  {
    EngSetLastError(8u);
    DC::vDestroy(v7[0]);
    EPATHOBJ::vUnlock((EPATHOBJ *)v8);
    CAutoTGO::vUnguard((CAutoTGO *)v9);
    goto LABEL_4;
  }
  DC::QuickInitXform(v7[0], &v10, 516LL);
  EPATHOBJ::vCloseAllFigures((EPATHOBJ *)v8);
  v6 = EPATHOBJ_bStrokeAndOrFill(v8, (POINTL **)v7, (LINEATTRS *)((char *)v7[0] + 208), (XFORMOBJ *)&v10, 3u);
  DC::vDestroy(v7[0]);
  EPATHOBJ::vUnlock((EPATHOBJ *)v8);
  CAutoTGO::vUnguard((CAutoTGO *)v9);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v7);
  return v6;
}
