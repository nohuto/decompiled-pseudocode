/*
 * XREFs of CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8
 * Callers:
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenSection @ 0x14017F6D0 (ZwOpenSection.c)
 *     __report_rangecheckfailure @ 0x1401DC4F0 (__report_rangecheckfailure.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     NtClose @ 0x14049BE90 (NtClose.c)
 *     NtCreateKey @ 0x1404F4810 (NtCreateKey.c)
 *     NtOpenKey @ 0x1404F5530 (NtOpenKey.c)
 *     CmpAddProcessorConfigurationEntry @ 0x1405A5580 (CmpAddProcessorConfigurationEntry.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407F8518 (CmpInitializeSystemBiosInformation.c)
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
  _BYTE v22[208]; // [rsp+150h] [rbp+150h] BYREF

  v1 = (unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = a1;
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
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 64;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 48;
  *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  if ( NtOpenKey((PHANDLE)(v1 + 8), 0x2001Fu, (POBJECT_ATTRIBUTES)(v1 + 24)) >= 0 )
  {
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 1;
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 80), L"PhysicalAddressExtension");
    NtSetValueKey(
      *(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      (PUNICODE_STRING)(v1 + 80),
      0,
      4u,
      (PVOID)(v1 + 96),
      4u);
    NtClose(*(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
  }
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = &CmRegistryMachineHardwareDescriptionSystemName;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 48;
  *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
  *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
  *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 64;
  result = NtCreateKey(
             (PHANDLE)((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL),
             0x20019u,
             (POBJECT_ATTRIBUTES)(v1 + 24),
             0,
             0LL,
             0,
             0LL);
  if ( result >= 0 )
  {
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 128), L"CentralProcessor");
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 48;
    v7 = *(void **)v1;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 128;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v7;
    *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 64;
    NtCreateKey((PHANDLE)(v1 + 8), 0x2001Fu, (POBJECT_ATTRIBUTES)(v1 + 24), 0, 0LL, 0, (PULONG)(v1 + 72));
    NtClose(*(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    if ( *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) == 1 )
    {
      CmpConfigurationData = ExAllocatePoolWithTag(PagedPool, (unsigned int)CmpConfigurationAreaSize, 0x20204D43u);
      v8 = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        do
        {
          v9 = KiProcessorBlock[v8];
          v10 = KiProcessorIndexToNumberMappingTable[*(unsigned int *)(v9 + 36)];
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x72) = 0;
          *(_WORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x76) = 0;
          *(_WORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v10 >> 6;
          *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = 1LL << (v10 & 0x3F);
          KeSetSystemGroupAffinityThread((PGROUP_AFFINITY)(v1 + 104), (PGROUP_AFFINITY)(v1 + 176));
          CmpAddProcessorConfigurationEntry(v9, v8, *(_QWORD *)v1);
          Pcr = KeGetPcr();
          if ( v8 )
          {
            SecondLevelCacheSize = Pcr->SecondLevelCacheSize;
            if ( *(_BYTE *)(v9 + 1521) )
            {
              v13 = (unsigned __int8 *)(v9 + 25176);
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
          KeRevertToUserGroupAffinityThread((PGROUP_AFFINITY)(v1 + 176));
          ++v8;
        }
        while ( v8 < (unsigned int)KeNumberProcessors_0 );
        v2 = *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
      }
      if ( CmpConfigurationData )
      {
        ExFreePoolWithTag(CmpConfigurationData, 0);
        CmpConfigurationData = 0LL;
      }
      v7 = *(void **)v1;
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 144), L"\\Device\\PhysicalMemory");
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 48;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = ((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                        + 144;
    *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = 0LL;
    *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 64;
    *(_OWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
    if ( ZwOpenSection((PHANDLE)(v1 + 16), 0xF001Fu, (POBJECT_ATTRIBUTES)(v1 + 24)) >= 0 )
    {
      v17 = dword_1403254D0;
      if ( dword_1403254D0 == 1 )
        CmpSetSystemBiosInformation(v2, *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v7);
      else
        CmpInitializeSystemBiosInformation(v2);
      *(_QWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0LL;
      *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
      Table = HalAcpiGetTableEx(v2, 1346584902LL, 0LL, 0LL);
      if ( Table )
      {
        v19 = *(_BYTE *)(Table + 8) == 0;
        v20 = *(_BYTE *)(Table + 8) == 1;
        if ( *(_BYTE *)(Table + 8) > 1u )
        {
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(unsigned __int16 *)(Table + 109);
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_DWORD *)(Table + 112);
          *(_DWORD *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) = *(unsigned __int8 *)(Table + 45);
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
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 80), L"BootArchitecture");
        NtSetValueKey(v7, (PUNICODE_STRING)(v1 + 80), 0, 4u, (PVOID)(v1 + 160), 4u);
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 80), L"PreferredProfile");
        NtSetValueKey(v7, (PUNICODE_STRING)(v1 + 80), 0, 4u, (PVOID)(v1 + 164), 4u);
        RtlInitUnicodeString((PUNICODE_STRING)(v1 + 80), L"Capabilities");
        NtSetValueKey(v7, (PUNICODE_STRING)(v1 + 80), 0, 4u, (PVOID)(v1 + 168), 4u);
      }
      if ( v17 == 1 )
        CmpSetVideoBiosInformation(*(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), v7);
      ZwClose(*(HANDLE *)(((unsigned __int64)v22 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10));
    }
    NtClose(v7);
    return 0;
  }
  return result;
}
