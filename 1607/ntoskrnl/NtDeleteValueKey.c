/*
 * XREFs of NtDeleteValueKey @ 0x1403F9878
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     ExIsResourceAcquiredSharedLite @ 0x14002CDD0 (ExIsResourceAcquiredSharedLite.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmObReferenceObjectByHandle @ 0x1404025CC (CmObReferenceObjectByHandle.c)
 *     CmpIsSystemEntity @ 0x14040E004 (CmpIsSystemEntity.c)
 *     CmPostCallbackNotification @ 0x140438360 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1405FFE80 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1405FFEFC (CmKeyBodyRemapToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtDeleteValueKey(HANDLE KeyHandle, PUNICODE_STRING ValueName)
{
  int v3; // esi
  char v4; // r12
  char PreviousMode; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  NTSTATUS v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  wchar_t *Buffer; // rcx
  unsigned __int64 v15; // rdx
  unsigned __int16 v16; // dx
  char *PoolWithQuotaTag; // rax
  char *v18; // rsi
  HANDLE v19; // r14
  char *i; // rcx
  struct _KTHREAD *v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  int v31; // eax
  PVOID v32; // rsi
  __int64 v33; // rcx
  char v34; // [rsp+30h] [rbp-F8h]
  NTSTATUS v35; // [rsp+34h] [rbp-F4h]
  void *Src[2]; // [rsp+40h] [rbp-E8h] BYREF
  PVOID Object; // [rsp+50h] [rbp-D8h] BYREF
  int v38; // [rsp+58h] [rbp-D0h] BYREF
  PVOID P; // [rsp+60h] [rbp-C8h]
  char v40[8]; // [rsp+68h] [rbp-C0h] BYREF
  __int64 v41; // [rsp+70h] [rbp-B8h]
  _QWORD v42[2]; // [rsp+78h] [rbp-B0h] BYREF
  HANDLE v43; // [rsp+88h] [rbp-A0h]
  HANDLE v44; // [rsp+90h] [rbp-98h]
  __int128 v45; // [rsp+A0h] [rbp-88h]
  __int128 v46; // [rsp+B0h] [rbp-78h] BYREF
  _QWORD v47[5]; // [rsp+C0h] [rbp-68h] BYREF
  int v48; // [rsp+E8h] [rbp-40h] BYREF
  __int64 v49; // [rsp+ECh] [rbp-3Ch]
  int v50; // [rsp+F4h] [rbp-34h]

  v3 = (int)KeyHandle;
  v43 = KeyHandle;
  v44 = KeyHandle;
  memset(v47, 0, sizeof(v47));
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  P = 0LL;
  v4 = 0;
  v38 = 0;
  v48 = 0;
  v49 = 0LL;
  v50 = 0;
  v41 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v48, 0x20000uLL);
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v7, v8, v9);
    if ( CmpTraceRoutine )
    {
      LOBYTE(v30) = 15;
      CmpTraceRoutine(v30, &v48, 3221225865LL, 0LL, 0LL, 0LL);
    }
    return -1073741431;
  }
  v34 = 1;
  LOBYTE(v9) = PreviousMode;
  v10 = CmObReferenceObjectByHandle(v3, 2, v8, v9, (__int64)&Object, (__int64)v40);
  v35 = v10;
  if ( v10 == -1073741790 && CmpVEEnabled && !(unsigned __int8)CmpIsSystemEntity(&v38) )
  {
    LOBYTE(v12) = PreviousMode;
    v31 = CmObReferenceObjectByHandle(v3, 131097, v11, v12, (__int64)&Object, (__int64)v40);
    v10 = v31;
    v35 = v31;
    if ( v31 >= 0 )
    {
      v32 = Object;
      if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
      {
        ObfDereferenceObject(v32);
        v10 = -1073741790;
        v35 = -1073741790;
      }
    }
    v4 = 1;
  }
  if ( v10 >= 0 )
  {
    if ( CmpTraceRoutine && Object )
      v41 = *((_QWORD *)Object + 1);
    if ( PreviousMode == 1 )
    {
      v11 = 0x7FFFFFFF0000LL;
      if ( (unsigned __int64)ValueName >= 0x7FFFFFFF0000LL )
        ValueName = (PUNICODE_STRING)0x7FFFFFFF0000LL;
      v13 = *(_DWORD *)&ValueName->Length;
      LODWORD(v45) = v13;
      Buffer = ValueName->Buffer;
      *((_QWORD *)&v45 + 1) = Buffer;
      *(_OWORD *)Src = v45;
      if ( (_WORD)v13 )
      {
        if ( ((unsigned __int8)Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v15 = (unsigned __int64)Buffer + (unsigned __int16)v13;
        if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)Buffer )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      v16 = (unsigned __int16)Src[0];
      if ( LOWORD(Src[0]) )
      {
        PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)520, LOWORD(Src[0]), 0x62764D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v10 = -1073741670;
          v35 = -1073741670;
          goto LABEL_39;
        }
        v18 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
        Src[1] = v18;
        v16 = (unsigned __int16)Src[0];
      }
      else
      {
        v18 = 0LL;
        Src[1] = 0LL;
      }
      WORD1(Src[0]) = v16;
    }
    else
    {
      *(UNICODE_STRING *)Src = *ValueName;
      v18 = (char *)Src[1];
      v16 = (unsigned __int16)Src[0];
    }
    v10 = v35;
    v19 = v43;
    if ( v35 >= 0 )
    {
      if ( ((__int64)Src[0] & 1) != 0 )
      {
        LOWORD(Src[0]) = 0;
        v10 = -1073741811;
      }
      else
      {
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 4LL) & 0x80u) == 0 )
        {
          for ( i = &v18[2 * ((unsigned __int64)v16 >> 1) - 2]; v16 && !*(_WORD *)i; i -= 2 )
          {
            v16 -= 2;
            LOWORD(Src[0]) = v16;
          }
          v42[1] = v42;
          v42[0] = v42;
          v21 = KeGetCurrentThread();
          --v21->KernelApcDisable;
          if ( !CmpCallBackCount || ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
          {
            v22 = (unsigned int)v35;
          }
          else
          {
            v47[0] = Object;
            v47[1] = Src;
            LOBYTE(v11) = 1;
            v22 = (unsigned int)CmpCallCallBacks(2, (unsigned int)v47, v11, 17, (__int64)Object, (__int64)v42);
          }
          if ( (int)v22 < 0 )
          {
            if ( (_DWORD)v22 == -1073740541 )
              v22 = 0LL;
            v35 = v22;
          }
          else
          {
            if ( v4 )
            {
              LOBYTE(v22) = PreviousMode;
              LODWORD(v22) = CmKeyBodyRemapToVirtual(&Object, v22, 2LL);
              if ( (int)v22 >= 0 && (!CmpVEEnabled || (*(_WORD *)(*((_QWORD *)Object + 1) + 178LL) & 0x100) == 0) )
                LODWORD(v22) = -1073741790;
            }
            if ( (int)v22 >= 0 )
            {
              ExReleaseRundownProtection(&CmpShutdownRundown);
              KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v23, v24, v25);
              v34 = 0;
              v46 = *(_OWORD *)Src;
              LODWORD(v22) = CmDeleteValueKey(Object, &v46, v19, ((unsigned __int8)v40[0] >> 2) & 1);
            }
            v35 = CmPostCallbackNotification(17, (_DWORD)Object, v22, (unsigned int)v47, (__int64)v42);
          }
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v22, v11, v12);
          v10 = v35;
          goto LABEL_39;
        }
        v10 = -1073741790;
      }
      v35 = v10;
    }
LABEL_39:
    ObfDereferenceObject(Object);
  }
  if ( CmpTraceRoutine )
  {
    v33 = v41;
    LOBYTE(v33) = 15;
    CmpTraceRoutine(v33, &v48, (unsigned int)v10, 0LL, v41, Src);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v34 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v27, v28, v29);
    return v35;
  }
  return v10;
}
