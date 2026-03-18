/*
 * XREFs of IsWindowShellCloaked @ 0x1C0043140
 * Callers:
 *     xxxSetParentWorker @ 0x1C0042BCC (xxxSetParentWorker.c)
 *     xxxSetWindowData @ 0x1C0067F10 (xxxSetWindowData.c)
 *     xxxTrackPopupMenuEx @ 0x1C0108A2C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C00633C4 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall IsWindowShellCloaked(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  while ( (unsigned int)GetWindowCompositionInfo(a1, v6) )
  {
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v4;
    a1 = *(_QWORD *)(a1 + 88);
  }
  return v4;
}
