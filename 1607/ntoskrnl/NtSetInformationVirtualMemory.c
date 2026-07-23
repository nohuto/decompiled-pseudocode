/*
 * XREFs of NtSetInformationVirtualMemory @ 0x1404D6C9C
 * Callers:
 *     <none>
 * Callees:
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     PsGetIoPriorityThread @ 0x1400E5CD0 (PsGetIoPriorityThread.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     MiSetPriorityVaRanges @ 0x1404C9B34 (MiSetPriorityVaRanges.c)
 *     MiValidateMemoryRangeEntries @ 0x1404D71B8 (MiValidateMemoryRangeEntries.c)
 *     MiCfgMarkValidEntries @ 0x1404D7248 (MiCfgMarkValidEntries.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtSetInformationVirtualMemory(
        HANDLE ProcessHandle,
        VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
        ULONG_PTR NumberOfEntries,
        PMEMORY_RANGE_ENTRY VirtualAddresses,
        PVOID VmInformation,
        ULONG VmInformationLength)
{
  ULONG_PTR v7; // r14
  HANDLE v9; // r10
  char v10; // di
  _BYTE *v11; // r15
  NTSTATUS valid; // ebx
  __int64 v13; // rcx
  bool v14; // zf
  struct _KTHREAD *CurrentThread; // r8
  LONG *p_LockNV; // r9
  KPROCESSOR_MODE PreviousMode; // r8
  ULONG_PTR v18; // rax
  char *v19; // rcx
  unsigned int v20; // r12d
  __int64 v21; // rdi
  NTSTATUS result; // eax
  _QWORD *PoolWithTag; // rdi
  __int64 v24; // rdx
  __int32 v25; // esi
  HANDLE v26; // rsi
  __int64 v27; // rdx
  int v28; // r10d
  _BYTE *v29; // rax
  KPROCESSOR_MODE AccessMode; // [rsp+40h] [rbp-308h]
  unsigned int v32; // [rsp+50h] [rbp-2F8h]
  char v33; // [rsp+54h] [rbp-2F4h]
  LONG *P; // [rsp+58h] [rbp-2F0h]
  char v35; // [rsp+60h] [rbp-2E8h]
  PVOID Object; // [rsp+68h] [rbp-2E0h] BYREF
  volatile void *Address[2]; // [rsp+70h] [rbp-2D8h]
  void *v38; // [rsp+80h] [rbp-2C8h]
  int v39; // [rsp+88h] [rbp-2C0h] BYREF
  PVOID v40; // [rsp+90h] [rbp-2B8h]
  struct _KTHREAD *v41; // [rsp+98h] [rbp-2B0h]
  HANDLE v42; // [rsp+A0h] [rbp-2A8h]
  ULONG_PTR v43; // [rsp+A8h] [rbp-2A0h]
  void *Src; // [rsp+B0h] [rbp-298h]
  _BYTE v45[56]; // [rsp+C8h] [rbp-280h] BYREF
  _BYTE v46[256]; // [rsp+100h] [rbp-248h] BYREF
  _BYTE v47[256]; // [rsp+200h] [rbp-148h] BYREF

  Src = VirtualAddresses;
  v7 = NumberOfEntries;
  v43 = NumberOfEntries;
  v9 = ProcessHandle;
  v42 = ProcessHandle;
  v10 = 0;
  v33 = 0;
  v35 = 0;
  v11 = v47;
  v40 = v47;
  valid = 0;
  v32 = 0;
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
  v41 = CurrentThread;
  p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
  P = p_LockNV;
  if ( VmInformationClass == VmCfgCallTargetInformation && (p_LockNV[192] & 0x400) != 0 )
  {
    if ( (*(_DWORD *)(&CurrentThread[1].SwapListEntry + 1) & 0x40000) == 0 )
      v10 = 1;
    v33 = v10;
  }
  Address[0] = 0LL;
  Address[1] = 0LL;
  v38 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  AccessMode = PreviousMode;
  if ( PreviousMode )
  {
    v18 = v7;
    if ( 16 * v7 )
    {
      if ( ((unsigned __int8)VirtualAddresses & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)&VirtualAddresses[v18] > 0x7FFFFFFF0000LL || &VirtualAddresses[v18] < VirtualAddresses )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( VmInformationClass == VmCfgCallTargetInformation )
    {
      if ( (_DWORD)v13 )
      {
        if ( ((unsigned __int8)VmInformation & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        v19 = (char *)VmInformation + v13;
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < VmInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      *(_OWORD *)Address = *(_OWORD *)VmInformation;
      v38 = (void *)*((_QWORD *)VmInformation + 2);
      v20 = _mm_cvtsi128_si32(*(__m128i *)Address);
      if ( (unsigned __int64)v20 - 1 > 0xFFFFFFFFFFFFFFELL || HIDWORD(Address[0]) )
        return -1073741581;
      ProbeForWrite(Address[1], 4uLL, 4u);
      v21 = 16LL * v20;
      if ( v21 )
      {
        if ( ((unsigned __int8)v38 & 3) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (unsigned __int64)v38 + v21 > 0x7FFFFFFF0000LL || (char *)v38 + v21 < v38 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      p_LockNV = P;
      v9 = ProcessHandle;
    }
    else
    {
      if ( ((unsigned __int8)VmInformation & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v32 = *(_DWORD *)VmInformation;
      v20 = (unsigned int)Address[0];
    }
    v7 = v43;
    PreviousMode = AccessMode;
    goto LABEL_38;
  }
  if ( VmInformationClass != VmCfgCallTargetInformation )
  {
    v32 = *(_DWORD *)VmInformation;
    v20 = (unsigned int)Address[0];
    goto LABEL_38;
  }
  *(_OWORD *)Address = *(_OWORD *)VmInformation;
  v38 = (void *)*((_QWORD *)VmInformation + 2);
  v20 = _mm_cvtsi128_si32(*(__m128i *)Address);
  if ( (unsigned __int64)v20 - 1 > 0xFFFFFFFFFFFFFFELL || HIDWORD(Address[0]) )
    return -1073741581;
LABEL_38:
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
  PoolWithTag = v46;
  if ( v7 > 0x10 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v7, 0x724D6D4Du);
    if ( !PoolWithTag )
    {
      PoolWithTag = v46;
LABEL_88:
      valid = -1073741670;
      goto LABEL_70;
    }
  }
  if ( v20 > 0x10 && VmInformationClass == VmCfgCallTargetInformation )
  {
    v29 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v20, 0x724D6D4Du);
    v11 = v29;
    v40 = v29;
    if ( !v29 )
    {
      v11 = v47;
      goto LABEL_88;
    }
  }
  memmove(PoolWithTag, Src, 16 * v7);
  if ( VmInformationClass == VmCfgCallTargetInformation )
    memmove(v11, v38, 16LL * v20);
  if ( !(unsigned int)MiValidateMemoryRangeEntries(PoolWithTag, v7, 0LL) )
  {
LABEL_91:
    valid = -1073741582;
    goto LABEL_70;
  }
  v24 = (__int64)v41;
  if ( v41->ApcState.Process != Object )
  {
    KiStackAttachProcess((_KPROCESS *)Object, 0, (__int64)v45);
    v35 = 1;
    v24 = (__int64)v41;
  }
  if ( VmInformationClass == VmPrefetchInformation )
  {
    if ( !v32 )
    {
      MiGetEffectivePagePriorityThread(v24);
      if ( (int)PsGetIoPriorityThread(v27) <= 1 )
        v28 |= 0x400u;
      valid = MiPrefetchVirtualMemory(v7, (__int64)PoolWithTag, (__int64)Object + 1280, v28);
      goto LABEL_70;
    }
    goto LABEL_75;
  }
  v25 = VmInformationClass - 1;
  if ( !v25 )
  {
    if ( v32 <= 5 )
    {
      MiSetPriorityVaRanges(v7, PoolWithTag, v32);
      valid = 0;
      goto LABEL_70;
    }
LABEL_75:
    valid = -1073741581;
    goto LABEL_70;
  }
  if ( v25 != 1 )
  {
LABEL_70:
    v26 = ProcessHandle;
    goto LABEL_52;
  }
  if ( v7 != 1 )
    goto LABEL_91;
  valid = MiCfgMarkValidEntries((_DWORD)Object, *PoolWithTag, PoolWithTag[1], (_DWORD)v11, v20, (__int64)&v39, v33);
  *(_DWORD *)Address[1] = v39;
  v26 = ProcessHandle;
LABEL_52:
  if ( (v35 & 1) != 0 )
    KiUnstackDetachProcess((struct _KTHREAD *)v45, 0);
  if ( v26 != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(Object, 0x66506D4Du);
  if ( PoolWithTag != (_QWORD *)v46 )
    ExFreePoolWithTag(PoolWithTag, 0);
  if ( v11 != v47 )
    ExFreePoolWithTag(v11, 0);
  return valid;
}
