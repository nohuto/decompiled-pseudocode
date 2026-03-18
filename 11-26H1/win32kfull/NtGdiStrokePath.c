/*
 * XREFs of NtGdiStrokePath @ 0x1401129F0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?vDestroy@DC@@QEAAXXZ @ 0x1401142AC (-vDestroy@DC@@QEAAXXZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 */

__int64 __fastcall NtGdiStrokePath(HDC a1)
{
  ULONG v1; // ecx
  __int64 v3; // r8
  __int64 v4; // rdx
  unsigned int v5; // ebx
  DC *v6[14]; // [rsp+30h] [rbp-D0h] BYREF
  _BYTE v7[8]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v8; // [rsp+A8h] [rbp-58h]
  _BYTE v9[48]; // [rsp+F0h] [rbp-10h] BYREF
  struct _RECTFX v10; // [rsp+138h] [rbp+38h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v6, a1);
  if ( !v6[0] || (*((_DWORD *)v6[0] + 9) & 0x10000) != 0 )
  {
    v1 = 87;
LABEL_3:
    EngSetLastError(v1);
LABEL_4:
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
    return 0LL;
  }
  if ( !(unsigned int)DC::bInactive(v6[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  v4 = *(_QWORD *)(v3 + 976);
  if ( (*(_DWORD *)(v4 + 152) & 0x2000) != 0 )
    GreDCSelectPen(v3, *(_QWORD *)(v4 + 168));
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, (struct XDCOBJ *)v6);
  if ( !v8 )
  {
    EngSetLastError(8u);
    DC::vDestroy(v6[0]);
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
    goto LABEL_4;
  }
  DC::QuickInitXform(v6[0], &v10, 516LL);
  v5 = EPATHOBJ_bStrokeAndOrFill(
         (struct EPATHOBJ *)v7,
         (struct XDCOBJ *)v6,
         (LINEATTRS *)((char *)v6[0] + 208),
         &v10,
         1u);
  DC::vDestroy(v6[0]);
  EPATHOBJ::vUnlock((EPATHOBJ *)v7);
  CAutoTGO::vUnguard((CAutoTGO *)v9);
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v6);
  return v5;
}
