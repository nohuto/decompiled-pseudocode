/*
 * XREFs of RtlpHpSegPageRangeAllocate @ 0x18003EA8C
 * Callers:
 *     RtlpHpSegAlloc @ 0x18003E7CC (RtlpHpSegAlloc.c)
 * Callees:
 *     RtlRbInsertNodeEx @ 0x18001BC20 (RtlRbInsertNodeEx.c)
 *     RtlRbRemoveNode @ 0x18001C040 (RtlRbRemoveNode.c)
 *     RtlReleaseSRWLockExclusive @ 0x18001C550 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180020BF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpHpSegLockRelease @ 0x18003BB6C (RtlpHpSegLockRelease.c)
 *     RtlpHpSegLockAcquire @ 0x18003BB8C (RtlpHpSegLockAcquire.c)
 *     RtlpHpSegFreeRangeCompare @ 0x18003EC84 (RtlpHpSegFreeRangeCompare.c)
 *     RtlpHpSegPageRangeSplit @ 0x18003ECA0 (RtlpHpSegPageRangeSplit.c)
 *     RtlpHpSegHeapAddSegment @ 0x18007FAEC (RtlpHpSegHeapAddSegment.c)
 *     RtlpHpSegSegmentInitialize @ 0x18007FB38 (RtlpHpSegSegmentInitialize.c)
 *     RtlpHpSegSegmentAllocate @ 0x18007FB90 (RtlpHpSegSegmentAllocate.c)
 */

unsigned __int64 __fastcall RtlpHpSegPageRangeAllocate(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // r12d
  unsigned int v5; // ebp
  unsigned int v6; // r13d
  _QWORD **v8; // r15
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
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
  __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int16 v29; // [rsp+68h] [rbp+10h]
  int v30; // [rsp+70h] [rbp+18h]

  HIBYTE(v29) = (_BYTE)a2;
  v4 = a3 & 1;
  LOBYTE(v29) = ~(_BYTE)a2;
  v30 = v4;
  v5 = a3;
  v6 = (unsigned int)a2;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive(a1 + 88, a2, a3, a4);
  v8 = (_QWORD **)(a1 + 120);
  v9 = *(_QWORD *)(a1 + 120);
  v10 = 0LL;
  while ( v9 )
  {
    v11 = RtlpHpSegFreeRangeCompare(v29, v9, a3);
    if ( !v11 )
      goto LABEL_10;
    if ( v11 >= 0 )
    {
      v9 = *(_QWORD *)(v9 + 8);
    }
    else
    {
      v10 = v9;
      v9 = *(_QWORD *)v9;
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
    v12 = ~*(_BYTE *)(v9 + 26);
    *(_DWORD *)v9 = -857879331;
    *(_QWORD *)(a1 + 24) -= v12;
  }
  else
  {
    RtlpHpSegLockRelease(a1, v5);
    v24 = RtlpHpSegSegmentAllocate(a1, 0LL);
    v25 = v24;
    if ( !v24 )
      return 0LL;
    RtlpHpSegSegmentInitialize(v24, 0LL);
    v9 = v26 + 64;
    RtlpHpSegLockAcquire(a1, (char *)v5, v27, v28);
    RtlpHpSegHeapAddSegment(a1, v25);
  }
  v13 = RtlpHpSegPageRangeSplit(v9, v6);
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
LABEL_16:
    v16 = v18;
  }
  v18 = (_QWORD *)*v16;
  if ( *v16 )
    goto LABEL_16;
  LOBYTE(v14) = 0;
LABEL_18:
  RtlRbInsertNodeEx((unsigned __int64 *)(a1 + 120), (unsigned __int64)v16, v14, v15);
  v4 = v30;
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
  *(_BYTE *)(v9 + 24) |= v19;
  *(_BYTE *)(32LL * (v6 - 1) + v9 + 24) |= 4u;
  if ( !v4 )
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 88));
  v21 = 1;
  if ( v20 > 1 )
  {
    v22 = (_BYTE *)(v9 + 56);
    do
    {
      v22[3] = v21++;
      *v22 |= 4u;
      v22 += 32;
    }
    while ( v21 < v20 );
  }
  return v9;
}
