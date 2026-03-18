/*
 * XREFs of GreGetTextMetricsW @ 0x1C0011A94
 * Callers:
 *     _GetTextMetricsW @ 0x1C0011560 (_GetTextMetricsW.c)
 *     NtGdiGetTextMetricsW @ 0x1C00119F0 (NtGdiGetTextMetricsW.c)
 * Callees:
 *     bGetTextMetrics @ 0x1C0011B34 (bGetTextMetrics.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C002D6C4 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C002EAC0 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C004A058 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1C025B200 (--1-$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C025B550 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall GreGetTextMetricsW(HDC a1, __int64 a2)
{
  unsigned int TextMetrics; // edi
  int v4; // eax
  __int64 v5; // rbx
  _QWORD v7[2]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v8[40]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF

  TextMetrics = 0;
  DCOBJ::DCOBJ((DCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = RFONTOBJ::bInit((RFONTOBJ *)&v9, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v9;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)(v9 + 528));
    if ( v5 )
      TextMetrics = bGetTextMetrics(&v9, v7, a2);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v9);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v7);
  UnexpectedThreadTerminationHandler<DWMSPRITEREF>::~UnexpectedThreadTerminationHandler<DWMSPRITEREF>(v8);
  return TextMetrics;
}
