/*
 * XREFs of RtlpDeleteFromMergedRange @ 0x140558450
 * Callers:
 *     RtlDeleteRange @ 0x14055AC8C (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14055AD44 (RtlDeleteOwnersRanges.c)
 * Callees:
 *     RtlpAddRange @ 0x14055A11C (RtlpAddRange.c)
 *     RtlpAddToMergedRange @ 0x14055A8F4 (RtlpAddToMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14055AED8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpDeleteFromMergedRange(_QWORD *Entry, _QWORD *a2)
{
  int v2; // r14d
  _QWORD **v3; // r8
  PVOID *v5; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdi
  __int64 v11; // r8
  _QWORD *v12; // rcx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  _QWORD *v16; // rdx
  _QWORD *v17; // rax
  __int64 v18; // rdi
  _QWORD **v19; // rdx
  PVOID *v20; // rcx
  _QWORD *v21; // [rsp+20h] [rbp-10h] BYREF
  _QWORD *v22; // [rsp+28h] [rbp-8h]

  v2 = 0;
  v3 = (_QWORD **)Entry[5];
  v5 = (PVOID *)Entry[6];
  if ( v3[1] != Entry + 5 || *v5 != Entry + 5 )
    __fastfail(3u);
  *v5 = v3;
  v3[1] = v5;
  v7 = a2[2];
  v22 = &v21;
  v8 = v7 - 40;
  v21 = &v21;
  v9 = (_QWORD *)(v8 + 40);
  v10 = *(_QWORD *)(v8 + 40) - 40LL;
  if ( a2 + 2 == (_QWORD *)(v8 + 40) )
  {
LABEL_16:
    v19 = (_QWORD **)a2[5];
    v20 = (PVOID *)a2[6];
    if ( v19[1] != a2 + 5 || *v20 != a2 + 5 )
      __fastfail(3u);
    *v20 = v19;
    v19[1] = v20;
  }
  else
  {
    do
    {
      v11 = *v9;
      v12 = (_QWORD *)v9[1];
      if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v12 != v9 )
        __fastfail(3u);
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *(_BYTE *)(v8 + 33) &= ~2u;
      v2 = RtlpAddRange(&v21, v8, 1LL);
      if ( v2 < 0 )
      {
        v16 = v21 - 5;
        v17 = v21;
        while ( 1 )
        {
          v18 = *v17 - 40LL;
          if ( &v21 == v17 )
            break;
          RtlpAddToMergedRange(a2, v16, 1LL);
          v17 = (_QWORD *)(v18 + 40);
          v16 = (_QWORD *)v18;
        }
        return RtlpAddToMergedRange(a2, Entry, 1LL);
      }
      v9 = (_QWORD *)(v10 + 40);
      v8 = v10;
      v10 = *(_QWORD *)(v10 + 40) - 40LL;
    }
    while ( a2 + 2 != v9 );
    if ( v21 == &v21 )
      goto LABEL_16;
    v13 = (_QWORD *)a2[6];
    v14 = a2[5];
    *v13 = v21;
    v21[1] = v13;
    *(_QWORD *)(v14 + 8) = v22;
    *v22 = v14;
  }
  RtlpFreeRangeListEntry(Entry);
  RtlpFreeRangeListEntry(a2);
  return (unsigned int)v2;
}
