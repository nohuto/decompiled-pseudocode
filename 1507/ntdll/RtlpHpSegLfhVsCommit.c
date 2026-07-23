/*
 * XREFs of RtlpHpSegLfhVsCommit @ 0x180037280
 * Callers:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800347E0 (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVsSubsegmentCommitPages @ 0x180036DB0 (RtlpHpVsSubsegmentCommitPages.c)
 *     RtlpHpVsSubsegmentCreate @ 0x18006BA8C (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegDescriptorValidate @ 0x1800373EC (RtlpHpSegDescriptorValidate.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 */

NTSTATUS __fastcall RtlpHpSegLfhVsCommit(volatile signed __int64 *BaseAddress, __int64 a2, unsigned int a3)
{
  unsigned __int64 v4; // rdi
  __int64 v7; // rax
  unsigned __int64 v8; // rcx
  int v9; // esi
  __int64 v10; // r14
  __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned int v16; // edi
  ULONG Protect; // eax
  NTSTATUS result; // eax
  char *v19; // rdx
  unsigned __int64 v20; // rcx
  char v21; // al
  char v22; // al
  ULONG_PTR RegionSize; // [rsp+60h] [rbp+8h] BYREF
  PVOID BaseAddressa; // [rsp+68h] [rbp+10h] BYREF
  int v25; // [rsp+70h] [rbp+18h]

  v4 = a2 & 0xFFFFFFFFFFF00000uLL;
  v7 = RtlpHpSegDescriptorValidate();
  v8 = a3;
  v9 = 0;
  v10 = v7;
  v11 = (unsigned int)((a2 - v4) >> 12);
  v12 = 0LL;
  v13 = v4 + 32 * v11;
  v14 = v13 + 32 * (v8 >> 12);
  v15 = 0LL;
  if ( v13 != v14 )
  {
    do
    {
      if ( (*(_BYTE *)(v13 + 24) & 2) == 0 )
      {
        v15 = v13;
        if ( !v12 )
          v12 = v13;
        ++v9;
      }
      v13 += 32LL;
    }
    while ( v13 != v14 );
    v16 = v12 ? ((__int64)(v15 - v12) >> 5) + 1 : v25;
    if ( v9 )
    {
      BaseAddressa = (PVOID)((v12 & 0xFFFFFFFFFFF00000uLL)
                           + ((unsigned int)((__int64)(v12 - (v12 & 0xFFFFFFFFFFF00000uLL)) >> 5) << 12));
      RegionSize = v16 << 12;
      Protect = RtlpGetHeapProtection((PVOID)BaseAddress);
      result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x1000u, Protect);
      if ( result < 0 )
        return result;
      _InterlockedExchangeAdd64(BaseAddress + 1, v9);
      if ( v12 < v12 + 32LL * v16 )
      {
        v19 = (char *)(v12 + 24);
        v20 = ((32 * (unsigned __int64)v16 - 1) >> 5) + 1;
        do
        {
          v21 = *v19;
          if ( v9 <= 0 )
            v22 = v21 & 0xFD;
          else
            v22 = v21 | 2;
          *v19 = v22;
          v19 += 32;
          --v20;
        }
        while ( v20 );
      }
      *(_BYTE *)(v10 + 26) = ~(v9 + ~*(_BYTE *)(v10 + 26));
      if ( MEMORY[0x7FFE0380] )
      {
        if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapCommit(BaseAddress, BaseAddressa, RegionSize, 10LL);
      }
    }
  }
  return 0;
}
