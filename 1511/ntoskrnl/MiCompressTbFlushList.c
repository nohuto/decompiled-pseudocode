/*
 * XREFs of MiCompressTbFlushList @ 0x1400D92A0
 * Callers:
 *     MiDeleteVirtualAddresses @ 0x140057CB0 (MiDeleteVirtualAddresses.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiRevertValidPte @ 0x14005D150 (MiRevertValidPte.c)
 *     MiMoveDirtyBitsToPfns @ 0x14005E3A0 (MiMoveDirtyBitsToPfns.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiCompressTbFlushList(__int64 a1)
{
  int v1; // edi
  _QWORD *result; // rax
  unsigned int v3; // r10d
  __int64 v5; // rdx
  __int64 v6; // r9
  __int64 v7; // r11
  __int64 v8; // rdx
  __int64 v9; // rcx

  v1 = 0;
  result = (_QWORD *)(a1 + 24);
  v3 = 1;
  if ( *(_DWORD *)(a1 + 12) > 1u )
  {
    while ( 1 )
    {
      v5 = *(_QWORD *)(a1 + 8LL * v3 + 24);
      v6 = a1 + 8LL * v3;
      if ( (v5 & 0x800) != 0 )
        goto LABEL_9;
      if ( (*result & 0x800LL) != 0 )
        goto LABEL_9;
      v7 = *result & 0x7FFLL;
      if ( (v5 & 0xFFFFFFFFFFFFF000uLL) - (v7 << 12) - (*result & 0xFFFFFFFFFFFFF000uLL) != 4096 || v7 == 2047 )
        goto LABEL_9;
      v8 = *(_QWORD *)(v6 + 24);
      if ( v7 + (unsigned __int64)(v8 & 0x7FF) + 1 > 0x7FF )
        break;
      v9 = *result ^ ((unsigned __int16)*result ^ (unsigned __int16)(*result + v8 + 1)) & 0x7FF;
      ++v1;
LABEL_10:
      ++v3;
      *result = v9;
      if ( v3 >= *(_DWORD *)(a1 + 12) )
      {
        if ( v1 )
          *(_DWORD *)(a1 + 12) -= v1;
        return result;
      }
    }
    *(_QWORD *)(v6 + 24) = ((2047 - v7) << 12)
                         + (v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(v8 - (2047 - v7))) & 0x7FF);
    *result |= 0x7FFuLL;
LABEL_9:
    v9 = *(_QWORD *)(v6 + 24);
    ++result;
    goto LABEL_10;
  }
  return result;
}
