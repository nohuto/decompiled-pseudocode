/*
 * XREFs of IopInitializeInMemoryDumpData @ 0x1401F4A70
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 * Callees:
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     MmAllocateContiguousNodeMemory @ 0x140114D80 (MmAllocateContiguousNodeMemory.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     RtlRandomEx @ 0x1404A2FFC (RtlRandomEx.c)
 *     IoSetEnvironmentVariableEx @ 0x140678BA8 (IoSetEnvironmentVariableEx.c)
 */

void IopInitializeInMemoryDumpData()
{
  __int64 v0; // rsi
  PVOID *v1; // rdi
  int v2; // ecx
  unsigned int v3; // r15d
  __int64 *v4; // r14
  void *ContiguousNodeMemory; // rax
  __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rax
  int v9; // eax
  __int128 v10; // [rsp+30h] [rbp-30h]
  _DWORD v11[4]; // [rsp+48h] [rbp-18h] BYREF

  v0 = 2LL;
  v11[0] = 2012912317;
  v11[1] = 1295123289;
  v11[2] = -198680387;
  v11[3] = 1266192359;
  *(_QWORD *)&v10 = 0x302E4594353594B3LL;
  *((_QWORD *)&v10 + 1) = 0xB50211F197DACBD4uLL;
  if ( _InterlockedExchange(InMemData, 1) != 1 )
  {
    v1 = (PVOID *)&unk_140353B58;
    v2 = 9080;
    dword_140353B84 = 0;
    dword_140353B70 = 0;
    v3 = 0;
    qword_140353B68 = 9080LL;
    v4 = (__int64 *)&unk_140353B58;
    while ( 1 )
    {
      ContiguousNodeMemory = (void *)MmAllocateContiguousNodeMemory(v2, 0LL, -1LL, 0, 4u, 0x80000000);
      *v4 = (__int64)ContiguousNodeMemory;
      if ( !ContiguousNodeMemory )
        break;
      memset(ContiguousNodeMemory, 0, qword_140353B68);
      v6 = *v4;
      ++v3;
      ++v4;
      *(_OWORD *)v6 = v10;
      *(_QWORD *)(v6 + 16) = 0x199B7088610836E8LL;
      if ( v3 >= 2 )
      {
        v7 = __rdtsc();
        LODWORD(qword_140353B78) = v7;
        v8 = __rdtsc();
        HIDWORD(qword_140353B78) = v8;
        RtlRandomEx((PULONG)&qword_140353B78 + 1);
        v9 = IoSetEnvironmentVariableEx(
               (unsigned int)L"DumpInstance",
               (unsigned int)v11,
               (unsigned int)&qword_140353B78,
               8,
               7);
        if ( v9 < 0 )
        {
          dword_140353B84 = v9;
          qword_140353B78 = 0x4547415045474150LL;
        }
        dword_140353B54 = 1;
        goto LABEL_13;
      }
      v2 = qword_140353B68;
    }
    dword_140353B84 = -1073741801;
    do
    {
      if ( *v1 )
      {
        MmFreeContiguousMemory(*v1);
        *v1 = 0LL;
      }
      ++v1;
      --v0;
    }
    while ( v0 );
LABEL_13:
    _InterlockedExchange(InMemData, 0);
  }
}
