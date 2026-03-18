/*
 * XREFs of ?DEC_SHARE_REF_CNT_LAZY0@@YAXPEAVBRUSH@@@Z @ 0x1C00B58C0
 * Callers:
 *     GreCreateDisplayDC @ 0x1C0025FD0 (GreCreateDisplayDC.c)
 *     ?bCleanDC@XDCOBJ@@QEAAHH@Z @ 0x1C0030F10 (-bCleanDC@XDCOBJ@@QEAAHH@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     GreRestoreDC @ 0x1C0032D00 (GreRestoreDC.c)
 *     GreDCSelectPen @ 0x1C0048F10 (GreDCSelectPen.c)
 *     ?hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKPEAPEAU1@@Z @ 0x1C0056E20 (-hCreateHDEV@@YAPEAUHDEV__@@PEAUtagGRAPHICS_DEVICE@@PEAU_DRV_NAMES@@PEAU_devicemodeW@@PEAXKKHHKP.c)
 *     GreDCSelectBrush @ 0x1C006E4B0 (GreDCSelectBrush.c)
 *     ?DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z @ 0x1C00BAC28 (-DrvCreateCloneHDEV@@YAPEAUHDEV__@@PEAU1@K@Z.c)
 * Callees:
 *     DEC_SHARE_REF_CNT @ 0x1C0031C80 (DEC_SHARE_REF_CNT.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x1C0031D80 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x1C0031F20 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?bValid@HANDLELOCK@@QEAAHXZ @ 0x1C0031F80 (-bValid@HANDLELOCK@@QEAAHXZ.c)
 *     ?bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z @ 0x1C0031F98 (-bLockHobj@HANDLELOCK@@QEAAHPEAUHOBJ__@@E@Z.c)
 *     bDeleteBrush @ 0x1C0045A40 (bDeleteBrush.c)
 */

void __fastcall DEC_SHARE_REF_CNT_LAZY0(struct HOBJ__ **a1)
{
  struct HOBJ__ *v1; // rdi
  int v2; // ebx
  _DWORD *v3; // rax
  __int64 v4; // [rsp+28h] [rbp-20h] BYREF
  int v5; // [rsp+30h] [rbp-18h]
  int v6; // [rsp+3Ch] [rbp-Ch]

  if ( a1 )
  {
    v1 = *a1;
    if ( (unsigned __int16)DEC_SHARE_REF_CNT(a1) == 1 )
    {
      v2 = 0;
      v5 = 0;
      v4 = 0LL;
      v6 = 0;
      HANDLELOCK::bLockHobj((HANDLELOCK *)&v4, v1, 16);
      if ( HANDLELOCK::bValid((HANDLELOCK *)&v4) )
      {
        v3 = *(_DWORD **)(*(_QWORD *)v4 + 56LL);
        if ( v3 )
          v2 = *v3 & 2;
        HANDLELOCK::vUnlock((HANDLELOCK *)&v4);
      }
      if ( v2 )
        bDeleteBrush(v1, 0);
      HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v4);
    }
  }
}
