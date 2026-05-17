/*
 * XREFs of RtlCreateProcessReflection @ 0x1800C1540
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180076580 (RtlpCreateUserThreadEx.c)
 *     NtWaitForSingleObject @ 0x180093940 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800939E0 (ZwSetEvent.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x180093AE0 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x180093CC0 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x180093D80 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x180093EA0 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x180093EB0 (NtWaitForMultipleObjects.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpProcessReflectionStartup @ 0x1800C1B00 (RtlpProcessReflectionStartup.c)
 */

__int64 __fastcall RtlCreateProcessReflection(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  int VirtualMemory; // ebx
  _QWORD *v12; // [rsp+38h] [rbp-89h]
  ULONG ProcessInformationLength[2]; // [rsp+88h] [rbp-39h] BYREF
  PVOID ProcessInformation; // [rsp+90h] [rbp-31h]
  HANDLE v15; // [rsp+98h] [rbp-29h]
  HANDLE v16; // [rsp+A0h] [rbp-21h]
  __int64 v17; // [rsp+A8h] [rbp-19h]
  HANDLE Handle; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v19; // [rsp+B8h] [rbp-9h]
  _QWORD v20[3]; // [rsp+C0h] [rbp-1h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+17h] BYREF
  __int64 v22; // [rsp+E0h] [rbp+1Fh] BYREF

  *(_QWORD *)ProcessInformationLength = 4096LL;
  Handle = 0LL;
  ProcessInformation = 0LL;
  v15 = 0LL;
  v19 = 0LL;
  v20[0] = 0LL;
  v17 = 0LL;
  v16 = 0LL;
  ZwQuerySystemTime(&v21);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return 3221225712LL;
  if ( (a2 & 8) != 0 && a3 )
    return 3221225715LL;
  if ( a6 )
    memset(a6, 0, 0x20uLL);
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
  {
    ProcessInformation = 0LL;
    goto LABEL_37;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    ProcessInformation,
    ProcessInformationLength[0],
    ProcessInformationLength);
  *(_QWORD *)ProcessInformationLength = 4096LL;
  ZwFreeVirtualMemory();
  VirtualMemory = ZwAllocateVirtualMemory();
  if ( VirtualMemory < 0 )
    goto LABEL_37;
  MEMORY[0x18] = a4;
  MEMORY[0x10] = a3;
  MEMORY[0] = 88LL;
  MEMORY[8] = a2;
  MEMORY[0x30] = a5;
  if ( a1 == -1 )
  {
    MEMORY[8] = a2 | 0x10;
    VirtualMemory = RtlpProcessReflectionStartup(0LL);
    if ( VirtualMemory >= 0 && a6 )
    {
      *a6 = MEMORY[0x38];
      a6[1] = MEMORY[0x40];
      a6[2] = MEMORY[0x48];
LABEL_36:
      a6[3] = MEMORY[0x50];
      goto LABEL_37;
    }
    goto LABEL_37;
  }
  v19 = 88LL;
  VirtualMemory = NtCreateSection();
  if ( VirtualMemory < 0 )
    goto LABEL_37;
  v20[0] = 88LL;
  VirtualMemory = ZwMapViewOfSection();
  if ( VirtualMemory >= 0 )
  {
    v12 = v20;
    VirtualMemory = ZwMapViewOfSection();
    if ( VirtualMemory >= 0 )
    {
      if ( !a6
        || (VirtualMemory = ZwCreateEvent(), VirtualMemory >= 0)
        && (VirtualMemory = ZwCreateEvent(), VirtualMemory >= 0)
        && (VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0)
        && (LODWORD(v12) = 2, VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0)
        && (!a5 || (LODWORD(v12) = 2, VirtualMemory = ZwDuplicateObject(), VirtualMemory >= 0)) )
      {
        VirtualMemory = RtlpCreateUserThreadEx(
                          a1,
                          0LL,
                          2,
                          0,
                          0LL,
                          0LL,
                          (__int64)v12,
                          (__int64)RtlpProcessReflectionStartup,
                          v17,
                          &Handle,
                          0LL);
        if ( VirtualMemory >= 0 )
        {
          if ( a6 )
          {
            v20[1] = Handle;
            v20[2] = v16;
            if ( (unsigned int)NtWaitForMultipleObjects() == 1 )
            {
              if ( MEMORY[0x38] )
              {
                if ( (int)ZwDuplicateObject() < 0 || (int)ZwDuplicateObject() < 0 )
                {
                  VirtualMemory = ZwSetEvent();
                  goto LABEL_37;
                }
                VirtualMemory = ZwSetEvent();
                a6[2] = MEMORY[0x48];
                goto LABEL_36;
              }
              NtWaitForSingleObject(Handle, 0, 0LL);
            }
            VirtualMemory = -1073741823;
          }
        }
      }
    }
LABEL_37:
    if ( v17 )
      NtUnmapViewOfSection();
    goto LABEL_39;
  }
  v17 = 0LL;
LABEL_39:
  if ( v15 )
    NtClose(v15);
  if ( v16 )
    NtClose(v16);
  if ( Handle )
    NtClose(Handle);
  ZwQuerySystemTime(&v22);
  return (unsigned int)VirtualMemory;
}
