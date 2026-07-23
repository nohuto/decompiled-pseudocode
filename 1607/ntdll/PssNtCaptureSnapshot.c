/*
 * XREFs of PssNtCaptureSnapshot @ 0x180059150
 * Callers:
 *     WerpGetProcessSnapshot @ 0x180006C58 (WerpGetProcessSnapshot.c)
 * Callees:
 *     PsspCaptureHandleInformation @ 0x180004AC8 (PsspCaptureHandleInformation.c)
 *     PsspCaptureThreadInformation @ 0x180005260 (PsspCaptureThreadInformation.c)
 *     PsspCaptureVaSpaceInformation @ 0x180005CA4 (PsspCaptureVaSpaceInformation.c)
 *     PssNtFreeSnapshot @ 0x180007C30 (PssNtFreeSnapshot.c)
 *     PsspSampleCounters @ 0x18005961C (PsspSampleCounters.c)
 *     PsspCaptureAuxiliaryPages @ 0x180067334 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureProcessInformation @ 0x180088BC8 (PsspCaptureProcessInformation.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     ZwCreateProcessEx @ 0x1800A6DC0 (ZwCreateProcessEx.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
  int v12; // r12d
  ULONG Flags; // ecx
  int v14; // ebx
  NTSTATUS result; // eax
  int v16; // r15d
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
  v12 = PsspCaptureProcessInformation(BaseAddress, v5, CaptureFlags);
  if ( v12 < 0 )
    goto LABEL_54;
  if ( (CaptureFlags & 2) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v27 = 2147352576LL;
    v12 = PsspCaptureAuxiliaryPages(BaseAddress, v5, CaptureFlags, &v27);
    if ( v12 < 0 )
      goto LABEL_54;
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 135) = v19 - v21;
      *((_QWORD *)BaseAddress + 136) = 1000000 * (v20 - v22) / v8;
    }
  }
  if ( (CaptureFlags & 0x800) != 0 )
  {
    if ( v9 )
      PsspSampleCounters(&v22, &v21);
    v12 = PsspCaptureVaSpaceInformation((__int64)BaseAddress, v5, CaptureFlags);
    if ( v12 >= 0 )
    {
      if ( v9 )
      {
        PsspSampleCounters(&v20, &v19);
        *((_QWORD *)BaseAddress + 133) = v19 - v21;
        *((_QWORD *)BaseAddress + 134) = 1000000 * (v20 - v22) / v8;
      }
      goto LABEL_19;
    }
LABEL_54:
    PssNtFreeSnapshot((__int64)BaseAddress);
    *SnapshotHandle = 0LL;
    return v12;
  }
LABEL_19:
  if ( (CaptureFlags & 1) == 0 )
    goto LABEL_34;
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  do
  {
    while ( 1 )
    {
      Flags = (CaptureFlags & 0x80000000) != 0 ? 0x1000 : 0;
      if ( (v7 & 0x10000000) != 0 )
      {
        Flags |= 0x400u;
      }
      else if ( (v7 & 0x8000000) != 0 )
      {
        Flags |= 1u;
      }
      v14 = ZwCreateProcessEx(&ProcessHandlea, 0x2000000u, 0LL, ProcessHandle, Flags, 0LL, 0LL, 0LL, 0);
      if ( v14 >= 0 )
        goto LABEL_30;
      if ( (v7 & 0x4000000) == 0 )
        goto LABEL_53;
      if ( (v7 & 0x10000000) == 0 )
        break;
      v7 &= ~0x10000000u;
    }
    if ( (v7 & 0x8000000) == 0 )
    {
LABEL_53:
      PssNtFreeSnapshot((__int64)BaseAddress);
      *SnapshotHandle = 0LL;
      return v14;
    }
    v7 &= ~0x8000000u;
    v14 = -1073741267;
LABEL_30:
    ;
  }
  while ( v14 == -1073741267 );
  *((_QWORD *)BaseAddress + 110) = MEMORY[0x7FFE0014];
  *((_QWORD *)BaseAddress + 109) = ProcessHandlea;
  if ( v9 )
  {
    PsspSampleCounters(&v20, &v19);
    v8 = v23;
    *((_QWORD *)BaseAddress + 131) = v19 - v21;
    *((_QWORD *)BaseAddress + 132) = 1000000 * (v20 - v22) / v8;
  }
  else
  {
    v8 = v23;
  }
  v5 = ProcessHandle;
LABEL_34:
  if ( (CaptureFlags & 4) == 0 )
  {
LABEL_40:
    if ( (CaptureFlags & 0x80u) != 0 )
    {
      if ( v9 )
        PsspSampleCounters(&v22, &v21);
      v17 = PsspCaptureThreadInformation((__int64)BaseAddress, v5, CaptureFlags, ThreadContextFlags);
      if ( v17 < 0 )
      {
        PssNtFreeSnapshot((__int64)BaseAddress);
        *SnapshotHandle = 0LL;
        return v17;
      }
      if ( !v9 )
        return 0;
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 139) = v19 - v21;
      *((_QWORD *)BaseAddress + 140) = 1000000 * (v20 - v22) / v8;
    }
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 129) = v19 - v24;
      *((_QWORD *)BaseAddress + 130) = 1000000 * (v20 - v25) / v8;
    }
    return 0;
  }
  if ( v9 )
    PsspSampleCounters(&v22, &v21);
  v16 = PsspCaptureHandleInformation((__int64)BaseAddress, v5, CaptureFlags);
  if ( v16 >= 0 )
  {
    if ( v9 )
    {
      PsspSampleCounters(&v20, &v19);
      *((_QWORD *)BaseAddress + 137) = v19 - v21;
      *((_QWORD *)BaseAddress + 138) = 1000000 * (v20 - v22) / v8;
    }
    goto LABEL_40;
  }
  PssNtFreeSnapshot((__int64)BaseAddress);
  *SnapshotHandle = 0LL;
  return v16;
}
