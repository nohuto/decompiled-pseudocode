/*
 * XREFs of NtDeleteValueKey @ 0x1404EF910
 * Callers:
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExIsResourceAcquiredSharedLite @ 0x1400CA650 (ExIsResourceAcquiredSharedLite.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmObReferenceObjectByHandle @ 0x140428ADC (CmObReferenceObjectByHandle.c)
 *     CmPostCallbackNotification @ 0x140478170 (CmPostCallbackNotification.c)
 *     CmpIsSystemEntity @ 0x140481E04 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140657510 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x140657574 (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  void *v2; // r8
  HANDLE v4; // rdi
  char v5; // r15
  KPROCESSOR_MODE PreviousMode; // r12
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v8; // rtt
  char v9; // r13
  int v10; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v12; // rdx
  unsigned __int16 v13; // dx
  char *PoolWithQuotaTag; // rax
  char *v15; // rdi
  HANDLE v16; // rsi
  char *i; // rcx
  struct _KTHREAD *v18; // rax
  __int64 v19; // rdx
  unsigned __int64 v20; // rtt
  struct _KTHREAD *v21; // rcx
  __int16 v22; // ax
  struct _KTHREAD *v23; // rcx
  __int16 v24; // ax
  void *v26; // r8
  unsigned __int64 v27; // rtt
  struct _KTHREAD *v28; // rcx
  __int16 v29; // ax
  $CD287064E7C9F7953DE243E927CFCB99 *v30; // rcx
  BOOLEAN v31; // di
  struct _KTHREAD *v32; // rdx
  int v33; // eax
  PVOID v34; // rdi
  __int64 v35; // rcx
  NTSTATUS v36; // [rsp+30h] [rbp-108h]
  void *Src[2]; // [rsp+40h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-E8h] BYREF
  int v39; // [rsp+58h] [rbp-E0h] BYREF
  PVOID P; // [rsp+60h] [rbp-D8h]
  struct _OBJECT_HANDLE_INFORMATION v41; // [rsp+68h] [rbp-D0h] BYREF
  _QWORD v42[2]; // [rsp+70h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+80h] [rbp-B8h]
  HANDLE v44; // [rsp+90h] [rbp-A8h]
  HANDLE v45; // [rsp+98h] [rbp-A0h]
  __int128 v46; // [rsp+A0h] [rbp-98h]
  _QWORD v47[6]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-58h] BYREF
  int v49; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v50; // [rsp+F4h] [rbp-44h]
  int v51; // [rsp+FCh] [rbp-3Ch]

  v4 = KeyHandle;
  v44 = KeyHandle;
  v45 = KeyHandle;
  memset(v47, 0, 40);
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  P = 0LL;
  v5 = 0;
  v39 = 0;
  v49 = 0;
  v50 = 0LL;
  v51 = 0;
  v43 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v49, (char *)0x20000);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v8 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v8 == _InterlockedCompareExchange64(
               (volatile signed __int64 *)&CmpShutdownRundown,
               (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
LABEL_4:
    v9 = 1;
    v36 = CmObReferenceObjectByHandle(v4, 2u, v2, PreviousMode, &Object, &v41);
    if ( v36 == -1073741790 && CmpVEEnabled && !CmpIsSystemEntity(&v39) )
    {
      v33 = CmObReferenceObjectByHandle(v4, 0x20019u, v26, PreviousMode, &Object, &v41);
      v36 = v33;
      if ( v33 >= 0 )
      {
        v34 = Object;
        if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
        {
          ObfDereferenceObject(v34);
          v36 = -1073741790;
        }
      }
      v5 = 1;
    }
    if ( v36 < 0 )
      goto LABEL_42;
    if ( CmpTraceRoutine && Object )
      v43 = *((_QWORD *)Object + 1);
    if ( PreviousMode == 1 )
    {
      if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
        ValueName = (PUNICODE_STRING)MmUserProbeAddress;
      v10 = *(_DWORD *)&ValueName->Length;
      LODWORD(v46) = v10;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v46 + 1) = Buffer;
      *(_OWORD *)Src = v46;
      if ( (_WORD)v10 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v12 = (ULONG64)Buffer + (unsigned __int16)v10;
        if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)Buffer )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      v13 = (unsigned __int16)Src[0];
      if ( !LOWORD(Src[0]) )
      {
        v15 = 0LL;
        Src[1] = 0LL;
LABEL_23:
        v16 = v44;
        if ( ((__int64)Src[0] & 1) != 0 )
        {
          LOWORD(Src[0]) = 0;
          v36 = -1073741811;
        }
        else if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) != 0 )
        {
          v36 = -1073741790;
        }
        else
        {
          for ( i = &v15[2 * ((unsigned __int64)v13 >> 1) - 2]; v13 && !*(_WORD *)i; i -= 2 )
          {
            v13 -= 2;
            LOWORD(Src[0]) = v13;
          }
          v42[1] = v42;
          v42[0] = v42;
          v18 = KeGetCurrentThread();
          --v18->KernelApcDisable;
          if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v19 = (unsigned int)v36;
          }
          else
          {
            v47[0] = Object;
            v47[1] = Src;
            v19 = (unsigned int)CmpCallCallBacks(2u, (__int64)v47, 1, 17LL, (__int64)Object, (__int64)v42);
          }
          if ( (int)v19 < 0 )
          {
            if ( (_DWORD)v19 == -1073740541 )
              LODWORD(v19) = 0;
            v36 = v19;
          }
          else
          {
            if ( v5 )
            {
              LOBYTE(v19) = PreviousMode;
              LODWORD(v19) = CmKeyBodyRemapToVirtual(&Object, v19, 2LL);
              if ( (int)v19 >= 0 && (!CmpVEEnabled || (*(_WORD *)(*((_QWORD *)Object + 1) + 186LL) & 0x100) == 0) )
                LODWORD(v19) = -1073741790;
            }
            if ( (int)v19 >= 0 )
            {
              _m_prefetchw(&CmpShutdownRundown);
              v20 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
              if ( v20 != _InterlockedCompareExchange64(
                            (volatile signed __int64 *)&CmpShutdownRundown,
                            (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                            CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
                ExfReleaseRundownProtection(&CmpShutdownRundown);
              v21 = KeGetCurrentThread();
              v22 = v21->KernelApcDisable + 1;
              v21->KernelApcDisable = v22;
              if ( !v22
                && ($CD287064E7C9F7953DE243E927CFCB99 *)v21->ApcState.ApcListHead[0].Flink != &v21->152
                && !v21->SpecialApcDisable )
              {
                KiCheckForKernelApcDelivery();
              }
              v9 = 0;
              v48 = *(_OWORD *)Src;
              LODWORD(v19) = CmDeleteValueKey(Object, &v48, v16, (LOBYTE(v41.HandleAttributes) >> 2) & 1);
            }
            v36 = CmPostCallbackNotification(17, (__int64)Object, v19, (__int64)v47, v42);
          }
          v23 = KeGetCurrentThread();
          v24 = v23->KernelApcDisable + 1;
          v23->KernelApcDisable = v24;
          if ( !v24
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v23->ApcState.ApcListHead[0].Flink != &v23->152
            && !v23->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        goto LABEL_41;
      }
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x62764D43u);
      P = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        v36 = -1073741670;
LABEL_41:
        ObfDereferenceObject(Object);
LABEL_42:
        if ( CmpTraceRoutine )
        {
          v35 = v43;
          LOBYTE(v35) = 15;
          CmpTraceRoutine(v35, &v49, (unsigned int)v36, 0LL, v43, Src);
        }
        if ( P )
          ExFreePoolWithTag(P, 0);
        if ( v9 )
        {
          _m_prefetchw(&CmpShutdownRundown);
          v27 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
          if ( v27 != _InterlockedCompareExchange64(
                        (volatile signed __int64 *)&CmpShutdownRundown,
                        (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                        CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
            ExfReleaseRundownProtection(&CmpShutdownRundown);
          v28 = KeGetCurrentThread();
          v29 = v28->KernelApcDisable + 1;
          v28->KernelApcDisable = v29;
          if ( !v29
            && ($CD287064E7C9F7953DE243E927CFCB99 *)v28->ApcState.ApcListHead[0].Flink != &v28->152
            && !v28->SpecialApcDisable )
          {
            KiCheckForKernelApcDelivery();
          }
        }
        return v36;
      }
      v15 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
      Src[1] = v15;
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v15 = (char *)Src[1];
    }
    v13 = (unsigned __int16)Src[0];
    goto LABEL_23;
  }
  v31 = ExfAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v31 )
  {
    v32 = KeGetCurrentThread();
    v30 = ($CD287064E7C9F7953DE243E927CFCB99 *)(unsigned int)++v32->KernelApcDisable;
    if ( !(_WORD)v30 )
    {
      v30 = &v32->152;
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v30->ApcState.ApcListHead[0].Flink != v30 && !v32->SpecialApcDisable )
        KiCheckForKernelApcDelivery();
    }
  }
  if ( v31 )
  {
    v4 = v44;
    goto LABEL_4;
  }
  if ( CmpTraceRoutine )
  {
    LOBYTE(v30) = 15;
    CmpTraceRoutine(v30, &v49, 3221225865LL, 0LL, 0LL, 0LL);
  }
  return -1073741431;
}
