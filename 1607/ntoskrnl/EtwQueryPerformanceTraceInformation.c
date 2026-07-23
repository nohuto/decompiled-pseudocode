/*
 * XREFs of EtwQueryPerformanceTraceInformation @ 0x1406A3390
 * Callers:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     RtlFindSetBits @ 0x14000AB40 (RtlFindSetBits.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
 *     RtlNumberOfSetBits @ 0x140076850 (RtlNumberOfSetBits.c)
 *     PsGetProcessId @ 0x140086D74 (PsGetProcessId.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     SeQuerySecurityDescriptorInfo @ 0x1404038C0 (SeQuerySecurityDescriptorInfo.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x140490C10 (EtwpReleaseLoggerContext.c)
 *     EtwpCheckLoggerControlAccess @ 0x140490C98 (EtwpCheckLoggerControlAccess.c)
 *     EtwpDereferenceLoggerSecurityDescriptor @ 0x140490CE4 (EtwpDereferenceLoggerSecurityDescriptor.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140490D1C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpMapEnableFlags @ 0x140496E88 (EtwpMapEnableFlags.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     PsGetNextProcess @ 0x1404EBF8C (PsGetNextProcess.c)
 *     EtwpCheckSystemTraceAccess @ 0x140581100 (EtwpCheckSystemTraceAccess.c)
 *     xHalSetSystemInformation @ 0x140581DF0 (xHalSetSystemInformation.c)
 *     EtwpUMGLEnabled @ 0x14069FF10 (EtwpUMGLEnabled.c)
 *     EtwpGetSoftRestartInformation @ 0x1406A9DBC (EtwpGetSoftRestartInformation.c)
 */

