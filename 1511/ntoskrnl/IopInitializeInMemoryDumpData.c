/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1401B9788
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140135E98 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmAllocateContiguousNodeMemory @ 0x1400BD454 (MmAllocateContiguousNodeMemory.c)
 *     MmFreeContiguousMemory @ 0x1400C1D4C (MmFreeContiguousMemory.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwQuerySystemInformation @ 0x140150CE0 (ZwQuerySystemInformation.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KdCopyDataBlock @ 0x1401C1C50 (KdCopyDataBlock.c)
 *     RtlRandomEx @ 0x1403CBDAC (RtlRandomEx.c)
 *     IoSetEnvironmentVariableEx @ 0x1405FE238 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // r14
  bool v1; // si
  __int64 v2; // rax
  int v3; // ecx
  PVOID *v4; // rdi
  __int64 *v5; // r15
  unsigned int v6; // r12d
  void *ContiguousNodeMemory; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  int v14; // eax
  __int128 v15; // [rsp+30h] [rbp-50h]
  _DWORD v16[4]; // [rsp+48h] [rbp-38h] BYREF
  __int64 SystemInformation; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]

  v0 = 2LL;
  v16[0] = 2012912317;
  v16[1] = 1295123289;
  v16[2] = -198680387;
  v16[3] = 1266192359;
  *(_QWORD *)&v15 = 0x302E4594353594B3LL;
  *((_QWORD *)&v15 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    SystemInformation = 0LL;
    dword_140305E04 = 0;
    dword_140305DF0 = 0;
    v18 = 0LL;
    v1 = 0;
    v19 = 0LL;
    if ( ZwQuerySystemInformation(SystemSecureBootPolicyInformation, &SystemInformation, 0x18u, 0LL) >= 0 )
    {
      v2 = SystemInformation - SecBootPolicyPublisherDebug;
      if ( SystemInformation == SecBootPolicyPublisherDebug )
        v2 = v18 - 0x2B3182B24A84A189LL;
      v1 = v2 == 0;
    }
    v3 = 9080;
    v4 = (PVOID *)&unk_140305DD8;
    qword_140305DE8 = 9080LL;
    v5 = (__int64 *)&unk_140305DD8;
    v6 = 0;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v3, 0LL, -1LL, 0, 4u, 0x80000000);
      *v5 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140305DE8);
      v11 = *v5;
      *(_OWORD *)v11 = v15;
      *(_QWORD *)(v11 + 16) = 0x199B7088610836E8LL;
      if ( v1 )
        KdCopyDataBlock(*v5 + 8216, v8, v9, v10);
      ++v6;
      ++v5;
      if ( v6 >= 2 )
      {
        v12 = __rdtsc();
        LODWORD(qword_140305DF8) = v12;
        v13 = __rdtsc();
        HIDWORD(qword_140305DF8) = v13;
        RtlRandomEx((PULONG)&qword_140305DF8 + 1);
        v14 = IoSetEnvironmentVariableEx(
                (unsigned int)L"DumpInstance",
                (unsigned int)v16,
                (unsigned int)&qword_140305DF8,
                8,
                7);
        if ( v14 < 0 )
        {
          dword_140305E04 = v14;
          qword_140305DF8 = 0x4547415045474150LL;
        }
        dword_140305DD4 = 1;
        goto LABEL_19;
      }
      v3 = qword_140305DE8;
    }
    dword_140305E04 = -1073741801;
    do
    {
      if ( *v4 )
      {
        MmFreeContiguousMemory(*v4);
        *v4 = 0LL;
      }
      ++v4;
      --v0;
    }
    while ( v0 );
LABEL_19:
    _InterlockedExchange(InMemData, 0);
  }
}
