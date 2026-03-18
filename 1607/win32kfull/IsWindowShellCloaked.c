/*
 * XREFs of IsWindowShellCloaked @ 0x1C00DC56C
 * Callers:
 *     xxxSetWindowData @ 0x1C00A11FC (xxxSetWindowData.c)
 *     xxxSetParentWorker @ 0x1C00DD234 (xxxSetParentWorker.c)
 *     xxxTrackPopupMenuEx @ 0x1C013BE70 (xxxTrackPopupMenuEx.c)
 * Callees:
 *     _GetWindowCompositionInfo @ 0x1C007251C (_GetWindowCompositionInfo.c)
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
