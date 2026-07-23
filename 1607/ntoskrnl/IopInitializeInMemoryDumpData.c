/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1401C7484
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x14009A3B8 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x14009A6A0 (MmAllocateContiguousNodeMemory.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwFilterBootOption @ 0x14015BCD0 (ZwFilterBootOption.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KdCopyDataBlock @ 0x1401D108C (KdCopyDataBlock.c)
 *     RtlRandomEx @ 0x1404CB2E8 (RtlRandomEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140628318 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rdi
  NTSTATUS v1; // eax
  int v2; // ecx
  PVOID *v3; // rsi
  bool v4; // r12
  unsigned int v5; // r15d
  __int64 *v6; // r14
  void *ContiguousNodeMemory; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-40h]
  _BYTE Data[8]; // [rsp+48h] [rbp-28h] BYREF
  _DWORD v17[4]; // [rsp+50h] [rbp-20h] BYREF

  v0 = 2LL;
  v17[0] = 2012912317;
  v17[1] = 1295123289;
  v17[2] = -198680387;
  v17[3] = 1266192359;
  *(_QWORD *)&v15 = 0x302E4594353594B3LL;
  *((_QWORD *)&v15 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    dword_140328E84 = 0;
    dword_140328E70 = 0;
    v1 = ZwFilterBootOption(FilterBootOptionOperationSetElement, 0x10200003u, 0x260000A0u, Data, 1u);
    v2 = 9088;
    v3 = (PVOID *)&unk_140328E58;
    v4 = v1 >= 0;
    qword_140328E68 = 9088LL;
    v5 = 0;
    v6 = (__int64 *)&unk_140328E58;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v2, 0LL, -1LL, 0, 4u, 0x80000000);
      *v6 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140328E68);
      v11 = *v6;
      *(_OWORD *)v11 = v15;
      *(_QWORD *)(v11 + 16) = 0x199B7088610836E8LL;
      if ( v4 )
        KdCopyDataBlock(*v6 + 8216, v8, v9, v10);
      ++v5;
      ++v6;
      if ( v5 >= 2 )
      {
        v12 = __rdtsc();
        LODWORD(qword_140328E78) = v12;
        v13 = __rdtsc();
        HIDWORD(qword_140328E78) = v13;
        RtlRandomEx((PULONG)&qword_140328E78 + 1);
        v14 = IoSetEnvironmentVariableEx(
                (unsigned int)L"DumpInstance",
                (unsigned int)v17,
                (unsigned int)&qword_140328E78,
                8,
                7);
        if ( v14 < 0 )
        {
          dword_140328E84 = v14;
          qword_140328E78 = 0x4547415045474150LL;
        }
        dword_140328E54 = 1;
        goto LABEL_15;
      }
      v2 = qword_140328E68;
    }
    dword_140328E84 = -1073741801;
    do
    {
      if ( *v3 )
      {
        MmFreeContiguousMemory(*v3);
        *v3 = 0LL;
      }
      ++v3;
      --v0;
    }
    while ( v0 );
LABEL_15:
    _InterlockedExchange(InMemData, 0);
  }
}
