/*
 * XREFs of VidSchQueryFlipQueueInfo @ 0x1C005FF50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchQueryFlipQueueInfo(__int64 a1, _DWORD *a2, __int64 a3)
{
  int v3; // eax
  __int64 v5; // rax

  if ( a1 && a2 )
  {
    v3 = 0;
    if ( (*(_DWORD *)(a1 + 2096) & 0x120) == 0x120 )
      v3 = 31;
    a2[1] = v3;
    if ( (*(_BYTE *)(a1 + 2096) & 0x90) == 0x90 )
      *a2 = *(_DWORD *)(a1 + 2124);
    else
      *a2 = 0;
    a2[2] &= 1u;
    a2[2] ^= (a2[2] ^ (*(_DWORD *)(*(_QWORD *)(a1 + 16) + 1380LL) >> 2)) & 1;
    return 0LL;
  }
  else
  {
    v5 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a2);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v5);
    return 3221225485LL;
  }
}
