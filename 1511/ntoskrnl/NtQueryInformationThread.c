/*
 * XREFs of NtQueryInformationThread @ 0x1403EE050
 * Callers:
 *     <none>
 * Callees:
 *     PsQueryThreadStartAddress @ 0x140007D48 (PsQueryThreadStartAddress.c)
 *     IoThreadToProcess @ 0x1400284B0 (IoThreadToProcess.c)
 *     KeQueryBasePriorityThread @ 0x1400285C8 (KeQueryBasePriorityThread.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140091D0C (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryValuesThread @ 0x1400C72B0 (KeQueryValuesThread.c)
 *     PsGetEffectiveContainerId @ 0x1400E2614 (PsGetEffectiveContainerId.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F1340 (KeQueryTotalCycleTimeThread.c)
 *     KeQueryAffinityThread @ 0x14012B9A4 (KeQueryAffinityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x140142AF0 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeQueryActualAffinityThread @ 0x1401C2F6C (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x1401C2FC0 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x1401C85D8 (KeQueryCpuSetsThread.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     PspWow64GetContextThread @ 0x1404A4C94 (PspWow64GetContextThread.c)
 *     PsGetThreadExitStatus @ 0x1404BFCDC (PsGetThreadExitStatus.c)
 *     PspQueryLastCallThread @ 0x140518F04 (PspQueryLastCallThread.c)
 *     HvlGetSecureTebAddress @ 0x1405F6BE4 (HvlGetSecureTebAddress.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __m128i *v6; // r14
  unsigned __int8 v9; // si
  int v10; // r13d
  __int64 v11; // rax
  ULONG64 v12; // rax
  PULONG v13; // rcx
  NTSTATUS result; // eax
  int v15; // ebx
  PVOID v16; // rcx
  __int32 v17; // ebx
  char *v18; // rbx
  int ContextThread; // edi
  PVOID v20; // rbx
  _KPROCESS *v21; // r12
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // rdx
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v26; // r13
  __int64 v27; // rdi
  struct _KTHREAD *v28; // rsi
  PVOID v29; // r8
  int v30; // eax
  __int64 v31; // r8
  PVOID v32; // rdi
  int v33; // ebx
  int v34; // ebx
  PVOID v35; // rcx
  __int32 v36; // r15d
  _BYTE *v37; // rcx
  unsigned int v38; // edx
  PVOID v39; // rbx
  struct _KTHREAD *v40; // rsi
  int v41; // r8d
  int v42; // r12d
  ULONG v43; // edi
  __int64 v44; // r8
  NTSTATUS v45; // esi
  unsigned int *v46; // rbx
  unsigned __int64 ThreadStartAddress; // rdx
  __int64 v48; // rcx
  PVOID Object; // [rsp+40h] [rbp-1C8h] BYREF
  NTSTATUS v50; // [rsp+48h] [rbp-1C0h]
  _PROCESSOR_NUMBER v51; // [rsp+50h] [rbp-1B8h] BYREF
  PKTHREAD Thread; // [rsp+58h] [rbp-1B0h]
  __int32 v53; // [rsp+60h] [rbp-1A8h] BYREF
  unsigned __int8 v54; // [rsp+64h] [rbp-1A4h]
  unsigned __int8 v55; // [rsp+65h] [rbp-1A3h]
  char v56; // [rsp+66h] [rbp-1A2h]
  char v57; // [rsp+67h] [rbp-1A1h]
  ULONG v58; // [rsp+68h] [rbp-1A0h]
  PVOID v59[3]; // [rsp+70h] [rbp-198h] BYREF
  __m128i v60; // [rsp+88h] [rbp-180h] BYREF
  __m128i v61; // [rsp+98h] [rbp-170h] BYREF
  __m128i v62; // [rsp+A8h] [rbp-160h]
  unsigned __int64 CycleTimeStamp; // [rsp+B8h] [rbp-150h] BYREF
  __int32 v64; // [rsp+C8h] [rbp-140h]
  _OWORD v65[3]; // [rsp+D0h] [rbp-138h] BYREF
  __int64 v66; // [rsp+100h] [rbp-108h] BYREF
  __m128i v67; // [rsp+108h] [rbp-100h] BYREF
  _QWORD Src[20]; // [rsp+120h] [rbp-E8h] BYREF

  v6 = (__m128i *)ThreadInformation;
  v59[1] = ThreadHandle;
  v59[2] = ReturnLength;
  Thread = KeGetCurrentThread();
  v9 = Thread->gap0[10];
  if ( !v9 )
  {
    v10 = 1;
    goto LABEL_16;
  }
  v10 = 1;
  if ( ThreadInformationLength )
  {
    if ( ThreadInformationLength < 4 )
      v11 = 1LL;
    else
      v11 = 4LL;
    if ( ((v11 - 1) & (unsigned __int64)ThreadInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)ThreadInformation + ThreadInformationLength <= MmUserProbeAddress
      && (char *)ThreadInformation + ThreadInformationLength >= ThreadInformation )
    {
      goto LABEL_8;
    }
    *(_BYTE *)MmUserProbeAddress = 0;
  }
  v12 = MmUserProbeAddress;
LABEL_8:
  if ( ReturnLength )
  {
    v13 = ReturnLength;
    if ( (unsigned __int64)ReturnLength >= v12 )
      v13 = (PULONG)v12;
    *v13 = *v13;
  }
LABEL_16:
  memset(v65, 0, sizeof(v65));
  switch ( ThreadInformationClass )
  {
    case ThreadTimes:
      if ( ThreadInformationLength != 32 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v62.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
      v62.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
      v61.m128i_i64[0] = *((_QWORD *)Object + 187);
      if ( (unsigned __int8)*((_DWORD *)Object + 1) )
        v61.m128i_i64[1] = *((_QWORD *)Object + 188);
      else
        v61.m128i_i64[1] = 0LL;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *v6 = v61;
      v6[1] = v62;
      if ( ReturnLength )
        *ReturnLength = 32;
      return 0;
    case ThreadActualBasePriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v17 = *((char *)Object + 563);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v6->m128i_i32[0] = v17;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ThreadPagePriority:
      if ( ThreadInformationLength == 4 )
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        v15 = result;
        if ( result < 0 )
          return result;
        v16 = Object;
        v6->m128i_i32[0] = (*((_DWORD *)Object + 431) >> 12) & 7;
        if ( ReturnLength )
          *ReturnLength = 4;
        goto LABEL_23;
      }
      return -1073741820;
  }
  switch ( ThreadInformationClass )
  {
    case ThreadBasicInformation:
      if ( ThreadInformationLength != 48 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v18 = (char *)Object;
      if ( (unsigned __int8)*((_DWORD *)Object + 1) )
        LODWORD(v65[0]) = PsGetThreadExitStatus((PETHREAD)Object);
      else
        LODWORD(v65[0]) = 259;
      *((_QWORD *)&v65[0] + 1) = *((_QWORD *)v18 + 30);
      if ( !IoThreadToProcess((PETHREAD)v18)->SecurePid )
        LOBYTE(v10) = 0;
      if ( (_BYTE)v10 )
        HvlGetSecureTebAddress(v18, (char *)v65 + 8);
      v60 = *(__m128i *)(v18 + 1576);
      *(_QWORD *)&v65[2] = *((_QWORD *)v18 + 69);
      DWORD2(v65[2]) = v18[195];
      HIDWORD(v65[2]) = KeQueryBasePriorityThread((__int64)v18);
      ObfDereferenceObjectWithTag(v18, 0x79517350u);
      *v6 = (__m128i)v65[0];
      v6[1] = v60;
      v6[2] = (__m128i)v65[2];
      if ( ReturnLength )
        *ReturnLength = 48;
      return 0;
    case ThreadDescriptorTableEntry:
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x40u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v30 = xKdEnumerateDebuggingDevices();
      goto LABEL_119;
    case ThreadQuerySetWin32StartAddress:
      if ( ThreadInformationLength != 8 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x40u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      v27 = *((_QWORD *)Object + 208);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v6->m128i_i64[0] = v27;
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
                 v9,
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
      if ( Thread->Process[1].ThreadSeed[0] != 1 )
        v10 = 0;
      v6->m128i_i32[0] = v10;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      ContextThread = result;
      if ( result < 0 )
        return result;
      v33 = (*((unsigned __int8 *)Object + 120) >> 1) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v6->m128i_i32[0] = v33;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( *((PVOID *)Object + 204) == (char *)Object + 1632 )
        v10 = 0;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v6->m128i_i32[0] = v10;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      v16 = Object;
      v6->m128i_i8[0] = (*((_BYTE *)Object + 1724) & 4) != 0;
      if ( ReturnLength )
        *ReturnLength = 1;
      break;
    case ThreadBreakOnTermination:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x40u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v34 = (*((unsigned __int8 *)Object + 1724) >> 5) & 1;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v6->m128i_i32[0] = v34;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      if ( (*((_DWORD *)Object + 431) & 1) == 0 )
        v10 = 0;
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      v6->m128i_i32[0] = v10;
      if ( ReturnLength )
        *ReturnLength = 4;
      return 0;
    case ThreadLastSystemCall:
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 8u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v30 = PspQueryLastCallThread(Object, v6, ThreadInformationLength, ReturnLength);
LABEL_119:
      v15 = v30;
      goto LABEL_120;
    case ThreadIoPriority:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      v50 = result;
      if ( result < 0 )
        return result;
      v16 = Object;
      v6->m128i_i32[0] = (*((_DWORD *)Object + 431) >> 9) & 7;
      if ( ReturnLength )
        *ReturnLength = 4;
      break;
    case ThreadCycleTime:
      if ( ThreadInformationLength != 16 )
        return -1073741820;
      ContextThread = 0;
      if ( ThreadHandle == (HANDLE)-2LL )
      {
        v28 = Thread;
        Object = Thread;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        ContextThread = result;
        if ( result < 0 )
          return result;
        v28 = (struct _KTHREAD *)Object;
      }
      v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(v28, &CycleTimeStamp);
      v6->m128i_i64[1] = CycleTimeStamp;
      if ( ReturnLength )
        *ReturnLength = 16;
      if ( ThreadHandle != (HANDLE)-2LL )
        ObfDereferenceObjectWithTag(v28, 0x79517350u);
      return ContextThread;
    case ThreadTebInformation:
      if ( ThreadInformationLength != 16 )
        return -1073741820;
      if ( v9 )
      {
        v67 = *v6;
        ProbeForWrite((volatile void *)v67.m128i_i64[0], HIDWORD(_mm_srli_si128(v67, 8).m128i_u64[0]), 1u);
        v6 = &v67;
      }
      Thread = (PKTHREAD)v6;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x18u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v50 = result;
      if ( result < 0 )
        return result;
      v20 = Object;
      if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741816;
      }
      v21 = (_KPROCESS *)*((_QWORD *)Object + 68);
      if ( v21[1].ActiveProcessors.Bitmap[7] )
        v22 = 12288LL;
      else
        v22 = 6200LL;
      v23 = v6->m128i_u32[3];
      if ( !(_DWORD)v23 || (v24 = v6->m128i_u32[2], v24 >= v22) || v23 > v22 - v24 )
      {
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        return -1073741811;
      }
      if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)Object + 212) )
      {
        ObfDereferenceObjectWithTag(v20, 0x79517350u);
        return -1073741749;
      }
      Process = KeGetCurrentThread()->ApcState.Process;
      v26 = (struct _EX_RUNDOWN_REF *)Object;
      if ( v21 == Process )
      {
        memmove((void *)v6->m128i_i64[0], (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]), v6->m128i_u32[3]);
        v15 = v50;
      }
      else
      {
        v15 = MmCopyVirtualMemory(
                (int)v21,
                *((_DWORD *)Object + 60) + v6->m128i_i32[2],
                (int)Process,
                v6->m128i_i64[0],
                v6->m128i_u32[3],
                v9,
                (__int64)&v66);
      }
      ExReleaseRundownProtection_0(v26 + 212);
      ObfDereferenceObjectWithTag(v26, 0x79517350u);
      if ( v15 >= 0 )
      {
        if ( ReturnLength )
          *ReturnLength = v6->m128i_u32[3];
        v15 = 0;
        v50 = 0;
      }
      return v15;
    case ThreadWow64Context:
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 8u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      ContextThread = PspWow64GetContextThread(Object, v6, ThreadInformationLength, v9);
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      v32 = Object;
      KeQueryAffinityThread((__int64)Object, (__int64)&v60, v31);
      *v6 = v60;
      if ( ReturnLength )
        *ReturnLength = 16;
      goto LABEL_125;
    case ThreadUmsInformation:
      if ( ThreadInformationLength != 24 )
        return -1073741820;
      v36 = v6->m128i_i32[0];
      v64 = v6->m128i_i32[0];
      result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, v9, v59, 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      if ( v36 == 3 )
      {
        v6->m128i_i64[0] = 0LL;
        v6->m128i_i64[1] = 0LL;
        v6[1].m128i_i64[0] = 0LL;
        v37 = v59[0];
        v38 = v6->m128i_i32[2] & 0xFFFFFFFE | (*((unsigned __int8 *)v59[0] + 3) >> 7);
        v6->m128i_i32[2] = v38;
        v6->m128i_i32[2] = v38 ^ ((unsigned __int8)v38 ^ (v37[3] >> 5)) & 2;
      }
      else
      {
        v15 = -1073741811;
      }
      ObfDereferenceObject(v59[0]);
      return v15;
    case ThreadCounterProfiling:
      if ( ThreadInformationLength != 1 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x40u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      v35 = Object;
      v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
      ObfDereferenceObjectWithTag(v35, 0x79517350u);
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      if ( result < 0 )
        return result;
      v51 = (_PROCESSOR_NUMBER)0x400000;
      KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, &v51, &v51);
      ObfDereferenceObjectWithTag(Object, 0x79517350u);
      *(_PROCESSOR_NUMBER *)v6->m128i_i8 = v51;
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
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v50 = result;
      if ( result < 0 )
        return result;
      v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
      if ( ReturnLength )
        *ReturnLength = 1;
      v15 = v50;
LABEL_120:
      v16 = Object;
      break;
    case ThreadSuspendCount:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      v29 = Object;
      v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 13) & 1);
      if ( ReturnLength )
        *ReturnLength = 4;
      v16 = v29;
      break;
    case ThreadHeterogeneousCpuPolicy:
      if ( ThreadInformationLength != 4 )
        return -1073741820;
      ContextThread = ObReferenceObjectByHandleWithTag(
                        ThreadHandle,
                        0x800u,
                        (POBJECT_TYPE)PsThreadType,
                        v9,
                        0x79517350u,
                        &Object,
                        0LL);
      if ( ContextThread < 0 )
        return ContextThread;
      v39 = Object;
      v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
      if ( ReturnLength )
        *ReturnLength = 4;
      ObfDereferenceObjectWithTag(v39, 0x79517350u);
      return ContextThread;
    case ThreadContainerId:
      if ( ThreadInformationLength != 16 )
        return -1073741820;
      if ( ThreadHandle == (HANDLE)-2LL )
      {
        v40 = Thread;
        Object = Thread;
      }
      else
      {
        result = ObReferenceObjectByHandleWithTag(
                   ThreadHandle,
                   0x800u,
                   (POBJECT_TYPE)PsThreadType,
                   v9,
                   0x79517350u,
                   &Object,
                   0LL);
        if ( result < 0 )
          return result;
        v40 = (struct _KTHREAD *)Object;
      }
      result = PsGetEffectiveContainerId(4, v40, (__int64)&v61);
      v15 = result;
      if ( result < 0 )
        return result;
      *v6 = v61;
      if ( ReturnLength )
        *ReturnLength = 16;
      if ( ThreadHandle == (HANDLE)-2LL )
        return v15;
      v16 = v40;
      break;
    case ThreadSelectedCpuSets:
      if ( (ThreadInformationLength & 7) != 0 || ThreadInformationLength > 0xA0 )
        return -1073741820;
      v42 = ObReferenceObjectByHandleWithTag(
              ThreadHandle,
              0x800u,
              (POBJECT_TYPE)PsThreadType,
              v9,
              0x79517350u,
              &Object,
              0LL);
      v50 = v42;
      if ( v42 >= 0 )
      {
        v43 = 8 * KeQueryCpuSetsThread((__int64)Object, Src, v41);
        ObfDereferenceObjectWithTag(Object, 0x79517350u);
        v58 = v43;
        if ( ReturnLength )
          *ReturnLength = v43;
        if ( v43 >= ThreadInformationLength )
          v43 = ThreadInformationLength;
        v58 = v43;
        memmove(v6, Src, v43);
      }
      return v42;
    case ThreadSystemThreadInformation:
      if ( ThreadInformationLength != 80 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v45 = result;
      if ( result >= 0 )
      {
        v46 = (unsigned int *)Object;
        KeQueryValuesThread((__int64)Object, (__int64)&v53, v44);
        ThreadStartAddress = PsQueryThreadStartAddress((__int64)v46, 1);
        if ( ThreadStartAddress > (unsigned __int64)MmHighestUserAddress )
          ThreadStartAddress = 0LL;
        v6[4].m128i_i32[1] = v54;
        v6[4].m128i_i32[2] = v55;
        v6[3].m128i_i32[3] = v57;
        v6[3].m128i_i32[2] = v56;
        v6[1].m128i_i32[2] = v53;
        v48 = KeMaximumIncrement;
        v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v46[163];
        v6->m128i_i64[1] = v48 * v46[183];
        v6[1].m128i_i64[0] = *((_QWORD *)v46 + 187);
        v6[4].m128i_i32[0] = v46[85];
        *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v46 + 394);
        v6[2].m128i_i64[0] = ThreadStartAddress;
        if ( ReturnLength )
          *ReturnLength = 80;
        ObfDereferenceObjectWithTag(v46, 0x79517350u);
        return v45;
      }
      return result;
    case ThreadActualGroupAffinity:
      if ( ThreadInformationLength != 16 )
        return -1073741820;
      result = ObReferenceObjectByHandleWithTag(
                 ThreadHandle,
                 0x800u,
                 (POBJECT_TYPE)PsThreadType,
                 v9,
                 0x79517350u,
                 &Object,
                 0LL);
      v15 = result;
      if ( result < 0 )
        return result;
      v32 = Object;
      KeQueryActualAffinityThread((__int64)Object, (__int64)&v60);
      *v6 = v60;
      if ( ReturnLength )
        *ReturnLength = 16;
LABEL_125:
      v16 = v32;
      break;
    default:
      return -1073741821;
  }
LABEL_23:
  ObfDereferenceObjectWithTag(v16, 0x79517350u);
  return v15;
}
