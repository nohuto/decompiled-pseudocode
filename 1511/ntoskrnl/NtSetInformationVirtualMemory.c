/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1403CA6EC
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     PsGetIoPriorityThread @ 0x140070170 (PsGetIoPriorityThread.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiValidateMemoryRangeEntries @ 0x1403CABE4 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x1403CAC70 (MiCfgMarkValidEntries.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     MiSetPriorityVaRanges @ 0x1404BFD14 (MiSetPriorityVaRanges.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  HANDLE v9; // r10
  char v10; // di
  _BYTE *v11; // r15
  NTSTATUS valid; // ebx
  __int64 v13; // r8
  bool v14; // zf
  struct _KTHREAD *CurrentThread; // r9
  _DWORD *p_LockNV; // rcx
  unsigned int v17; // r14d
  KPROCESSOR_MODE PreviousMode; // r9
  ULONG_PTR v19; // rax
  char *v20; // rcx
  char *v21; // r8
  __int64 v22; // rdi
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rdi
  __int64 v25; // rdx
  __int32 v26; // esi
  HANDLE v27; // rsi
  __int64 v28; // rdx
  int v29; // r10d
  _BYTE *v30; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+41h] [rbp-2F7h]
  unsigned int v33; // [rsp+50h] [rbp-2E8h]
  char v34; // [rsp+54h] [rbp-2E4h]
  PVOID Object; // [rsp+58h] [rbp-2E0h] BYREF
  int v36; // [rsp+60h] [rbp-2D8h]
  PVOID P; // [rsp+68h] [rbp-2D0h]
  _BYTE Address[24]; // [rsp+70h] [rbp-2C8h] BYREF
  PVOID v39; // [rsp+88h] [rbp-2B0h]
  int v40; // [rsp+90h] [rbp-2A8h] BYREF
  HANDLE v41; // [rsp+98h] [rbp-2A0h]
  struct _KTHREAD *v42; // [rsp+A0h] [rbp-298h]
  void *Src; // [rsp+B0h] [rbp-288h]
  $D4FCF91253F76F57393CBFE908971F67 v44; // [rsp+C0h] [rbp-278h] BYREF
  _BYTE v45[256]; // [rsp+F0h] [rbp-248h] BYREF
  _BYTE v46[256]; // [rsp+1F0h] [rbp-148h] BYREF

  Src = VirtualAddresses;
  v9 = ProcessHandle;
  v41 = ProcessHandle;
  v10 = 0;
  v34 = 0;
  v36 = 0;
  v11 = v46;
  v39 = v46;
  valid = 0;
  v33 = 0;
  if ( VmInformationClass < VmPrefetchInformation )
    return -1073741584;
  if ( VmInformationClass > VmPagePriorityInformation )
  {
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      v13 = VmInformationLength;
      v14 = VmInformationLength == 24;
      goto LABEL_5;
    }
    return -1073741584;
  }
  if ( !VmInformation )
    return -1073741581;
  v13 = VmInformationLength;
  v14 = VmInformationLength == 4;
LABEL_5:
  if ( !v14 )
    return -1073741580;
  if ( NumberOfEntries - 1 > 0xFFFFFFFFFFFFFFELL )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  v42 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation )
  {
    if ( (p_LockNV[192] & 0x400) != 0 )
      v10 = 1;
    v34 = v10;
  }
  v17 = 0;
  memset(Address, 0, sizeof(Address));
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v19 = NumberOfEntries;
    if ( 16 * NumberOfEntries )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v20 = (char *)MmUserProbeAddress;
      if ( (unsigned __int64)&VirtualAddresses[v19] <= MmUserProbeAddress && &VirtualAddresses[v19] >= VirtualAddresses )
        goto LABEL_16;
      *(_BYTE *)MmUserProbeAddress = 0;
    }
    v20 = (char *)MmUserProbeAddress;
