/*
 * XREFs of RtlpSetSegmentInfo @ 0x18007E968
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180025DE0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpLocalInfoAllocFromCache @ 0x18004F7C8 (RtlpLocalInfoAllocFromCache.c)
 * Callees:
 *     RtlpTryAcquireSubSegmentLock @ 0x180021010 (RtlpTryAcquireSubSegmentLock.c)
 *     RtlpLogHeapAffinitySlotAssign @ 0x1800F14D4 (RtlpLogHeapAffinitySlotAssign.c)
 */

__int64 __fastcall RtlpSetSegmentInfo(__int64 a1, volatile signed __int64 *a2)
{
  unsigned int v4; // edi
  int v6; // eax
  int v7; // ebx
  __int64 v8; // r8
  int v9; // edx
  signed __int64 v10; // rax
  int v11; // ecx
  int v12; // edx
  signed __int64 v13; // rax
  int v14; // ecx
  signed __int64 v15; // [rsp+30h] [rbp+8h]
  signed __int64 v16; // [rsp+30h] [rbp+8h]

  v4 = 1;
  if ( *(volatile signed __int64 **)a1 != a2 )
  {
    v6 = RtlpTryAcquireSubSegmentLock(a1, 1);
    v7 = v6;
    if ( v6 == -1 )
    {
      return 0;
    }
    else
    {
      if ( v6 )
      {
        v8 = *(_QWORD *)a1;
        v9 = -*(unsigned __int16 *)(a1 + 40);
        do
        {
          v10 = *(_QWORD *)(v8 + 160);
          if ( v9 > 0 )
            v11 = HIDWORD(v10) + 1;
          else
            v11 = HIDWORD(v10) - 1;
          HIDWORD(v15) = v11;
          LODWORD(v15) = v10 + v9;
        }
        while ( v10 != _InterlockedCompareExchange64((volatile signed __int64 *)(v8 + 160), v15, v10) );
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
        v4 = 0;
      }
      *(_DWORD *)(a1 + 32) = v7;
    }
  }
  return v4;
}
