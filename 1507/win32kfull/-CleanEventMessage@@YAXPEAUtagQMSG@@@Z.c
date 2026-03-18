/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00D98E0
 * Callers:
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C0043194 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C00724A0 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     DestroyThreadsMessages @ 0x1C00D9830 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00D98A0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C00E77B0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C0115CC4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1)
{
  switch ( *((_DWORD *)a1 + 22) )
  {
    case 3:
    case 4:
      Win32FreePool(*((_QWORD *)a1 + 4));
      break;
    case 9:
      if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
        UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
      break;
    case 0xC:
      DestroyNotify(*((_QWORD *)a1 + 5));
      break;
    case 0x11:
      if ( *((_QWORD *)a1 + 4) == 1LL )
        Win32FreePool(*((_QWORD *)a1 + 5));
      break;
    case 0x14:
      FreePointerMessageParams(a1);
      break;
    case 0x17:
      Win32FreePool(**((_QWORD **)a1 + 4));
      Win32FreePool(*((_QWORD *)a1 + 4));
      break;
  }
}
