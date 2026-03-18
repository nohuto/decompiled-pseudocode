/*
 * XREFs of SameCoordinateSpace @ 0x1C0047FB0
 * Callers:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0047D40 (TransformRectBetweenCoordinateSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SameCoordinateSpace(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 CurrentProcessWin32Process; // rsi
  int v5; // ecx
  int v6; // edx

  v2 = 0;
  CurrentProcessWin32Process = a1;
  if ( !a1 )
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(0LL);
  if ( !a2 )
    a2 = PsGetCurrentProcessWin32Process(a1);
  v5 = *(_DWORD *)(a2 + 776);
  v6 = *(_DWORD *)(CurrentProcessWin32Process + 776);
  if ( ((v6 ^ v5) & 0x4000) == 0 && (((unsigned __int16)v6 ^ (unsigned __int16)v5) & 0x2000) == 0 )
    return 1;
  return v2;
}
