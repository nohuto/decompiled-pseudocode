/*
 * XREFs of NtQueryInformationThread @ 0x14049C030
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KeQueryValuesThread @ 0x14004FE00 (KeQueryValuesThread.c)
 *     KeQueryBasePriorityThread @ 0x1400506E0 (KeQueryBasePriorityThread.c)
 *     IoThreadToProcess @ 0x1400507F0 (IoThreadToProcess.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KeQueryTotalCycleTimeThread @ 0x1400F0A40 (KeQueryTotalCycleTimeThread.c)
 *     PsGetEffectiveContainerId @ 0x140117284 (PsGetEffectiveContainerId.c)
 *     KeSetIdealProcessorThreadByNumber @ 0x140138144 (KeSetIdealProcessorThreadByNumber.c)
 *     KeQueryAffinityThread @ 0x14015C7F4 (KeQueryAffinityThread.c)
 *     xKdEnumerateDebuggingDevices @ 0x140170968 (xKdEnumerateDebuggingDevices.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     KeQueryActualAffinityThread @ 0x1401FECF8 (KeQueryActualAffinityThread.c)
 *     KeQueryHeteroCpuPolicyThread @ 0x1401FED98 (KeQueryHeteroCpuPolicyThread.c)
 *     KeQueryCpuSetsThread @ 0x14020587C (KeQueryCpuSetsThread.c)
 *     PspQueryLastCallThread @ 0x1404099F0 (PspQueryLastCallThread.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObReferenceObjectByHandleWithTag @ 0x140496E00 (ObReferenceObjectByHandleWithTag.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     PspWowGetContextThread @ 0x140530EB8 (PspWowGetContextThread.c)
 *     HvlGetSecureTebAddress @ 0x140670AB4 (HvlGetSecureTebAddress.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtQueryInformationThread(
        HANDLE ThreadHandle,
        THREADINFOCLASS ThreadInformationClass,
        PVOID ThreadInformation,
        ULONG ThreadInformationLength,
        PULONG ReturnLength)
{
  __int64 v5; // r14
  __m128i *v6; // rbx
  struct _KTHREAD *CurrentThread; // r13
  KPROCESSOR_MODE PreviousMode; // r9
  int v10; // r12d
  __int64 v11; // rax
  ULONG64 v12; // rax
  PULONG v13; // rcx
  NTSTATUS result; // eax
  char *v15; // rdi
  int v16; // eax
  int v17; // esi
  int ContextThread; // edi
  PVOID v19; // rcx
  __int32 v20; // edi
  struct _EX_RUNDOWN_REF *v21; // rdi
  unsigned __int64 v22; // rtt
  __int64 v23; // rsi
  _KPROCESS *v24; // r14
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  unsigned __int64 v27; // r8
  struct _EX_RUNDOWN_REF *v28; // rcx
  unsigned __int64 v29; // rtt
  _KPROCESS *Process; // r8
  struct _EX_RUNDOWN_REF *v31; // rdi
  unsigned __int64 v32; // rtt
  PVOID v33; // r8
  PVOID v34; // rsi
  NTSTATUS v35; // eax
  NTSTATUS v36; // ebx
  int v37; // edi
  int v38; // edi
  PVOID v39; // rcx
  int v40; // r14d
  _BYTE *v41; // rcx
  unsigned int v42; // edx
  PVOID v43; // rdi
  int v44; // r12d
  ULONG v45; // edi
  NTSTATUS v46; // r14d
  unsigned int *v47; // rdi
  unsigned __int64 v48; // rdx
  __int64 v49; // rcx
  unsigned __int64 v50; // rtt
  signed __int32 v51[8]; // [rsp+0h] [rbp-208h] BYREF
  PVOID Object; // [rsp+40h] [rbp-1C8h] BYREF
  unsigned __int8 v53; // [rsp+48h] [rbp-1C0h]
  int v54; // [rsp+4Ch] [rbp-1BCh]
  int v55; // [rsp+54h] [rbp-1B4h] BYREF
  __int32 v56; // [rsp+58h] [rbp-1B0h] BYREF
  unsigned __int8 v57; // [rsp+5Ch] [rbp-1ACh]
  unsigned __int8 v58; // [rsp+5Dh] [rbp-1ABh]
  char v59; // [rsp+5Eh] [rbp-1AAh]
  char v60; // [rsp+5Fh] [rbp-1A9h]
  HANDLE v61; // [rsp+60h] [rbp-1A8h]
  ULONG v62; // [rsp+68h] [rbp-1A0h]
  PULONG v63; // [rsp+70h] [rbp-198h]
  __int64 v64; // [rsp+78h] [rbp-190h] BYREF
  PVOID v65; // [rsp+80h] [rbp-188h] BYREF
  __m128i v66; // [rsp+88h] [rbp-180h] BYREF
  __int64 v67; // [rsp+98h] [rbp-170h]
  __int64 v68; // [rsp+A0h] [rbp-168h]
  __m128i v69; // [rsp+A8h] [rbp-160h]
  __m128i v70; // [rsp+B8h] [rbp-150h] BYREF
  __m128i v71; // [rsp+C8h] [rbp-140h]
  int v72; // [rsp+D8h] [rbp-130h]
  __m128i v73; // [rsp+E0h] [rbp-128h] BYREF
  unsigned __int64 CycleTimeStamp; // [rsp+F0h] [rbp-118h] BYREF
  _OWORD v75[2]; // [rsp+F8h] [rbp-110h] BYREF
  _QWORD Src[20]; // [rsp+120h] [rbp-E8h] BYREF

  v5 = ThreadInformationLength;
  v6 = (__m128i *)ThreadInformation;
  v61 = ThreadHandle;
  v63 = ReturnLength;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  v53 = PreviousMode;
  if ( !PreviousMode )
  {
    v10 = 1;
    goto LABEL_16;
  }
  v10 = 1;
  if ( (_DWORD)v5 )
  {
    if ( (unsigned int)v5 < 4 )
      v11 = 1LL;
    else
      v11 = 4LL;
    if ( ((v11 - 1) & (unsigned __int64)ThreadInformation) != 0 )
      ExRaiseDatatypeMisalignment();
    v12 = MmUserProbeAddress;
    if ( (unsigned __int64)ThreadInformation + v5 <= MmUserProbeAddress
      && (char *)ThreadInformation + v5 >= ThreadInformation )
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
  v66 = 0uLL;
  v67 = 0LL;
  v68 = 0LL;
  v69 = 0uLL;
  if ( ThreadInformationClass )
  {
    if ( ThreadInformationClass == ThreadCycleTime )
    {
      if ( (_DWORD)v5 != 16 )
        return -1073741820;
      v17 = 0;
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
        v17 = result;
        if ( result < 0 )
          return result;
        CurrentThread = (struct _KTHREAD *)Object;
      }
      v6->m128i_i64[0] = KeQueryTotalCycleTimeThread(CurrentThread, &CycleTimeStamp);
      v6->m128i_i64[1] = CycleTimeStamp;
      if ( ReturnLength )
        *ReturnLength = 16;
    }
    else
    {
      switch ( ThreadInformationClass )
      {
        case ThreadTimes:
          if ( (_DWORD)v5 != 32 )
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
          v71.m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 163);
          v71.m128i_i64[1] = KeMaximumIncrement * (unsigned __int64)*((unsigned int *)Object + 183);
          v70.m128i_i64[0] = *((_QWORD *)Object + 187);
          if ( (unsigned __int8)*((_DWORD *)Object + 1) )
            v70.m128i_i64[1] = *((_QWORD *)Object + 188);
          else
            v70.m128i_i64[1] = 0LL;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          *v6 = v70;
          v6[1] = v71;
          if ( ReturnLength )
            *ReturnLength = 32;
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
          v35 = xKdEnumerateDebuggingDevices();
          goto LABEL_130;
        case ThreadQuerySetWin32StartAddress:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x40u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v23 = *((_QWORD *)Object + 208);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i64[0] = v23;
          if ( ReturnLength )
            *ReturnLength = 8;
          return ContextThread;
        case ThreadPerformanceCount:
          if ( (_DWORD)v5 != 8 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x40u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i64[0] = 0LL;
          if ( ReturnLength )
            *ReturnLength = 8;
          return ContextThread;
        case ThreadAmILastThread:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          if ( *(_DWORD *)&CurrentThread->Process[1].0 != 1 )
            v10 = 0;
          *(_DWORD *)ThreadInformation = v10;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadPriorityBoost:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x800u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          v17 = result;
          if ( result < 0 )
            return result;
          v37 = (*((unsigned __int8 *)Object + 120) >> 1) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i32[0] = v37;
          if ( ReturnLength )
            *ReturnLength = 4;
          return v17;
        case ThreadIsIoPending:
          if ( (_DWORD)v5 != 4 )
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
          if ( *((PVOID *)Object + 204) == (char *)Object + 1632 )
            v10 = 0;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i32[0] = v10;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadHideFromDebugger:
          if ( (_DWORD)v5 != 1 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x40u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v19 = Object;
          v6->m128i_i8[0] = (*((_BYTE *)Object + 1724) & 4) != 0;
          if ( ReturnLength )
            *ReturnLength = 1;
          goto LABEL_51;
        case ThreadBreakOnTermination:
          if ( (_DWORD)v5 != 4 )
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
          v38 = (*((unsigned __int8 *)Object + 1724) >> 5) & 1;
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i32[0] = v38;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadIsTerminated:
          if ( (_DWORD)v5 != 4 )
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
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          if ( result < 0 )
            return result;
          v35 = PspQueryLastCallThread((__int64)Object, (__int64)v6, v5, ReturnLength);
LABEL_130:
          v36 = v35;
          goto LABEL_131;
        case ThreadIoPriority:
          if ( (_DWORD)v5 != 4 )
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
          v54 = result;
          if ( result < 0 )
            return result;
          v19 = Object;
          v6->m128i_i32[0] = (*((_DWORD *)Object + 431) >> 9) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_51;
        case ThreadPagePriority:
          if ( (_DWORD)v5 != 4 )
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
          v19 = Object;
          v6->m128i_i32[0] = (*((_DWORD *)Object + 431) >> 12) & 7;
          if ( ReturnLength )
            *ReturnLength = 4;
          goto LABEL_51;
        case ThreadActualBasePriority:
          if ( (_DWORD)v5 != 4 )
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
          v20 = *((char *)Object + 563);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i32[0] = v20;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadTebInformation:
          if ( (_DWORD)v5 != 16 )
            return -1073741820;
          if ( PreviousMode )
          {
            v73 = *(__m128i *)ThreadInformation;
            ProbeForWrite((volatile void *)v73.m128i_i64[0], HIDWORD(_mm_srli_si128(v73, 8).m128i_u64[0]), 1u);
            v6 = &v73;
            PreviousMode = v53;
          }
          v61 = v6;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x18u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          v54 = result;
          if ( result >= 0 )
          {
            if ( (*((_DWORD *)Object + 29) & 0x400) != 0 )
            {
              ObfDereferenceObjectWithTag(Object, 0x79517350u);
              return -1073741816;
            }
            else
            {
              v24 = (_KPROCESS *)*((_QWORD *)Object + 68);
              if ( v24[1].ActiveProcessors.Bitmap[7] )
                v25 = 12288LL;
              else
                v25 = 6200LL;
              v26 = v6->m128i_u32[3];
              if ( (_DWORD)v26 && (v27 = v6->m128i_u32[2], v27 < v25) && v26 <= v25 - v27 )
              {
                v28 = (struct _EX_RUNDOWN_REF *)((char *)Object + 1696);
                _m_prefetchw((char *)Object + 1696);
                v29 = v28->Count & 0xFFFFFFFFFFFFFFFEuLL;
                if ( v29 == _InterlockedCompareExchange64((volatile signed __int64 *)v28, v29 + 2, v29)
                  || ExfAcquireRundownProtection(v28) )
                {
                  Process = KeGetCurrentThread()->ApcState.Process;
                  v31 = (struct _EX_RUNDOWN_REF *)Object;
                  if ( v24 == Process )
                    memmove(
                      (void *)v6->m128i_i64[0],
                      (const void *)(*((_QWORD *)Object + 30) + v6->m128i_u32[2]),
                      v6->m128i_u32[3]);
                  else
                    v54 = MmCopyVirtualMemory(
                            (int)v24,
                            *((_DWORD *)Object + 60) + v6->m128i_i32[2],
                            (int)Process,
                            v6->m128i_i64[0],
                            v6->m128i_u32[3],
                            v53,
                            (__int64)&v64);
                  _m_prefetchw(&v31[212]);
                  v32 = v31[212].Count & 0xFFFFFFFFFFFFFFFEuLL;
                  if ( v32 != _InterlockedCompareExchange64((volatile signed __int64 *)&v31[212], v32 - 2, v32) )
                    ExfReleaseRundownProtection(v31 + 212);
                  ObfDereferenceObjectWithTag(Object, 0x79517350u);
                  result = v54;
                  if ( v54 >= 0 )
                  {
                    if ( ReturnLength )
                      *ReturnLength = v6->m128i_u32[3];
                    result = 0;
                    v54 = 0;
                  }
                }
                else
                {
                  ObfDereferenceObjectWithTag(Object, 0x79517350u);
                  return -1073741749;
                }
              }
              else
              {
                ObfDereferenceObjectWithTag(Object, 0x79517350u);
                return -1073741811;
              }
            }
          }
          return result;
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
          ContextThread = PspWowGetContextThread(Object, v6, (unsigned int)v5, v53);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          if ( ContextThread >= 0 && ReturnLength )
            *ReturnLength = 716;
          return ContextThread;
        case ThreadGroupInformation:
          if ( (_DWORD)v5 != 16 )
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
          v34 = Object;
          KeQueryAffinityThread((__int64)Object, (__int64)v75);
          *v6 = (__m128i)v75[0];
          if ( ReturnLength )
            *ReturnLength = 16;
          goto LABEL_126;
        case ThreadUmsInformation:
          if ( (_DWORD)v5 != 24 )
            return -1073741820;
          v40 = *(_DWORD *)ThreadInformation;
          v72 = *(_DWORD *)ThreadInformation;
          result = ObReferenceObjectByHandle(ThreadHandle, 0x40u, (POBJECT_TYPE)PsThreadType, PreviousMode, &v65, 0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          if ( v40 == 3 )
          {
            v6->m128i_i64[0] = 0LL;
            v6->m128i_i64[1] = 0LL;
            v6[1].m128i_i64[0] = 0LL;
            v41 = v65;
            v42 = v6->m128i_i32[2] & 0xFFFFFFFE | (*((unsigned __int8 *)v65 + 3) >> 7);
            v6->m128i_i32[2] = v42;
            v6->m128i_i32[2] = v42 ^ ((unsigned __int8)v42 ^ (v41[3] >> 5)) & 2;
          }
          else
          {
            ContextThread = -1073741811;
          }
          ObfDereferenceObject(v65);
          return ContextThread;
        case ThreadCounterProfiling:
          if ( (_DWORD)v5 != 1 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x40u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          ContextThread = result;
          if ( result < 0 )
            return result;
          v39 = Object;
          v6->m128i_i8[0] = *((_QWORD *)Object + 45) != 0LL;
          ObfDereferenceObjectWithTag(v39, 0x79517350u);
          if ( ReturnLength )
            *ReturnLength = 1;
          return ContextThread;
        case ThreadIdealProcessorEx:
          if ( (_DWORD)v5 != 4 )
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
          v55 = 0x400000;
          KeSetIdealProcessorThreadByNumber((struct _KTHREAD *)Object, (__int64)&v55, (__int64)&v55);
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          v6->m128i_i32[0] = v55;
          if ( ReturnLength )
            *ReturnLength = 4;
          return 0;
        case ThreadCpuAccountingInformation:
          if ( !(_DWORD)v5 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x40u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          v54 = result;
          if ( result < 0 )
            return result;
          v6->m128i_i8[0] = *((_QWORD *)Object + 13) != 0LL;
          if ( ReturnLength )
            *ReturnLength = 1;
          v36 = v54;
LABEL_131:
          ObfDereferenceObjectWithTag(Object, 0x79517350u);
          return v36;
        case ThreadSuspendCount:
          if ( (_DWORD)v5 != 4 )
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
          v33 = Object;
          v6->m128i_i32[0] = *((char *)Object + 644) + ((*((_DWORD *)Object + 30) >> 13) & 1);
          if ( ReturnLength )
            *ReturnLength = 4;
          v19 = v33;
          goto LABEL_51;
        case ThreadHeterogeneousCpuPolicy:
          if ( (_DWORD)v5 != 4 )
            return -1073741820;
          v17 = ObReferenceObjectByHandleWithTag(
                  ThreadHandle,
                  0x800u,
                  (POBJECT_TYPE)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Object,
                  0LL);
          if ( v17 < 0 )
            return v17;
          v43 = Object;
          v6->m128i_i32[0] = KeQueryHeteroCpuPolicyThread((__int64)Object, 1);
          if ( ReturnLength )
            *ReturnLength = 4;
          ObfDereferenceObjectWithTag(v43, 0x79517350u);
          return v17;
        case ThreadContainerId:
          if ( (_DWORD)v5 != 16 )
            return -1073741820;
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
            if ( result < 0 )
              return result;
            CurrentThread = (struct _KTHREAD *)Object;
          }
          result = PsGetEffectiveContainerId(4, CurrentThread, (__int64)&v70);
          v17 = result;
          if ( result < 0 )
            return result;
          *v6 = v70;
          if ( ReturnLength )
            *ReturnLength = 16;
          break;
        case ThreadSelectedCpuSets:
          if ( (v5 & 7) != 0 || (unsigned int)v5 > 0xA0 )
            return -1073741820;
          v44 = ObReferenceObjectByHandleWithTag(
                  ThreadHandle,
                  0x800u,
                  (POBJECT_TYPE)PsThreadType,
                  PreviousMode,
                  0x79517350u,
                  &Object,
                  0LL);
          v54 = v44;
          if ( v44 >= 0 )
          {
            v45 = 8 * KeQueryCpuSetsThread((__int64)Object, Src);
            ObfDereferenceObjectWithTag(Object, 0x79517350u);
            v62 = v45;
            if ( ReturnLength )
              *ReturnLength = v45;
            if ( v45 >= (unsigned int)v5 )
              v45 = v5;
            v62 = v45;
            memmove(v6, Src, v45);
          }
          return v44;
        case ThreadSystemThreadInformation:
          if ( (_DWORD)v5 != 80 )
            return -1073741820;
          result = ObReferenceObjectByHandleWithTag(
                     ThreadHandle,
                     0x800u,
                     (POBJECT_TYPE)PsThreadType,
                     PreviousMode,
                     0x79517350u,
                     &Object,
                     0LL);
          v46 = result;
          v54 = result;
          if ( result >= 0 )
          {
            v47 = (unsigned int *)Object;
            KeQueryValuesThread((__int64)Object, (__int64)&v56);
            if ( (v47[29] & 0x400) != 0 )
            {
              v48 = *((_QWORD *)v47 + 208);
            }
            else
            {
              if ( (v47[433] & 8) != 0 || (v48 = *((_QWORD *)Object + 192), _InterlockedOr(v51, 0), (v47[433] & 8) != 0) )
                v48 = 0LL;
              v46 = v54;
              v47 = (unsigned int *)Object;
            }
            if ( v48 > (unsigned __int64)MmHighestUserAddress )
              v48 = 0LL;
            v6[4].m128i_i32[1] = v57;
            v6[4].m128i_i32[2] = v58;
            v6[3].m128i_i32[3] = v60;
            v6[3].m128i_i32[2] = v59;
            v6[1].m128i_i32[2] = v56;
            v49 = KeMaximumIncrement;
            v6->m128i_i64[0] = KeMaximumIncrement * (unsigned __int64)v47[163];
            v6->m128i_i64[1] = v49 * v47[183];
            v6[1].m128i_i64[0] = *((_QWORD *)v47 + 187);
            v6[4].m128i_i32[0] = v47[85];
            *(__m128i *)((char *)v6 + 40) = *(__m128i *)(v47 + 394);
            v6[2].m128i_i64[0] = v48;
            if ( ReturnLength )
              *ReturnLength = 80;
            ObfDereferenceObjectWithTag(v47, 0x79517350u);
            return v46;
          }
          return result;
        case ThreadActualGroupAffinity:
          if ( (_DWORD)v5 != 16 )
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
          v34 = Object;
          KeQueryActualAffinityThread((__int64)Object, (__int64)v75);
          *v6 = (__m128i)v75[0];
          if ( ReturnLength )
            *ReturnLength = 16;
LABEL_126:
          v19 = v34;
LABEL_51:
          ObfDereferenceObjectWithTag(v19, 0x79517350u);
          return ContextThread;
        default:
          return -1073741821;
      }
    }
    if ( ThreadHandle != (HANDLE)-2LL )
      ObfDereferenceObjectWithTag(CurrentThread, 0x79517350u);
    return v17;
  }
  if ( (_DWORD)v5 != 48 )
    return -1073741820;
  result = ObReferenceObjectByHandleWithTag(
             ThreadHandle,
             0x800u,
             (POBJECT_TYPE)PsThreadType,
             PreviousMode,
             0x79517350u,
             &Object,
             0LL);
  v54 = result;
  if ( result < 0 )
    return result;
  v15 = (char *)Object;
  if ( !(unsigned __int8)*((_DWORD *)Object + 1) )
    goto LABEL_20;
  v21 = (struct _EX_RUNDOWN_REF *)((char *)Object + 1696);
  _m_prefetchw((char *)Object + 1696);
  v22 = v21->Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v22 == _InterlockedCompareExchange64((volatile signed __int64 *)v21, v22 + 2, v22)
    || ExfAcquireRundownProtection(v21) )
  {
    _m_prefetchw(v21);
    v50 = v21->Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v50 != _InterlockedCompareExchange64((volatile signed __int64 *)v21, v50 - 2, v50) )
      ExfReleaseRundownProtection(v21);
    v15 = (char *)Object;
LABEL_20:
    v16 = 259;
    goto LABEL_21;
  }
  v15 = (char *)Object;
  v16 = *((_DWORD *)Object + 440);
LABEL_21:
  v66.m128i_i32[0] = v16;
  v66.m128i_i64[1] = *((_QWORD *)v15 + 30);
  if ( !IoThreadToProcess((PETHREAD)v15)->SecurePid )
    LOBYTE(v10) = 0;
  if ( (_BYTE)v10 )
    HvlGetSecureTebAddress(v15, &v66.m128i_u64[1]);
  v73 = *(__m128i *)(v15 + 1576);
  v69.m128i_i64[0] = *((_QWORD *)v15 + 69);
  v69.m128i_i32[2] = v15[195];
  v69.m128i_i32[3] = KeQueryBasePriorityThread((__int64)v15);
  ObfDereferenceObjectWithTag(v15, 0x79517350u);
  *v6 = v66;
  v6[1] = v73;
  v6[2] = v69;
  if ( ReturnLength )
    *ReturnLength = 48;
  return 0;
}
