/*
 * XREFs of SmpInit @ 0x140001F90
 * Callers:
 *     wmain @ 0x140004718 (wmain.c)
 * Callees:
 *     SmpInitializeKnownSubSystems @ 0x140001160 (SmpInitializeKnownSubSystems.c)
 *     SmpCreateSecurityDescriptors @ 0x140001250 (SmpCreateSecurityDescriptors.c)
 *     SmpInitializePendingRename @ 0x140001D48 (SmpInitializePendingRename.c)
 *     SmpLoadDataFromRegistry @ 0x140005550 (SmpLoadDataFromRegistry.c)
 *     InitializeWow64OnBoot @ 0x140007400 (InitializeWow64OnBoot.c)
 *     __security_check_cookie @ 0x14000C1E0 (__security_check_cookie.c)
 *     memset_0 @ 0x14000C6C8 (memset_0.c)
 */

int SmpInit()
{
  int result; // eax
  _BYTE *Heap; // rax
  _BYTE *v2; // rbx
  NTSTATUS v3; // edi
  void *v4; // rcx
  unsigned int v5; // ecx
  ULONG i; // ebx
  NTSTATUS v7; // eax
  void *v8; // rcx
  int v9; // edi
  int DataFromRegistry; // ebx
  int v11; // eax
  void *v12; // rcx
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v17[2]; // [rsp+70h] [rbp-98h] BYREF
  int v18; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v19; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _DWORD v21[4]; // [rsp+4A8h] [rbp+3A0h] BYREF
  __int64 v22; // [rsp+4B8h] [rbp+3B0h]
  __int64 v23; // [rsp+4C8h] [rbp+3C0h]

  LODWORD(v17[0]) = 1441812;
  v17[1] = L"\\SmApiPort";
  v18 = 4456514;
  v19 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  SmBaseTag = RtlCreateTagHeap(
                *(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                0,
                (PWSTR)L"SMSS!",
                (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &SmpSystemInfo, 0x40u, 0LL);
  if ( result < 0 )
    return result;
  ProcessInformation = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
  result = SmpInitializeKnownSubSystems();
  if ( result < 0 )
  {
    SmpInitProgressByLine = 1590;
    v12 = SmpInitializeKnownSubSystems;
    goto LABEL_26;
  }
  SmpManufacturingMode = 0;
  result = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
  if ( result >= 0 )
    return -1073741823;
  if ( result == -1073741820 )
  {
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), SmBaseTag, ReturnLength[0]);
    v2 = Heap;
    if ( !Heap )
      return -1073741670;
    v3 = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, Heap, ReturnLength[0], ReturnLength);
    v4 = *(void **)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL);
    if ( v3 < 0 )
    {
      RtlFreeHeap(v4, 0, v2);
      return v3;
    }
    SmpManufacturingMode = *v2 & 1;
    RtlFreeHeap(v4, 0, v2);
    result = SmpCreateSecurityDescriptors(1);
    if ( result < 0 )
    {
      SmpInitProgressByLine = 1654;
      v12 = SmpCreateSecurityDescriptors;
    }
    else
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v17;
      ObjectAttributes.SecurityDescriptor = SmpApiPortSecurityDescriptor;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 0;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      memset_0(v21, 0, 0x48uLL);
      v21[0] = 0x20000;
      v22 = 328LL;
      v23 = 1000000LL;
      result = NtAlpcCreatePort(&SmpApiConnectionPort, &ObjectAttributes, v21);
      if ( result < 0 )
      {
        v12 = NtAlpcCreatePort;
        SmpInitProgressByLine = 1677;
      }
      else
      {
        SmpUniqueProcessId = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
        SmpActiveProcessorCount = MEMORY[0x7FFE03C0];
        result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
        if ( result >= 0 )
        {
          SmpMaximumNodeCount = SystemInformation[0] + 1;
          RtlInitializeBitMap(&SmpNodeBitmap, &SmpNodeBitmapBuffer, SystemInformation[0] + 1);
          RtlClearAllBits(&SmpNodeBitmap);
          v5 = SmpMaximumNodeCount;
          for ( i = 0; i < v5; ++i )
          {
            if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
            {
              RtlSetBits(&SmpNodeBitmap, i, 1u);
              v5 = SmpMaximumNodeCount;
            }
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v18;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v7 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
          v8 = EventHandle;
          v9 = v7;
          if ( v7 < 0 )
            v8 = 0LL;
          EventHandle = v8;
          result = SmpInitializePendingRename();
          if ( result >= 0 )
          {
            DataFromRegistry = SmpLoadDataFromRegistry(EventHandle);
            if ( v9 >= 0 )
              NtClose(EventHandle);
            if ( DataFromRegistry >= 0 )
            {
              v11 = InitializeWow64OnBoot();
              DataFromRegistry = v11;
              if ( v11 < 0 )
              {
                SmpInitReturnStatus = v11;
                SmpInitLastCall = (__int64)InitializeWow64OnBoot;
                SmpInitProgressByLine = 1782;
              }
            }
            return DataFromRegistry;
          }
          return result;
        }
        v12 = NtQuerySystemInformation;
        SmpInitProgressByLine = 1695;
      }
    }
LABEL_26:
    SmpInitReturnStatus = result;
    SmpInitLastCall = (__int64)v12;
  }
  return result;
}
