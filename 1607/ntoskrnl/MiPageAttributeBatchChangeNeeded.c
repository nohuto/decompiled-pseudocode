/*
 * XREFs of MiPageAttributeBatchChangeNeeded @ 0x140104D48
 * Callers:
 *     MiConvertContiguousPages @ 0x140104754 (MiConvertContiguousPages.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiSwitchToTransition @ 0x1401E8974 (MiSwitchToTransition.c)
 * Callees:
 *     MiChangePageAttribute @ 0x14001CC08 (MiChangePageAttribute.c)
 */

__int64 __fastcall MiPageAttributeBatchChangeNeeded(__int64 a1, int a2)
{
  char v3; // dl
  unsigned int v4; // eax
  signed __int32 v5[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(unsigned __int8 *)(a1 + 34) >> 6 == a2 )
    return 0LL;
  if ( a2 == 1 )
  {
    if ( (*(_BYTE *)(a1 + 34) & 0xC0) == 0xC0
      || (v3 = *(_BYTE *)(a1 + 31) & 0xF, _InterlockedOr(v5, 0), v4 = ((_BYTE)KiTbFlushTimeStamp - v3) & 0xF, v4 > 2)
      || (v3 & 1) == 0 && v4 >= 2 )
    {
      MiChangePageAttribute(a1, 1u, 4);
      return 0LL;
    }
  }
  return 1LL;
}
