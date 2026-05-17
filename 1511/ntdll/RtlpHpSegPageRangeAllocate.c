/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x180058BE4
 * Callers:
 *     RtlpHpSegAlloc @ 0x18005895C (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180023A90 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 *     RtlRbRemoveNode @ 0x18002DBF0 (RtlRbRemoveNode.c)
 *     RtlRbInsertNodeEx @ 0x180031350 (RtlRbInsertNodeEx.c)
 *     RtlpHpSegPageRangeSplit @ 0x180058DAC (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegLockAcquire @ 0x180059098 (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegLockRelease @ 0x1800590B8 (RtlpHpSegLockRelease.c)
 *     RtlpHpSegHeapAddSegment @ 0x180059358 (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x1800593A4 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x1800593FC (RtlpHpSegSegmentAllocate.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // esi
  unsigned int v5; // r15d
  int v7; // r12d
  unsigned __int64 *v8; // r14
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // rbp
  __int64 v14; // rax
  unsigned __int64 v15; // rbp
  unsigned __int64 v16; // rdx
  bool v17; // r8
  unsigned __int16 v18; // cx
  unsigned __int64 v19; // rax
  char v20; // cl
  unsigned int v21; // esi
  unsigned int v22; // edx
  _BYTE *v23; // rax
  unsigned __int16 v25; // [rsp+58h] [rbp+10h]

  HIBYTE(v25) = (_BYTE)a2;
  LOBYTE(v25) = ~(_BYTE)a2;
  v4 = a3;
  v5 = (unsigned int)a2;
  v7 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 88, a2, a3, a4);
  v8 = (unsigned __int64 *)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = 0LL;
  while ( v9 )
  {
    if ( v25 < *(_WORD *)(v9 + 26) )
    {
      v10 = v9;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      if ( v25 <= *(_WORD *)(v9 + 26) )
        goto LABEL_10;
      v9 = *(_QWORD *)(v9 + 8);
    }
  }
  v9 = v10;
LABEL_10:
  if ( v9 )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 120), (unsigned __int64 *)v9);
    *(_QWORD *)v9 = 0LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    *(_QWORD *)(v9 + 16) = 0LL;
    v11 = ~*(_BYTE *)(v9 + 26);
    *(_DWORD *)v9 = -857879331;
    *(_QWORD *)(a1 + 24) -= v11;
  }
  else
  {
    RtlpHpSegLockRelease(a1, v4);
    v12 = RtlpHpSegSegmentAllocate(a1, 0LL);
    v13 = v12;
    if ( !v12 )
      return 0LL;
    RtlpHpSegSegmentInitialize(v12, 0LL);
    v9 = v13 + 64;
    RtlpHpSegLockAcquire(a1, v4);
    RtlpHpSegHeapAddSegment(a1, v13);
  }
  v14 = RtlpHpSegPageRangeSplit(v9, v5);
  v15 = v14;
  if ( !v14 )
    goto LABEL_24;
  v16 = *v8;
  v17 = 0;
  v18 = *(_WORD *)(v14 + 26);
  if ( !*v8 )
    goto LABEL_23;
  while ( v18 >= *(_WORD *)(v16 + 26) )
  {
    v19 = *(_QWORD *)(v16 + 8);
    if ( !v19 )
    {
      v17 = 1;
      goto LABEL_23;
    }
LABEL_21:
    v16 = v19;
  }
  v19 = *(_QWORD *)v16;
  if ( *(_QWORD *)v16 )
    goto LABEL_21;
  v17 = 0;
LABEL_23:
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 120), v16, v17, v15);
  *(_QWORD *)(a1 + 24) += (unsigned __int8)~*(_BYTE *)(v15 + 26);
LABEL_24:
  if ( (v4 & 0x4000000) != 0 )
  {
    v20 = 5;
  }
  else
  {
    v20 = 4;
    if ( (v4 & 0x8000000) != 0 )
      v20 = 36;
  }
  v21 = v5 - 1;
  *(_BYTE *)(v9 + 24) |= v20;
  *(_BYTE *)(32LL * (v5 - 1) + v9 + 24) |= 4u;
  if ( !v7 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 88));
  v22 = 1;
  if ( v21 > 1 )
  {
    v23 = (_BYTE *)(v9 + 56);
    do
    {
      v23[3] = v22++;
      *v23 |= 4u;
      v23 += 32;
    }
    while ( v22 < v21 );
  }
  return v9;
}
