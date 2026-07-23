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

__int64 __fastcall RtlpHpSegPageRangeAllocate(char *BaseAddress, unsigned int a2, unsigned int a3)
{
  int v6; // r12d
  __int64 **v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rax
  unsigned __int8 v10; // al
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 *v15; // rdx
  BOOLEAN v16; // r8
  unsigned __int16 v17; // cx
  __int64 *v18; // rax
  char v19; // cl
  unsigned int v20; // esi
  unsigned int v21; // edx
  _BYTE *v22; // rax
  unsigned __int16 v24; // [rsp+58h] [rbp+10h]

  HIBYTE(v24) = a2;
  LOBYTE(v24) = ~(_BYTE)a2;
  v6 = a3 & 1;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
  v7 = (__int64 **)(BaseAddress + 120);
  v8 = *((_QWORD *)BaseAddress + 15);
  v9 = 0LL;
  while ( v8 )
  {
    if ( v24 < *(_WORD *)(v8 + 26) )
    {
      v9 = v8;
      v8 = *(_QWORD *)v8;
    }
    else
    {
      if ( v24 <= *(_WORD *)(v8 + 26) )
        goto LABEL_10;
      v8 = *(_QWORD *)(v8 + 8);
    }
  }
  v8 = v9;
LABEL_10:
  if ( v8 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(BaseAddress + 120), (PRTL_BALANCED_NODE)v8);
    *(_QWORD *)v8 = 0LL;
    *(_QWORD *)(v8 + 8) = 0LL;
    *(_QWORD *)(v8 + 16) = 0LL;
    v10 = ~*(_BYTE *)(v8 + 26);
    *(_DWORD *)v8 = -857879331;
    *((_QWORD *)BaseAddress + 3) -= v10;
  }
  else
  {
    RtlpHpSegLockRelease(BaseAddress, a3);
    v11 = RtlpHpSegSegmentAllocate(BaseAddress);
    v12 = v11;
    if ( !v11 )
      return 0LL;
    RtlpHpSegSegmentInitialize(v11, 0LL);
    v8 = v12 + 64;
    RtlpHpSegLockAcquire(BaseAddress, a3);
    RtlpHpSegHeapAddSegment(BaseAddress, v12);
  }
  v13 = RtlpHpSegPageRangeSplit(v8, a2);
  v14 = v13;
  if ( !v13 )
    goto LABEL_24;
  v15 = *v7;
  v16 = 0;
  v17 = *(_WORD *)(v13 + 26);
  if ( !*v7 )
    goto LABEL_23;
  while ( v17 >= *((_WORD *)v15 + 13) )
  {
    v18 = (__int64 *)v15[1];
    if ( !v18 )
    {
      v16 = 1;
      goto LABEL_23;
    }
LABEL_21:
    v15 = v18;
  }
  v18 = (__int64 *)*v15;
  if ( *v15 )
    goto LABEL_21;
  v16 = 0;
LABEL_23:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(BaseAddress + 120), (PRTL_BALANCED_NODE)v15, v16, (PRTL_BALANCED_NODE)v14);
  *((_QWORD *)BaseAddress + 3) += (unsigned __int8)~*(_BYTE *)(v14 + 26);
LABEL_24:
  if ( (a3 & 0x4000000) != 0 )
  {
    v19 = 5;
  }
  else
  {
    v19 = 4;
    if ( (a3 & 0x8000000) != 0 )
      v19 = 36;
  }
  v20 = a2 - 1;
  *(_BYTE *)(v8 + 24) |= v19;
  *(_BYTE *)(32LL * (a2 - 1) + v8 + 24) |= 4u;
  if ( !v6 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
  v21 = 1;
  if ( v20 > 1 )
  {
    v22 = (_BYTE *)(v8 + 56);
    do
    {
      v22[3] = v21++;
      *v22 |= 4u;
      v22 += 32;
    }
    while ( v21 < v20 );
  }
  return v8;
}
