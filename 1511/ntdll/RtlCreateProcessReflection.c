/*
 * XREFs of RtlCreateProcessReflection @ 0x18008C990
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateUserThreadEx @ 0x180045210 (RtlpCreateUserThreadEx.c)
 *     RtlpProcessReflectionStartup @ 0x18008D1C0 (RtlpProcessReflectionStartup.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1800A5280 (ZwSetEvent.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     NtQueryInformationProcess @ 0x1800A53E0 (NtQueryInformationProcess.c)
 *     ZwFreeVirtualMemory @ 0x1800A5480 (ZwFreeVirtualMemory.c)
 *     ZwMapViewOfSection @ 0x1800A55C0 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1800A5600 (NtUnmapViewOfSection.c)
 *     ZwDuplicateObject @ 0x1800A5840 (ZwDuplicateObject.c)
 *     ZwCreateEvent @ 0x1800A59C0 (ZwCreateEvent.c)
 *     NtCreateSection @ 0x1800A5A00 (NtCreateSection.c)
 *     ZwQuerySystemTime @ 0x1800A5C00 (ZwQuerySystemTime.c)
 *     NtWaitForMultipleObjects @ 0x1800A5C10 (NtWaitForMultipleObjects.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlCreateProcessReflection(__int64 a1, int a2, __int64 a3, __int64 a4, __int64 a5, char *a6)
{
  int v10; // ebx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  int v15; // eax
  HANDLE v16; // rcx
  __int64 v17; // rax
  int ReturnLength; // [rsp+28h] [rbp-99h]
  int ReturnLengtha; // [rsp+28h] [rbp-99h]
  __int64 v21; // [rsp+38h] [rbp-89h]
  __int64 v22; // [rsp+68h] [rbp-59h] BYREF
  __int64 v23; // [rsp+70h] [rbp-51h] BYREF
  __int64 v24; // [rsp+78h] [rbp-49h] BYREF
  HANDLE v25; // [rsp+80h] [rbp-41h] BYREF
  ULONG ProcessInformationLength[2]; // [rsp+88h] [rbp-39h] BYREF
  PVOID ProcessInformation; // [rsp+90h] [rbp-31h] BYREF
  HANDLE Handle; // [rsp+98h] [rbp-29h] BYREF
  HANDLE v29; // [rsp+A0h] [rbp-21h] BYREF
  __int64 v30; // [rsp+A8h] [rbp-19h] BYREF
  HANDLE v31; // [rsp+B0h] [rbp-11h] BYREF
  __int64 v32; // [rsp+B8h] [rbp-9h]
  __int64 v33; // [rsp+C0h] [rbp-1h] BYREF
  _QWORD v34[2]; // [rsp+C8h] [rbp+7h] BYREF
  _BYTE v35[8]; // [rsp+D8h] [rbp+17h] BYREF
  _BYTE v36[8]; // [rsp+E0h] [rbp+1Fh] BYREF

  *(_QWORD *)ProcessInformationLength = 4096LL;
  v31 = 0LL;
  v23 = 0LL;
  ProcessInformation = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v25 = 0LL;
  ZwQuerySystemTime(v35);
  if ( (a2 & 0xFFFFFFE1) != 0 )
    return 3221225712LL;
  if ( (a2 & 8) != 0 && a3 )
    return 3221225715LL;
  if ( a6 )
    memset(a6, 0, 0x20uLL);
  v10 = ZwAllocateVirtualMemory(-1LL, &ProcessInformation, 0LL, ProcessInformationLength, 12288, 4);
  if ( v10 < 0 )
  {
    ProcessInformation = 0LL;
    goto LABEL_27;
  }
  NtQueryInformationProcess(
    (HANDLE)0xFFFFFFFFFFFFFFFFLL,
    ProcessImageFileName,
    ProcessInformation,
    ProcessInformationLength[0],
    ProcessInformationLength);
  *(_QWORD *)ProcessInformationLength = 4096LL;
  ZwFreeVirtualMemory(-1LL, &ProcessInformation, ProcessInformationLength, 0x8000LL);
  v24 = 88LL;
  v10 = ZwAllocateVirtualMemory(-1LL, &v22, 0LL, &v24, 12288, 4);
  if ( v10 < 0 )
  {
    v22 = 0LL;
    goto LABEL_27;
  }
  v11 = v22;
  v12 = v24;
  *(_QWORD *)(v22 + 24) = a4;
  *(_QWORD *)(v11 + 16) = a3;
  *(_QWORD *)v11 = v12;
  *(_DWORD *)(v11 + 8) = a2;
  *(_QWORD *)(v11 + 48) = a5;
  if ( a1 == -1 )
  {
    *(_DWORD *)(v11 + 8) = a2 | 0x10;
    v10 = RtlpProcessReflectionStartup(v22);
    if ( v10 >= 0 && a6 )
    {
      *(_QWORD *)a6 = *(_QWORD *)(v22 + 56);
      *((_QWORD *)a6 + 1) = *(_QWORD *)(v22 + 64);
      *((_QWORD *)a6 + 2) = *(_QWORD *)(v22 + 72);
      v17 = v22;
      goto LABEL_26;
    }
    goto LABEL_27;
  }
  v32 = v24;
  v10 = NtCreateSection(&Handle, 6LL, 0LL);
  if ( v10 < 0 )
    goto LABEL_27;
  v33 = v24;
  v10 = ZwMapViewOfSection(Handle, a1, &v30, 0LL, v24, 0LL, &v33, 2, 0, 4);
  if ( v10 >= 0 )
  {
    v10 = ZwMapViewOfSection(Handle, -1LL, &v23, 0LL, v24, 0LL, &v33, 2, 0, 4);
    if ( v10 < 0 )
    {
      v23 = 0LL;
      goto LABEL_27;
    }
    if ( !a6
      || (LOBYTE(ReturnLength) = 0, v10 = ZwCreateEvent(&v29, 2031619LL, 0LL, 0LL, ReturnLength), v10 >= 0)
      && (LOBYTE(ReturnLengtha) = 0, v10 = ZwCreateEvent(&v25, 2031619LL, 0LL, 0LL, ReturnLengtha), v10 >= 0)
      && (v10 = ZwDuplicateObject(-1LL, v29, a1, v22 + 32, 2031619, 0, 2), v10 >= 0)
      && (v10 = ZwDuplicateObject(-1LL, v25, a1, v22 + 40, 2031619, 0, 2), v10 >= 0)
      && (!a5 || (v10 = ZwDuplicateObject(-1LL, a5, a1, v22 + 48, 2031619, 0, 2), v10 >= 0)) )
    {
      v13 = v22;
      v14 = v23;
      *(_OWORD *)v23 = *(_OWORD *)v22;
      *(_OWORD *)(v14 + 16) = *(_OWORD *)(v13 + 16);
      *(_OWORD *)(v14 + 32) = *(_OWORD *)(v13 + 32);
      *(_OWORD *)(v14 + 48) = *(_OWORD *)(v13 + 48);
      *(_OWORD *)(v14 + 64) = *(_OWORD *)(v13 + 64);
      *(_QWORD *)(v14 + 80) = *(_QWORD *)(v13 + 80);
      v10 = RtlpCreateUserThreadEx(a1, 0LL, 2, 0, 0LL, 0LL, v21, (__int64)RtlpProcessReflectionStartup, v30, &v31, 0LL);
      if ( v10 >= 0 )
      {
        if ( a6 )
        {
          v34[0] = v31;
          v34[1] = v29;
          if ( (unsigned int)NtWaitForMultipleObjects(2LL, v34, 1LL, 0LL, 0LL) == 1 )
          {
            if ( *(_QWORD *)(v23 + 56) )
            {
              if ( (int)ZwDuplicateObject(a1, *(_QWORD *)(v23 + 56), -1LL, a6, 0x1FFFFF, 0, 2) < 0 )
              {
                v16 = v25;
              }
              else
              {
                v15 = ZwDuplicateObject(a1, *(_QWORD *)(v23 + 64), -1LL, a6 + 8, 0x1FFFFF, 0, 2);
                v16 = v25;
                if ( v15 >= 0 )
                {
                  v10 = ZwSetEvent(v25, 0LL);
                  *((_QWORD *)a6 + 2) = *(_QWORD *)(v23 + 72);
                  v17 = v23;
LABEL_26:
                  *((_QWORD *)a6 + 3) = *(_QWORD *)(v17 + 80);
                  goto LABEL_27;
                }
              }
              v10 = ZwSetEvent(v16, 0LL);
              goto LABEL_27;
            }
            NtWaitForSingleObject(v31, 0, 0LL);
          }
          v10 = -1073741823;
        }
      }
    }
LABEL_27:
    if ( v30 )
      NtUnmapViewOfSection(a1, v30);
    goto LABEL_29;
  }
  v30 = 0LL;
LABEL_29:
  if ( v23 )
    NtUnmapViewOfSection(-1LL, v23);
  if ( Handle )
    NtClose(Handle);
  if ( v22 )
    ZwFreeVirtualMemory(-1LL, &v22, &v24, 0x8000LL);
  if ( v29 )
    NtClose(v29);
  if ( v25 )
    NtClose(v25);
  if ( v31 )
    NtClose(v31);
  ZwQuerySystemTime(v36);
  return (unsigned int)v10;
}