__int64 __fastcall EtwQueryPerformanceTraceInformation(__int64 a1, __int64 a2, KPROCESSOR_MODE a3, unsigned int *a4)
{
  unsigned int v5; // r15d
  __int64 v7; // rbx
  unsigned int v8; // edi
  __int64 result; // rax
  int v10; // esi
  __int64 v11; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  void *v19; // rbx
  char v20; // dl
  ULONG i; // esi
  __int64 v22; // rcx
  struct _KTHREAD *v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  unsigned int *v30; // rcx
  ULONG v31; // r13d
  __int64 v32; // rcx
  struct _KTHREAD *v33; // rax
  unsigned int v34; // edx
  char *v35; // rax
  char *v36; // r14
  unsigned int v37; // ecx
  ULONG v38; // esi
  __int64 v39; // r15
  __int64 v40; // rcx
  struct _KTHREAD *v41; // rax
  unsigned int v42; // edx
  __int64 v43; // rax
  __int64 v44; // r9
  unsigned int v45; // eax
  ULONG v46; // r13d
  struct _KPROCESS *j; // rcx
  struct _KPROCESS *NextProcess; // rax
  struct _KPROCESS *v49; // r15
  unsigned int ProcessId; // eax
  DWORD SecurityInformation; // [rsp+30h] [rbp-78h] BYREF
  ULONG v52; // [rsp+34h] [rbp-74h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  PSECURITY_DESCRIPTOR ObjectsSecurityDescriptor; // [rsp+40h] [rbp-68h] BYREF
  struct _MDL *v55; // [rsp+48h] [rbp-60h] BYREF
  __int64 v56; // [rsp+50h] [rbp-58h]
  int v57; // [rsp+58h] [rbp-50h]
  __int64 v58; // [rsp+60h] [rbp-48h]
  __int64 v59; // [rsp+68h] [rbp-40h]
  __int64 v60; // [rsp+70h] [rbp-38h]
  __int64 v61; // [rsp+78h] [rbp-30h]
  ULONG Length; // [rsp+B8h] [rbp+10h] BYREF

  v5 = a2;
  v7 = 0LL;
  v8 = 0;
  if ( (unsigned int)a2 < 4 )
    return 3221225485LL;
  v57 = *(_DWORD *)a1;
  v10 = v57;
  if ( v57 <= 6 )
  {
    if ( v57 != 6 )
    {
      if ( !v57 )
      {
        *a4 = 8;
        if ( (_DWORD)a2 != 8 )
          return 3221225476LL;
        *(_DWORD *)(a1 + 4) = 65;
        return v8;
      }
      if ( v57 != 1 )
      {
        if ( v57 == 2 )
        {
          *a4 = 16;
          if ( (_DWORD)a2 == 16 )
          {
            for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
              v7 += *(_QWORD *)(*(_QWORD *)(KeGetPrcb(i) + 24536) + 2832LL);
            *(_QWORD *)(a1 + 8) = v7;
            return v8;
          }
          return 3221225476LL;
        }
        if ( v57 != 3 )
        {
          if ( v57 != 4 )
          {
            if ( v57 == 5 )
            {
              *a4 = 20;
              if ( (((_DWORD)a2 - 16) & 0xFFFFFFFB) == 0 )
              {
                *(_DWORD *)(a1 + 4) = EtwpSpinLockSpinThreshold;
                *(_DWORD *)(a1 + 8) = EtwpSpinLockAcquireSampleRate;
                *(_DWORD *)(a1 + 12) = EtwpSpinLockContentionSampleRate;
                if ( (_DWORD)a2 == 20 )
                  *(_DWORD *)(a1 + 16) = EtwpSpinLockHoldThreshold;
                return v8;
              }
              return 3221225476LL;
            }
            return (unsigned int)-1073741822;
          }
          *a4 = 24;
          if ( (unsigned int)a2 < 0x18 )
            return 3221225476LL;
          v58 = *(_QWORD *)(a1 + 8);
          SecurityInformation = *(_DWORD *)(a1 + 4);
          v11 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          v14 = EtwpAcquireLoggerContextByLoggerId(v11, v13, 0);
          v18 = v14;
          if ( v14 )
          {
            v19 = (void *)EtwpReferenceLoggerSecurityDescriptor(v14);
            ObjectsSecurityDescriptor = v19;
            Length = v5 - 16;
            v8 = SeQuerySecurityDescriptorInfo(
                   &SecurityInformation,
                   (PSECURITY_DESCRIPTOR)(a1 + 16),
                   &Length,
                   &ObjectsSecurityDescriptor);
            *a4 = Length + 16;
            EtwpDereferenceLoggerSecurityDescriptor(v18, (__int64)v19);
            v20 = 0;
LABEL_31:
            v30 = (unsigned int *)v18;
LABEL_41:
            EtwpReleaseLoggerContext(v30, v20);
            goto LABEL_42;
          }
LABEL_37:
          v8 = -1073741162;
LABEL_42:
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
          return v8;
        }
        *a4 = 8;
        if ( (_DWORD)a2 != 8 )
          return 3221225476LL;
        *(_DWORD *)(a1 + 4) = EtwpProfileInterval;
        return v8;
      }
      *a4 = 48;
      if ( (_DWORD)a2 != 48 )
        return 3221225476LL;
      v59 = *(_QWORD *)(a1 + 8);
      v22 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
      v23 = KeGetCurrentThread();
      --v23->KernelApcDisable;
      v25 = EtwpAcquireLoggerContextByLoggerId(v22, v24, 1);
      v18 = v25;
      ObjectsSecurityDescriptor = (PSECURITY_DESCRIPTOR)v25;
      if ( !v25 )
        goto LABEL_37;
      if ( (*(_DWORD *)(v25 + 12) & 0x2000000) == 0 )
      {
        EtwpReleaseLoggerContext((unsigned int *)v25, 1);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v26, v27, v28);
        return 3221225485LL;
      }
      v29 = 32LL * *(unsigned __int8 *)(v25 + 818);
      *(_OWORD *)(a1 + 16) = *(_OWORD *)((char *)&EtwpGroupMasks + v29);
      *(_OWORD *)(a1 + 32) = *(_OWORD *)((char *)&unk_1402FD430 + v29);
      EtwpMapEnableFlags(a1 + 16, 0);
LABEL_30:
      v20 = 1;
      goto LABEL_31;
    }
    v31 = 0;
    v52 = 0;
    v56 = a1 + 16;
    if ( (unsigned int)a2 < 0x10 )
      return 3221225476LL;
    v60 = *(_QWORD *)(a1 + 8);
    v32 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
    v33 = KeGetCurrentThread();
    --v33->KernelApcDisable;
    v35 = (char *)EtwpAcquireLoggerContextByLoggerId(v32, v34, 1);
    v36 = v35;
    ObjectsSecurityDescriptor = v35;
    if ( !v35 )
      goto LABEL_37;
    v8 = EtwpCheckLoggerControlAccess(1u, (__int64)v35);
    if ( (v8 & 0x80000000) == 0 )
    {
      if ( (*((_DWORD *)v36 + 204) & 0x80u) != 0 )
      {
        v31 = RtlNumberOfSetBits((PRTL_BITMAP)(v36 + 824));
        v52 = v31;
      }
      v37 = 4 * v31 + 16;
      *a4 = v37;
      if ( v37 > v5 )
      {
        v8 = -1073741789;
      }
      else
      {
        v38 = 0;
        Length = 0;
        v39 = v56;
        while ( v38 < v31 )
        {
          LODWORD(v7) = RtlFindSetBits((PRTL_BITMAP)(v36 + 824), 1u, v7 + 1);
          SecurityInformation = v7;
          *(_DWORD *)(v39 + 4LL * v38++) = v7;
          Length = v38;
        }
      }
    }
    v30 = (unsigned int *)v36;
    goto LABEL_40;
  }
  if ( v57 == 7 )
  {
    *a4 = 16;
    if ( (_DWORD)a2 != 16 )
      return 3221225476LL;
    *(_DWORD *)(a1 + 4) = EtwpExecutiveResourceReleaseSampleRate;
    *(_DWORD *)(a1 + 8) = EtwpExecutiveResourceContentionSampleRate;
    *(_DWORD *)(a1 + 12) = EtwpExecutiveResourceTimeout;
    return v8;
  }
  if ( v57 <= 9 )
  {
    v46 = 0;
    if ( (unsigned int)a2 >= 8 )
    {
      Length = (unsigned int)(a2 - 4) >> 2;
      for ( j = 0LL; ; j = v49 )
      {
        NextProcess = (struct _KPROCESS *)PsGetNextProcess(j);
        v49 = NextProcess;
        Object = NextProcess;
        if ( !NextProcess )
          break;
        if ( !PsIsSystemProcess(NextProcess) && (v10 == 9 || EtwpUMGLEnabled((ULONG_PTR)v49)) )
        {
          ProcessId = (unsigned int)PsGetProcessId(v49);
          if ( v46 < Length )
            *(_DWORD *)(a1 + 4LL * v46 + 4) = ProcessId;
          ++v46;
        }
      }
      *a4 = 4 * v46 + 4;
      if ( v46 > Length )
        return (unsigned int)-1073741789;
      return v8;
    }
    return 3221225476LL;
  }
  if ( v57 == 10 )
  {
    if ( (unsigned int)a2 < 0x10 )
      return 3221225476LL;
    v61 = *(_QWORD *)(a1 + 8);
    v40 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
    v41 = KeGetCurrentThread();
    --v41->KernelApcDisable;
    v43 = EtwpAcquireLoggerContextByLoggerId(v40, v42, 1);
    v18 = v43;
    v55 = (struct _MDL *)v43;
    if ( !v43 )
      goto LABEL_37;
    if ( (*(_DWORD *)(v43 + 12) & 0x2000000) == 0 )
    {
      EtwpReleaseLoggerContext((unsigned int *)v43, 1);
      v8 = -1073741811;
      goto LABEL_42;
    }
    v8 = EtwpCheckSystemTraceAccess(v43, 1u);
    if ( (v8 & 0x80000000) == 0 )
    {
      v44 = 5LL * *(unsigned __int8 *)(v18 + 818);
      v45 = 4 * (unsigned __int16)EtwpPoolTagFilter[10 * *(unsigned __int8 *)(v18 + 818)] + 16;
      *a4 = v45;
      if ( v45 > v5 )
        v8 = -1073741789;
      else
        memmove((void *)(a1 + 16), (char *)&unk_1402FD1E4 + 4 * v44, 4LL * (unsigned __int16)EtwpPoolTagFilter[2 * v44]);
      goto LABEL_30;
    }
    v30 = (unsigned int *)v18;
LABEL_40:
    v20 = 1;
    goto LABEL_41;
  }
  if ( v57 != 13 )
  {
    if ( v57 != 18 )
      return (unsigned int)-1073741822;
    return (unsigned int)EtwpGetSoftRestartInformation(a1, a2, a4);
  }
  if ( (unsigned int)a2 < 0x28 )
    return 3221225476LL;
  result = ExLockUserBuffer(a1 + 8, (int)a2 - 8, a3, IoWriteAccess, &Object, &v55);
  if ( (int)result >= 0 )
  {
    v8 = off_1402F37E8();
    if ( Object )
      ExUnlockUserBuffer(v55);
    return v8;
  }
  return result;
}
