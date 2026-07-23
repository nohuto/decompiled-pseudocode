/*
 * XREFs of NtQueryInformationThread @ 0x1404FCA40
 * Callers:
 *     <none>
 * Callees:
 *     PsGetWorkOnBehalfThread @ 0x14005E3F4 (PsGetWorkOnBehalfThread.c)
 *     IoThreadToProcess @ 0x14005F270 (IoThreadToProcess.c)
 *     KeQueryValuesThread @ 0x1400698D0 (KeQueryValuesThread.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140070694 (KeSetIdealProcessorThreadByNumber.c)
 *     PsQueryThreadStartAddress @ 0x140074C20 (PsQueryThreadStartAddress.c)
 *     PspUnlockThreadSecurityShared @ 0x1400920C8 (PspUnlockThreadSecurityShared.c)
 *     PspLockThreadSecurityShared @ 0x140092110 (PspLockThreadSecurityShared.c)
 *     KeQueryTotalCycleTimeThread @ 0x14009553C (KeQueryTotalCycleTimeThread.c)
 *     PsEncodeThreadWorkOnBehalfTicket @ 0x1400A34AC (PsEncodeThreadWorkOnBehalfTicket.c)
 *     PsGetEffectiveContainerId @ 0x1400A5C30 (PsGetEffectiveContainerId.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     KeQueryBasePriorityThread @ 0x1400F4760 (KeQueryBasePriorityThread.c)
 *     KeQueryAffinityThread @ 0x140135904 (KeQueryAffinityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x14014CF94 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeQueryActualAffinityThread @ 0x1401D2ACC (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x1401D2B20 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x1401D74C4 (KeQueryCpuSetsThread.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x14044FC50 (ObpReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     PspWow64GetContextThread @ 0x1404FBFA8 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x1404FED98 (PsGetThreadExitStatus.c)
 *     VslGetSecureTebAddress @ 0x140620A44 (VslGetSecureTebAddress.c)
 *     PspQueryLastCallThread @ 0x14067D864 (PspQueryLastCallThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __m128i *v6; // r14
  struct _KTHREAD *CurrentThread; // rsi
  char PreviousMode; // r12
  int v11; // eax
  __int64 v12; // rcx
  NTSTATUS result; // eax
  __int32 v14; // ebx
  NTSTATUS v15; // ebx
  PVOID v16; // rcx
  struct _KTHREAD *v17; // rbx
  int ContextThread; // edi
  BOOL v19; // ebx
  __int64 v20; // rdi
  PVOID v21; // r8
  BOOL v22; // ebx
  PVOID v23; // rbx
  _KPROCESS *v24; // r13
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // rdx
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v29; // rsi
  PVOID v30; // rdi
  NTSTATUS v31; // eax
  int v32; // ebx
  int v33; // ebx
  PVOID v34; // rcx
  __int32 v35; // esi
  _BYTE *v36; // rcx
  unsigned int v37; // edx
  PVOID v38; // rbx
  int v39; // r8d
  int v40; // r12d
  ULONG v41; // edi
  NTSTATUS v42; // esi
  __m128i *v43; // rbx
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v45; // rcx
  unsigned __int16 v46; // di
  _QWORD *v47; // r13
  char v48; // cl
  __int64 v49; // rax
  const WCHAR *v50; // rdx
  unsigned int v51; // eax
  PVOID WorkOnBehalfThread; // rax
  void *v53; // rcx
  PVOID Object; // [rsp+40h] [rbp-1F8h] BYREF
  char v55; // [rsp+48h] [rbp-1F0h]
  char v56; // [rsp+49h] [rbp-1EFh]
  NTSTATUS v57; // [rsp+4Ch] [rbp-1ECh]
  _PROCESSOR_NUMBER v58; // [rsp+54h] [rbp-1E4h] BYREF
  unsigned __int16 v59; // [rsp+58h] [rbp-1E0h]
  HANDLE v60; // [rsp+60h] [rbp-1D8h]
  int v61; // [rsp+68h] [rbp-1D0h]
  __int32 v62; // [rsp+70h] [rbp-1C8h] BYREF
  unsigned __int8 v63; // [rsp+74h] [rbp-1C4h]
  unsigned __int8 v64; // [rsp+75h] [rbp-1C3h]
  char v65; // [rsp+76h] [rbp-1C2h]
  char v66; // [rsp+77h] [rbp-1C1h]
  ULONG v67; // [rsp+78h] [rbp-1C0h]
  int v68; // [rsp+7Ch] [rbp-1BCh] BYREF
  PULONG v69; // [rsp+80h] [rbp-1B8h]
  PVOID v70[2]; // [rsp+88h] [rbp-1B0h] BYREF
  void *v71; // [rsp+98h] [rbp-1A0h] BYREF
  __m128i v72; // [rsp+A0h] [rbp-198h] BYREF
  __m128i v73; // [rsp+B0h] [rbp-188h] BYREF
  __m128i v74; // [rsp+C0h] [rbp-178h]
  __int32 v75; // [rsp+D0h] [rbp-168h]
  unsigned int v76; // [rsp+D4h] [rbp-164h]
  unsigned __int64 CycleTimeStamp[10]; // [rsp+D8h] [rbp-160h] BYREF
  __int64 v78[2]; // [rsp+128h] [rbp-110h] BYREF
  __m128i v79; // [rsp+138h] [rbp-100h] BYREF
  _QWORD Src[20]; // [rsp+150h] [rbp-E8h] BYREF

  v6 = (__m128i *)ThreadInformation;
  v60 = ThreadHandle;
  v69 = ReturnLength;
  CurrentThread = KeGetCurrentThread();
  v70[1] = CurrentThread;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( ThreadInformationClass == ThreadNameInformation )
    {
      v11 = 8;
    }
    else if ( ThreadInformationLength < 4 )
    {
      v11 = 1;
    }
    else
    {
      v11 = 4;
    }
    v61 = v11;
    if ( ThreadInformationLength )
    {
      if ( ((v11 - 1) & (unsigned int)ThreadInformation) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( (unsigned __int64)ThreadInformation + ThreadInformationLength > 0x7FFFFFFF0000LL
        || (char *)ThreadInformation + ThreadInformationLength < ThreadInformation )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
      }
    }
    if ( ReturnLength )
    {
      v12 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v12 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v12 = *(_DWORD *)v12;
    }
  }
  memset(&CycleTimeStamp[4], 0, 0x30uLL);
  if ( ThreadInformationClass == ThreadTimes )
  {
    if ( ThreadInformationLength == 32 )
    {
      result = ObpReferenceObjectByHandleWithTag(
                 (ULONG_PTR)ThreadHandle,
                 2048,
                 (__int64)PsThreadType,
                 PreviousMode,
                 2035381072,
                 &Object,
                 0LL,
                 0LL);
      if ( result < 0 )
        return result;
      v74.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
      v74.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
      v73.m128i_i64[0] = *((_QWORD *)Object + 188);
      if ( (unsigned __int8)*((_DWORD *)Object + 1) )
        v73.m128i_i64[1] = *((_QWORD *)Object + 189);
      else
        v73.m128i_i64[1] = 0LL;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *v6 = v73;
      v6[1] = v74;
      if ( ReturnLength )
        *ReturnLength = 32;
      return 0;
    }
    return -1073741820;
  }
  if ( ThreadInformationClass != ThreadPagePriority )
  {
    if ( ThreadInformationClass == ThreadActualBasePriority )
    {
      if ( ThreadInformationLength == 4 )
      {
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v14 = *((char *)Object + 563);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v14;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      }
      return -1073741820;
    }
    switch ( ThreadInformationClass )
    {
      case ThreadBasicInformation:
        if ( ThreadInformationLength != 48 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        if ( result < 0 )
          return result;
        v17 = (struct _KTHREAD *)Object;
        if ( (unsigned __int8)*((_DWORD *)Object + 1) )
          LODWORD(CycleTimeStamp[4]) = PsGetThreadExitStatus((PETHREAD)Object);
        else
          LODWORD(CycleTimeStamp[4]) = 259;
        CycleTimeStamp[5] = (unsigned __int64)v17->Teb;
        if ( IoThreadToProcess(v17)->SecurePid )
          VslGetSecureTebAddress(v17, &CycleTimeStamp[5]);
        v72 = *(__m128i *)&v17[1].CurrentRunTime;
        CycleTimeStamp[8] = v17->UserAffinity.Mask;
        LODWORD(CycleTimeStamp[9]) = v17->Priority;
        HIDWORD(CycleTimeStamp[9]) = KeQueryBasePriorityThread((__int64)v17);
        ObfDereferenceObjectWithTag(v17, 0x79517350u);
        *v6 = *(__m128i *)&CycleTimeStamp[4];
        v6[1] = v72;
        v6[2] = *(__m128i *)&CycleTimeStamp[8];
        if ( ReturnLength )
          *ReturnLength = 48;
        return 0;
      case ThreadDescriptorTableEntry:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v31 = xKdEnumerateDebuggingDevices();
        goto LABEL_125;
      case ThreadQuerySetWin32StartAddress:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v20 = *((_QWORD *)Object + 209);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i64[0] = v20;
        if ( ReturnLength )
          *ReturnLength = 8;
        return v15;
      case ThreadPerformanceCount:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i64[0] = 0LL;
        if ( ReturnLength )
          *ReturnLength = 8;
        return v15;
      case ThreadAmILastThread:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        v6->m128i_i32[0] = CurrentThread->Process[1].ThreadSeed[0] == 1;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadPriorityBoost:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        ContextThread = result;
        if ( result < 0 )
          return result;
        v32 = (*((unsigned __int8 *)Object + 120) >> 1) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v32;
        if ( ReturnLength )
          *ReturnLength = 4;
        return ContextThread;
      case ThreadIsIoPending:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v22 = *((_QWORD *)Object + 205) != (_QWORD)Object + 1640;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v22;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadHideFromDebugger:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v16 = Object;
        v6->m128i_i8[0] = (*((_BYTE *)Object + 1728) & 4) != 0;
        if ( ReturnLength )
          *ReturnLength = 1;
        goto LABEL_38;
      case ThreadBreakOnTermination:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v33 = (*((unsigned __int8 *)Object + 1728) >> 5) & 1;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v33;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadIsTerminated:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v19 = (*((_DWORD *)Object + 432) & 1) != 0;
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v6->m128i_i32[0] = v19;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadLastSystemCall:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   8u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v31 = PspQueryLastCallThread(Object, v6, ThreadInformationLength, ReturnLength);
LABEL_125:
        v15 = v31;
        goto LABEL_126;
      case ThreadIoPriority:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v15 = result;
        v57 = result;
        if ( result < 0 )
          return result;
        v16 = Object;
        v6->m128i_i32[0] = (*((_DWORD *)Object + 432) >> 9) & 7;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_38;
      case ThreadCycleTime:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        ContextThread = 0;
        if ( ThreadHandle == (HANDLE)-2LL )
        {
          Object = CurrentThread;
        }
        else
        {
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x800u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          CurrentThread = (struct _KTHREAD *)Object;
        }
        v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, CycleTimeStamp);
        v6->m128i_i64[1] = CycleTimeStamp[0];
        if ( ReturnLength )
          *ReturnLength = 16;
        if ( ThreadHandle != (HANDLE)-2LL )
          ObfDereferenceObjectWithTag(CurrentThread, 0x79517350u);
        return ContextThread;
      case ThreadTebInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        if ( PreviousMode )
        {
          v79 = *v6;
          ProbeForWrite((volatile void *)v79.m128i_i64[0], HIDWORD(_mm_srli_si128(v79, 8).m128i_u64[0]), 1u);
          v6 = &v79;
        }
        v60 = v6;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x18u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v57 = result;
        if ( result < 0 )
          return result;
        v23 = Object;
        if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741816;
        }
        v24 = (_KPROCESS *)*((_QWORD *)Object + 68);
        if ( v24[1].ActiveProcessors.Bitmap[7] )
          v25 = 12288LL;
        else
          v25 = 6200LL;
        v26 = v6->m128i_u32[3];
        if ( !(_DWORD)v26 || (v27 = v6->m128i_u32[2], v27 >= v25) || v26 > v25 - v27 )
        {
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return -1073741811;
        }
        if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 213) )
        {
          ObfDereferenceObjectWithTag(v23, 0x79517350u);
          return -1073741749;
        }
        Process = KeGetCurrentThread()->ApcState.Process;
        v29 = (struct _EX_RUNDOWN_REF *)Object;
        if ( v24 == Process )
        {
          memmove(
            (void *)v6->m128i_i64[0],
            (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
            v6->m128i_u32[3]);
          v15 = v57;
        }
        else
        {
          v15 = MmCopyVirtualMemory(
                  v24,
                  (void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                  Process,
                  v6->m128i_i64[0],
                  v6->m128i_u32[3],
                  PreviousMode,
                  (unsigned __int64 *)v78);
        }
        ExReleaseRundownProtection(v29 + 213);
        ObfDereferenceObjectWithTag(v29, 0x79517350u);
        if ( v15 >= 0 )
        {
          if ( ReturnLength )
            *ReturnLength = v6->m128i_u32[3];
          v15 = 0;
          v57 = 0;
        }
        break;
      case ThreadWow64Context:
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   8u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        ContextThread = PspWow64GetContextThread((__int64)Object, (ULONG *)v6, ThreadInformationLength, PreviousMode);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        if ( ContextThread >= 0 && ReturnLength )
          *ReturnLength = 716;
        return ContextThread;
      case ThreadGroupInformation:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v30 = Object;
        KeQueryAffinityThread((__int64)Object, (__int64)&v72);
        *v6 = v72;
        if ( ReturnLength )
          *ReturnLength = 16;
        goto LABEL_122;
      case ThreadUmsInformation:
        if ( ThreadInformationLength != 24 )
          return -1073741820;
        v35 = v6->m128i_i32[0];
        v75 = v6->m128i_i32[0];
        result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, PreviousMode, v70, 0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        if ( v35 == 3 )
        {
          v6->m128i_i64[0] = 0LL;
          v6->m128i_i64[1] = 0LL;
          v6[1].m128i_i64[0] = 0LL;
          v36 = v70[0];
          v37 = v6->m128i_i32[2] & 0xFFFFFFFE | (*((unsigned __int8 *)v70[0] + 3) >> 7);
          v6->m128i_i32[2] = v37;
          v6->m128i_i32[2] = v37 ^ ((unsigned __int8)v37 ^ (v36[3] >> 5)) & 2;
        }
        else
        {
          v15 = -1073741811;
        }
        ObfDereferenceObject(v70[0]);
        return v15;
      case ThreadCounterProfiling:
        if ( ThreadInformationLength != 1 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v34 = Object;
        v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
        ObfDereferenceObjectWithTag(v34, 0x79517350u);
        if ( ReturnLength )
          *ReturnLength = 1;
        return v15;
      case ThreadIdealProcessorEx:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v58 = (_PROCESSOR_NUMBER)0x400000;
        KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v58, &v58);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v58;
        if ( ReturnLength )
          *ReturnLength = 4;
        return 0;
      case ThreadCpuAccountingInformation:
        if ( !ThreadInformationLength )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x40u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v57 = result;
        if ( result < 0 )
          return result;
        v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
        if ( ReturnLength )
          *ReturnLength = 1;
        v15 = v57;
        goto LABEL_126;
      case ThreadSuspendCount:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v21 = Object;
        v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 13) & 1);
        if ( ReturnLength )
          *ReturnLength = 4;
        v16 = v21;
        goto LABEL_38;
      case ThreadHeterogeneousCpuPolicy:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        ContextThread = ObReferenceObjectByHandleWithTag(
                          ThreadHandle,
                          0x800u,
                          (POBJECT_TYPE)PsThreadType,
                          PreviousMode,
                          0x79517350u,
                          &Object,
                          0LL);
        if ( ContextThread < 0 )
          return ContextThread;
        v38 = Object;
        v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
        if ( ReturnLength )
          *ReturnLength = 4;
        ObfDereferenceObjectWithTag(v38, 0x79517350u);
        return ContextThread;
      case ThreadContainerId:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v73);
        if ( result >= 0 )
        {
          *v6 = v73;
          if ( ReturnLength )
            *ReturnLength = 16;
        }
        return result;
      case ThreadNameInformation:
        v56 = 0;
        v46 = 0;
        Object = 0LL;
        v55 = 0;
        v40 = ObReferenceObjectByHandleWithTag(
                ThreadHandle,
                0x800u,
                (POBJECT_TYPE)PsThreadType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        v57 = v40;
        v47 = Object;
        if ( v40 < 0 )
        {
          v48 = v55;
        }
        else
        {
          v56 = 1;
          PspLockThreadSecurityShared((__int64)Object, (__int64)CurrentThread);
          v48 = 1;
          v55 = 1;
          v49 = v47[249];
          if ( v49 )
          {
            v50 = *(const WCHAR **)(v49 + 8);
            v46 = *(_WORD *)v49;
          }
          else
          {
            v50 = &word_1405841A0;
          }
          v59 = v46;
          CycleTimeStamp[2] = (unsigned __int64)v50;
          v51 = v46 + 16;
          LODWORD(v60) = v51;
          v76 = v51;
          if ( v51 <= ThreadInformationLength )
          {
            v78[1] = (__int64)v6;
            memmove(&v6[1], v50, v46);
            v6->m128i_i16[0] = v46;
            v6->m128i_i16[1] = v46;
            v6->m128i_i64[1] = (__int64)v6[1].m128i_i64;
            v51 = (unsigned int)v60;
            v48 = v55;
          }
          else
          {
            v40 = -1073741789;
            v57 = -1073741789;
          }
          if ( ReturnLength )
            *ReturnLength = v51;
        }
        if ( v48 )
          PspUnlockThreadSecurityShared((__int64)v47, (__int64)CurrentThread);
        if ( v56 )
          ObfDereferenceObjectWithTag(v47, 0x79517350u);
        return v40;
      case ThreadSelectedCpuSets:
        if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
          return -1073741820;
        v40 = ObReferenceObjectByHandleWithTag(
                ThreadHandle,
                0x800u,
                (POBJECT_TYPE)PsThreadType,
                PreviousMode,
                0x79517350u,
                &Object,
                0LL);
        v57 = v40;
        if ( v40 >= 0 )
        {
          v41 = 8 * KeQueryCpuSetsThread((__int64)Object, Src, v39);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v67 = v41;
          if ( ReturnLength )
            *ReturnLength = v41;
          if ( v41 >= ThreadInformationLength )
            v41 = ThreadInformationLength;
          v67 = v41;
          memmove(v6, Src, v41);
        }
        return v40;
      case ThreadSystemThreadInformation:
        if ( ThreadInformationLength != 80 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v42 = result;
        if ( result >= 0 )
        {
          v43 = (__m128i *)Object;
          KeQueryValuesThread((__int64)Object, (__int64)&v62);
          ThreadStartAddress = PsQueryThreadStartAddress((__int64)v43, 1);
          if ( ThreadStartAddress > 0x7FFFFFFEFFFFLL )
            ThreadStartAddress = 0LL;
          v6[4].m128i_i32[1] = v63;
          v6[4].m128i_i32[2] = v64;
          v6[3].m128i_i32[3] = v66;
          v6[3].m128i_i32[2] = v65;
          v6[1].m128i_i32[2] = v62;
          v45 = KeMaximumIncrement;
          v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v43[40].m128i_u32[3];
          v6->m128i_i64[1] = v45 * v43[45].m128i_u32[3];
          v6[1].m128i_i64[0] = v43[94].m128i_i64[0];
          v6[4].m128i_i32[0] = v43[21].m128i_i32[1];
          *(__m128i *)((char *)v6 + 40) = v43[99];
          v6[2].m128i_i64[0] = ThreadStartAddress;
          if ( ReturnLength )
            *ReturnLength = 80;
          ObfDereferenceObjectWithTag(v43, 0x79517350u);
          return v42;
        }
        return result;
      case ThreadActualGroupAffinity:
        if ( ThreadInformationLength != 16 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v30 = Object;
        KeQueryActualAffinityThread((__int64)Object, (__int64)&v72);
        *v6 = v72;
        if ( ReturnLength )
          *ReturnLength = 16;
LABEL_122:
        v16 = v30;
        goto LABEL_38;
      case ThreadDynamicCodePolicyInfo:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObpReferenceObjectByHandleWithTag(
                   (ULONG_PTR)ThreadHandle,
                   2048,
                   (__int64)PsThreadType,
                   PreviousMode,
                   2035381072,
                   &Object,
                   0LL,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v16 = Object;
        v6->m128i_i32[0] = (*((_DWORD *)Object + 432) & 0x40000) != 0;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_38;
      case ThreadExplicitCaseSensitivity:
        if ( ThreadInformationLength != 4 )
          return -1073741820;
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   PreviousMode,
                   0x79517350u,
                   &Object,
                   0LL);
        v57 = result;
        if ( result < 0 )
          return result;
        v6->m128i_i32[0] = (*((_DWORD *)Object + 432) >> 19) & 1;
        if ( ReturnLength )
          *ReturnLength = 4;
        v15 = v57;
LABEL_126:
        v16 = Object;
        goto LABEL_38;
      case ThreadWorkOnBehalfTicket:
        if ( ThreadInformationLength != 8 )
          return -1073741820;
        if ( ThreadHandle != (HANDLE)-2LL )
          return -1073741811;
        WorkOnBehalfThread = PsGetWorkOnBehalfThread(CurrentThread, &v68);
        if ( WorkOnBehalfThread )
        {
          PsEncodeThreadWorkOnBehalfTicket((__int64)WorkOnBehalfThread, &v71);
          if ( v68 )
            ObfDereferenceObject(v53);
          WorkOnBehalfThread = v71;
        }
        v6->m128i_i64[0] = (__int64)WorkOnBehalfThread;
        if ( ReturnLength )
          *ReturnLength = 8;
        return 0;
      default:
        return -1073741821;
    }
    return v15;
  }
  if ( ThreadInformationLength != 4 )
    return -1073741820;
  result = ObpReferenceObjectByHandleWithTag(
             (ULONG_PTR)ThreadHandle,
             2048,
             (__int64)PsThreadType,
             PreviousMode,
             2035381072,
             &Object,
             0LL,
             0LL);
  v15 = result;
  if ( result >= 0 )
  {
    v16 = Object;
    v6->m128i_i32[0] = (*((_DWORD *)Object + 432) >> 12) & 7;
    if ( ReturnLength )
      *ReturnLength = 4;
LABEL_38:
    ObfDereferenceObjectWithTag(v16, 0x79517350u);
    return v15;
  }
  return result;
}
