/*
 * XREFs of NtFreeVirtualMemory @ 0x140417AA0
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x14064812C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x14002E2D0 (UNLOCK_ADDRESS_SPACE.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiUnlockAndDereferenceVad @ 0x140062910 (MiUnlockAndDereferenceVad.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiFreeVadRange @ 0x1400D5DC0 (MiFreeVadRange.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiDecommitRegion @ 0x14041AE10 (MiDecommitRegion.c)
 *     MiCheckSecuredVad @ 0x14047BB18 (MiCheckSecuredVad.c)
 *     PerfInfoLogVirtualFree @ 0x140662738 (PerfInfoLogVirtualFree.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // r9
  _QWORD *v8; // rcx
  _QWORD *v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // r12
  unsigned __int64 v12; // rdi
  void *v13; // r14
  char v14; // bl
  unsigned int *v15; // rax
  __int64 v16; // r15
  unsigned __int64 v17; // r10
  unsigned __int64 v18; // r8
  __int16 v19; // dx
  __int64 v20; // rax
  unsigned __int64 v21; // rcx
  int v22; // r11d
  int v23; // eax
  __int64 v24; // rdi
  PVOID v25; // rsi
  NTSTATUS result; // eax
  unsigned __int64 v27; // r8
  unsigned __int64 v28; // rdx
  PVOID v29; // rdi
  NTSTATUS v30; // [rsp+40h] [rbp-D8h] BYREF
  char v31; // [rsp+44h] [rbp-D4h] BYREF
  ULONG v32; // [rsp+48h] [rbp-D0h]
  PVOID Object; // [rsp+50h] [rbp-C8h] BYREF
  unsigned __int64 v34; // [rsp+58h] [rbp-C0h]
  HANDLE v35; // [rsp+60h] [rbp-B8h]
  unsigned __int64 v36; // [rsp+68h] [rbp-B0h]
  PSIZE_T v37; // [rsp+70h] [rbp-A8h]
  PVOID P; // [rsp+78h] [rbp-A0h]
  struct _KTHREAD *CurrentThread; // [rsp+80h] [rbp-98h]
  unsigned __int64 v40; // [rsp+90h] [rbp-88h]
  ULONG_PTR v41; // [rsp+98h] [rbp-80h]
  $D4FCF91253F76F57393CBFE908971F67 v42; // [rsp+A0h] [rbp-78h] BYREF

  v32 = FreeType;
  v37 = RegionSize;
  v35 = ProcessHandle;
  if ( (FreeType & 0xFFFF3FFF) != 0 || (FreeType & 0xC000) == 49152 || (FreeType & 0xC000) == 0 )
    return -1073741582;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v8 = BaseAddress;
    if ( (unsigned __int64)BaseAddress >= MmUserProbeAddress )
      v8 = (_QWORD *)MmUserProbeAddress;
    *v8 = *v8;
    v9 = RegionSize;
    if ( (unsigned __int64)RegionSize >= MmUserProbeAddress )
      v9 = (_QWORD *)MmUserProbeAddress;
    *v9 = *v9;
  }
  v40 = (unsigned __int64)*BaseAddress;
  v10 = v40;
  v11 = (char *)*RegionSize;
  v41 = *RegionSize;
  if ( v40 > (unsigned __int64)MmHighestUserAddress )
    return -1073741584;
  if ( (char *)MmHighestUserAddress - v40 < v11 )
    return -1073741583;
  v12 = (unsigned __int64)&v11[v40 - 1] | 0xFFF;
  v13 = (void *)(v40 & 0xFFFFFFFFFFFFF000uLL);
  v34 = (v40 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v36 = v12 >> 12;
  P = 0LL;
  v14 = 0;
  v42.SavedApcState.Process = 0LL;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    Object = Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &Object,
               0LL);
    v30 = result;
    if ( result < 0 )
      return result;
    if ( Process != Object )
    {
      v14 = 1;
      KiStackAttachProcess((_KPROCESS *)Object, 0LL, (__int64)&v42);
    }
  }
  v31 = 0;
  v15 = MiObtainReferencedVad(v10 & 0xFFFFFFFFFFFFF000uLL, &v30);
  v16 = (__int64)v15;
  if ( v15 )
  {
    P = v15;
    while ( 1 )
    {
      v17 = *(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32);
      v18 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
      v19 = v32;
      v20 = v34;
      if ( v11 )
      {
        v21 = v36;
      }
      else
      {
        v21 = *(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32);
        v36 = v21;
        v12 = (v18 << 12) | 0xFFF;
        if ( (v32 & 0x8000) != 0 )
        {
          if ( v34 != v17 )
            goto LABEL_68;
          v13 = (void *)(v17 << 12);
        }
      }
      v22 = *(_DWORD *)(v16 + 48);
      if ( (v22 & 7) == 3 && (v22 & 0x40000) != 0 )
      {
        if ( v32 != 0x8000 )
        {
          result = -1073741582;
          goto LABEL_72;
        }
        if ( v11 )
        {
          result = -1073741583;
          goto LABEL_72;
        }
      }
      if ( v34 < v17 || v34 > v18 || v21 < v17 || v21 > v18 )
      {
        result = -1073741798;
        goto LABEL_72;
      }
      if ( (v22 & 0x8000) == 0 || (v22 & 7) == 1 )
      {
        result = -1073741797;
        goto LABEL_72;
      }
      if ( (v22 & 0x4000) != 0 )
      {
        if ( (v32 & 0x8000) != 0 )
        {
          v27 = v18 - v17;
          v28 = v17 << 12;
        }
        else
        {
          v27 = v21 - v34;
          v28 = v10;
        }
        result = MiCheckSecuredVad(v16, v28, (v27 + 1) << 12, 85LL);
        v30 = result;
        if ( result < 0 )
          goto LABEL_73;
        v20 = v34;
        v21 = v36;
        v19 = v32;
      }
      if ( (v19 & 0x8000) == 0 )
        break;
      result = MiFreeVadRange(v16, (int)&v31, v20, v21, (__int64)Object);
      v30 = result;
      if ( result >= 0 )
      {
        if ( (v14 & 1) != 0 )
          KiUnstackDetachProcess(&v42, 0LL);
        if ( v35 != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
        *v37 = v12 - (_QWORD)v13 + 1;
        *BaseAddress = v13;
        return 0;
      }
      if ( result != -1073741267 )
        goto LABEL_73;
    }
    v23 = *(_DWORD *)(v16 + 48) & 7;
    if ( v23 == 3 )
    {
      result = -1073741664;
    }
    else if ( v23 == 5 )
    {
      result = -1073741664;
    }
    else
    {
      if ( v11 )
        goto LABEL_29;
      if ( v10 >> 12 == (*(unsigned int *)(v16 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 32) << 32)) )
      {
        v12 = ((*(unsigned int *)(v16 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v16 + 33) << 32)) << 12) | 0xFFF;
LABEL_29:
        MiDecommitRegion(v16, v13, v12);
        MiUnlockAndDereferenceVad((PVOID)v16);
        v24 = v12 - (_QWORD)v13 + 1;
        v25 = Object;
        if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
          PerfInfoLogVirtualFree(v13, v24, Object);
        if ( (v14 & 1) != 0 )
          KiUnstackDetachProcess(&v42, 0LL);
        if ( v35 != (HANDLE)-1LL )
          ObfDereferenceObjectWithTag(v25, 0x6D566D4Du);
        *v37 = v24;
        *BaseAddress = v13;
        return 0;
      }
LABEL_68:
      result = -1073741665;
    }
  }
  else
  {
    result = v30;
  }
LABEL_72:
  v30 = result;
LABEL_73:
  if ( P )
  {
    MiUnlockAndDereferenceVad(P);
    result = v30;
  }
  v29 = Object;
  if ( v31 == 1 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)Object);
    result = v30;
  }
  if ( (v14 & 1) != 0 )
  {
    KiUnstackDetachProcess(&v42, 0LL);
    result = v30;
  }
  if ( v35 != (HANDLE)-1LL )
  {
    ObfDereferenceObjectWithTag(v29, 0x6D566D4Du);
    return v30;
  }
  return result;
}
