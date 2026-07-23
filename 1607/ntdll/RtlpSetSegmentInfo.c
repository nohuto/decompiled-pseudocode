/*
 * XREFs of RtlpSetSegmentInfo @ 0x180051A40
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x1800240B0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004EFA0 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlpLogHeapAffinitySlotAssign @ 0x1800F8FE4 (RtlpLogHeapAffinitySlotAssign.c)
 */

__int64 __fastcall RtlpSetSegmentInfo(__int64 a1, volatile signed __int64 *a2)
{
  unsigned int v3; // edi
  unsigned int v5; // r9d
  int v6; // r8d
  signed __int32 v7; // ebx
  volatile signed __int64 *v8; // r9
  int v9; // r8d
  signed __int64 v10; // rax
  int v11; // ecx
  int v12; // r8d
  signed __int64 v13; // rax
  int v14; // ecx
  signed __int64 v15; // [rsp+30h] [rbp+8h]
  signed __int64 v16; // [rsp+30h] [rbp+8h]

  v3 = 1;
  if ( *(volatile signed __int64 **)a1 != a2 )
  {
    v5 = 100;
    v6 = 0;
    if ( MEMORY[0x7FFE036A] <= 1u )
      v5 = 0;
    while ( 1 )
    {
      v7 = *(_DWORD *)(a1 + 32);
      if ( v7 >= 0 )
      {
        if ( !(_WORD)v7 )
          return 0;
        if ( v7 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7 | 0x80000000, v7) )
          break;
      }
      if ( ++v6 > v5 )
      {
        v7 = -1;
        break;
      }
    }
    if ( v7 == -1 )
      return 0;
    if ( v7 )
    {
      v8 = *(volatile signed __int64 **)a1;
      v9 = -*(unsigned __int16 *)(a1 + 40);
      do
      {
        v10 = *((_QWORD *)v8 + 20);
        if ( v9 > 0 )
          v11 = HIDWORD(v10) + 1;
        else
          v11 = HIDWORD(v10) - 1;
        HIDWORD(v15) = v11;
        LODWORD(v15) = v10 + v9;
      }
      while ( v10 != _InterlockedCompareExchange64(v8 + 20, v15, v10) );
      v12 = *(unsigned __int16 *)(a1 + 40);
      do
      {
        v13 = *((_QWORD *)a2 + 20);
        if ( v12 <= 0 )
          v14 = HIDWORD(v13) - 1;
        else
          v14 = HIDWORD(v13) + 1;
        HIDWORD(v16) = v14;
        LODWORD(v16) = v13 + v12;
      }
      while ( v13 != _InterlockedCompareExchange64(a2 + 20, v16, v13) );
      *(_QWORD *)a1 = a2;
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapAffinitySlotAssign(
          *(_QWORD *)(*(_QWORD *)(*a2 + 24) + 24LL),
          *(_QWORD *)(a1 + 8),
          (unsigned int)NtCurrentTeb()->HeapVirtualAffinity - 1);
    }
    else
    {
      v3 = 0;
    }
    *(_DWORD *)(a1 + 32) = v7;
  }
  return v3;
}
