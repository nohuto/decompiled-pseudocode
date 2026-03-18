/*
 * XREFs of bDeleteDCInternal @ 0x1C005A4D0
 * Callers:
 *     hdcOpenDCW @ 0x1C0020120 (hdcOpenDCW.c)
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C005A11C (-vCleanupDCs@@YAXK@Z.c)
 *     GreDeleteDC @ 0x1C005A4C0 (GreDeleteDC.c)
 * Callees:
 *     UserReleaseDC @ 0x1C00206D0 (UserReleaseDC.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C002549C (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z @ 0x1C002AEF0 (-GetEntryObject@GdiHandleManager@@QEAAPEAVOBJECT@@I@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032CE0 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     EngSetLastError @ 0x1C0079760 (EngSetLastError.c)
 *     ??1?$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ @ 0x1C00BCFD0 (--1-$UnexpectedThreadTerminationHandler@VBRUSHSELOBJ@@@@QEAA@XZ.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@IEAAXXZ @ 0x1C00BD410 (-vUnlockNoNullSet@XDCOBJ@@IEAAXXZ.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  int v9; // ebp
  bool v10; // cl
  DC *v12[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v13[32]; // [rsp+30h] [rbp-48h] BYREF

  v8 = 0;
  v9 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v12, a1);
  if ( v12[0]
    && ((v10 = *((_WORD *)GdiHandleManager::GetEntryObject(
                            (GdiHandleEntryDirectory **)WPP_MAIN_CB.Dpc.DeferredContext,
                            (unsigned __int16)a1 | ((unsigned int)a1 >> 8) & 0xFF0000)
               + 6) > 1u,
         a2)
     || a3
     || a4
     || !v10) )
  {
    v8 = bDeleteDCInternalWorker(v12, a2, a3, a4);
    if ( !v8 && !a2 )
      v9 = 1;
  }
  else
  {
    EngSetLastError(0xAAu);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v12);
  UnexpectedThreadTerminationHandler<BRUSHSELOBJ>::~UnexpectedThreadTerminationHandler<BRUSHSELOBJ>(v13);
  if ( v9 )
    return (unsigned int)UserReleaseDC((__int64)a1);
  return v8;
}
