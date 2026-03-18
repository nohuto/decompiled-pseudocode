/*
 * XREFs of RtlpDeleteFromMergedRange @ 0x14054D3CC
 * Callers:
 *     RtlDeleteRange @ 0x14052E27C (RtlDeleteRange.c)
 *     RtlDeleteOwnersRanges @ 0x14052E334 (RtlDeleteOwnersRanges.c)
 * Callees:
 *     RtlpAddRange @ 0x14052D71C (RtlpAddRange.c)
 *     RtlpAddToMergedRange @ 0x14052DEF8 (RtlpAddToMergedRange.c)
 *     RtlpFreeRangeListEntry @ 0x14052E4C8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpDeleteFromMergedRange(__int64 *Entry, _QWORD *a2)
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
  unsigned __int64 **v13; // rcx
  unsigned __int64 *v14; // rdx
  __int64 *v16; // rdx
  unsigned __int64 *v17; // rax
  __int64 v18; // rdi
  _QWORD **v19; // rdx
  PVOID *v20; // rcx
  unsigned __int64 *v21; // [rsp+20h] [rbp-10h] BYREF
  unsigned __int64 **v22; // [rsp+28h] [rbp-8h]

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
  v21 = (unsigned __int64 *)&v21;
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
      v2 = RtlpAddRange((unsigned __int64 *)&v21, (__int64 *)v8, 1u);
      if ( v2 < 0 )
      {
        v16 = (__int64 *)(v21 - 5);
        v17 = v21;
        while ( 1 )
        {
          v18 = *v17 - 40;
          if ( &v21 == (unsigned __int64 **)v17 )
            break;
          RtlpAddToMergedRange((__int64)a2, v16, 1);
          v17 = (unsigned __int64 *)(v18 + 40);
          v16 = (__int64 *)v18;
        }
        return RtlpAddToMergedRange((__int64)a2, Entry, 1);
      }
      v9 = (_QWORD *)(v10 + 40);
      v8 = v10;
      v10 = *(_QWORD *)(v10 + 40) - 40LL;
    }
    while ( a2 + 2 != v9 );
    if ( v21 == (unsigned __int64 *)&v21 )
      goto LABEL_16;
    v13 = (unsigned __int64 **)a2[6];
    v14 = (unsigned __int64 *)a2[5];
    *v13 = v21;
    v21[1] = (unsigned __int64)v13;
    v14[1] = (unsigned __int64)v22;
    *v22 = v14;
  }
  RtlpFreeRangeListEntry(Entry);
  RtlpFreeRangeListEntry(a2);
  return (unsigned int)v2;
}
