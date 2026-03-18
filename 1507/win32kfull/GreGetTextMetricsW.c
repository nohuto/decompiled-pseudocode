/*
 * XREFs of GreGetTextMetricsW @ 0x1C0038C58
 * Callers:
 *     NtGdiGetTextMetricsW @ 0x1C0029DF0 (NtGdiGetTextMetricsW.c)
 *     _GetTextMetricsW @ 0x1C0038BF0 (_GetTextMetricsW.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002B2F0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002F3C8 (--1RFONTOBJ@@QEAA@XZ.c)
 *     bGetTextMetrics @ 0x1C0038CEC (bGetTextMetrics.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C025E20C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QEAA@XZ @ 0x1C025E250 (--1DCOBJ@@QEAA@XZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, __int64 a2)
{
  unsigned int TextMetrics; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  _QWORD v7[7]; // [rsp+20h] [rbp-38h] BYREF
  struct _FD_XFORM *v8; // [rsp+70h] [rbp+18h] BYREF

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
  DCOBJ::~DCOBJ((DCOBJ *)v7);
  return TextMetrics;
}
