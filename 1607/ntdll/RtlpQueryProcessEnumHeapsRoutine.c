/*
 * XREFs of RtlpQueryProcessEnumHeapsRoutine @ 0x180096350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18006DF7C (RtlpCommitQueryDebugInfo.c)
 *     RtlHpQuerySegmentHeapRoutine @ 0x18008A390 (RtlHpQuerySegmentHeapRoutine.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpQueryProcessEnumHeapsRoutine(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rsi
  char *DebugInfo; // rax
  char *v5; // rbx
  __int64 result; // rax
  __int64 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx

  v2 = (_DWORD *)a2[14];
  DebugInfo = RtlpCommitQueryDebugInfo(a2, 0x58u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  memset(DebugInfo, 0, 0x58uLL);
  result = RtlHpQuerySegmentHeapRoutine(a1, v5);
  if ( (int)result >= 0 )
  {
    ++*v2;
  }
  else
  {
    *(_QWORD *)v5 = a1;
    *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v5 + 6) = 16;
    *((_WORD *)v5 + 7) = *(_WORD *)(a1 + 304);
    v7 = *(__int64 **)(a1 + 288);
    if ( v7 != (__int64 *)(a1 + 288) )
    {
      v8 = *((_QWORD *)v5 + 3);
      do
      {
        v8 += (unsigned int)((*((_DWORD *)v7 + 8) - *((_DWORD *)v7 + 14)) << 12);
        *((_QWORD *)v5 + 3) = v8;
        v7 = (__int64 *)*v7;
      }
      while ( v7 != (__int64 *)(a1 + 288) );
    }
    if ( *(_DWORD *)(a1 + 16) == -571548178
      || (*(_BYTE *)(a1 + 386) != 2 ? (v10 = 0LL) : (v10 = *(_QWORD *)(a1 + 376)), !v10) )
    {
      v9 = 0LL;
    }
    else
    {
      v9 = *(_QWORD *)(v10 + 40) - v10;
    }
    *((_QWORD *)v5 + 3) += v9;
    *((_QWORD *)v5 + 2) = *((_QWORD *)v5 + 3) - 16LL * *(_QWORD *)(a1 + 192);
    ++*v2;
    return 0LL;
  }
  return result;
}
