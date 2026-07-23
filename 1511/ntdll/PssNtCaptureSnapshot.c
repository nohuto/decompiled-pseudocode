/*
 * XREFs of PssNtCaptureSnapshot @ 0x1800478E0
 * Callers:
 *     RtlReportExceptionEx @ 0x1800D0990 (RtlReportExceptionEx.c)
 * Callees:
 *     PsspCaptureAuxiliaryPages @ 0x180044644 (PsspCaptureAuxiliaryPages.c)
 *     PsspSampleCounters @ 0x180047D7C (PsspSampleCounters.c)
 *     PsspCaptureProcessInformation @ 0x18004B1F4 (PsspCaptureProcessInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x18006233C (PsspCaptureVaSpaceInformation.c)
 *     PssNtFreeSnapshot @ 0x180084150 (PssNtFreeSnapshot.c)
 *     PsspCaptureHandleInformation @ 0x18008A588 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x18008B488 (PsspCaptureThreadInformation.c)
 *     ZwAllocateVirtualMemory @ 0x1800A53C0 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A5A60 (ZwCreateProcessEx.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __cdecl PssNtCaptureSnapshot(
        PHANDLE SnapshotHandle,
        HANDLE ProcessHandle,
        ULONG CaptureFlags,
        ULONG ThreadContextFlags)
{
  HANDLE v5; // r13
  ULONG v7; // r15d
  __int64 v8; // rbx
  ULONG v9; // edi
  HANDLE v10; // rcx
  int v11; // r12d
  NTSTATUS result; // eax
  int v13; // r12d
  ULONG v14; // ecx
  int v15; // ebx
  NTSTATUS v16; // r15d
  NTSTATUS v17; // esi
  PVOID BaseAddress; // [rsp+58h] [rbp-39h] BYREF
  __int64 v19; // [rsp+60h] [rbp-31h] BYREF
  __int64 v20; // [rsp+68h] [rbp-29h] BYREF
  __int64 v21; // [rsp+70h] [rbp-21h] BYREF
  __int64 v22; // [rsp+78h] [rbp-19h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  __int64 v24; // [rsp+88h] [rbp-9h] BYREF
  __int64 v25; // [rsp+90h] [rbp-1h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp+7h] BYREF
  __int64 v27; // [rsp+A0h] [rbp+Fh] BYREF
  HANDLE ProcessHandlea; // [rsp+A8h] [rbp+17h] BYREF

  v5 = ProcessHandle;
  if ( (CaptureFlags & 0x3FFE000) != 0 )
    return -1073741811;
  v7 = CaptureFlags & 0x1C000000;
  if ( (CaptureFlags & 0x1C000000) == 0x4000000 )
    return -1073741776;
  v8 = 0LL;
  v23 = 0LL;
  v22 = 0LL;
  v25 = 0LL;
  v21 = 0LL;
  v24 = 0LL;
  v9 = CaptureFlags & 0x40000000;
  if ( (CaptureFlags & 0x40000000) != 0 )
  {
    v8 = MEMORY[0x7FFE0300];
    v23 = MEMORY[0x7FFE0300];
    PsspSampleCounters(&v25, &v24);
  }
  v10 = *SnapshotHandle;
  v11 = 0;
  BaseAddress = v10;
  if ( !v10 )
  {
    RegionSize = 1128LL;
    result = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x1000u, 4u);
    if ( result < 0 )
      return result;
    v10 = BaseAddress;
    v11 = 1;
    *SnapshotHandle = BaseAddress;
  }
  memset(v10, 0, 0x468uLL);
  *(_DWORD *)BaseAddress = 1146311504;
  *((_DWORD *)BaseAddress + 1) = v11;
  *((_DWORD *)BaseAddress + 2) = CaptureFlags;
  v13 = PsspCaptureProcessInformation(BaseAddress, v5, CaptureFlags);
  if ( v13 < 0 )
    goto LABEL_50;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v27 = 2147352576LL;
    v13 = PsspCaptureAuxiliaryPages((__int64)BaseAddress, v5, CaptureFlags, (PVOID *)&v27);
    if ( v13 < 0 )
      goto LABEL_50;
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 135) = v20 - v21;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v19 - v22) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v13 = PsspCaptureVaSpaceInformation(BaseAddress, v5, CaptureFlags);
    if ( v13 >= 0 )
    {
      if ( v9 )
      {
        PsspSampleCounters(&v19, &v20);
        *((_QWORD *)BaseAddress + 133) = v20 - v21;
        *((_QWORD *)BaseAddress + 134) = 1000000 * (v19 - v22) / v8;
      }
      goto LABEL_21;
    }
LABEL_50:
    PssNtFreeSnapshot(BaseAddress);
    *SnapshotHandle = 0LL;
    return v13;
  }
LABEL_21:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_35;
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  do
  {
    while ( 1 )
    {
      v14 = (CaptureFlags & 0x80000000) != 0 ? 0x1000 : 0;
      if ( (v7 & 0x10000000) != 0 )
      {
        v14 |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        v14 |= 1u;
      }
      v15 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, ProcessHandle, v14, 0LL, 0LL, 0LL, 0);
      if ( v15 >= 0 )
        goto LABEL_31;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_28;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_28:
      PssNtFreeSnapshot(BaseAddress);
      *SnapshotHandle = 0LL;
      return v15;
    }
    v7 &= ~0x8000000u;
    v15 = -1073741267;
LABEL_31:
    ;
  }
  while ( v15 == -1073741267 );
  *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
  if ( v9 )
  {
    PsspSampleCounters(&v19, &v20);
    v8 = v23;
    *((_QWORD *)BaseAddress + 131) = v20 - v21;
    *((_QWORD *)BaseAddress + 132) = 1000000 * (v19 - v22) / v8;
  }
  else
  {
    v8 = v23;
  }
  v5 = ProcessHandle;
LABEL_35:
  if ( (CaptureFlags & 4) == 0 )
  {
LABEL_41:
    if ( (CaptureFlags & 0x80u) != 0 )
    {
      if ( v9 )
        PsspSampleCounters(&v22, &v21);
      v17 = PsspCaptureThreadInformation(BaseAddress, v5, CaptureFlags, ThreadContextFlags);
      if ( v17 < 0 )
      {
        PssNtFreeSnapshot(BaseAddress);
        *SnapshotHandle = 0LL;
        return v17;
      }
      if ( !v9 )
        return 0;
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 139) = v20 - v21;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v19 - v22) / v8;
    }
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 129) = v20 - v24;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v19 - v25) / v8;
    }
    return 0;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v16 = PsspCaptureHandleInformation(BaseAddress, v5, CaptureFlags);
  if ( v16 >= 0 )
  {
    if ( v9 )
    {
      PsspSampleCounters(&v19, &v20);
      *((_QWORD *)BaseAddress + 137) = v20 - v21;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v19 - v22) / v8;
    }
    goto LABEL_41;
  }
  PssNtFreeSnapshot(BaseAddress);
  *SnapshotHandle = 0LL;
  return v16;
}
