/*
 * XREFs of ?ResetMouseHover@@YAXPEAUtagDESKTOP@@UtagPOINT@@@Z @ 0x1C010A8C8
 * Callers:
 *     ?xxxScanSysQueue@@YA?AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAPEAUtagQMSG@@@Z @ 0x1C0088F70 (-xxxScanSysQueue@@YA-AW4_SCANSYSQUEUERESULT@@PEAUtagTHREADINFO@@PEAUtagMSG@@PEAUtagWND@@IIKKPEAP.c)
 *     TrackMouseEvent @ 0x1C010A7AC (TrackMouseEvent.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00ABC2C (_SetSystemTimer.c)
 */

void __fastcall ResetMouseHover(struct tagDESKTOP *a1, struct tagPOINT a2)
{
  unsigned int v3; // r8d
  unsigned int v4; // edx

  SetSystemTimer(*((_QWORD *)a1 + 22), 65530LL, *((_DWORD *)a1 + 51), (__int64)xxxSystemTimerProc, 0);
  v3 = (unsigned int)gcyMouseHover >> 1;
  v4 = (unsigned int)gcxMouseHover >> 1;
  *((_DWORD *)a1 + 48) = a2.y - ((unsigned int)gcyMouseHover >> 1);
  *((_DWORD *)a1 + 49) = v4 + a2.x;
  *((_DWORD *)a1 + 47) = a2.x - v4;
  *((_DWORD *)a1 + 50) = v3 + a2.y;
}
