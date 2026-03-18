/*
 * XREFs of NtGdiFlattenPath @ 0x140259C30
 * Callers:
 *     <none>
 * Callees:
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1400AFE30 (--0APIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x1400B0D34 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ?bInactive@DC@@QEBAHXZ @ 0x1401142D4 (-bInactive@DC@@QEBAHXZ.c)
 *     ??1XEPATHOBJ@@QEAA@XZ @ 0x1401142FC (--1XEPATHOBJ@@QEAA@XZ.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 */

__int64 __fastcall NtGdiFlattenPath(HDC a1)
{
  ULONG v1; // ecx
  DC *v3[14]; // [rsp+20h] [rbp-E0h] BYREF
  _BYTE v4[8]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v5; // [rsp+98h] [rbp-68h]
  _BYTE v6[48]; // [rsp+E0h] [rbp-20h] BYREF

  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v3, a1);
  if ( !v3[0] )
  {
    v1 = 6;
LABEL_3:
    EngSetLastError(v1);
    goto LABEL_10;
  }
  if ( !(unsigned int)DC::bInactive(v3[0]) )
  {
    v1 = 1003;
    goto LABEL_3;
  }
  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v4, v3);
  if ( v5 && EPATHOBJ::bFlatten((EPATHOBJ *)v4) )
  {
    XEPATHOBJ::~XEPATHOBJ((XEPATHOBJ *)v4);
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
    return 1LL;
  }
  EngSetLastError(8u);
  EPATHOBJ::vUnlock((EPATHOBJ *)v4);
  CAutoTGO::vUnguard((CAutoTGO *)v6);
LABEL_10:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v3);
  return 0LL;
}
