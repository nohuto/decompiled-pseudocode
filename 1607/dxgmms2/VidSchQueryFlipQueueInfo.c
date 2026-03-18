/*
 * XREFs of VidSchQueryFlipQueueInfo @ 0x1C00678B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryFlipQueueInfo(__int64 a1, _DWORD *a2)
{
  int v2; // eax
  __int64 v4; // rax

  if ( a1 && a2 )
  {
    v2 = 0;
    if ( (*(_BYTE *)(a1 + 2136) & 0x50) == 0x50 )
      v2 = 31;
    a2[2] &= 1u;
    *a2 = 0;
    a2[1] = v2;
    a2[2] ^= (a2[2] ^ (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1516LL) >> 2)) & 1;
    return 0LL;
  }
  else
  {
    v4 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v4 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v4);
    return 3221225485LL;
  }
}
