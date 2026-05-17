/*
 * XREFs of RtlpQueryProcessEnumHeapsRoutine @ 0x180094BA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCommitQueryDebugInfo @ 0x18006CDEC (RtlpCommitQueryDebugInfo.c)
 *     RtlHpQuerySegmentHeapRoutine @ 0x180078338 (RtlHpQuerySegmentHeapRoutine.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpQueryProcessEnumHeapsRoutine(__int64 a1, _QWORD *a2)
{
  _DWORD *v2; // rsi
  char *DebugInfo; // rax
  char *v5; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rax

  v2 = (_DWORD *)a2[14];
  DebugInfo = RtlpCommitQueryDebugInfo(a2, 0x58u);
  v5 = DebugInfo;
  if ( !DebugInfo )
    return 3221225495LL;
  memset(DebugInfo, 0, 0x58uLL);
  result = RtlHpQuerySegmentHeapRoutine(a1, v5, v7);
  if ( (int)result < 0 )
  {
    *(_QWORD *)v5 = a1;
    *((_DWORD *)v5 + 2) = *(_DWORD *)(a1 + 112);
    *((_WORD *)v5 + 6) = 16;
    *((_WORD *)v5 + 7) = *(_WORD *)(a1 + 304);
    v8 = *(__int64 **)(a1 + 288);
    if ( v8 != (__int64 *)(a1 + 288) )
    {
      v9 = *((_QWORD *)v5 + 3);
      do
      {
        v9 += (unsigned int)((*((_DWORD *)v8 + 8) - *((_DWORD *)v8 + 14)) << 12);
        *((_QWORD *)v5 + 3) = v9;
        v8 = (__int64 *)*v8;
      }
      while ( v8 != (__int64 *)(a1 + 288) );
    }
    if ( *(_DWORD *)(a1 + 16) == -571548178
      || (*(_BYTE *)(a1 + 378) != 2 ? (v10 = 0LL) : (v10 = *(_QWORD *)(a1 + 368)), !v10) )
    {
      v11 = 0LL;
    }
    else
    {
      v11 = *(_QWORD *)(v10 + 40) - v10;
    }
    *((_QWORD *)v5 + 3) += v11;
    *((_QWORD *)v5 + 2) = *((_QWORD *)v5 + 3) - 16LL * *(_QWORD *)(a1 + 192);
    ++*v2;
    return 0LL;
  }
  else
  {
    ++*v2;
  }
  return result;
}
