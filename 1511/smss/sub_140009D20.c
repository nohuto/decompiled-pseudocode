/*
 * XREFs of sub_140009D20 @ 0x140009D20
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 * Callees:
 *     sub_140005900 @ 0x140005900 (sub_140005900.c)
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 *     sub_14000A070 @ 0x14000A070 (sub_14000A070.c)
 *     sub_14000A2F0 @ 0x14000A2F0 (sub_14000A2F0.c)
 *     sub_14000ADF0 @ 0x14000ADF0 (sub_14000ADF0.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 *     memset @ 0x14000C48C (memset.c)
 */

NTSTATUS sub_140009D20()
{
  NTSTATUS result; // eax
  _BYTE *Heap; // rax
  _BYTE *v2; // rbx
  NTSTATUS v3; // edi
  void *v4; // rcx
  __int64 v5; // rcx
  unsigned int v6; // ecx
  ULONG i; // ebx
  NTSTATUS v8; // eax
  void *v9; // rcx
  int v10; // edi
  NTSTATUS v11; // ebx
  int v12; // eax
  NTSTATUS (__stdcall *v13)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG); // rcx
  ULONG ReturnLength[2]; // [rsp+28h] [rbp-E0h] BYREF
  void *EventHandle; // [rsp+30h] [rbp-D8h] BYREF
  int ProcessInformation; // [rsp+38h] [rbp-D0h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD v18[2]; // [rsp+70h] [rbp-98h] BYREF
  int v19; // [rsp+80h] [rbp-88h] BYREF
  const wchar_t *v20; // [rsp+88h] [rbp-80h]
  _DWORD SystemInformation[260]; // [rsp+98h] [rbp-70h] BYREF
  _QWORD v22[10]; // [rsp+4A8h] [rbp+3A0h] BYREF

  LODWORD(v18[0]) = 1441812;
  v18[1] = L"\\SmApiPort";
  v19 = 4456514;
  v20 = L"\\Device\\VolumesSafeForWriteAccess";
  ReturnLength[0] = 0;
  Flags = RtlCreateTagHeap(*(HANDLE *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, (PWSTR)L"SMSS!", (PWSTR)L"INIT");
  result = NtQuerySystemInformation(SystemBasicInformation, &unk_140020180, 0x40u, 0LL);
  if ( result < 0 )
    return result;
  ProcessInformation = 1;
  NtSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessDefaultHardErrorMode, &ProcessInformation, 4u);
  result = sub_14000ADF0();
  if ( result < 0 )
  {
    dword_14001FCF8 = 1603;
    v13 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))sub_14000ADF0;
    goto LABEL_26;
  }
  byte_14001FE58 = 0;
  result = NtQuerySystemInformation(SystemSummaryMemoryInformation|0x80, 0LL, 0, ReturnLength);
  if ( result >= 0 )
    return -1073741823;
  if ( result == -1073741820 )
  {
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), Flags, ReturnLength[0]);
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
    byte_14001FE58 = *v2 & 1;
    RtlFreeHeap(v4, 0, v2);
    LOBYTE(v5) = 1;
    result = sub_14000A2F0(v5);
    if ( result < 0 )
    {
      dword_14001FCF8 = 1667;
      v13 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))sub_14000A2F0;
    }
    else
    {
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v18;
      ObjectAttributes.SecurityDescriptor = qword_14001FE08;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 0;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      memset(v22, 0, 0x48uLL);
      LODWORD(v22[0]) = 0x20000;
      v22[2] = 328LL;
      v22[4] = 1000000LL;
      result = NtAlpcCreatePort(&qword_14001FCE0, &ObjectAttributes, v22);
      if ( result < 0 )
      {
        v13 = (NTSTATUS (__stdcall *)(SYSTEM_INFORMATION_CLASS, PVOID, ULONG, PULONG))NtAlpcCreatePort;
        dword_14001FCF8 = 1690;
      }
      else
      {
        qword_14001FCE8 = LODWORD(KeGetPcr()->NtTib.Self[1].StackBase);
        dword_14001FE64 = MEMORY[0x7FFE03C0];
        result = NtQuerySystemInformation(SystemNumaProcessorMap, SystemInformation, 0x408u, 0LL);
        if ( result >= 0 )
        {
          dword_1400201F0 = SystemInformation[0] + 1;
          RtlInitializeBitMap(&BitMapHeader, &BitMapBuffer, SystemInformation[0] + 1);
          RtlClearAllBits(&BitMapHeader);
          v6 = dword_1400201F0;
          for ( i = 0; i < v6; ++i )
          {
            if ( *(_QWORD *)&SystemInformation[4 * i + 2] )
            {
              RtlSetBits(&BitMapHeader, i, 1u);
              v6 = dword_1400201F0;
            }
          }
          ObjectAttributes.Length = 48;
          ObjectAttributes.ObjectName = (PUNICODE_STRING)&v19;
          ObjectAttributes.RootDirectory = 0LL;
          ObjectAttributes.Attributes = 64;
          *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
          v8 = NtOpenEvent(&EventHandle, 0x1F0003u, &ObjectAttributes);
          v9 = EventHandle;
          v10 = v8;
          if ( v8 < 0 )
            v9 = 0LL;
          EventHandle = v9;
          result = sub_14000A070();
          if ( result >= 0 )
          {
            v11 = sub_140005E5C(EventHandle);
            if ( v10 >= 0 )
              NtClose(EventHandle);
            if ( v11 >= 0 )
            {
              v12 = sub_140005900();
              v11 = v12;
              if ( v12 < 0 )
              {
                dword_14001FCFC = v12;
                qword_14001FD00 = (__int64)sub_140005900;
                dword_14001FCF8 = 1795;
              }
            }
            return v11;
          }
          return result;
        }
        v13 = NtQuerySystemInformation;
        dword_14001FCF8 = 1708;
      }
    }
LABEL_26:
    dword_14001FCFC = result;
    qword_14001FD00 = (__int64)v13;
  }
  return result;
}
