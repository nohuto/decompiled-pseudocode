/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00DC9C0
 * Callers:
 *     SuspendThreadQueue @ 0x1C000D4B0 (SuspendThreadQueue.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     DestroyThreadsMessages @ 0x1C00DC900 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00DC980 (FreeMessageList.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C01007F8 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C013F3DC (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
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
