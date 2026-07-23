/*
 * XREFs of PsspCaptureHandleTrace @ 0x180059734
 * Callers:
 *     PsspCaptureProcessInformation @ 0x1800595B4 (PsspCaptureProcessInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
 *     NtQueryInformationProcess @ 0x180093A90 (NtQueryInformationProcess.c)
 *     ZwMapViewOfSection @ 0x180093B80 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtCreateSection @ 0x180093DA0 (NtCreateSection.c)
 *     memset @ 0x180098540 (memset.c)
 */

int __fastcall PsspCaptureHandleTrace(__int64 a1, void *a2)
{
  int result; // eax
  unsigned __int64 v5; // rcx
  NTSTATUS v6; // edi
  ULONG ReturnLength; // [rsp+50h] [rbp-B0h] BYREF
  PVOID BaseAddress; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER MaximumSize; // [rsp+60h] [rbp-A0h] BYREF
  HANDLE SectionHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG_PTR ViewSize[2]; // [rsp+70h] [rbp-90h] BYREF
  _DWORD ProcessInformation[44]; // [rsp+80h] [rbp-80h] BYREF

  memset(ProcessInformation, 0, sizeof(ProcessInformation));
  result = NtQueryInformationProcess(a2, ProcessHandleTracing, ProcessInformation, 0xB0u, &ReturnLength);
  if ( (int)(result + 0x80000000) < 0 || result == -1073741820 )
  {
    v5 = 160LL * ProcessInformation[2];
    if ( v5 > 0xFFFFFFFF )
      return -1073741675;
    MaximumSize.LowPart = 160 * ProcessInformation[2];
    if ( (int)v5 + 176 < (unsigned int)v5 )
    {
      return -1073741675;
    }
    else
    {
      MaximumSize.QuadPart = (unsigned int)(v5 + 176);
      result = NtCreateSection(
                 &SectionHandle,
                 0xF0007u,
                 (POBJECT_ATTRIBUTES)&stru_18011D8C8,
                 &MaximumSize,
                 4u,
                 0x8000000u,
                 0LL);
      if ( result >= 0 )
      {
        BaseAddress = 0LL;
        ViewSize[0] = 0LL;
        v6 = ZwMapViewOfSection(
               SectionHandle,
               (HANDLE)0xFFFFFFFFFFFFFFFFLL,
               &BaseAddress,
               0LL,
               0LL,
               0LL,
               ViewSize,
               ViewShare,
               0,
               4u);
        if ( v6 >= 0 )
        {
          memset(BaseAddress, 0, 0xB0uLL);
          if ( NtQueryInformationProcess(a2, ProcessHandleTracing, BaseAddress, MaximumSize.LowPart, &ReturnLength) >= 0 )
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            *(_DWORD *)(a1 + 880) = ReturnLength;
            *(_QWORD *)(a1 + 888) = SectionHandle;
            *(_QWORD *)(a1 + 896) = MEMORY[0x7FFE0014];
            return 0;
          }
          else
          {
            NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
            return NtClose(SectionHandle);
          }
        }
        else
        {
          NtClose(SectionHandle);
          return v6;
        }
      }
    }
  }
  return result;
}
