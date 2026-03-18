/*
 * XREFs of ?CleanEventMessage@@YAXPEAUtagQMSG@@@Z @ 0x1C00FDF30
 * Callers:
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     ?RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z @ 0x1C00DB608 (-RedistributeInput@@YAXPEAUtagQMSG@@PEAUtagQ@@PEAUtagTHREADINFO@@@Z.c)
 *     DestroyThreadsMessages @ 0x1C00FDE00 (DestroyThreadsMessages.c)
 *     FreeMessageList @ 0x1C00FDEB0 (FreeMessageList.c)
 *     SuspendThreadQueue @ 0x1C01142D0 (SuspendThreadQueue.c)
 *     ?_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z @ 0x1C01470D4 (-_HandleDelegatedInputWorker@@YAPEAUtagQMSG@@PEAUtagTHREADINFO@@KPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CleanEventMessage(struct tagQMSG *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx

  v4 = (unsigned int)(*((_DWORD *)a1 + 24) - 3);
  if ( *((_DWORD *)a1 + 24) == 3 || (v4 = (unsigned int)(*((_DWORD *)a1 + 24) - 4), *((_DWORD *)a1 + 24) == 4) )
  {
    v5 = *((_QWORD *)a1 + 4);
    goto LABEL_13;
  }
  if ( *((_DWORD *)a1 + 24) == 9 )
  {
    if ( (unsigned int)(*((_DWORD *)a1 + 6) - 26) <= 1 )
      UserDeleteAtom(*((unsigned __int16 *)a1 + 20));
    return;
  }
  if ( *((_DWORD *)a1 + 24) == 12 )
  {
    DestroyNotify(*((_QWORD *)a1 + 5));
    return;
  }
  v4 = (unsigned int)(*((_DWORD *)a1 + 24) - 17);
  switch ( *((_DWORD *)a1 + 24) )
  {
    case 0x11:
      if ( *((_QWORD *)a1 + 4) != 1LL )
        return;
      v5 = *((_QWORD *)a1 + 5);
LABEL_13:
      Win32FreePool(v5, v4, a3);
      return;
    case 0x14:
      FreePointerMessageParams(a1);
      return;
    case 0x17:
      Win32FreePool(**((_QWORD **)a1 + 4), (unsigned int)(*((_DWORD *)a1 + 24) - 20), a3);
      v5 = *((_QWORD *)a1 + 4);
      goto LABEL_13;
  }
}
