/*
 * XREFs of NtSetInformationKey @ 0x1404F2CE0
 * Callers:
 *     <none>
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406000D4 (CmKeyBodyReplicateToVirtual.c)
 */

NTSTATUS __stdcall NtSetInformationKey(
        HANDLE KeyHandle,
        KEY_SET_INFORMATION_CLASS KeySetInformationClass,
        PVOID KeySetInformation,
        ULONG KeySetInformationLength)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  char v14; // r14
  unsigned __int8 v15; // r13
  char v16; // r14
  int v17; // ebx
  __int64 v18; // rdi
  char *v19; // rdx
  NTSTATUS v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  _QWORD *v24; // rdi
  char v25; // r14
  __int64 v26; // rcx
  struct _KTHREAD *v27; // rax
  _WORD *v28; // rdi
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  int v32; // eax
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // r9
  char v39; // [rsp+30h] [rbp-F8h]
  _WORD *v40; // [rsp+38h] [rbp-F0h] BYREF
  int v41; // [rsp+40h] [rbp-E8h] BYREF
  ULONG v42; // [rsp+44h] [rbp-E4h]
  __int64 v43; // [rsp+48h] [rbp-E0h] BYREF
  __int64 v44; // [rsp+50h] [rbp-D8h]
  _SLIST_ENTRY v45; // [rsp+58h] [rbp-D0h] BYREF
  PVOID Object; // [rsp+68h] [rbp-C0h] BYREF
  PVOID v47; // [rsp+70h] [rbp-B8h] BYREF
  PVOID v48; // [rsp+78h] [rbp-B0h] BYREF
  PVOID v49; // [rsp+80h] [rbp-A8h] BYREF
  PVOID v50; // [rsp+90h] [rbp-98h] BYREF
  PVOID v51; // [rsp+98h] [rbp-90h] BYREF
  __int64 v52; // [rsp+A0h] [rbp-88h]
  __int64 *v53; // [rsp+A8h] [rbp-80h]
  __int64 v54; // [rsp+B0h] [rbp-78h]
  __int64 v55; // [rsp+B8h] [rbp-70h]
  __int64 v56; // [rsp+C0h] [rbp-68h]
  __int64 v57; // [rsp+C8h] [rbp-60h]
  int v58; // [rsp+D0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+D4h] [rbp-54h]
  int v60; // [rsp+DCh] [rbp-4Ch]

  v42 = KeySetInformationLength;
  v41 = 0;
  v51 = 0LL;
  v52 = 0LL;
  v53 = 0LL;
  v54 = 0LL;
  v55 = 0LL;
  v56 = 0LL;
  v57 = 0LL;
  v58 = 0;
  v59 = 0LL;
  v60 = 0;
  v44 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v58, 0x20000uLL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v8, v10, v11);
    if ( CmpTraceRoutine )
    {
      LOBYTE(v12) = 20;
      CmpTraceRoutine(v12, &v58, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v14 = 1;
  v39 = 1;
  v15 = KeGetCurrentThread()->gap0[10];
  switch ( KeySetInformationClass )
  {
    case KeyWriteTimeInformation:
      v9 = 8LL;
      goto LABEL_11;
    case KeyWow64FlagsInformation:
    case KeySetDebugInformation:
      v9 = 4LL;
LABEL_11:
      v16 = 1;
      goto LABEL_12;
    case KeyControlFlagsInformation:
    case KeySetVirtualizationInformation:
    case KeySetHandleTagsInformation:
      v9 = 4LL;
      v16 = 0;
LABEL_12:
      if ( v42 != (_DWORD)v9 )
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
          v44 = *((_QWORD *)Object + 1);
          ObfDereferenceObject(Object);
        }
        v17 = -1073741820;
        v18 = v44;
        v14 = 1;
        goto LABEL_73;
      }
      v43 = 0LL;
      if ( v15 )
      {
        v19 = (char *)KeySetInformation + (unsigned int)v9;
        if ( (unsigned __int64)v19 > 0x7FFFFFFF0000LL || v19 < KeySetInformation )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      memmove(&v43, KeySetInformation, (unsigned int)v9);
      if ( KeySetInformationClass == KeySetHandleTagsInformation )
      {
        v20 = ObReferenceObjectByHandle(KeyHandle, 0, (POBJECT_TYPE)CmKeyObjectType, v15, &v47, 0LL);
        v24 = v47;
      }
      else
      {
        v20 = ObReferenceObjectByHandle(KeyHandle, 2u, (POBJECT_TYPE)CmKeyObjectType, v15, &v48, 0LL);
        v24 = v48;
      }
      v40 = v24;
      v17 = v20;
      if ( v20 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(&v41) && v16 )
      {
        v17 = ObReferenceObjectByHandle(KeyHandle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v15, &v49, 0LL);
        v24 = v49;
        v40 = v49;
        if ( v17 >= 0 && !(unsigned __int8)CmKeyBodyNeedsVirtualImage(v49) )
        {
          ObfDereferenceObject(v24);
          v17 = -1073741790;
        }
        v25 = 1;
      }
      else
      {
        v25 = 0;
      }
      if ( v17 >= 0 )
      {
        if ( CmpTraceRoutine && v24 )
          v44 = v24[1];
        v26 = v24[1];
        if ( ((*(_DWORD *)(v26 + 4) & 0x80u) != 0 || (*(_DWORD *)(*(_QWORD *)(v26 + 24) + 144LL) & 0x100000) != 0)
          && KeySetInformationClass != KeySetHandleTagsInformation )
        {
          v17 = -1073741790;
LABEL_65:
          ObfDereferenceObject(v24);
          v18 = v44;
          v14 = v39;
          goto LABEL_73;
        }
        *((_QWORD *)&v45.Next + 1) = &v45;
        v45.Next = &v45;
        v27 = KeGetCurrentThread();
        --v27->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v28 = v40;
        }
        else
        {
          v28 = v40;
          v51 = v40;
          LODWORD(v52) = KeySetInformationClass;
          v53 = &v43;
          LODWORD(v54) = v42;
          v17 = CmpCallCallBacks(3u, (__int64)&v51, 1, 0x12u, (__int64)v40, &v45);
        }
        if ( v17 < 0 )
        {
          if ( v17 == -1073740541 )
            v17 = 0;
          goto LABEL_64;
        }
        if ( KeySetInformationClass )
        {
          if ( KeySetInformationClass <= KeyWriteTimeInformation )
          {
LABEL_61:
            v17 = CmPostCallbackNotification(18, (__int64)v28, v17, (__int64)&v51, &v45);
LABEL_64:
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v21, v22, v23);
            v24 = v40;
            goto LABEL_65;
          }
          if ( KeySetInformationClass > KeySetDebugInformation )
          {
            if ( KeySetInformationClass == KeySetHandleTagsInformation )
              v28[25] = v43;
            goto LABEL_61;
          }
          if ( v25 )
          {
            v17 = CmKeyBodyReplicateToVirtual(&v40, v15, 2LL, &v41);
            v28 = v40;
          }
          if ( v17 < 0 )
            goto LABEL_61;
          ExReleaseRundownProtection(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v29, v30, v31);
          v39 = 0;
          v28 = v40;
          v32 = CmSetKeyFlags(v40, (unsigned int)KeySetInformationClass, (unsigned int)v43);
        }
        else
        {
          if ( v25 )
          {
            v17 = CmKeyBodyReplicateToVirtual(&v40, v15, 2LL, &v41);
            v28 = v40;
          }
          if ( v17 < 0 )
            goto LABEL_61;
          ExReleaseRundownProtection(&CmpShutdownRundown);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v33, v34, v35);
          v39 = 0;
          v28 = v40;
          v32 = CmSetLastWriteTimeKey(v40, &v43);
        }
        v17 = v32;
        goto LABEL_61;
      }
      v18 = 0LL;
      v14 = 1;
LABEL_73:
      if ( CmpTraceRoutine )
      {
        LOBYTE(v9) = 20;
        CmpTraceRoutine(v9, &v58, (unsigned int)v17, 0LL, v18, 0LL);
      }
      if ( v14 )
      {
        ExReleaseRundownProtection(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v36, v37, v38);
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
             &v50,
             0LL) >= 0 )
      {
        v18 = *((_QWORD *)v50 + 1);
        ObfDereferenceObject(v50);
      }
      else
      {
        v18 = 0LL;
      }
      v17 = -1073741821;
      goto LABEL_73;
  }
}
