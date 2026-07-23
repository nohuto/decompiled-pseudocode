/*
 * XREFs of RtlpQueryMemoryUsageHeap @ 0x180089A80
 * Callers:
 *     RtlpQueryExtendedInformationHeap @ 0x180095010 (RtlpQueryExtendedInformationHeap.c)
 *     RtlpHeapQueryTotalReserveSize @ 0x180096690 (RtlpHeapQueryTotalReserveSize.c)
 * Callees:
 *     RtlpGetLowFragHeapMetadataSize @ 0x1800FC00C (RtlpGetLowFragHeapMetadataSize.c)
 */

__int64 __fastcall RtlpQueryMemoryUsageHeap(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  _QWORD *v4; // rax
  _QWORD *i; // rax
  unsigned __int64 v6; // rdx
  _QWORD *v7; // r10
  _QWORD *v8; // rsi
  unsigned __int64 v9; // r9
  _QWORD *v10; // r8
  _QWORD *v11; // r11
  __int64 v12; // r10
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi

  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) != 0 )
    return 3221225474LL;
  *a2 = 0LL;
  *a3 = 0LL;
  RtlpGetLowFragHeapMetadataSize(a1, a2, a3, 0LL);
  v13 = (_QWORD *)(v12 + 288);
  v14 = (_QWORD *)(v12 + 272);
  while ( 1 )
  {
    v4 = (_QWORD *)*v13;
    v6 = -1LL;
    v8 = 0LL;
    v7 = 0LL;
    while ( v4 != v13 )
    {
      if ( (unsigned __int64)(v4 - 3) < v6 && (unsigned __int64)(v4 - 3) > v9 )
      {
        v6 = (unsigned __int64)(v4 - 3);
        v8 = v4 - 3;
      }
      v4 = (_QWORD *)*v4;
    }
    for ( i = (_QWORD *)*v14; i != v14; i = (_QWORD *)*i )
    {
      if ( (unsigned __int64)i < v6 && (unsigned __int64)i > v9 )
      {
        v6 = (unsigned __int64)i;
        v7 = i;
      }
    }
    if ( v6 == -1LL )
      break;
    v9 = (unsigned __int64)v8;
    if ( v7 )
      v9 = 0LL;
    if ( v9 )
    {
      *v11 += (unsigned __int64)*(unsigned int *)(v9 + 56) << 12;
      *v10 += (unsigned __int64)(unsigned int)(*(_DWORD *)(v9 + 56) - *(_DWORD *)(v9 + 80)) << 12;
    }
    else
    {
      v9 = (unsigned __int64)v7;
      *v11 += v7[5];
      *v10 += v7[4];
    }
  }
  return 0LL;
}
