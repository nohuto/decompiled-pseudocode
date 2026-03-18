/*
 * XREFs of CmCreateKey @ 0x1404F4850
 * Callers:
 *     NtCreateKeyTransacted @ 0x1404F46B4 (NtCreateKeyTransacted.c)
 *     NtCreateKey @ 0x1404F4810 (NtCreateKey.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwGetKernelTraceTimestamp @ 0x140111B58 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
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
  HANDLE *v10; // r14
  unsigned int *v11; // rbx
  ACCESS_MASK v12; // r15d
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v14; // rtt
  char PreviousMode; // r12
  ULONG64 v16; // rcx
  const void *v17; // rbx
  _QWORD *v18; // rax
  _DWORD *v19; // rcx
  _QWORD *v20; // rcx
  int v21; // eax
  ULONG64 v22; // rdx
  ULONG64 v23; // rdx
  PVOID PoolWithQuotaTag; // rax
  PVOID v25; // r14
  int v26; // ebx
  void *v27; // rax
  unsigned __int64 v28; // rtt
  struct _KTHREAD *v29; // rax
  __int16 v30; // cx
  BOOLEAN v32; // dl
  struct _KTHREAD *v33; // r8
  char v34; // [rsp+40h] [rbp-1A8h]
  unsigned int v35; // [rsp+44h] [rbp-1A4h]
  HANDLE Handle[2]; // [rsp+50h] [rbp-198h] BYREF
  __int128 v37; // [rsp+60h] [rbp-188h] BYREF
  __int128 v38; // [rsp+70h] [rbp-178h]
  PVOID P; // [rsp+80h] [rbp-168h]
  ACCESS_MASK v40; // [rsp+88h] [rbp-160h]
  __int64 v41; // [rsp+90h] [rbp-158h]
  __int64 v42; // [rsp+98h] [rbp-150h]
  size_t Size; // [rsp+A0h] [rbp-148h]
  HANDLE *v44; // [rsp+A8h] [rbp-140h]
  ULONG_PTR v45; // [rsp+B0h] [rbp-138h]
  _DWORD *v46; // [rsp+B8h] [rbp-130h]
  PVOID Object[4]; // [rsp+C0h] [rbp-128h] BYREF
  __int128 v48; // [rsp+E0h] [rbp-108h]
  __int128 v49; // [rsp+F0h] [rbp-F8h]
  _QWORD v50[18]; // [rsp+100h] [rbp-E8h] BYREF
  int v51; // [rsp+190h] [rbp-58h] BYREF
  __int64 v52; // [rsp+194h] [rbp-54h]
  int v53; // [rsp+19Ch] [rbp-4Ch]

  v10 = a1;
  v44 = a1;
  Object[2] = a1;
  v45 = a3;
  v11 = a5;
  v46 = a7;
  v42 = a8;
  memset(v50, 0, 136);
  Handle[0] = 0LL;
  v37 = 0uLL;
  v38 = 0uLL;
  P = 0LL;
  v51 = 0;
  v52 = 0LL;
  v53 = 0;
  v41 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((char *)&v51, (char *)0x20000);
  HIDWORD(v50[3]) = a2 & 0x300;
  v12 = a2 & 0xFFFFFCFF;
  v40 = v12;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  _m_prefetchw(&CmpShutdownRundown);
  v14 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v14 == _InterlockedCompareExchange64(
                (volatile signed __int64 *)&CmpShutdownRundown,
                (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
                CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    v34 = 1;
  }
  else
  {
    v32 = ExfAcquireRundownProtection(&CmpShutdownRundown);
    v34 = v32;
    if ( !v32 )
    {
      v33 = KeGetCurrentThread();
      v16 = (unsigned int)++v33->KernelApcDisable;
      if ( !(_WORD)v16
        && ($CD287064E7C9F7953DE243E927CFCB99 *)v33->ApcState.ApcListHead[0].Flink != &v33->152
        && !v33->SpecialApcDisable )
      {
        KiCheckForKernelApcDelivery();
        v32 = 0;
      }
    }
    if ( !v32 )
    {
      if ( HvShutdownComplete && (PopShutdownCleanly & 8) != 0 )
        KeBugCheckEx(0x51u, 0xEuLL, 1uLL, a3, 0LL);
      v26 = -1073741431;
      goto LABEL_77;
    }
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode == 1 )
  {
    if ( a5 )
    {
      if ( (unsigned __int64)a5 >= MmUserProbeAddress )
        v11 = (unsigned int *)MmUserProbeAddress;
      v16 = *v11;
      LODWORD(v48) = v16;
      v17 = (const void *)*((_QWORD *)v11 + 1);
      *((_QWORD *)&v48 + 1) = v17;
      v38 = v48;
      if ( (_WORD)v16 )
      {
        if ( ((unsigned __int8)v17 & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        v23 = (ULONG64)v17 + (unsigned __int16)v16;
        if ( v23 > MmUserProbeAddress || v23 < (unsigned __int64)v17 )
          *(_BYTE *)MmUserProbeAddress = 0;
      }
      if ( (v16 & 1) != 0 )
      {
        v26 = -1073741811;
        v35 = -1073741811;
        goto LABEL_46;
      }
      if ( (_WORD)v16 )
      {
        Size = (unsigned __int16)v16;
        PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)520, (unsigned __int16)v16, 0x78634D43u);
        P = PoolWithQuotaTag;
        if ( !PoolWithQuotaTag )
        {
          v26 = -1073741670;
          v35 = -1073741670;
          goto LABEL_46;
        }
        v25 = PoolWithQuotaTag;
        memmove(PoolWithQuotaTag, v17, Size);
        *((_QWORD *)&v38 + 1) = v25;
        v10 = v44;
      }
    }
    v18 = v10;
    if ( (unsigned __int64)v10 >= MmUserProbeAddress )
      v18 = (_QWORD *)MmUserProbeAddress;
    *v18 = 0LL;
    if ( a7 )
    {
      v19 = a7;
      if ( (unsigned __int64)a7 >= MmUserProbeAddress )
        v19 = (_DWORD *)MmUserProbeAddress;
      *v19 = *v19;
    }
    if ( (a3 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v20 = *(_QWORD **)(a3 + 16);
    Object[1] = v20;
    if ( (unsigned __int64)v20 >= MmUserProbeAddress )
      v20 = (_QWORD *)MmUserProbeAddress;
    v21 = *(_DWORD *)v20;
    LODWORD(v49) = v21;
    v16 = v20[1];
    *((_QWORD *)&v49 + 1) = v16;
    v37 = v49;
    if ( (_WORD)v21 )
    {
      if ( (v16 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v22 = v16 + (unsigned __int16)v21;
      if ( v22 > MmUserProbeAddress || v22 < v16 )
        *(_BYTE *)MmUserProbeAddress = 0;
    }
    if ( (v37 & 1) != 0 )
    {
      v26 = -1073741811;
      v35 = -1073741811;
      goto LABEL_46;
    }
    v27 = *(void **)(a3 + 8);
    Handle[0] = v27;
  }
  else
  {
    if ( a5 )
      v38 = *(_OWORD *)a5;
    v37 = *(_OWORD *)*(_QWORD *)(a3 + 16);
    v27 = *(void **)(a3 + 8);
    Handle[0] = v27;
  }
  if ( CmpTraceRoutine
    && v27
    && ObReferenceObjectByHandle(
         Handle[0],
         0,
         (POBJECT_TYPE)CmKeyObjectType,
         KeGetCurrentThread()->PreviousMode,
         Object,
         0LL) >= 0 )
  {
    v41 = *((_QWORD *)Object[0] + 1);
    ObfDereferenceObject(Object[0]);
  }
  v16 = a6;
  if ( (a6 & 0x100000F) != a6 )
  {
    v26 = -1073741811;
LABEL_77:
    v35 = v26;
    goto LABEL_46;
  }
  LODWORD(v50[3]) = a6;
  LODWORD(v50[0]) = 1;
  v50[1] = *((_QWORD *)&v38 + 1);
  HIDWORD(v50[0]) = (unsigned __int16)v38;
  v50[10] = v42;
  v26 = ObOpenObjectByName(a3, (__int64)CmKeyObjectType, PreviousMode, 0LL, v12, (__int64)v50, Handle);
  v35 = v26;
  if ( v26 >= 0 )
  {
    *v10 = Handle[0];
    if ( a7 )
      *a7 = v50[4];
  }
LABEL_46:
  if ( CmpTraceRoutine )
  {
    LOBYTE(v16) = 10;
    CmpTraceRoutine(v16, &v51, (unsigned int)v26, 0LL, v41, &v37);
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v34 )
  {
    _m_prefetchw(&CmpShutdownRundown);
    v28 = CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL;
    if ( v28 != _InterlockedCompareExchange64(
                  (volatile signed __int64 *)&CmpShutdownRundown,
                  (CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
                  CmpShutdownRundown.Count & 0xFFFFFFFFFFFFFFFEuLL) )
      ExfReleaseRundownProtection(&CmpShutdownRundown);
    v29 = KeGetCurrentThread();
    v30 = v29->KernelApcDisable + 1;
    v29->KernelApcDisable = v30;
    if ( !v30
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v29->ApcState.ApcListHead[0].Flink != &v29->152
      && !v29->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
    return v35;
  }
  return (unsigned int)v26;
}
