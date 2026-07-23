/*
 * XREFs of NtSetInformationKey @ 0x140424400
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1405E19C4 (CmKeyBodyReplicateToVirtual.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  HANDLE v8; // rcx
  char v9; // r15
  KPROCESSOR_MODE PreviousMode; // r14
  unsigned int *v11; // rax
  unsigned int v12; // eax
  NTSTATUS v13; // eax
  _QWORD *v14; // rdi
  NTSTATUS v15; // ebx
  __int64 v16; // r14
  struct _KTHREAD *v17; // rax
  _WORD *v18; // rdi
  __int64 v20; // rcx
  unsigned int *v21; // rcx
  unsigned int v22; // eax
  __int64 *v23; // rcx
  __int64 v24; // rax
  char v25; // [rsp+30h] [rbp-108h]
  unsigned int v26; // [rsp+34h] [rbp-104h]
  PVOID v27; // [rsp+38h] [rbp-100h] BYREF
  int v28; // [rsp+40h] [rbp-F8h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-F0h]
  ULONG v30; // [rsp+50h] [rbp-E8h]
  __int64 v31; // [rsp+60h] [rbp-D8h] BYREF
  _QWORD v32[2]; // [rsp+68h] [rbp-D0h] BYREF
  PVOID v33; // [rsp+78h] [rbp-C0h] BYREF
  PVOID v34; // [rsp+80h] [rbp-B8h] BYREF
  PVOID v35; // [rsp+88h] [rbp-B0h] BYREF
  PVOID v36; // [rsp+90h] [rbp-A8h] BYREF
  PVOID v37; // [rsp+98h] [rbp-A0h] BYREF
  PVOID v38; // [rsp+A0h] [rbp-98h] BYREF
  PVOID Object; // [rsp+A8h] [rbp-90h] BYREF
  _QWORD v40[7]; // [rsp+B0h] [rbp-88h] BYREF
  int v41; // [rsp+E8h] [rbp-50h] BYREF
  __int64 v42; // [rsp+ECh] [rbp-4Ch]
  int v43; // [rsp+F4h] [rbp-44h]

  v30 = KeySetInformationLength;
  Handle = KeyHandle;
  v26 = 0;
  v25 = 0;
  v28 = 0;
  memset(v40, 0, sizeof(v40));
  v41 = 0;
  v42 = 0LL;
  v43 = 0;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v41, (char *)0x20000);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v20) = 20;
      CmpTraceRoutine(v20, &v41, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v9 = 1;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  switch ( KeySetInformationClass )
  {
    case KeySetHandleTagsInformation:
LABEL_6:
      if ( KeySetInformationLength == 4 )
      {
        if ( PreviousMode == 1 )
        {
          v11 = (unsigned int *)KeySetInformation;
          if ( (unsigned __int64)KeySetInformation >= MmUserProbeAddress )
            v11 = (unsigned int *)MmUserProbeAddress;
          v12 = *v11;
        }
        else
        {
          v12 = *(_DWORD *)KeySetInformation;
        }
        v26 = v12;
LABEL_13:
        if ( KeySetInformationClass == KeySetHandleTagsInformation )
        {
          v13 = ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
          v14 = Object;
        }
        else
        {
          v13 = ObReferenceObjectByHandle(Handle, 2u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v34, 0LL);
          v14 = v34;
        }
        v27 = v14;
        v15 = v13;
        if ( v13 == -1073741790
          && CmpVEEnabled
          && !CmpIsSystemEntity(&v28)
          && (((KeySetInformationClass - 2) & 0xFFFFFFFA) != 0 || KeySetInformationClass == KeySetLayerInformation) )
        {
          v15 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v35, 0LL);
          v14 = v35;
          v27 = v35;
          if ( v15 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v35) )
          {
            ObfDereferenceObject(v14);
            v15 = -1073741790;
          }
          v25 = 1;
        }
        if ( v15 < 0 )
        {
          v16 = 0LL;
        }
        else
        {
          if ( CmpTraceRoutine && v14 )
            v16 = v14[1];
          else
            v16 = 0LL;
          if ( (*(_DWORD *)(v14[1] + 4LL) & 0x80u) == 0 || KeySetInformationClass == KeySetHandleTagsInformation )
          {
            v32[1] = v32;
            v32[0] = v32;
            v17 = KeGetCurrentThread();
            --v17->KernelApcDisable;
            if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
            {
              v18 = v27;
            }
            else
            {
              v18 = v27;
              v40[0] = v27;
              LODWORD(v40[1]) = KeySetInformationClass;
              v40[2] = KeySetInformation;
              LODWORD(v40[3]) = v30;
              v15 = CmpCallCallBacks(3u, (__int64)v40, 1, 0x12u, (__int64)v27, (__int64)v32);
            }
            if ( v15 < 0 )
            {
              if ( v15 == -1073740541 )
                v15 = 0;
            }
            else
            {
              if ( KeySetInformationClass == KeySetHandleTagsInformation )
              {
                v18[25] = v26;
              }
              else if ( KeySetInformationClass )
              {
                if ( (unsigned int)(KeySetInformationClass - 1) <= 3 )
                {
                  if ( v25 )
                  {
                    v15 = CmKeyBodyReplicateToVirtual(&v27, 2LL, &v28);
                    LODWORD(v18) = (_DWORD)v27;
                  }
                  if ( v15 >= 0 )
                  {
                    ExReleaseRundownProtection_0(&CmpShutdownRundown);
                    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                    v9 = 0;
                    LODWORD(v18) = (_DWORD)v27;
                    v15 = CmSetKeyFlags(v27, (unsigned int)KeySetInformationClass, v26);
                  }
                }
              }
              else
              {
                if ( v25 )
                {
                  v15 = CmKeyBodyReplicateToVirtual(&v27, 2LL, &v28);
                  LODWORD(v18) = (_DWORD)v27;
                }
                if ( v15 >= 0 )
                {
                  ExReleaseRundownProtection_0(&CmpShutdownRundown);
                  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
                  v9 = 0;
                  LODWORD(v18) = (_DWORD)v27;
                  v15 = CmSetLastWriteTimeKey(v27, &v31);
                }
              }
              v15 = CmPostCallbackNotification(18, (_DWORD)v18, v15, (unsigned int)v40, (__int64)v32);
            }
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v14 = v27;
          }
          else
          {
            v15 = -1073741790;
          }
          ObfDereferenceObject(v14);
        }
        goto LABEL_29;
      }
      if ( CmpTraceRoutine )
      {
        v8 = Handle;
        if ( Handle )
        {
          if ( ObReferenceObjectByHandle(
                 Handle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 &v36,
                 0LL) >= 0 )
          {
            v16 = *((_QWORD *)v36 + 1);
            ObfDereferenceObject(v36);
            goto LABEL_64;
          }
        }
      }
      goto LABEL_63;
    case KeyWriteTimeInformation:
      if ( KeySetInformationLength == 8 )
      {
        if ( PreviousMode == 1 )
        {
          v23 = (__int64 *)KeySetInformation;
          if ( (unsigned __int64)KeySetInformation >= MmUserProbeAddress )
            v23 = (__int64 *)MmUserProbeAddress;
          v24 = *v23;
        }
        else
        {
          v24 = *(_QWORD *)KeySetInformation;
        }
        v31 = v24;
        goto LABEL_13;
      }
      if ( CmpTraceRoutine )
      {
        v8 = Handle;
        if ( Handle )
        {
          if ( ObReferenceObjectByHandle(
                 Handle,
                 0,
                 (POBJECT_TYPE)CmKeyObjectType,
                 KeGetCurrentThread()->PreviousMode,
                 &v38,
                 0LL) >= 0 )
          {
            v16 = *((_QWORD *)v38 + 1);
            ObfDereferenceObject(v38);
            goto LABEL_64;
          }
        }
      }
LABEL_63:
      v16 = 0LL;
      goto LABEL_64;
    case KeyWow64FlagsInformation:
      goto LABEL_6;
  }
  if ( (unsigned int)(KeySetInformationClass - 2) > 2 )
  {
    if ( CmpTraceRoutine
      && (v8 = Handle) != 0LL
      && ObReferenceObjectByHandle(
           Handle,
           0,
           (POBJECT_TYPE)CmKeyObjectType,
           KeGetCurrentThread()->PreviousMode,
           &v37,
           0LL) >= 0 )
    {
      v16 = *((_QWORD *)v37 + 1);
      ObfDereferenceObject(v37);
    }
    else
    {
      v16 = 0LL;
    }
    v15 = -1073741821;
    goto LABEL_29;
  }
  if ( KeySetInformationLength == 4 )
  {
    if ( PreviousMode == 1 )
    {
      v21 = (unsigned int *)KeySetInformation;
      if ( (unsigned __int64)KeySetInformation >= MmUserProbeAddress )
        v21 = (unsigned int *)MmUserProbeAddress;
      v22 = *v21;
    }
    else
    {
      v22 = *(_DWORD *)KeySetInformation;
    }
    v26 = v22;
    goto LABEL_13;
  }
  if ( !CmpTraceRoutine )
    goto LABEL_63;
  v8 = Handle;
  if ( !Handle
    || ObReferenceObjectByHandle(
         Handle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &v33,
         0LL) < 0 )
  {
    goto LABEL_63;
  }
  v16 = *((_QWORD *)v33 + 1);
  ObfDereferenceObject(v33);
LABEL_64:
  v15 = -1073741820;
LABEL_29:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v8) = 20;
    CmpTraceRoutine(v8, &v41, (unsigned int)v15, 0LL, v16, 0LL);
  }
  if ( v9 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return v15;
}
