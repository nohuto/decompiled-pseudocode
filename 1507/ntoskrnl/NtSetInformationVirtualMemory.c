/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1404FB5E8
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiPrefetchVirtualMemory @ 0x1400DEBC8 (MiPrefetchVirtualMemory.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     MiValidateMemoryRangeEntries @ 0x1404FBB44 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x1404FBBC8 (MiCfgMarkValidEntries.c)
 *     MiSetPriorityVaRanges @ 0x1404FBD58 (MiSetPriorityVaRanges.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  HANDLE v9; // rdi
  char v10; // r14
  _BYTE *v11; // r15
  NTSTATUS valid; // ebx
  __int64 v13; // r8
  struct _KTHREAD *CurrentThread; // rcx
  LONG *p_LockNV; // r10
  unsigned int v16; // r14d
  KPROCESSOR_MODE PreviousMode; // cl
  ULONG_PTR v18; // rax
  char *v19; // rcx
  char *v20; // r8
  __int64 v21; // rdi
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rdi
  __int64 v24; // r9
  int v25; // eax
  __int64 v26; // r9
  int v27; // r10d
  unsigned int v28; // eax
  int v29; // eax
  int v30; // r8d
  HANDLE v31; // rsi
  __int32 v32; // esi
  _BYTE *v33; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-307h]
  unsigned int v36; // [rsp+50h] [rbp-2F8h]
  char v37; // [rsp+54h] [rbp-2F4h]
  LONG *P; // [rsp+58h] [rbp-2F0h]
  PVOID Object; // [rsp+68h] [rbp-2E0h] BYREF
  int v41; // [rsp+70h] [rbp-2D8h]
  _BYTE Address[24]; // [rsp+78h] [rbp-2D0h] BYREF
  int v43; // [rsp+90h] [rbp-2B8h] BYREF
  PVOID v44; // [rsp+98h] [rbp-2B0h]
  HANDLE v45; // [rsp+A0h] [rbp-2A8h]
  struct _KTHREAD *v46; // [rsp+A8h] [rbp-2A0h]
  void *Src; // [rsp+B0h] [rbp-298h]
  _BYTE v48[56]; // [rsp+C8h] [rbp-280h] BYREF
  _BYTE v49[256]; // [rsp+100h] [rbp-248h] BYREF
  _BYTE v50[256]; // [rsp+200h] [rbp-148h] BYREF

  Src = VirtualAddresses;
  v9 = ProcessHandle;
  v45 = ProcessHandle;
  v10 = 0;
  v37 = 0;
  v41 = 0;
  v11 = v50;
  v44 = v50;
  valid = 0;
  v36 = 0;
  if ( VmInformationClass < VmPrefetchInformation )
    return -1073741584;
  if ( VmInformationClass <= VmPagePriorityInformation )
  {
    if ( !VmInformation )
      return -1073741581;
    v13 = VmInformationLength;
    if ( VmInformationLength == 4 )
      goto LABEL_5;
    return -1073741580;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
    return -1073741584;
  v13 = VmInformationLength;
  if ( VmInformationLength != 24 )
    return -1073741580;
LABEL_5:
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v46 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( (p_LockNV[192] & 0x400) != 0 )
      v10 = 1;
    v37 = v10;
  }
  v16 = 0;
  memset(Address, 0, sizeof(Address));
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v18 = NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = (char *)MmUserProbeAddress;
      if ( (unsigned __int64)&VirtualAddresses[v18] <= MmUserProbeAddress && &VirtualAddresses[v18] >= VirtualAddresses )
        goto LABEL_12;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v19 = (char *)MmUserProbeAddress;
LABEL_12:
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v13 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v20 = (char *)VmInformation + v13;
        if ( v20 > v19 || v20 < VmInformation )
          *v19 = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_QWORD *)&Address[16] = *((_QWORD *)VmInformation + 2);
      v16 = _mm_cvtsi128_si32(*(__m128i *)Address);
      *(_DWORD *)Address = v16;
      if ( (unsigned __int64)v16 - 1 > 0xFFFFFFFFFFFFFFELL || *(_DWORD *)&Address[4] )
        return -1073741581;
      ProbeForWrite(
        *(volatile void **)&Address[8],
        (unsigned int)(*(_DWORD *)&Address[4] + 4),
        *(_DWORD *)&Address[4] + 4);
      v21 = 16LL * v16;
      if ( v21 )
      {
        if ( (Address[16] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v21 + *(_QWORD *)&Address[16] > MmUserProbeAddress
          || (unsigned __int64)(v21 + *(_QWORD *)&Address[16]) < *(_QWORD *)&Address[16] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      p_LockNV = P;
      v9 = ProcessHandle;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v36 = *(_DWORD *)VmInformation;
      v16 = *(_DWORD *)Address;
    }
    PreviousMode = AccessMode;
    goto LABEL_36;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v36 = *(_DWORD *)VmInformation;
    goto LABEL_36;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_QWORD *)&Address[16] = *((_QWORD *)VmInformation + 2);
  v16 = _mm_cvtsi128_si32(*(__m128i *)Address);
  *(_DWORD *)Address = v16;
  if ( (unsigned __int64)v16 - 1 > 0xFFFFFFFFFFFFFFELL || *(_DWORD *)&Address[4] )
    return -1073741581;
LABEL_36:
  if ( v9 == (HANDLE)-1LL )
  {
    Object = p_LockNV;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               v9,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x66506D4Du,
               &Object,
               0LL);
    valid = result;
    if ( result < 0 )
      return result;
  }
  PoolWithTag = v49;
  if ( NumberOfEntries > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * NumberOfEntries, 0x724D6D4Du);
    if ( !PoolWithTag )
    {
      PoolWithTag = v49;
LABEL_93:
      valid = -1073741670;
      goto LABEL_57;
    }
  }
  if ( VmInformationClass == VmCfgCallTargetInformation && v16 > 0x10 )
  {
    v33 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v16, 0x724D6D4Du);
    v11 = v33;
    v44 = v33;
    if ( !v33 )
    {
      v11 = v50;
      goto LABEL_93;
    }
  }
  memmove(PoolWithTag, Src, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v11, *(const void **)&Address[16], 16LL * v16);
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, NumberOfEntries, 0LL) )
  {
LABEL_96:
    valid = -1073741582;
    goto LABEL_57;
  }
  v24 = (__int64)v46;
  if ( v46->ApcState.Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v48);
    v41 = 1;
    v24 = (__int64)v46;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( !v36 )
    {
      v25 = MiGetEffectivePagePriorityThread(v24) & 7;
      if ( (v25 & 7u) < 5 )
        v25 |= 0x40u;
      v28 = ((unsigned __int8)v25 ^ (unsigned __int8)(8 * v25)) & 0x38 ^ v25;
      if ( (v28 & 0x38) < 0x28 )
        v28 = v28 & 0xFFFFFFC7 | 0x28;
      v29 = v28 | 0x4000;
      v30 = (*(_DWORD *)(v26 + 1724) >> 9) & 7;
      if ( (*(_DWORD *)(*(_QWORD *)(v26 + 544) + 772LL) & 0x100000) != 0 )
        v30 = v27;
      if ( v30 < 2 && (struct _KTHREAD *)v26 == KeGetCurrentThread() && *(_DWORD *)(v26 + 1788) != v27 )
        v30 = 2;
      if ( v30 <= 1 )
        v29 |= 0x400u;
      valid = MiPrefetchVirtualMemory(NumberOfEntries, (__int64)PoolWithTag, (__int64)Object + 1272, v29);
      goto LABEL_57;
    }
    goto LABEL_97;
  }
  v32 = VmInformationClass - 1;
  if ( v32 )
  {
    if ( v32 == 1 )
    {
      if ( NumberOfEntries == 1 )
      {
        valid = MiCfgMarkValidEntries(
                  (_DWORD)Object,
                  *PoolWithTag,
                  PoolWithTag[1],
                  (_DWORD)v11,
                  v16,
                  (__int64)&v43,
                  v37);
        **(_DWORD **)&Address[8] = v43;
        v31 = ProcessHandle;
        goto LABEL_58;
      }
      goto LABEL_96;
    }
  }
  else
  {
    if ( v36 > 5 )
    {
LABEL_97:
      valid = -1073741581;
      goto LABEL_57;
    }
    MiSetPriorityVaRanges(NumberOfEntries, PoolWithTag, v36);
    valid = 0;
  }
LABEL_57:
  v31 = ProcessHandle;
LABEL_58:
  if ( (v41 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v48, 0);
  if ( v31 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v49 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 != v50 )
    ExFreePoolWithTag(v11, 0);
  return valid;
}
