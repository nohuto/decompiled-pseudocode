/*
 * XREFs of ZombieCursor @ 0x1C01EA4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlinkCursor@@YAXPEAUtagCURSOR@@@Z @ 0x1C0123FE4 (-UnlinkCursor@@YAXPEAUtagCURSOR@@@Z.c)
 */

__int64 __fastcall ZombieCursor(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rsi

  if ( (*(_DWORD *)(a1 + 80) & 0x100) != 0 )
    UnlinkCursor((struct tagCURSOR *)a1);
  if ( (*(_DWORD *)(a1 + 80) & 8) != 0 )
  {
    v2 = 0;
    if ( *(int *)(a1 + 88) > 0 )
    {
      v3 = 0LL;
      do
      {
        HMChangeOwnerPheProcess(
          gSharedInfo[1]
        + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)**(_DWORD **)(v3 + *(_QWORD *)(a1 + 96)),
          gptiRit);
        ++v2;
        v3 += 8LL;
      }
      while ( v2 < *(_DWORD *)(a1 + 88) );
    }
  }
  return HMChangeOwnerPheProcess(
           gSharedInfo[1] + LODWORD(gSharedInfo[2]) * (unsigned int)(unsigned __int16)*(_DWORD *)a1,
           gptiRit);
}