LABEL_16:
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v13 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v21 = (char *)VmInformation + v13;
        if ( v21 > v20 || v21 < VmInformation )
          *v20 = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      *(_QWORD *)&Address[16] = *((_QWORD *)VmInformation + 2);
      v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
      *(_DWORD *)Address = v17;
      if ( (unsigned __int64)v17 - 1 > 0xFFFFFFFFFFFFFFELL || *(_DWORD *)&Address[4] )
        return -1073741581;
      ProbeForWrite(*(volatile void **)&Address[8], 4uLL, 4u);
      v22 = 16LL * v17;
      if ( v22 )
      {
        if ( (Address[16] & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( v22 + *(_QWORD *)&Address[16] > MmUserProbeAddress
          || (unsigned __int64)(v22 + *(_QWORD *)&Address[16]) < *(_QWORD *)&Address[16] )
        {
          *(_BYTE *)MmUserProbeAddress = 0;
        }
      }
      v9 = ProcessHandle;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v33 = *(_DWORD *)VmInformation;
      v17 = *(_DWORD *)Address;
    }
    p_LockNV = P;
    PreviousMode = AccessMode;
    goto LABEL_40;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v33 = *(_DWORD *)VmInformation;
    goto LABEL_40;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  *(_QWORD *)&Address[16] = *((_QWORD *)VmInformation + 2);
  v17 = _mm_cvtsi128_si32(*(__m128i *)Address);
  *(_DWORD *)Address = v17;
  if ( (unsigned __int64)v17 - 1 > 0xFFFFFFFFFFFFFFELL || *(_DWORD *)&Address[4] )
    return -1073741581;
LABEL_40:
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
  PoolWithTag = v45;
  P = v45;
  if ( NumberOfEntries > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * NumberOfEntries, 0x724D6D4Du);
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v45;
LABEL_87:
      valid = -1073741670;
      goto LABEL_72;
    }
  }
  if ( v17 > 0x10 && VmInformationClass == VmCfgCallTargetInformation )
  {
    v30 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v17, 0x724D6D4Du);
    v11 = v30;
    v39 = v30;
    if ( !v30 )
    {
      v11 = v46;
      goto LABEL_87;
    }
  }
  memmove(PoolWithTag, Src, 16 * NumberOfEntries);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v11, *(const void **)&Address[16], 16LL * v17);
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, NumberOfEntries, 0LL) )
  {
LABEL_90:
    valid = -1073741582;
    goto LABEL_72;
  }
  v25 = (__int64)v42;
  if ( v42->ApcState.Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v44);
    v36 = 1;
    v25 = (__int64)v42;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( !v33 )
    {
      MiGetEffectivePagePriorityThread(v25);
      if ( (int)PsGetIoPriorityThread(v28) <= 1 )
        v29 |= 0x400u;
      valid = MiPrefetchVirtualMemory(NumberOfEntries, (__int64)PoolWithTag, (__int64)Object + 1280, v29);
      goto LABEL_72;
    }
    goto LABEL_77;
  }
  v26 = VmInformationClass - 1;
  if ( !v26 )
  {
    if ( v33 <= 5 )
    {
      MiSetPriorityVaRanges(NumberOfEntries, PoolWithTag, v33);
      valid = 0;
      goto LABEL_72;
    }
LABEL_77:
    valid = -1073741581;
    goto LABEL_72;
  }
  if ( v26 != 1 )
  {
LABEL_72:
    v27 = ProcessHandle;
    goto LABEL_54;
  }
  if ( NumberOfEntries != 1 )
    goto LABEL_90;
  valid = MiCfgMarkValidEntries((_DWORD)Object, *PoolWithTag, PoolWithTag[1], (_DWORD)v11, v17, (__int64)&v40, v34);
  **(_DWORD **)&Address[8] = v40;
  v27 = ProcessHandle;
LABEL_54:
  if ( (v36 & 1) != 0 )
    KiUnstackDetachProcess(&v44, 0LL);
  if ( v27 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v45 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 != v46 )
    ExFreePoolWithTag(v11, 0);
  return valid;
}
