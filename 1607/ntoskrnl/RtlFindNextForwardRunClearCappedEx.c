/*
 * XREFs of RtlFindNextForwardRunClearCappedEx @ 0x14001A800
 * Callers:
 *     MiScanNonPagedPoolVa @ 0x14001A5E0 (MiScanNonPagedPoolVa.c)
 *     MiScanLeafNonPagedPool @ 0x14001A960 (MiScanLeafNonPagedPool.c)
 *     MiCheckPoolForContiguousPages @ 0x14009C0C8 (MiCheckPoolForContiguousPages.c)
 *     RtlFindNextForwardRunClearEx @ 0x140112F58 (RtlFindNextForwardRunClearEx.c)
 *     IopAddPageToPageMap @ 0x1401C6CB8 (IopAddPageToPageMap.c)
 *     MiActOnPartitionNodePages @ 0x1401F05D0 (MiActOnPartitionNodePages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlFindNextForwardRunClearCappedEx(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 i; // r8
  const signed __int64 *v7; // rbx
  _DWORD *v8; // r9
  _DWORD *v9; // rax
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // r11
  unsigned __int64 j; // rax
  unsigned __int64 result; // rax
  _DWORD *v15; // rax

  v4 = *(_QWORD *)a1;
  i = a2;
  if ( *(_QWORD *)a1 > a2 )
  {
    v7 = *(const signed __int64 **)(a1 + 8);
    v8 = (_DWORD *)v7 + ((v4 - 1) >> 5);
    v9 = (_DWORD *)v7 + (a2 >> 5);
    if ( v9 != v8 )
    {
      v10 = a2 & 0x1F;
      if ( (*v9 | dword_14026D390[v10]) == -1 )
      {
        ++v9;
        for ( i = a2 - v10 + 32; v9 < v8; i += 32LL )
        {
          if ( *v9 != -1 )
            break;
          ++v9;
        }
      }
    }
    for ( ; i < v4; ++i )
    {
      if ( _bittest64(v7, i) != 1 )
        break;
    }
    v11 = 0LL;
    if ( v9 != v8 )
    {
      v12 = i & 0x1F;
      if ( (~dword_14026D390[v12] & *v9) == 0 )
      {
        v11 = 32 - v12;
        if ( v12 == 33 )
        {
LABEL_13:
          *a4 = i;
          return v11;
        }
        v15 = v9 + 1;
        while ( v15 < v8 )
        {
          if ( *v15 )
            break;
          ++v15;
          v11 += 32LL;
          if ( v11 == -1LL )
            goto LABEL_13;
        }
      }
    }
    for ( j = v11 + i; j < *(_QWORD *)a1; ++v11 )
    {
      if ( _bittest64(*(const signed __int64 **)(a1 + 8), j) )
        break;
      if ( v11 == -1LL )
        break;
      ++j;
    }
    goto LABEL_13;
  }
  result = 0LL;
  *a4 = a2;
  return result;
}
