/*
 * XREFs of GreGetTextMetricsW @ 0x1C00E7DA8
 * Callers:
 *     NtGdiGetTextMetricsW @ 0x1C00225C0 (NtGdiGetTextMetricsW.c)
 *     _GetTextMetricsW @ 0x1C00E7D40 (_GetTextMetricsW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C002D9CC (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0036AC0 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     bGetTextMetrics @ 0x1C00E7E3C (bGetTextMetrics.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, __int64 a2)
{
  unsigned int TextMetrics; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FD_XFORM *v8; // [rsp+50h] [rbp+18h] BYREF

  TextMetrics = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = RFONTOBJ::bInit(&v8, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v8;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v8[33].eXX);
    if ( v5 )
      TextMetrics = bGetTextMetrics(&v8, v7, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  return TextMetrics;
}
