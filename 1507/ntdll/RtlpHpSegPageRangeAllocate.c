/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x1800364A4
 * Callers:
 *     RtlpHpSegAlloc @ 0x180036200 (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlpHpSegSegmentAllocate @ 0x1800039A8 (RtlpHpSegSegmentAllocate.c)
 *     RtlpHpSegSegmentInitialize @ 0x180003B44 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegHeapAddSegment @ 0x180003B9C (RtlpHpSegHeapAddSegment.c)
 *     RtlRbInsertNodeEx @ 0x180027A50 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x1800280B0 (RtlRbRemoveNode.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x180033470 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHpSegFreeRangeCompare @ 0x1800366A8 (RtlpHpSegFreeRangeCompare.c)
 *     RtlpHpSegPageRangeSplit @ 0x1800366C4 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegLockAcquire @ 0x1800392FC (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegLockRelease @ 0x18003931C (RtlpHpSegLockRelease.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  _QWORD **v8; // r15
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rbx
  int v11; // eax
  unsigned __int8 v12; // al
  __int64 v13; // rax
  _BOOL8 v14; // r8
  unsigned __int64 v15; // r14
  _QWORD *v16; // rsi
  __int64 v17; // r12
  _QWORD *v18; // rax
  char v19; // cl
  unsigned int v20; // esi
  unsigned int v21; // edx
  _BYTE *v22; // rax
  unsigned __int64 v24; // rax
  unsigned __int64 v25; // rsi
  __int64 v26; // rcx
  unsigned __int16 v27; // [rsp+68h] [rbp+10h]
  int v28; // [rsp+70h] [rbp+18h]

  HIBYTE(v27) = (_BYTE)a2;
  v4 = a3 & 1;
  LOBYTE(v27) = ~(_BYTE)a2;
  v28 = v4;
  v5 = a3;
  v6 = (unsigned int)a2;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 88), a2, a3, a4);
  v8 = (_QWORD **)(a1 + 120);
  v9 = 0LL;
  v10 = *(_QWORD *)(a1 + 120);
  if ( v10 )
  {
    while ( 1 )
    {
      v11 = RtlpHpSegFreeRangeCompare(v27, v10, a3);
      if ( !v11 )
        break;
      if ( v11 >= 0 )
      {
        v10 = *(_QWORD *)(v10 + 8);
      }
      else
      {
        v9 = v10;
        v10 = *(_QWORD *)v10;
      }
      if ( !v10 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v10 = v9;
  }
  if ( v10 )
  {
    RtlRbRemoveNode((unsigned __int64 *)(a1 + 120), (unsigned __int64 *)v10);
    *(_QWORD *)v10 = 0LL;
    *(_QWORD *)(v10 + 8) = 0LL;
    *(_QWORD *)(v10 + 16) = 0LL;
    v12 = ~*(_BYTE *)(v10 + 26);
    *(_DWORD *)v10 = -857879331;
    *(_QWORD *)(a1 + 24) -= v12;
  }
  else
  {
    RtlpHpSegLockRelease(a1, v5);
    v24 = RtlpHpSegSegmentAllocate((volatile signed __int64 *)a1, 0);
    v25 = v24;
    if ( !v24 )
      return 0LL;
    RtlpHpSegSegmentInitialize(v24, 0);
    v10 = v26 + 64;
    RtlpHpSegLockAcquire(a1, v5);
    RtlpHpSegHeapAddSegment(a1, v25);
  }
  v13 = RtlpHpSegPageRangeSplit(v10, v6);
  v15 = v13;
  if ( !v13 )
    goto LABEL_19;
  v16 = *v8;
  LOBYTE(v14) = 0;
  v17 = *(unsigned __int16 *)(v13 + 26);
  if ( !*v8 )
    goto LABEL_18;
  while ( (int)RtlpHpSegFreeRangeCompare(v17, v16, v14) >= 0 )
  {
    v18 = (_QWORD *)v16[1];
    if ( !v18 )
    {
      LOBYTE(v14) = 1;
      goto LABEL_18;
    }
LABEL_15:
    v16 = v18;
  }
  v18 = (_QWORD *)*v16;
  if ( *v16 )
    goto LABEL_15;
  LOBYTE(v14) = 0;
LABEL_18:
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 120), (unsigned __int64)v16, v14, v15);
  v4 = v28;
  *(_QWORD *)(a1 + 24) += (unsigned __int8)~*(_BYTE *)(v15 + 26);
LABEL_19:
  if ( (v5 & 0x4000000) != 0 )
  {
    v19 = 5;
  }
  else
  {
    v19 = 4;
    if ( (v5 & 0x8000000) != 0 )
      v19 = 36;
  }
  v20 = v6 - 1;
  *(_BYTE *)(v10 + 24) |= v19;
  *(_BYTE *)(32LL * (v6 - 1) + v10 + 24) |= 4u;
  if ( !v4 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 88));
  v21 = 1;
  if ( v20 > 1 )
  {
    v22 = (_BYTE *)(v10 + 56);
    do
    {
      v22[3] = v21++;
      *v22 |= 4u;
      v22 += 32;
    }
    while ( v21 < v20 );
  }
  return v10;
}
