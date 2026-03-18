/*
 * XREFs of IsWindowShellCloaked @ 0x1C008B18C
 * Callers:
 *     xxxSetWindowData @ 0x1C0057B34 (xxxSetWindowData.c)
 *     xxxSetParentWorker @ 0x1C0088E64 (xxxSetParentWorker.c)
 *     xxxTrackPopupMenuEx @ 0x1C0134F0C (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C0055F24 (_GetWindowCompositionInfo.c)
 */

__int64 __fastcall IsWindowShellCloaked(__int64 a1, int a2)
{
  unsigned int v4; // ebx
  _DWORD v6[14]; // [rsp+20h] [rbp-38h] BYREF

  v4 = 0;
  while ( (unsigned int)GetWindowCompositionInfo(a1, (__int64)v6) )
  {
    if ( (v6[0] & 0x800) != 0 )
      return 1;
    if ( a2 )
      return v4;
    a1 = *(_QWORD *)(a1 + 88);
  }
  return v4;
}
