/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x1406E58C8
 * Callers:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     RtlFindSetBits @ 0x140062390 (RtlFindSetBits.c)
 *     PsGetProcessId @ 0x1400CF7C4 (PsGetProcessId.c)
 *     RtlNumberOfSetBits @ 0x1400EF6A0 (RtlNumberOfSetBits.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404D0650 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpReleaseLoggerContext @ 0x1404D3208 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x1404D3244 (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x1404D32A8 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404D32E0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     EtwpMapEnableFlags @ 0x14054AF88 (EtwpMapEnableFlags.c)
 *     EtwpCheckSystemTraceAccess @ 0x1405C4B58 (EtwpCheckSystemTraceAccess.c)
 *     xHalSetSystemInformation @ 0x1405C733C (xHalSetSystemInformation.c)
 *     EtwpUMGLEnabled @ 0x1406E27A0 (EtwpUMGLEnabled.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, __int64 a2, __int64 a3, unsigned int *a4)
{
  unsigned int v5; // r15d
  unsigned int v7; // esi
  __int64 result; // rax
  int v9; // ebx
  unsigned int v10; // ecx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r13
  void *v17; // rbx
  char v18; // dl
  unsigned int *v19; // rcx
  struct _KTHREAD *v20; // rcx
  __int16 v21; // ax
  __int64 v22; // rax
  unsigned int i; // edx
  unsigned int v24; // ecx
  struct _KTHREAD *v25; // rax
  __int64 v26; // rax
  __int64 v27; // rbx
  unsigned int *v28; // rcx
  struct _KTHREAD *v29; // rcx
  __int16 v30; // ax
  __int64 v31; // rax
  unsigned int v32; // ecx
  struct _KTHREAD *v33; // rax
  __int64 v34; // rax
  unsigned int *v35; // rcx
  __int64 v36; // rdx
  unsigned int v37; // eax
  unsigned int v38; // r13d
  struct _KPROCESS *k; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v41; // r15
  unsigned int ProcessId; // eax
  ULONG v43; // r13d
  unsigned int v44; // ecx
  struct _KTHREAD *v45; // rax
  struct _MDL *v46; // rax
  struct _MDL *v47; // r14
  struct _KTHREAD *v48; // rcx
  __int16 v49; // ax
  __int16 v50; // ax
  unsigned int v51; // ecx
  ULONG v52; // ebx
  __int64 j; // r15
  ULONG Length; // [rsp+30h] [rbp-88h] BYREF
  DWORD SecurityInformation; // [rsp+34h] [rbp-84h] BYREF
  PVOID Object; // [rsp+38h] [rbp-80h] BYREF
  ULONG v57; // [rsp+40h] [rbp-78h]
  struct _MDL *v58; // [rsp+48h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+50h] [rbp-68h] BYREF
  __int64 v60; // [rsp+58h] [rbp-60h]
  int v61; // [rsp+60h] [rbp-58h]
  __int64 v62; // [rsp+68h] [rbp-50h]
  __int64 v63; // [rsp+70h] [rbp-48h]
  __int64 v64; // [rsp+78h] [rbp-40h]
  __int64 v65; // [rsp+80h] [rbp-38h]
  unsigned int v66; // [rsp+C8h] [rbp+10h]
  DWORD SetBits; // [rsp+C8h] [rbp+10h]

  v5 = a2;
  v7 = 0;
  if ( (unsigned int)a2 < 4 )
    return 3221225485LL;
  v61 = *(_DWORD *)a1;
  v9 = v61;
  if ( v61 <= 5 )
  {
    if ( v61 == 5 )
    {
      *a4 = 20;
      if ( (((_DWORD)a2 - 16) & 0xFFFFFFFB) == 0 )
      {
        *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
        *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
        if ( (_DWORD)a2 == 20 )
          *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
        return v7;
      }
      return 3221225476LL;
    }
    if ( !v61 )
    {
      *a4 = 8;
      if ( (_DWORD)a2 == 8 )
      {
        *(_DWORD *)(a1 + 4) = 60;
        return v7;
      }
      return 3221225476LL;
    }
    if ( v61 != 1 )
    {
      switch ( v61 )
      {
        case 2:
          *a4 = 16;
          if ( (_DWORD)a2 == 16 )
          {
            v22 = 0LL;
            for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
              v22 += *(_QWORD *)(*(_QWORD *)(KiProcessorBlock[i] + 24536) + 2832LL);
            *(_QWORD *)(a1 + 8) = v22;
            return v7;
          }
          return 3221225476LL;
        case 3:
          *a4 = 8;
          if ( (_DWORD)a2 == 8 )
          {
            *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
            return v7;
          }
          return 3221225476LL;
        case 4:
          *a4 = 24;
          if ( (unsigned int)a2 >= 0x18 )
          {
            v64 = *(_QWORD *)(a1 + 8);
            SecurityInformation = *(_DWORD *)(a1 + 4);
            v10 = (unsigned __int16)v64;
            if ( (unsigned __int16)v64 == 0xFFFF )
              v10 = (unsigned __int16)EtwpSystemLogger[0];
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            v12 = EtwpAcquireLoggerContextByLoggerId(v10, 0);
            v16 = v12;
            if ( v12 )
            {
              v17 = (void *)EtwpReferenceLoggerSecurityDescriptor(v12, v13, v14, v15);
              ObjectsSecurityDescriptor = v17;
              Length = v5 - 16;
              v7 = SeQuerySecurityDescriptorInfo(
                     &SecurityInformation,
                     (PSECURITY_DESCRIPTOR)(a1 + 16),
                     &Length,
                     &ObjectsSecurityDescriptor);
              *a4 = Length + 16;
              EtwpDereferenceLoggerSecurityDescriptor(v16, (__int64)v17);
              v18 = 0;
              v19 = (unsigned int *)v16;
LABEL_15:
              EtwpReleaseLoggerContext(v19, v18);
              goto LABEL_17;
            }
LABEL_16:
            v7 = -1073741162;
LABEL_17:
            v20 = KeGetCurrentThread();
            v21 = v20->KernelApcDisable + 1;
            v20->KernelApcDisable = v21;
            if ( !v21 )
            {
LABEL_91:
              if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v20->ApcState.ApcListHead[0].Flink != &v20->152
                && !v20->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
            }
            return v7;
          }
          return 3221225476LL;
      }
      return (unsigned int)-1073741822;
    }
    *a4 = 48;
    if ( (_DWORD)a2 != 48 )
      return 3221225476LL;
    v62 = *(_QWORD *)(a1 + 8);
    v24 = (unsigned __int16)v62;
    if ( (unsigned __int16)v62 == 0xFFFF )
      v24 = (unsigned __int16)EtwpSystemLogger[0];
    v25 = KeGetCurrentThread();
    --v25->KernelApcDisable;
    v26 = EtwpAcquireLoggerContextByLoggerId(v24, 1);
    v27 = v26;
    ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v26;
    if ( !v26 )
      goto LABEL_16;
    if ( (*(_DWORD *)(v26 + 12) & 0x2000000) == 0 )
    {
      v28 = (unsigned int *)v26;
LABEL_32:
      EtwpReleaseLoggerContext(v28, 1);
      v29 = KeGetCurrentThread();
      v30 = v29->KernelApcDisable + 1;
      v29->KernelApcDisable = v30;
      if ( !v30
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
        && !v29->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
      }
      return 3221225485LL;
    }
    v31 = 32LL * *(unsigned __int8 *)(v26 + 834);
    *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&EtwpGroupMasks + v31);
    *(_OWORD *)(a1 + 32) = *(_OWORD *)((char *)&unk_1403276F0 + v31);
    EtwpMapEnableFlags(a1 + 16, 0);
LABEL_37:
    v18 = 1;
    v19 = (unsigned int *)v27;
    goto LABEL_15;
  }
  if ( v61 == 6 )
  {
    v43 = 0;
    v57 = 0;
    SetBits = 0;
    v60 = a1 + 16;
    if ( (unsigned int)a2 < 0x10 )
      return 3221225476LL;
    v65 = *(_QWORD *)(a1 + 8);
    v44 = (unsigned __int16)v65;
    if ( (unsigned __int16)v65 == 0xFFFF )
      v44 = (unsigned __int16)EtwpSystemLogger[0];
    v45 = KeGetCurrentThread();
    --v45->KernelApcDisable;
    v46 = (struct _MDL *)EtwpAcquireLoggerContextByLoggerId(v44, 1);
    v47 = v46;
    v58 = v46;
    if ( v46 )
    {
      v7 = EtwpCheckLoggerControlAccess(1u, (__int64)v46);
      if ( (v7 & 0x80000000) == 0 )
      {
        if ( (LODWORD(v47[17].Process) & 0x80u) != 0 )
        {
          v43 = RtlNumberOfSetBits((PRTL_BITMAP)&v47[17].MappedSystemVa);
          v57 = v43;
        }
        v51 = 4 * v43 + 16;
        *a4 = v51;
        if ( v51 > v5 )
        {
          v7 = -1073741789;
        }
        else
        {
          v52 = 0;
          for ( j = v60; ; *(_DWORD *)(j + 4LL * v52++) = SetBits )
          {
            Length = v52;
            if ( v52 >= v43 )
              break;
            SetBits = RtlFindSetBits((PRTL_BITMAP)&v47[17].MappedSystemVa, 1u, SetBits + 1);
            SecurityInformation = SetBits;
          }
        }
      }
      v35 = (unsigned int *)v47;
      goto LABEL_90;
    }
  }
  else
  {
    if ( v61 == 7 )
    {
      *a4 = 16;
      if ( (_DWORD)a2 == 16 )
      {
        *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
        *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
        *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
        return v7;
      }
      return 3221225476LL;
    }
    if ( v61 <= 9 )
    {
      v38 = 0;
      if ( (unsigned int)a2 >= 8 )
      {
        v66 = (unsigned int)(a2 - 4) >> 2;
        for ( k = 0LL; ; k = v41 )
        {
          NextProcess = (struct _KPROCESS *)PsGetNextProcess(k, a2, a3, (__int64)a4);
          v41 = NextProcess;
          Object = NextProcess;
          if ( !NextProcess )
            break;
          if ( !PsIsSystemProcess(NextProcess) && (v9 == 9 || EtwpUMGLEnabled((ULONG_PTR)v41)) )
          {
            ProcessId = (unsigned int)PsGetProcessId(v41);
            if ( v38 < v66 )
              *(_DWORD *)(a1 + 4LL * v38 + 4) = ProcessId;
            ++v38;
          }
        }
        *a4 = 4 * v38 + 4;
        if ( v38 > v66 )
          return (unsigned int)-1073741789;
        return v7;
      }
      return 3221225476LL;
    }
    if ( v61 != 10 )
    {
      if ( v61 == 13 )
      {
        if ( (unsigned int)a2 >= 0x28 )
        {
          result = ExLockUserBuffer(a1 + 8, (int)a2 - 8, a3, IoWriteAccess, &Object, &v58);
          if ( (int)result < 0 )
            return result;
          v7 = off_140321B18();
          if ( Object )
            ExUnlockUserBuffer(v58);
          return v7;
        }
        return 3221225476LL;
      }
      return (unsigned int)-1073741822;
    }
    if ( (unsigned int)a2 < 0x10 )
      return 3221225476LL;
    v63 = *(_QWORD *)(a1 + 8);
    v32 = (unsigned __int16)v63;
    if ( (unsigned __int16)v63 == 0xFFFF )
      v32 = (unsigned __int16)EtwpSystemLogger[0];
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v34 = EtwpAcquireLoggerContextByLoggerId(v32, 1);
    v27 = v34;
    v58 = (struct _MDL *)v34;
    if ( v34 )
    {
      v28 = (unsigned int *)v34;
      if ( (*(_DWORD *)(v34 + 12) & 0x2000000) == 0 )
        goto LABEL_32;
      v7 = EtwpCheckSystemTraceAccess(v34, 1u);
      if ( (v7 & 0x80000000) == 0 )
      {
        v36 = 5LL * *(unsigned __int8 *)(v27 + 834);
        v37 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *(unsigned __int8 *)(v27 + 834)] + 16;
        *a4 = v37;
        if ( v37 > v5 )
          v7 = -1073741789;
        else
          memmove(
            (void *)(a1 + 16),
            (const void *)(0x140000000LL + 4 * v36 + 3305764),
            4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v36]);
        goto LABEL_37;
      }
      v35 = (unsigned int *)v27;
LABEL_90:
      EtwpReleaseLoggerContext(v35, 1);
      v20 = KeGetCurrentThread();
      v50 = v20->KernelApcDisable + 1;
      v20->KernelApcDisable = v50;
      if ( !v50 )
        goto LABEL_91;
      return v7;
    }
  }
  v48 = KeGetCurrentThread();
  v49 = v48->KernelApcDisable + 1;
  v48->KernelApcDisable = v49;
  if ( !v49
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v48->ApcState.ApcListHead[0].Flink != &v48->152
    && !v48->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return 3221226134LL;
}
