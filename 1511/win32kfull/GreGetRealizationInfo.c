/*
 * XREFs of GreGetRealizationInfo @ 0x1C0152330
 * Callers:
 *     NtGdiGetRealizationInfo @ 0x1C0022670 (NtGdiGetRealizationInfo.c)
 * Callees:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C0023A60 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C0027184 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C002DA58 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C002DA80 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO@@@Z @ 0x1C01510C8 (-GetRealizationInfo@RFONTOBJ@@QEAAHPEAUtagFONT_REALIZATION_INFO@@@Z.c)
 */

__int64 __fastcall GreGetRealizationInfo(HDC a1, struct tagFONT_REALIZATION_INFO *a2)
{
  unsigned int RealizationInfo; // edi
  int v4; // eax
  struct _FD_XFORM *v5; // rbx
  _QWORD v7[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FD_XFORM *v8; // [rsp+50h] [rbp+18h] BYREF

  RealizationInfo = 0;
  v7[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v7, a1);
  if ( v7[0] )
  {
    v4 = RFONTOBJ::bInit(&v8, (struct XDCOBJ *)v7, 0, 2u);
    v5 = v8;
    if ( v4 )
      GreAcquireSemaphore(*(_QWORD *)&v8[33].eXX);
    if ( v5 )
      RealizationInfo = RFONTOBJ::GetRealizationInfo((RFONTOBJ *)&v8, a2);
    XDCOBJ::vUnlockFast((XDCOBJ *)v7);
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v8);
  }
  return RealizationInfo;
}
