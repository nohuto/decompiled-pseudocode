/*
 * XREFs of CmCreateKey @ 0x140422220
 * Callers:
 *     NtCreateKey @ 0x140421FB8 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x1404B9030 (NtCreateKeyTransacted.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400DE680 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ObOpenObjectByName @ 0x140422190 (ObOpenObjectByName.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        unsigned int *a5,
        unsigned int a6,
        _DWORD *a7,
        __int64 a8)
{
  unsigned int *v10; // rbx
  ACCESS_MASK v11; // r12d
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN v13; // r15
  char PreviousMode; // r13
  ULONG64 v15; // rcx
  const void *v16; // rbx
  _QWORD *v17; // rax
  _DWORD *v18; // rcx
  unsigned int *v19; // rax
  ULONG64 v20; // rax
  ULONG64 v21; // rdx
  ULONG64 v22; // rdx
  PVOID PoolWithQuotaTag; // rax
  PVOID v24; // rsi
  int v25; // ebx
  void *v26; // rax
  unsigned int v28; // [rsp+44h] [rbp-194h]
  HANDLE Handle; // [rsp+48h] [rbp-190h] BYREF
  __int128 v30; // [rsp+50h] [rbp-188h] BYREF
  __int128 v31; // [rsp+60h] [rbp-178h]
  PVOID P; // [rsp+70h] [rbp-168h]
  HANDLE *v33; // [rsp+78h] [rbp-160h]
  ACCESS_MASK v34; // [rsp+80h] [rbp-158h]
  __int64 v35; // [rsp+88h] [rbp-150h]
  __int64 v36; // [rsp+90h] [rbp-148h]
  size_t Size; // [rsp+98h] [rbp-140h]
  ULONG_PTR v38; // [rsp+A0h] [rbp-138h]
  _DWORD *v39; // [rsp+A8h] [rbp-130h]
  PVOID Object[2]; // [rsp+B0h] [rbp-128h] BYREF
  __int128 v41; // [rsp+C0h] [rbp-118h]
  __int128 v42; // [rsp+D0h] [rbp-108h]
  unsigned int *v43; // [rsp+E0h] [rbp-F8h]
  _QWORD v44[18]; // [rsp+F0h] [rbp-E8h] BYREF
  int v45; // [rsp+180h] [rbp-58h] BYREF
  __int64 v46; // [rsp+184h] [rbp-54h]
  int v47; // [rsp+18Ch] [rbp-4Ch]

  v33 = a1;
  Object[1] = a1;
  v38 = a3;
  v10 = a5;
  v39 = a7;
  v35 = a8;
  memset(v44, 0, 136);
  Handle = 0LL;
  v30 = 0uLL;
  v31 = 0uLL;
  P = 0LL;
  v45 = 0;
  v46 = 0LL;
  v47 = 0;
  v36 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v45, (char *)0x20000);
  HIDWORD(v44[3]) = a2 & 0x300;
  v11 = a2 & 0xFFFFFCFF;
  v34 = v11;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v13 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v13 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v15 = (unsigned __int8)HvShutdownComplete;
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
    v25 = -1073741431;
    goto LABEL_64;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v10 = (unsigned int *)MmUserProbeAddress;
      v15 = *v10;
      LODWORD(v42) = v15;
      v16 = (const void *)*((_QWORD *)v10 + 1);
      *((_QWORD *)&v42 + 1) = v16;
      v31 = v42;
      if ( (_WORD)v15 )
      {
        if ( ((unsigned __int8)v16 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v22 = (ULONG64)v16 + (unsigned __int16)v15;
        if ( v22 > MmUserProbeAddress || v22 < (unsigned __int64)v16 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      if ( (v15 & 1) != 0 )
      {
        v25 = -1073741811;
        v28 = -1073741811;
        goto LABEL_46;
      }
      if ( (_WORD)v15 )
      {
        Size = (unsigned __int16)v15;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned __int16)v15, 0x78634D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v25 = -1073741670;
          v28 = -1073741670;
          goto LABEL_46;
        }
        v24 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, v16, Size);
        *((_QWORD *)&v31 + 1) = v24;
      }
    }
    v17 = v33;
    if ( (unsigned __int64)v33 >= MmUserProbeAddress )
      v17 = (_QWORD *)MmUserProbeAddress;
    *v17 = 0LL;
    if ( a7 )
    {
      v18 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v18 = (_DWORD *)MmUserProbeAddress;
      *v18 = *v18;
    }
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v19 = *(unsigned int **)(a3 + 16);
    v43 = v19;
    if ( (unsigned __int64)v19 >= MmUserProbeAddress )
      v19 = (unsigned int *)MmUserProbeAddress;
    v15 = *v19;
    LODWORD(v41) = v15;
    v20 = *((_QWORD *)v19 + 1);
    *((_QWORD *)&v41 + 1) = v20;
    v30 = v41;
    if ( (_WORD)v15 )
    {
      if ( (v20 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v21 = v20 + (unsigned __int16)v15;
      v15 = MmUserProbeAddress;
      if ( v21 > MmUserProbeAddress || v21 < v20 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (v30 & 1) != 0 )
    {
      v25 = -1073741811;
      v28 = -1073741811;
      goto LABEL_46;
    }
    v26 = *(void **)(a3 + 8);
    Handle = v26;
  }
  else
  {
    if ( a5 )
      v31 = *(_OWORD *)a5;
    v30 = *(_OWORD *)*(_QWORD *)(a3 + 16);
    v26 = *(void **)(a3 + 8);
    Handle = v26;
  }
  if ( CmpTraceRoutine
    && v26
    && ObReferenceObjectByHandle(
         Handle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         Object,
         0LL) >= 0 )
  {
    v36 = *((_QWORD *)Object[0] + 1);
    ObfDereferenceObject(Object[0]);
  }
  v15 = a6;
  if ( (a6 & 0x100000F) != a6 )
  {
    v25 = -1073741811;
LABEL_64:
    v28 = v25;
    goto LABEL_46;
  }
  LODWORD(v44[3]) = a6;
  LODWORD(v44[0]) = 1;
  v44[1] = *((_QWORD *)&v31 + 1);
  HIDWORD(v44[0]) = (unsigned __int16)v31;
  v44[10] = v35;
  v25 = ObOpenObjectByName(a3, (struct _OBJECT_TYPE *)CmKeyObjectType, PreviousMode, 0LL, v11, v44, &Handle);
  v28 = v25;
  if ( v25 >= 0 )
  {
    v15 = (ULONG64)v33;
    *v33 = Handle;
    if ( a7 )
      *a7 = v44[4];
  }
LABEL_46:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v15) = 10;
    CmpTraceRoutine(v15, &v45, (unsigned int)v25, 0LL, v36, &v30);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v13 )
  {
    ExReleaseRundownProtection_0(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return v28;
  }
  return (unsigned int)v25;
}
