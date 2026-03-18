/*
 * XREFs of bDeleteDCInternal @ 0x1C006BEB0
 * Callers:
 *     ?vCleanupDCs@@YAXK@Z @ 0x1C0037610 (-vCleanupDCs@@YAXK@Z.c)
 *     hdcOpenDCW @ 0x1C0042710 (hdcOpenDCW.c)
 *     GreDeleteDC @ 0x1C006BEA0 (GreDeleteDC.c)
 * Callees:
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0030EC0 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00316F0 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z @ 0x1C0032210 (-bDeleteDCInternalWorker@@YAHPEAVXDCOBJ@@HHH@Z.c)
 *     UserReleaseDC @ 0x1C0042CF0 (UserReleaseDC.c)
 *     EngSetLastError @ 0x1C0076470 (EngSetLastError.c)
 */

__int64 __fastcall bDeleteDCInternal(HDC a1, int a2, int a3, int a4)
{
  unsigned int v8; // ebx
  int v9; // esi
  DC *v11[7]; // [rsp+20h] [rbp-38h] BYREF

  v11[0] = 0LL;
  v11[1] = 0LL;
  v8 = 0;
  v9 = 0;
  XDCOBJ::vLock((XDCOBJ *)v11, a1);
  if ( v11[0]
    && (a2
     || a3
     || a4
     || *(_WORD *)(*((_QWORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 3 * (unsigned __int16)a1) + 12LL) <= 1u) )
  {
    v8 = bDeleteDCInternalWorker(v11, a2, a3, a4);
    if ( !v8 && !a2 )
      v9 = 1;
  }
  else
  {
    EngSetLastError(0xAAu);
  }
  XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v11);
  if ( v9 )
    return (unsigned int)UserReleaseDC((__int64)a1);
  return v8;
}
