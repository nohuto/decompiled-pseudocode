/*
 * XREFs of CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenSection @ 0x14015A8D0 (ZwOpenSection.c)
 *     __report_rangecheckfailure @ 0x1401B1134 (__report_rangecheckfailure.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     NtOpenKey @ 0x140414318 (NtOpenKey.c)
 *     NtCreateKey @ 0x140462F98 (NtCreateKey.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     CmpAddProcessorConfigurationEntry @ 0x14055CE14 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407CD76C (CmpInitializeSystemBiosInformation.c)
 */

NTSTATUS __fastcall CmpInitializeMachineDependentConfiguration(__int64 a1)
{
  unsigned __int64 v1; // rbp
  __int64 v2; // rsi
  unsigned int v3; // r14d
  unsigned int v4; // ecx
  unsigned __int64 v5; // rax
  NTSTATUS result; // eax
  void *v7; // rbx
  unsigned int v8; // edi
  __int64 v9; // rbx
  unsigned int v10; // ecx
  KPCR *Pcr; // rax
  unsigned int SecondLevelCacheSize; // r10d
  unsigned __int8 *v13; // rax
  int v14; // edx
  int v15; // ecx
  char v16; // cl
  int v17; // edi
  __int64 Table; // rax
  bool v19; // cf
  bool v20; // zf
  bool v21; // al
  _BYTE v22[192]; // [rsp+140h] [rbp+140h] BYREF

  v1 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = a1;
  v2 = a1;
  v3 = 0;
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v5 >= 0x54 )
      _report_rangecheckfailure();
    *(_WORD *)((char *)&CmpDeviceIndexTable + v5) = 0;
    ++v4;
    v5 += 2LL;
  }
  while ( v4 < 0x2A );
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 64;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 48;
  *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  if ( NtOpenKey((PHANDLE)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL), 0x2001Fu, (POBJECT_ATTRIBUTES)(v1 + 48)) >= 0 )
  {
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = 1;
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 32), L"PhysicalAddressExtension");
    NtSetValueKey(*(HANDLE *)v1, (PUNICODE_STRING)(v1 + 32), 0, 4u, (PVOID)(v1 + 16), 4u);
    NtClose(*(HANDLE *)v1);
  }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = &CmRegistryMachineHardwareDescriptionSystemName;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 48;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 64;
  result = NtCreateKey((PHANDLE)(v1 + 8), 0x20019u, (POBJECT_ATTRIBUTES)(v1 + 48), 0, 0LL, 0, 0LL);
  if ( result >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 120), L"CentralProcessor");
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 48;
    v7 = *(void **)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 120;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v7;
    *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 64;
    NtCreateKey(
      (PHANDLE)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL),
      0x2001Fu,
      (POBJECT_ATTRIBUTES)(v1 + 48),
      0,
      0LL,
      0,
      (PULONG)(v1 + 20));
    NtClose(*(HANDLE *)v1);
    if ( *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) == 1 )
    {
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      v8 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        do
        {
          v9 = KiProcessorBlock[v8];
          v10 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v9 + 36)];
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6A) = 0;
          *(_WORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6E) = 0;
          *(_WORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v10 >> 6;
          *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1LL << (v10 & 0x3F);
          KeSetSystemGroupAffinityThread((PGROUP_AFFINITY)(v1 + 96), (PGROUP_AFFINITY)(v1 + 168));
          CmpAddProcessorConfigurationEntry(v9, v8, *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
          Pcr = KeGetPcr();
          if ( v8 )
          {
            SecondLevelCacheSize = Pcr->SecondLevelCacheSize;
            if ( *(_BYTE *)(v9 + 1521) )
            {
              v13 = (unsigned __int8 *)(v9 + 25304);
              do
              {
                v14 = v13[KiProcessorBlock[0] - v9];
                v15 = *v13 - v14;
                if ( v15 )
                  break;
                ++v13;
              }
              while ( v14 );
              v20 = v15 == 0;
              v16 = CmProcessorMismatch;
              if ( !v20 )
              {
                v16 = CmProcessorMismatch | 1;
                CmProcessorMismatch |= 1u;
              }
              if ( SecondLevelCacheSize != v3 )
              {
                v16 |= 4u;
                CmProcessorMismatch = v16;
              }
              if ( *(_BYTE *)(v9 + 1520) != *(_BYTE *)(KiProcessorBlock[0] + 1520)
                || *(_WORD *)(v9 + 1522) != *(_WORD *)(KiProcessorBlock[0] + 1522) )
              {
                CmProcessorMismatch = v16 | 2;
              }
            }
            else if ( *(_BYTE *)(KiProcessorBlock[0] + 1521) )
            {
              CmProcessorMismatch |= 2u;
            }
          }
          else
          {
            v3 = Pcr->SecondLevelCacheSize;
          }
          KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(v1 + 168));
          ++v8;
        }
        while ( v8 < (unsigned int)KeNumberProcessors_0 );
        v2 = *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70);
      }
      if ( CmpConfigurationData )
      {
        ExFreePoolWithTag(CmpConfigurationData, 0);
        CmpConfigurationData = 0LL;
      }
      v7 = *(void **)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 136), L"\\Device\\PhysicalMemory");
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 48;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = ((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 136;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 64;
    *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = 0LL;
    if ( ZwOpenSection((PHANDLE)(v1 + 24), 0xF001Fu, (POBJECT_ATTRIBUTES)(v1 + 48)) >= 0 )
    {
      v17 = dword_1402FD030;
      if ( dword_1402FD030 == 1 )
        CmpSetSystemBiosInformation(v2, *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18), v7);
      else
        CmpInitializeSystemBiosInformation(v2);
      *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 0LL;
      *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0;
      Table = HalAcpiGetTableEx(v2, 1346584902LL, 0LL, 0LL);
      if ( Table )
      {
        v19 = *(_BYTE *)(Table + 8) == 0;
        v20 = *(_BYTE *)(Table + 8) == 1;
        if ( *(_BYTE *)(Table + 8) > 1u )
        {
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = *(unsigned __int16 *)(Table + 109);
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_DWORD *)(Table + 112);
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) = *(unsigned __int8 *)(Table + 45);
          v19 = *(_BYTE *)(Table + 8) == 0;
          v20 = *(_BYTE *)(Table + 8) == 1;
        }
        v21 = !v19 && !v20;
      }
      else
      {
        v21 = 0;
      }
      if ( v21 )
      {
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 32), L"BootArchitecture");
        NtSetValueKey(v7, (PUNICODE_STRING)(v1 + 32), 0, 4u, (PVOID)(v1 + 152), 4u);
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 32), L"PreferredProfile");
        NtSetValueKey(v7, (PUNICODE_STRING)(v1 + 32), 0, 4u, (PVOID)(v1 + 156), 4u);
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 32), L"Capabilities");
        NtSetValueKey(v7, (PUNICODE_STRING)(v1 + 32), 0, 4u, (PVOID)(v1 + 160), 4u);
      }
      if ( v17 == 1 )
        CmpSetVideoBiosInformation(*(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18), v7);
      ZwClose(*(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18));
    }
    NtClose(v7);
    return 0;
  }
  return result;
}
