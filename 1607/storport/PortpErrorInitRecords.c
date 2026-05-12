/*
 * XREFs of PortpErrorInitRecords @ 0x1C0060FAC
 * Callers:
 *     PortTraceErrorRegisterDriver @ 0x1C0060F90 (PortTraceErrorRegisterDriver.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 */

void __fastcall PortpErrorInitRecords(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  PVOID PoolWithTag; // rax
  unsigned int v5; // esi
  __int64 v6; // r14
  PVOID v7; // rax
  PVOID v8; // rbp

  v2 = *(_DWORD *)(a2 + 12);
  if ( v2 > 0xA )
    v2 = 10;
  if ( v2 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2, 0x6C456C50u);
    *(_QWORD *)(a1 + 56) = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 8 * v2);
      v5 = 0;
      v6 = 0LL;
      do
      {
        v7 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x110uLL, 0x6C456C50u);
        v8 = v7;
        if ( !v7 )
          break;
        memset(v7, 0, 0x110uLL);
        ++v5;
        *(_QWORD *)(v6 + *(_QWORD *)(a1 + 56)) = v8;
        v6 += 8LL;
      }
      while ( v5 < v2 );
      *(_DWORD *)(a1 + 80) = v5;
    }
  }
  InitializeSListHead((PSLIST_HEADER)(a1 + 64));
  *(_DWORD *)(a1 + 84) = 0;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 84));
}
