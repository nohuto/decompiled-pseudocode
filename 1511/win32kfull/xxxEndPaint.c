/*
 * XREFs of xxxEndPaint @ 0x1C00C81F8
 * Callers:
 *     NtUserBeginPaint @ 0x1C0067B20 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C006F67C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C00C80C4 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C00C8120 (NtUserEndPaint.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0215850 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C0234280 (xxxSBWndProc.c)
 * Callees:
 *     InternalInvalidate3 @ 0x1C0052F58 (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     zzzInternalShowCaret @ 0x1C00CA470 (zzzInternalShowCaret.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  ReleaseCacheDC(*a2, 1LL);
  if ( (*((_BYTE *)a1 + 44) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, ghrgnUpdateSave, gRdwFlags);
      if ( !--gnUpdateSave )
      {
        GreDeleteObject(ghrgnUpdateSave);
        ghrgnUpdateSave = 0LL;
        gRdwFlags = 0;
      }
    }
    SetOrClrWF(0, a1, 0x402u, 1);
  }
  SetOrClrWF(0, a1, 0x401u, 1);
  SetOrClrWF(0, a1, 0x404u, 1);
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 248LL) )
    zzzInternalShowCaret();
  return 1LL;
}
