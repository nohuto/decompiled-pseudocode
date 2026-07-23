/*
 * XREFs of CmCreateKey @ 0x140462FD0
 * Callers:
 *     NtCreateKey @ 0x140462F98 (NtCreateKey.c)
 *     NtCreateKeyTransacted @ 0x1404C412C (NtCreateKeyTransacted.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwGetKernelTraceTimestamp @ 0x1400598D0 (EtwGetKernelTraceTimestamp.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     CmpCleanupParseContext @ 0x14046353C (CmpCleanupParseContext.c)
 *     ObOpenObjectByName @ 0x140463564 (ObOpenObjectByName.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall CmCreateKey(
        HANDLE *a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int128 *a5,
        int a6,
        _DWORD *a7,
        __int64 a8)
{
  ULONG_PTR v8; // rdi
  unsigned int v10; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  BOOLEAN v15; // r14
  unsigned __int8 v16; // r15
  size_t v17; // rax
  unsigned __int64 v18; // rcx
  void *v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  int v23; // eax
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r8
  PVOID PoolWithQuotaTag; // rax
  PVOID v27; // rdi
  int v28; // ebx
  void *v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned int v34; // [rsp+44h] [rbp-204h]
  HANDLE Handle; // [rsp+48h] [rbp-200h] BYREF
  __int128 v36; // [rsp+50h] [rbp-1F8h] BYREF
  __int128 v37; // [rsp+60h] [rbp-1E8h]
  unsigned int v38; // [rsp+70h] [rbp-1D8h]
  HANDLE *v39; // [rsp+78h] [rbp-1D0h]
  PVOID P; // [rsp+80h] [rbp-1C8h]
  size_t Size; // [rsp+88h] [rbp-1C0h]
  __int64 v42; // [rsp+90h] [rbp-1B8h]
  void *Src; // [rsp+98h] [rbp-1B0h]
  ULONG_PTR v44; // [rsp+A0h] [rbp-1A8h]
  HANDLE *v45; // [rsp+A8h] [rbp-1A0h]
  ULONG_PTR v46; // [rsp+B0h] [rbp-198h]
  _DWORD *v47; // [rsp+B8h] [rbp-190h]
  PVOID Object; // [rsp+C0h] [rbp-188h] BYREF
  __int128 v49; // [rsp+D0h] [rbp-178h]
  __int128 v50; // [rsp+E0h] [rbp-168h]
  unsigned __int64 v51; // [rsp+F0h] [rbp-158h]
  _QWORD v52[30]; // [rsp+100h] [rbp-148h] BYREF
  int v53; // [rsp+1F0h] [rbp-58h] BYREF
  __int64 v54; // [rsp+1F4h] [rbp-54h]
  int v55; // [rsp+1FCh] [rbp-4Ch]

  v8 = a3;
  v44 = a3;
  v39 = a1;
  v45 = a1;
  v46 = a3;
  Size = (size_t)a5;
  v47 = a7;
  Handle = 0LL;
  v36 = 0uLL;
  v37 = 0uLL;
  P = 0LL;
  v53 = 0;
  v54 = 0LL;
  v55 = 0;
  v42 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v53, 0x20000uLL);
  memset(v52, 0, 0xE8uLL);
  HIDWORD(v52[3]) = a2 & 0x300;
  v10 = a2 & 0xFFFFFCFF;
  v38 = v10;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v15 = ExAcquireRundownProtection(&CmpShutdownRundown);
  if ( !v15 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v12, v13, v14);
    v18 = (unsigned __int8)HvShutdownComplete;
    if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
      KeBugCheckEx(0x51u, 0xEuLL, 1uLL, v8, 0LL);
    v28 = -1073741431;
    goto LABEL_58;
  }
  v16 = KeGetCurrentThread()->gap0[10];
  if ( v16 == 1 )
  {
    if ( a5 )
    {
      v17 = Size;
      if ( Size >= 0x7FFFFFFF0000LL )
        v17 = 0x7FFFFFFF0000LL;
      v18 = *(unsigned int *)v17;
      LODWORD(v49) = v18;
      v19 = *(void **)(v17 + 8);
      Src = v19;
      *((_QWORD *)&v49 + 1) = v19;
      v37 = v49;
      if ( (_WORD)v18 )
      {
        if ( ((unsigned __int8)v19 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v25 = (unsigned __int64)v19 + (unsigned __int16)v18;
        if ( v25 > 0x7FFFFFFF0000LL || v25 < (unsigned __int64)v19 )
          MEMORY[0x7FFFFFFF0000] = 0;
      }
      if ( (v18 & 1) != 0 )
      {
        v28 = -1073741811;
        v34 = -1073741811;
        goto LABEL_46;
      }
      if ( (_WORD)v18 )
      {
        Size = (unsigned __int16)v18;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned __int16)v18, 0x78634D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v28 = -1073741670;
          v34 = -1073741670;
          goto LABEL_46;
        }
        v27 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, Src, Size);
        *((_QWORD *)&v37 + 1) = v27;
        v8 = v44;
      }
    }
    v20 = (__int64)v39;
    if ( (unsigned __int64)v39 >= 0x7FFFFFFF0000LL )
      v20 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v20 = 0LL;
    if ( a7 )
    {
      v21 = (__int64)a7;
      if ( (unsigned __int64)a7 >= 0x7FFFFFFF0000LL )
        v21 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v21 = *(_DWORD *)v21;
    }
    if ( (v8 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v22 = *(_QWORD *)(v8 + 16);
    v51 = v22;
    if ( v22 >= 0x7FFFFFFF0000LL )
      v22 = 0x7FFFFFFF0000LL;
    v23 = *(_DWORD *)v22;
    LODWORD(v50) = v23;
    v18 = *(_QWORD *)(v22 + 8);
    *((_QWORD *)&v50 + 1) = v18;
    v36 = v50;
    if ( (_WORD)v23 )
    {
      if ( (v18 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v24 = v18 + (unsigned __int16)v23;
      if ( v24 > 0x7FFFFFFF0000LL || v24 < v18 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    if ( (v36 & 1) != 0 )
    {
      v28 = -1073741811;
      v34 = -1073741811;
      goto LABEL_46;
    }
    v29 = *(void **)(v8 + 8);
    Handle = v29;
  }
  else
  {
    if ( a5 )
      v37 = *a5;
    v36 = *(_OWORD *)*(_QWORD *)(v8 + 16);
    v29 = *(void **)(v8 + 8);
    Handle = v29;
  }
  if ( CmpTraceRoutine
    && v29
    && ObReferenceObjectByHandle(
         Handle,
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         &Object,
         0LL) >= 0 )
  {
    v42 = *((_QWORD *)Object + 1);
    ObfDereferenceObject(Object);
  }
  v18 = a6 & 0x100000F;
  if ( (_DWORD)v18 != a6 )
  {
    v28 = -1073741811;
LABEL_58:
    v34 = v28;
    goto LABEL_46;
  }
  LODWORD(v52[3]) = a6;
  LODWORD(v52[0]) = 1;
  v52[1] = *((_QWORD *)&v37 + 1);
  WORD2(v52[0]) = v37;
  v52[10] = a8;
  v28 = ObOpenObjectByName(v8, (_DWORD)CmKeyObjectType, v16, 0, v10, (__int64)v52, (__int64)&Handle);
  v34 = v28;
  if ( v28 >= 0 )
  {
    v18 = (unsigned __int64)v39;
    *v39 = Handle;
    if ( a7 )
      *a7 = v52[4];
  }
LABEL_46:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v18) = 10;
    CmpTraceRoutine(v18, &v53, (unsigned int)v28, 0LL, v42, &v36);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  CmpCleanupParseContext(v52, 0LL);
  if ( v15 )
  {
    ExReleaseRundownProtection(&CmpShutdownRundown);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v30, v31, v32);
    return v34;
  }
  return (unsigned int)v28;
}
