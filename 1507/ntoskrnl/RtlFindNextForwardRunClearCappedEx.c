/*
 * XREFs of RtlFindNextForwardRunClearCappedEx @ 0x140063DF0
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x140063BD0 (MiScanNonPagedPoolVa.c)
 *     MiScanLeafNonPagedPool @ 0x140063F60 (MiScanLeafNonPagedPool.c)
 *     RtlFindNextForwardRunClearEx @ 0x14014D2A0 (RtlFindNextForwardRunClearEx.c)
 *     MiCheckPoolForContiguousPages @ 0x1401672C4 (MiCheckPoolForContiguousPages.c)
 *     IopAddPageToPageMap @ 0x1401F4364 (IopAddPageToPageMap.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearCappedEx(
        __int64 a1,
        unsigned __int64 i,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r10
  const signed __int64 *v6; // r8
  _DWORD *v7; // r11
  _DWORD *v8; // r9
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 j; // rax
  unsigned __int64 result; // rax
  _DWORD *v14; // r9

  v4 = *(_QWORD *)a1;
  if ( *(_QWORD *)a1 > i )
  {
    v6 = *(const signed __int64 **)(a1 + 8);
    v7 = (_DWORD *)v6 + ((v4 - 1) >> 5);
    v8 = (_DWORD *)v6 + (i >> 5);
    if ( v8 != v7 )
    {
      v9 = i & 0x1F;
      if ( (*v8 | dword_140295010[v9]) == -1 )
      {
        ++v8;
        for ( i = i - v9 + 32; v8 < v7; i += 32LL )
        {
          if ( *v8 != -1 )
            break;
          ++v8;
        }
      }
    }
    for ( ; i < v4; ++i )
    {
      if ( _bittest64(v6, i) != 1 )
        break;
    }
    v10 = 0LL;
    if ( v8 != v7 )
    {
      v11 = i & 0x1F;
      if ( (~dword_140295010[v11] & *v8) == 0 )
      {
        v10 = 32 - v11;
        if ( v11 == 33 )
        {
LABEL_13:
          *a4 = i;
          return v10;
        }
        v14 = v8 + 1;
        while ( v14 < v7 )
        {
          if ( *v14 )
            break;
          ++v14;
          v10 += 32LL;
          if ( v10 == -1LL )
            goto LABEL_13;
        }
      }
    }
    for ( j = v10 + i; j < *(_QWORD *)a1; ++v10 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v10 == -1LL )
        break;
      ++j;
    }
    goto LABEL_13;
  }
  result = 0LL;
  *a4 = i;
  return result;
}
