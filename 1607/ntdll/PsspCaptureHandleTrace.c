/*
 * XREFs of PsspCaptureHandleTrace @ 0x180088D88
 * Callers:
 *     PsspCaptureProcessInformation @ 0x180088BD8 (PsspCaptureProcessInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtQueryInformationProcess @ 0x1800A6740 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x1800A6920 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x1800A6D60 (NtCreateSection.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

int __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  int result; // eax
  unsigned __int64 v5; // rcx
  int v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID v8; // [rsp+58h] [rbp-A8h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-98h] BYREF
  __int64 v11; // [rsp+70h] [rbp-90h] BYREF
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * ProcessInformation[2];
    if ( v5 > 0xFFFFFFFF )
      return -1073741675;
    ProcessInformationLength[0] = 160 * ProcessInformation[2];
    if ( (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      ProcessInformationLength[1] = 0;
      ProcessInformationLength[0] = v5 + 176;
      result = NtCreateSection(&Handle, 983047LL, "0", ProcessInformationLength, 4, 0x8000000, 0LL);
      if ( result >= 0 )
      {
        v8 = 0LL;
        v11 = 0LL;
        v6 = ZwMapViewOfSection(Handle, -1LL, &v8, 0LL, 0LL, 0LL, &v11, 1, 0, 4);
        if ( v6 >= 0 )
        {
          memset(v8, 0, 0xB0uLL);
          if ( NtQueryInformationProcess(a2, (PROCESSINFOCLASS)32, v8, ProcessInformationLength[0], &ReturnLength) >= 0 )
          {
            NtUnmapViewOfSection(-1LL, v8);
            *(_DWORD *)(a1 + 936) = ReturnLength;
            *(_QWORD *)(a1 + 944) = Handle;
            *(_QWORD *)(a1 + 952) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            NtUnmapViewOfSection(-1LL, v8);
            return NtClose(Handle);
          }
        }
        else
        {
          NtClose(Handle);
          return v6;
        }
      }
    }
  }
  return result;
}
