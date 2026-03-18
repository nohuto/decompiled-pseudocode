/*
 * XREFs of NtGdiWidenPath @ 0x14011ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1401183C8 (-bComputeWidenedBounds@pathwide@@YA_NAEAU_RECTFX@@AEBU2@AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z @ 0x14011AF88 (-vReComputeBounds@pathwide@@YAXAEAVEPATHOBJ@@@Z.c)
 */

__int64 __fastcall NtGdiWidenPath(HDC a1)
{
  unsigned int v1; // edi
  const struct _LINEATTRS *v3; // rbx
  struct EPATHOBJ *v4; // rdx
  ULONG v5; // ecx
  struct _LINEATTRS *v6[2]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v7[8]; // [rsp+30h] [rbp-D0h] BYREF
  struct _RECTFX *v8; // [rsp+38h] [rbp-C8h]
  _BYTE v9[48]; // [rsp+80h] [rbp-80h] BYREF
  DC *v10[14]; // [rsp+B0h] [rbp-50h] BYREF
  struct _RECTFX v11; // [rsp+138h] [rbp+38h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v10, a1);
  if ( !v10[0] )
  {
    v5 = 87;
LABEL_13:
    EngSetLastError(v5);
    goto LABEL_14;
  }
  if ( !(unsigned int)DC::bInactive(v10[0]) )
  {
    v5 = 1003;
    goto LABEL_13;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v7, v10);
  if ( !v8 )
    goto LABEL_4;
  DC::QuickInitXform(v10[0], &v11, 516LL);
  v1 = 1;
  v3 = (const struct _LINEATTRS *)((char *)v10[0] + 208);
  if ( (*((_DWORD *)v10[0] + 52) & 1) == 0 )
  {
    if ( (*(_DWORD *)(*((_QWORD *)v10[0] + 18) + 40LL) & 0x800) == 0 )
    {
      EngSetLastError(0x3EBu);
      XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v7);
      goto LABEL_14;
    }
    v3 = (const struct _LINEATTRS *)&unk_140360B58;
  }
  *(_OWORD *)v6 = 0LL;
  if ( pathwide::bComputeWidenedBounds((pathwide *)v6, v8 + 3, &v11, (const struct EXFORMOBJ *)v3) )
  {
    v8[3] = *(struct _RECTFX *)v6;
    if ( pathwide::bWiden((pathwide *)v7, (struct EPATHOBJ *)v7, (struct EPATHOBJ *)&v11, v3) )
    {
      pathwide::vReComputeBounds((pathwide *)v7, v4);
      goto LABEL_5;
    }
LABEL_4:
    EngSetLastError(8u);
    v1 = 0;
LABEL_5:
    EPATHOBJ::vUnlock((EPATHOBJ *)v7);
    CAutoTGO::vUnguard((CAutoTGO *)v9);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
    return v1;
  }
  EngSetLastError(0x216u);
  EPATHOBJ::vUnlock((EPATHOBJ *)v7);
  CAutoTGO::vUnguard((CAutoTGO *)v9);
LABEL_14:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v10);
  return 0LL;
}
