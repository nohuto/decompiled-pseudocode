/*
 * XREFs of NtLoadKeyEx @ 0x1403DB3CC
 * Callers:
 *     NtLoadKey @ 0x1404C6890 (NtLoadKey.c)
 *     NtLoadKey2 @ 0x14050D138 (NtLoadKey2.c)
 * Callees:
 *     ExIsResourceAcquiredSharedLite @ 0x14003DAD0 (ExIsResourceAcquiredSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpTraceHiveLoadStop @ 0x1403DBD24 (CmpTraceHiveLoadStop.c)
 *     CmpTraceHiveLoadStart @ 0x1403DBD78 (CmpTraceHiveLoadStart.c)
 *     CmConvertHandleToKernelHandle @ 0x1403DBDEC (CmConvertHandleToKernelHandle.c)
 *     CmpNameFromAttributes @ 0x1403DBE88 (CmpNameFromAttributes.c)
 *     CmCheckNoTxContext @ 0x1403DC18C (CmCheckNoTxContext.c)
 *     ObDeleteCapturedInsertInfo @ 0x1403DC1C0 (ObDeleteCapturedInsertInfo.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmReleaseLoadKeyContext @ 0x1403DDA68 (CmReleaseLoadKeyContext.c)
 *     CmObReferenceObjectByHandle @ 0x1403F3664 (CmObReferenceObjectByHandle.c)
 *     CmpDereferenceKeyControlBlock @ 0x1403FB8A0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     CmPostCallbackNotification @ 0x140424CB0 (CmPostCallbackNotification.c)
 *     ObReferenceObjectByName @ 0x14046F95C (ObReferenceObjectByName.c)
 *     SeSinglePrivilegeCheck @ 0x140471360 (SeSinglePrivilegeCheck.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __stdcall NtLoadKeyEx(
        POBJECT_ATTRIBUTES TargetKey,
        POBJECT_ATTRIBUTES SourceFile,
        ULONG Flags,
        HANDLE TrustClassKey)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rdx
  int v8; // ebx
  KPROCESSOR_MODE AccessMode; // r13
  ULONG64 v10; // rdx
  __int64 v11; // r8
  int v12; // r9d
  _QWORD *v13; // rcx
  ULONG64 v14; // rcx
  int v15; // eax
  ULONG64 v16; // rcx
  PVOID PoolWithQuotaTag; // rax
  void *v18; // rsi
  struct _KTHREAD *v19; // rax
  int v20; // esi
  struct _KTHREAD *v21; // rcx
  int v22; // r8d
  int AppKey; // eax
  int v24; // ecx
  void *v25; // rcx
  PVOID v26; // rbx
  ULONG_PTR v27; // rcx
  char v29; // [rsp+40h] [rbp-1F8h]
  char v30; // [rsp+41h] [rbp-1F7h]
  char v31; // [rsp+42h] [rbp-1F6h]
  void *Src[2]; // [rsp+50h] [rbp-1E8h] BYREF
  PVOID v33; // [rsp+60h] [rbp-1D8h] BYREF
  PVOID v34; // [rsp+68h] [rbp-1D0h] BYREF
  PVOID v35; // [rsp+70h] [rbp-1C8h]
  PVOID v36; // [rsp+78h] [rbp-1C0h]
  PVOID v37; // [rsp+80h] [rbp-1B8h]
  _BYTE v38[8]; // [rsp+88h] [rbp-1B0h] BYREF
  PVOID P; // [rsp+90h] [rbp-1A8h]
  ULONG_PTR BugCheckParameter4; // [rsp+98h] [rbp-1A0h] BYREF
  ULONG v41; // [rsp+A0h] [rbp-198h]
  _QWORD v42[2]; // [rsp+A8h] [rbp-190h] BYREF
  PVOID Object; // [rsp+B8h] [rbp-180h]
  _BYTE v44[48]; // [rsp+C0h] [rbp-178h] BYREF
  PVOID v45; // [rsp+F0h] [rbp-148h] BYREF
  PVOID v46; // [rsp+F8h] [rbp-140h] BYREF
  HANDLE Handle; // [rsp+100h] [rbp-138h] BYREF
  __int128 v48; // [rsp+110h] [rbp-128h]
  _QWORD v49[11]; // [rsp+120h] [rbp-118h] BYREF
  int v50; // [rsp+180h] [rbp-B8h]
  _BYTE v51[132]; // [rsp+184h] [rbp-B4h] BYREF
  HANDLE v54; // [rsp+260h] [rbp+28h]
  ACCESS_MASK DesiredAccess; // [rsp+268h] [rbp+30h]
  HANDLE *v56; // [rsp+270h] [rbp+38h]

  *(_DWORD *)v44 = 0;
  memset(&v44[8], 0, 0x28uLL);
  LOWORD(Src[0]) = 0;
  *(void **)((char *)Src + 2) = 0LL;
  *(_DWORD *)((char *)&Src[1] + 2) = 0;
  HIWORD(Src[1]) = 0;
  v34 = 0LL;
  v33 = 0LL;
  v50 = 0;
  memset(v51, 0, sizeof(v51));
  v35 = 0LL;
  v29 = 0;
  BugCheckParameter4 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( !ExAcquireRundownProtection(&CmpShutdownRundown) )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741431;
  }
  v30 = 1;
  v31 = 0;
  if ( (Flags & 0xFFFFC00B) != 0 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741583;
  }
  if ( (Flags & 0x1000) != 0 && (Flags & 0x600) != 0x600 )
    goto LABEL_86;
  v8 = CmCheckNoTxContext();
  if ( v8 < 0 )
  {
LABEL_87:
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v8;
  }
  AccessMode = KeGetCurrentThread()->PreviousMode;
  v41 = Flags & 0x10;
  if ( (Flags & 0x10) == 0 && !SeSinglePrivilegeCheck(SeRestorePrivilege, AccessMode) )
  {
    v8 = -1073741727;
    goto LABEL_87;
  }
  if ( (Flags & 0x810) == 0 )
  {
    if ( v56 )
    {
      v8 = -1073741580;
      goto LABEL_87;
    }
    if ( !v54 )
      goto LABEL_10;
LABEL_97:
    v8 = -1073741581;
    goto LABEL_87;
  }
  if ( !v56 )
    goto LABEL_97;
  if ( (Flags & 0x444) != 0 && (Flags & 0x10) != 0 )
  {
LABEL_86:
    v8 = -1073741583;
    goto LABEL_87;
  }
LABEL_10:
  P = 0LL;
  v37 = 0LL;
  LOBYTE(v7) = AccessMode;
  v8 = CmpNameFromAttributes(SourceFile, v7, v38);
  if ( v8 < 0 )
    goto LABEL_87;
  if ( AccessMode == 1 )
  {
    if ( ((unsigned __int8)TargetKey & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( (Flags & 0x810) != 0 )
    {
      v10 = (ULONG64)v56;
      v13 = v56;
      if ( (unsigned __int64)v56 >= MmUserProbeAddress )
        v13 = (_QWORD *)MmUserProbeAddress;
      *v13 = 0LL;
    }
  }
  *(_OWORD *)v44 = *(_OWORD *)&TargetKey->Length;
  *(_OWORD *)&v44[16] = *(_OWORD *)&TargetKey->ObjectName;
  *(_OWORD *)&v44[32] = *(_OWORD *)&TargetKey->SecurityDescriptor;
  if ( *(_QWORD *)&v44[8] && v41 )
  {
    ExFreePoolWithTag(P, 0);
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return -1073741585;
  }
  if ( AccessMode == 1 )
  {
    v14 = *(_QWORD *)&v44[16];
    if ( *(_QWORD *)&v44[16] >= MmUserProbeAddress )
      v14 = MmUserProbeAddress;
    v15 = *(_DWORD *)v14;
    LODWORD(v48) = v15;
    v10 = *(_QWORD *)(v14 + 8);
    *((_QWORD *)&v48 + 1) = v10;
    *(_OWORD *)Src = v48;
    if ( (_WORD)v15 )
    {
      if ( (v10 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v16 = v10 + (unsigned __int16)v15;
      if ( v16 > MmUserProbeAddress || v16 < v10 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
  }
  else
  {
    *(UNICODE_STRING *)Src = *TargetKey->ObjectName;
  }
  if ( LOWORD(Src[0]) )
  {
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, LOWORD(Src[0]), 0x6B624D43u);
    v37 = PoolWithQuotaTag;
    if ( !PoolWithQuotaTag )
    {
      ExFreePoolWithTag(P, 0);
      ExReleaseRundownProtection_0(&CmpShutdownRundown);
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      return -1073741670;
    }
    v18 = PoolWithQuotaTag;
    memmove(PoolWithQuotaTag, Src[1], LOWORD(Src[0]));
    Src[1] = v18;
  }
  else
  {
    Src[1] = 0LL;
  }
  *(_QWORD *)&v44[16] = Src;
  *(_QWORD *)&v44[32] = 0LL;
  if ( TrustClassKey )
  {
    LOBYTE(v12) = AccessMode;
    v8 = CmObReferenceObjectByHandle((_DWORD)TrustClassKey, 0, v11, v12, (__int64)&v34, 0LL);
  }
  if ( v54 )
  {
    if ( v8 < 0 )
      goto LABEL_101;
    v8 = ObReferenceObjectByHandle(v54, 2u, (POBJECT_TYPE)ExEventObjectType, AccessMode, &v46, 0LL);
    v35 = v46;
  }
  if ( v8 < 0 )
  {
LABEL_101:
    if ( v34 )
      ObfDereferenceObject(v34);
    ExFreePoolWithTag(P, 0);
    if ( v37 )
      ExFreePoolWithTag(v37, 0);
    goto LABEL_87;
  }
  v19 = KeGetCurrentThread();
  --v19->KernelApcDisable;
  LOBYTE(v11) = AccessMode;
  v20 = CmConvertHandleToKernelHandle(*(_QWORD *)&v44[8], v10, v11, 131097LL, &v44[8]);
  if ( v20 >= 0 )
  {
    v36 = 0LL;
    memset(v49, 0, sizeof(v49));
    v42[1] = v42;
    v42[0] = v42;
    v21 = KeGetCurrentThread();
    --v21->KernelApcDisable;
    if ( CmpCallBackCount && !ExIsResourceAcquiredSharedLite(&CmpRegistryLock) )
    {
      if ( *(_QWORD *)&v44[8] )
      {
        ObReferenceObjectByHandle(*(HANDLE *)&v44[8], 0, (POBJECT_TYPE)CmKeyObjectType, 0, &v45, 0LL);
        v36 = v45;
      }
      v49[0] = v36;
      v49[1] = Src;
      v49[2] = v38;
      LODWORD(v49[3]) = Flags;
      v49[4] = v34;
      v49[5] = v35;
      LODWORD(v49[6]) = DesiredAccess;
      v49[7] = v56;
      LOBYTE(v22) = 1;
      v20 = CmpCallCallBacks(32, (unsigned int)v49, v22, 33, 0LL, (__int64)v42);
    }
    if ( v20 < 0 )
    {
      if ( v20 == -1073740541 )
      {
        v20 = 0;
        v29 = 1;
      }
    }
    else
    {
      CmpTraceHiveLoadStart(v38, Flags);
      v31 = 1;
      if ( (Flags & 0x10) != 0 )
      {
        ExReleaseRundownProtection_0(&CmpShutdownRundown);
        KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
        v30 = 0;
        AppKey = CmLoadAppKey(
                   (unsigned int)v44,
                   (unsigned int)v38,
                   Flags,
                   (_DWORD)v34,
                   (__int64)v35,
                   (__int64)&v33,
                   (__int64)&BugCheckParameter4);
      }
      else
      {
        AppKey = CmLoadKey(
                   (unsigned int)v44,
                   (unsigned int)v38,
                   Flags,
                   (_DWORD)v34,
                   (__int64)v35,
                   (__int64)&v33,
                   (__int64)&BugCheckParameter4);
      }
      v20 = CmPostCallbackNotification(33, (_DWORD)v36, AppKey, (unsigned int)v49, (__int64)v42);
    }
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    if ( *(_QWORD *)&v44[8] )
      ZwClose(*(HANDLE *)&v44[8]);
    if ( v36 )
      ObfDereferenceObject(v36);
  }
  if ( v34 )
    ObfDereferenceObject(v34);
  if ( v20 < 0 || (Flags & 0x810) == 0 || v29 )
  {
    v27 = BugCheckParameter4;
  }
  else
  {
    Object = 0LL;
    v24 = v50;
    if ( (Flags & 0x10) != 0 )
      v24 = 64;
    v50 = v24;
    v25 = Src;
    if ( v33 )
      v25 = v33;
    v33 = v25;
    v20 = ObReferenceObjectByName(v25, 64LL, 0LL);
    if ( v20 >= 0 )
    {
      v26 = Object;
      ObDeleteCapturedInsertInfo(Object);
      v20 = ObOpenObjectByPointer(v26, 0x40u, 0LL, DesiredAccess, (POBJECT_TYPE)CmKeyObjectType, AccessMode, &Handle);
      ObfDereferenceObject(v26);
      if ( v20 >= 0 )
        *v56 = Handle;
    }
    v27 = BugCheckParameter4;
    if ( BugCheckParameter4 )
    {
      if ( (Flags & 0x10) != 0 )
        CmReleaseLoadKeyContext(BugCheckParameter4);
      else
        CmpDereferenceKeyControlBlock(BugCheckParameter4);
      v27 = 0LL;
    }
    if ( v20 < 0 && (Flags & 0x800) != 0 )
      v20 = 0;
  }
  if ( v27 )
    CmReleaseLoadKeyContext(v27);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( v33 && v33 != Src )
    ExFreePoolWithTag(v33, 0x624E4D43u);
  if ( v35 )
    ObfDereferenceObject(v35);
  ExFreePoolWithTag(P, 0);
  if ( v37 )
    ExFreePoolWithTag(v37, 0);
  if ( v30 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  if ( v31 )
    CmpTraceHiveLoadStop((unsigned int)v20);
  return v20;
}
