/*
 * XREFs of NtSetInformationKey @ 0x140477A10
 * Callers:
 *     <none>
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140657718 (CmKeyBodyReplicateToVirtual.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  ULONG v4; // ebx
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v9; // rcx
  unsigned __int64 v10; // rtt
  BOOLEAN v11; // bl
  struct _KTHREAD *v12; // rdx
  char v14; // r14
  unsigned __int8 v15; // r13
  char v16; // r14
  int v17; // ebx
  __int64 v18; // rdi
  char *v19; // rdx
  NTSTATUS v20; // eax
  _QWORD *v21; // rdi
  char v22; // r14
  struct _KTHREAD *v23; // rax
  int v24; // r8d
  _WORD *v25; // rdi
  unsigned __int64 v26; // rtt
  struct _KTHREAD *v27; // rcx
  __int16 v28; // ax
  int v29; // eax
  unsigned __int64 v30; // rtt
  struct _KTHREAD *v31; // rcx
  __int16 v32; // ax
  struct _KTHREAD *v33; // rcx
  __int16 v34; // ax
  unsigned __int64 v35; // rtt
  struct _KTHREAD *v36; // rcx
  __int16 v37; // ax
  char v38; // [rsp+30h] [rbp-108h]
  _WORD *v39; // [rsp+38h] [rbp-100h] BYREF
  int v40; // [rsp+40h] [rbp-F8h] BYREF
  __int64 v41; // [rsp+48h] [rbp-F0h] BYREF
  ULONG v42; // [rsp+50h] [rbp-E8h]
  __int64 v43; // [rsp+58h] [rbp-E0h]
  _QWORD v44[2]; // [rsp+68h] [rbp-D0h] BYREF
  PVOID v45; // [rsp+78h] [rbp-C0h] BYREF
  PVOID Object; // [rsp+80h] [rbp-B8h] BYREF
  PVOID v47; // [rsp+88h] [rbp-B0h] BYREF
  PVOID v48; // [rsp+90h] [rbp-A8h] BYREF
  PVOID v49; // [rsp+98h] [rbp-A0h] BYREF
  PVOID v50; // [rsp+A8h] [rbp-90h] BYREF
  __int64 v51; // [rsp+B0h] [rbp-88h]
  __int64 *v52; // [rsp+B8h] [rbp-80h]
  __int64 v53; // [rsp+C0h] [rbp-78h]
  __int64 v54; // [rsp+C8h] [rbp-70h]
  __int64 v55; // [rsp+D0h] [rbp-68h]
  __int64 v56; // [rsp+D8h] [rbp-60h]
  int v57; // [rsp+E0h] [rbp-58h] BYREF
  __int64 v58; // [rsp+E4h] [rbp-54h]
  int v59; // [rsp+ECh] [rbp-4Ch]

  v4 = KeySetInformationLength;
  v42 = KeySetInformationLength;
  v40 = 0;
  v50 = 0LL;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0;
  v58 = 0LL;
  v59 = 0;
  v43 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v57, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v9 = (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2;
  v10 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v10 != _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                v9,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v11 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    if ( !v11 )
    {
      v12 = KeGetCurrentThread();
      v9 = (unsigned int)++v12->KernelApcDisable;
      if ( !(_WORD)v9 )
      {
        v9 = (signed __int64)&v12->152;
        if ( *(_QWORD *)v9 != v9 && !v12->SpecialApcDisable )
          KiCheckForKernelApcDelivery();
      }
    }
    if ( !v11 )
    {
      if ( CmpTraceRoutine )
      {
        LOBYTE(v9) = 20;
        CmpTraceRoutine(v9, &v57, 3221225865LL, 0LL, 0LL, 0LL);
      }
      return -1073741431;
    }
    v4 = v42;
  }
  v14 = 1;
  v38 = 1;
  v15 = KeGetCurrentThread()->gap0[10];
  switch ( KeySetInformationClass )
  {
    case KeyWriteTimeInformation:
      v9 = 8LL;
      goto LABEL_18;
    case KeyWow64FlagsInformation:
    case KeySetDebugInformation:
      v9 = 4LL;
LABEL_18:
      v16 = 1;
      goto LABEL_19;
    case KeyControlFlagsInformation:
    case KeySetVirtualizationInformation:
    case KeySetHandleTagsInformation:
      v9 = 4LL;
      v16 = 0;
LABEL_19:
      if ( v4 != (_DWORD)v9 )
      {
        if ( CmpTraceRoutine
          && KeyHandle
          && ObReferenceObjectByHandle(
               KeyHandle,
               0,
               (POBJECT_TYPE)CmKeyObjectType,
               KeGetCurrentThread()->PreviousMode,
               &Object,
               0LL) >= 0 )
        {
          v43 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
        v17 = -1073741820;
        v14 = 1;
        v18 = v43;
        goto LABEL_95;
      }
      v41 = 0LL;
      if ( v15 )
      {
        v19 = (char *)KeySetInformation + (unsigned int)v9;
        if ( (unsigned __int64)v19 > MmUserProbeAddress || v19 < KeySetInformation )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      memmove(&v41, KeySetInformation, (unsigned int)v9);
      if ( KeySetInformationClass == KeySetHandleTagsInformation )
      {
        v20 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, v15, &v45, 0LL);
        v21 = v45;
      }
      else
      {
        v20 = ObReferenceObjectByHandle(KeyHandle, 2u, (POBJECT_TYPE)CmKeyObjectType, v15, &v48, 0LL);
        v21 = v48;
      }
      v39 = v21;
      v17 = v20;
      if ( v20 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v40) && v16 )
      {
        v17 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v15, &v47, 0LL);
        v21 = v47;
        v39 = v47;
        if ( v17 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v47) )
        {
          ObfDereferenceObject(v21);
          v17 = -1073741790;
        }
        v22 = 1;
      }
      else
      {
        v22 = 0;
      }
      if ( v17 >= 0 )
      {
        if ( CmpTraceRoutine && v21 )
          v43 = v21[1];
        if ( (*(_DWORD *)(v21[1] + 4LL) & 0x80u) != 0 && KeySetInformationClass != KeySetHandleTagsInformation )
        {
          v17 = -1073741790;
LABEL_87:
          ObfDereferenceObject(v21);
          v14 = v38;
          v18 = v43;
          goto LABEL_95;
        }
        v44[1] = v44;
        v44[0] = v44;
        v23 = KeGetCurrentThread();
        --v23->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v25 = v39;
        }
        else
        {
          v25 = v39;
          v50 = v39;
          LODWORD(v51) = KeySetInformationClass;
          v52 = &v41;
          LODWORD(v53) = v42;
          LOBYTE(v24) = 1;
          v17 = CmpCallCallBacks(3, (unsigned int)&v50, v24, 18, (__int64)v39, (__int64)v44);
        }
        if ( v17 < 0 )
        {
          if ( v17 == -1073740541 )
            v17 = 0;
          goto LABEL_82;
        }
        if ( KeySetInformationClass )
        {
          if ( KeySetInformationClass <= KeyWriteTimeInformation )
          {
LABEL_79:
            v17 = CmPostCallbackNotification(18, (_DWORD)v25, v17, (unsigned int)&v50, (__int64)v44);
LABEL_82:
            v33 = KeGetCurrentThread();
            v34 = v33->KernelApcDisable + 1;
            v33->KernelApcDisable = v34;
            if ( !v34
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
              && !v33->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
            v21 = v39;
            goto LABEL_87;
          }
          if ( KeySetInformationClass > KeySetDebugInformation )
          {
            if ( KeySetInformationClass == KeySetHandleTagsInformation )
              v25[25] = v41;
            goto LABEL_79;
          }
          if ( v22 )
          {
            v17 = CmKeyBodyReplicateToVirtual(&v39, v15, 2LL, &v40);
            LODWORD(v25) = (_DWORD)v39;
          }
          if ( v17 < 0 )
            goto LABEL_79;
          _m_prefetchw(&CmpShutdownRundown);
          v26 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v26 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v27 = KeGetCurrentThread();
          v28 = v27->KernelApcDisable + 1;
          v27->KernelApcDisable = v28;
          if ( !v28
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v27->ApcState.ApcListHead[0].Flink != &v27->152
            && !v27->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v38 = 0;
          LODWORD(v25) = (_DWORD)v39;
          v29 = CmSetKeyFlags(v39, (unsigned int)KeySetInformationClass, (unsigned int)v41);
        }
        else
        {
          if ( v22 )
          {
            v17 = CmKeyBodyReplicateToVirtual(&v39, v15, 2LL, &v40);
            LODWORD(v25) = (_DWORD)v39;
          }
          if ( v17 < 0 )
            goto LABEL_79;
          _m_prefetchw(&CmpShutdownRundown);
          v30 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v30 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v31 = KeGetCurrentThread();
          v32 = v31->KernelApcDisable + 1;
          v31->KernelApcDisable = v32;
          if ( !v32
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v31->ApcState.ApcListHead[0].Flink != &v31->152
            && !v31->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
          v38 = 0;
          LODWORD(v25) = (_DWORD)v39;
          v29 = CmSetLastWriteTimeKey(v39, &v41);
        }
        v17 = v29;
        goto LABEL_79;
      }
      v14 = 1;
      v18 = 0LL;
LABEL_95:
      if ( CmpTraceRoutine )
      {
        LOBYTE(v9) = 20;
        CmpTraceRoutine(v9, &v57, (unsigned int)v17, 0LL, v18, 0LL);
      }
      if ( v14 )
      {
        _m_prefetchw(&CmpShutdownRundown);
        v35 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v35 != _InterlockedCompareExchange64(
                      (volatile signed __int64 *)&CmpShutdownRundown,
                      (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                      CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
          ExfReleaseRundownProtection(&CmpShutdownRundown);
        v36 = KeGetCurrentThread();
        v37 = v36->KernelApcDisable + 1;
        v36->KernelApcDisable = v37;
        if ( !v37
          && ($CD287064E7C9F7953DE243E927CFCB99 *)v36->ApcState.ApcListHead[0].Flink != &v36->152
          && !v36->SpecialApcDisable )
        {
          KiCheckForKernelApcDelivery();
        }
      }
      return v17;
    default:
      if ( CmpTraceRoutine
        && KeyHandle
        && ObReferenceObjectByHandle(
             KeyHandle,
             0,
             (POBJECT_TYPE)CmKeyObjectType,
             KeGetCurrentThread()->PreviousMode,
             &v49,
             0LL) >= 0 )
      {
        v18 = *((_QWORD *)v49 + 1);
        ObfDereferenceObject(v49);
      }
      else
      {
        v18 = 0LL;
      }
      v17 = -1073741821;
      goto LABEL_95;
  }
}
