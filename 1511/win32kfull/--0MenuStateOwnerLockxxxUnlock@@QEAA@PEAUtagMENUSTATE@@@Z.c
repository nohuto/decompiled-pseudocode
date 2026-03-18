/*
 * XREFs of ??0MenuStateOwnerLockxxxUnlock@@QEAA@PEAUtagMENUSTATE@@@Z @ 0x1C013777C
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0061810 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     xxxDestroyWindow @ 0x1C0068F30 (xxxDestroyWindow.c)
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x1C0104D00 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     xxxMNEndMenuStateInternal @ 0x1C0137890 (xxxMNEndMenuStateInternal.c)
 *     xxxMNStartMenuState @ 0x1C01FD458 (xxxMNStartMenuState.c)
 * Callees:
 *     <none>
 */

MenuStateOwnerLockxxxUnlock *__fastcall MenuStateOwnerLockxxxUnlock::MenuStateOwnerLockxxxUnlock(
        MenuStateOwnerLockxxxUnlock *this,
        struct tagMENUSTATE *a2)
{
  *(_QWORD *)this = a2;
  if ( a2 )
  {
    if ( gptiCurrent == *((_QWORD *)a2 + 4) )
      ++*((_DWORD *)a2 + 10);
    else
      *(_QWORD *)this = 0LL;
  }
  return this;
}
