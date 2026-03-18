/*
 * XREFs of NtDeleteValueKey @ 0x1403D4700
 * Callers:
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpIsSystemEntity @ 0x1403FBD30 (CmpIsSystemEntity.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405E17EC (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405E1850 (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  int v3; // esi
  char v4; // r12
  char PreviousMode; // r14
  struct _KTHREAD *CurrentThread; // rax
  int v7; // r8d
  int v8; // r9d
  NTSTATUS v9; // edi
  int v10; // eax
  wchar_t *Buffer; // rcx
  ULONG64 v12; // rdx
  unsigned __int16 v13; // dx
  char *PoolWithQuotaTag; // rax
  char *v15; // rsi
  char v16; // r15
  HANDLE v17; // r14
  char *i; // rcx
  struct _KTHREAD *v19; // rax
  int v20; // r8d
  int v21; // edx
  int v23; // r8d
  int v24; // r9d
  __int64 v25; // rcx
  int v26; // eax
  PVOID v27; // rsi
  __int64 v28; // rcx
  NTSTATUS v29; // [rsp+30h] [rbp-108h]
  void *Src[2]; // [rsp+40h] [rbp-F8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-E8h] BYREF
  int v32; // [rsp+58h] [rbp-E0h] BYREF
  PVOID P; // [rsp+60h] [rbp-D8h]
  __int64 v34; // [rsp+68h] [rbp-D0h]
  _QWORD v35[2]; // [rsp+70h] [rbp-C8h] BYREF
  char v36[8]; // [rsp+80h] [rbp-B8h] BYREF
  HANDLE v37; // [rsp+88h] [rbp-B0h]
  HANDLE v38; // [rsp+90h] [rbp-A8h]
  __int128 v39; // [rsp+A0h] [rbp-98h]
  _QWORD v40[5]; // [rsp+B0h] [rbp-88h] BYREF
  __int128 v41; // [rsp+E0h] [rbp-58h] BYREF
  int v42; // [rsp+F0h] [rbp-48h] BYREF
  __int64 v43; // [rsp+F4h] [rbp-44h]
  int v44; // [rsp+FCh] [rbp-3Ch]

  v3 = (int)KeyHandle;
  v37 = KeyHandle;
  v38 = KeyHandle;
  memset(v40, 0, sizeof(v40));
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  P = 0LL;
  v4 = 0;
  v32 = 0;
  v42 = 0;
  v43 = 0LL;
  v44 = 0;
  v34 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v42, (char *)0x20000);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( CmpTraceRoutine )
    {
      LOBYTE(v25) = 15;
      CmpTraceRoutine(v25, &v42, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  LOBYTE(v8) = PreviousMode;
  v9 = CmObReferenceObjectByHandle(v3, 2, v7, v8, (__int64)&Object, (__int64)v36);
  v29 = v9;
  if ( v9 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v32) )
  {
    LOBYTE(v24) = PreviousMode;
    v26 = CmObReferenceObjectByHandle(v3, 131097, v23, v24, (__int64)&Object, (__int64)v36);
    v9 = v26;
    v29 = v26;
    if ( v26 >= 0 )
    {
      v27 = Object;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(v27);
        v9 = -1073741790;
        v29 = -1073741790;
      }
    }
    v4 = 1;
  }
  if ( v9 < 0 )
  {
    v16 = 1;
    goto LABEL_40;
  }
  if ( CmpTraceRoutine && Object )
    v34 = *((_QWORD *)Object + 1);
  if ( PreviousMode == 1 )
  {
    if ( (unsigned __int64)ValueName >= MmUserProbeAddress )
      ValueName = (PUNICODE_STRING)MmUserProbeAddress;
    v10 = *(_DWORD *)&ValueName->Length;
    LODWORD(v39) = v10;
    Buffer = ValueName->Buffer;
    *((_QWORD *)&v39 + 1) = Buffer;
    *(_OWORD *)Src = v39;
    if ( (_WORD)v10 )
    {
      if ( ((unsigned __int8)Buffer & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v12 = (ULONG64)Buffer + (unsigned __int16)v10;
      if ( v12 > MmUserProbeAddress || v12 < (unsigned __int64)Buffer )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    v13 = (unsigned __int16)Src[0];
    if ( LOWORD(Src[0]) )
    {
      PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x62764D43u);
      P = PoolWithQuotaTag;
      if ( !PoolWithQuotaTag )
      {
        v9 = -1073741670;
        v29 = -1073741670;
        v16 = 1;
        goto LABEL_39;
      }
      v15 = PoolWithQuotaTag;
      memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
      Src[1] = v15;
      v13 = (unsigned __int16)Src[0];
    }
    else
    {
      v15 = 0LL;
      Src[1] = 0LL;
    }
    WORD1(Src[0]) = v13;
  }
  else
  {
    *(UNICODE_STRING *)Src = *ValueName;
    v15 = (char *)Src[1];
    v13 = (unsigned __int16)Src[0];
  }
  v9 = v29;
  v17 = v37;
  v16 = 1;
  if ( v29 >= 0 )
  {
    if ( ((__int64)Src[0] & 1) != 0 )
    {
      LOWORD(Src[0]) = 0;
      v9 = -1073741811;
    }
    else
    {
      if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
      {
        for ( i = &v15[2 * ((unsigned __int64)v13 >> 1) - 2]; v13 && !*(_WORD *)i; i -= 2 )
        {
          v13 -= 2;
          LOWORD(Src[0]) = v13;
        }
        v35[1] = v35;
        v35[0] = v35;
        v19 = KeGetCurrentThread();
        --v19->KernelApcDisable;
        if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
        {
          v21 = v29;
        }
        else
        {
          v40[0] = Object;
          v40[1] = Src;
          LOBYTE(v20) = 1;
          v21 = CmpCallCallBacks(2, (unsigned int)v40, v20, 17, (__int64)Object, (__int64)v35);
        }
        if ( v21 < 0 )
        {
          if ( v21 == -1073740541 )
            v21 = 0;
          v29 = v21;
        }
        else
        {
          if ( v4 )
          {
            v21 = CmKeyBodyRemapToVirtual(&Object);
            if ( v21 >= 0 && (!CmpVEEnabled || (*(_WORD *)(*((_QWORD *)Object + 1) + 186LL) & 0x100) == 0) )
              v21 = -1073741790;
          }
          if ( v21 >= 0 )
          {
            ExReleaseRundownProtection_0(&CmpShutdownRundown);
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
            v16 = 0;
            v41 = *(_OWORD *)Src;
            v21 = CmDeleteValueKey(Object, &v41, v17, ((unsigned __int8)v36[0] >> 2) & 1);
          }
          v29 = CmPostCallbackNotification(17, (_DWORD)Object, v21, (unsigned int)v40, (__int64)v35);
        }
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v9 = v29;
        goto LABEL_39;
      }
      v9 = -1073741790;
    }
    v29 = v9;
  }
LABEL_39:
  ObfDereferenceObject(Object);
LABEL_40:
  if ( CmpTraceRoutine )
  {
    v28 = v34;
    LOBYTE(v28) = 15;
    CmpTraceRoutine(v28, &v42, (unsigned int)v9, 0LL, v34, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v16 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v29;
  }
  return v9;
}
