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

__int64 *__fastcall RtlpHpSegPageRangeAllocate(char *BaseAddress, unsigned int a2, __int64 a3)
{
  int v3; // r12d
  unsigned int v4; // ebp
  _RTL_BALANCED_NODE **v7; // r15
  __int64 *v8; // rsi
  __int64 *v9; // rbx
  int v10; // eax
  unsigned __int8 v11; // al
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // r14
  _RTL_BALANCED_NODE *v15; // rsi
  __int64 v16; // r12
  _RTL_BALANCED_NODE *v17; // rax
  char v18; // cl
  unsigned int v19; // esi
  unsigned int v20; // edx
  _BYTE *v21; // rax
  PVOID v23; // rax
  unsigned __int64 v24; // rsi
  __int64 v25; // rcx
  unsigned __int16 v26; // [rsp+68h] [rbp+10h]
  int v27; // [rsp+70h] [rbp+18h]

  HIBYTE(v26) = a2;
  v3 = a3 & 1;
  LOBYTE(v26) = ~(_BYTE)a2;
  v27 = v3;
  v4 = a3;
  if ( (a3 & 1) == 0 )
    RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
  v7 = (_RTL_BALANCED_NODE **)(BaseAddress + 120);
  v8 = 0LL;
  v9 = (__int64 *)*((_QWORD *)BaseAddress + 15);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = RtlpHpSegFreeRangeCompare(v26, v9, a3);
      if ( !v10 )
        break;
      if ( v10 >= 0 )
      {
        v9 = (__int64 *)v9[1];
      }
      else
      {
        v8 = v9;
        v9 = (__int64 *)*v9;
      }
      if ( !v9 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    v9 = v8;
  }
  if ( v9 )
  {
    RtlRbRemoveNode((PRTL_RB_TREE)(BaseAddress + 120), (PRTL_BALANCED_NODE)v9);
    *v9 = 0LL;
    v9[1] = 0LL;
    v9[2] = 0LL;
    v11 = ~*((_BYTE *)v9 + 26);
    *(_DWORD *)v9 = -857879331;
    *((_QWORD *)BaseAddress + 3) -= v11;
  }
  else
  {
    RtlpHpSegLockRelease(BaseAddress, v4);
    v23 = RtlpHpSegSegmentAllocate((volatile signed __int64 *)BaseAddress, 0);
    v24 = (unsigned __int64)v23;
    if ( !v23 )
      return 0LL;
    RtlpHpSegSegmentInitialize((__int64)v23, 0);
    v9 = (__int64 *)(v25 + 64);
    RtlpHpSegLockAcquire(BaseAddress, v4);
    RtlpHpSegHeapAddSegment((__int64)BaseAddress, v24);
  }
  v12 = RtlpHpSegPageRangeSplit(v9, a2);
  v14 = v12;
  if ( !v12 )
    goto LABEL_19;
  v15 = *v7;
  LOBYTE(v13) = 0;
  v16 = *(unsigned __int16 *)(v12 + 26);
  if ( !*v7 )
    goto LABEL_18;
  while ( (int)RtlpHpSegFreeRangeCompare(v16, v15, v13) >= 0 )
  {
    v17 = v15->Children[1];
    if ( !v17 )
    {
      LOBYTE(v13) = 1;
      goto LABEL_18;
    }
LABEL_15:
    v15 = v17;
  }
  v17 = v15->Children[0];
  if ( v15->Children[0] )
    goto LABEL_15;
  LOBYTE(v13) = 0;
LABEL_18:
  RtlRbInsertNodeEx((PRTL_RB_TREE)(BaseAddress + 120), v15, v13, (PRTL_BALANCED_NODE)v14);
  v3 = v27;
  *((_QWORD *)BaseAddress + 3) += (unsigned __int8)~*(_BYTE *)(v14 + 26);
LABEL_19:
  if ( (v4 & 0x4000000) != 0 )
  {
    v18 = 5;
  }
  else
  {
    v18 = 4;
    if ( (v4 & 0x8000000) != 0 )
      v18 = 36;
  }
  v19 = a2 - 1;
  *((_BYTE *)v9 + 24) |= v18;
  LOBYTE(v9[4 * a2 - 1]) |= 4u;
  if ( !v3 )
    RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)BaseAddress + 11);
  v20 = 1;
  if ( v19 > 1 )
  {
    v21 = v9 + 7;
    do
    {
      v21[3] = v20++;
      *v21 |= 4u;
      v21 += 32;
    }
    while ( v20 < v19 );
  }
  return v9;
}
