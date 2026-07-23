/*
 * XREFs of RtlpProtectHeap @ 0x18002D85C
 * Callers:
 *     RtlProtectHeap @ 0x18002D790 (RtlProtectHeap.c)
 * Callees:
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     ZwQueryVirtualMemory @ 0x1800A6880 (ZwQueryVirtualMemory.c)
 *     ZwProtectVirtualMemory @ 0x1800A6E20 (ZwProtectVirtualMemory.c)
 */

__int64 __fastcall RtlpProtectHeap(__int64 a1, ULONG a2)
{
  _QWORD *v2; // r14
  _QWORD *i; // rsi
  _QWORD *v5; // rbp
  char *j; // rbx
  NTSTATUS VirtualMemory; // edi
  char MemoryInformation[24]; // [rsp+30h] [rbp-58h] BYREF
  ULONG_PTR v10; // [rsp+48h] [rbp-40h]
  int v11; // [rsp+50h] [rbp-38h]
  ULONG OldProtect; // [rsp+90h] [rbp+8h] BYREF
  ULONG_PTR RegionSize; // [rsp+A0h] [rbp+18h] BYREF
  PVOID BaseAddress; // [rsp+A8h] [rbp+20h] BYREF

  v2 = (_QWORD *)(a1 + 288);
  for ( i = *(_QWORD **)(a1 + 288); i != v2; i = (_QWORD *)*i )
  {
    v5 = i - 3;
    if ( i != (_QWORD *)24 )
    {
      for ( j = (char *)v5[6]; (unsigned __int64)j < v5[9]; j += v10 )
      {
        VirtualMemory = ZwQueryVirtualMemory(
                          (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                          j,
                          MemoryBasicInformation,
                          MemoryInformation,
                          0x30uLL,
                          0LL);
        if ( VirtualMemory < 0 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("VirtualQuery Failed 0x%p %x\n", j, (unsigned int)VirtualMemory);
          return (unsigned int)VirtualMemory;
        }
        if ( v11 == 4096 )
        {
          RegionSize = v10;
          BaseAddress = j;
          VirtualMemory = ZwProtectVirtualMemory(
                            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
                            &BaseAddress,
                            &RegionSize,
                            a2,
                            &OldProtect);
          if ( VirtualMemory < 0 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("VirtualProtect Failed 0x%p %x\n", j, (unsigned int)VirtualMemory);
            return (unsigned int)VirtualMemory;
          }
        }
      }
    }
  }
  return 0;
}
