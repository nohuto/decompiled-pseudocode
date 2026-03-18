/*
 * XREFs of xxxEndPaint @ 0x1C0100BCC
 * Callers:
 *     NtUserBeginPaint @ 0x1C0054280 (NtUserBeginPaint.c)
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C010048C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     ?xxxDWP_Paint@@YAXPEAUtagWND@@@Z @ 0x1C0100A90 (-xxxDWP_Paint@@YAXPEAUtagWND@@@Z.c)
 *     NtUserEndPaint @ 0x1C0100AF0 (NtUserEndPaint.c)
 *     xxxTooltipWndProc @ 0x1C011F2F0 (xxxTooltipWndProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C020E6B8 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxSBWndProc @ 0x1C022CE10 (xxxSBWndProc.c)
 * Callees:
 *     InternalInvalidate3 @ 0x1C005AD8C (InternalInvalidate3.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     zzzInternalShowCaret @ 0x1C00ABA64 (zzzInternalShowCaret.c)
 */

__int64 __fastcall xxxEndPaint(struct tagWND *a1, _QWORD *a2)
{
  _BOOL8 v3; // r9

  ReleaseCacheDC(*a2, 1LL);
  if ( (*((_BYTE *)a1 + 44) & 2) != 0 )
  {
    if ( ghrgnUpdateSave )
    {
      InternalInvalidate3(a1, ghrgnUpdateSave, (unsigned int)gRdwFlags, v3);
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
  if ( a1 == *(struct tagWND **)(*(_QWORD *)(gptiCurrent + 384LL) + 256LL) )
    zzzInternalShowCaret();
  return 1LL;
}
