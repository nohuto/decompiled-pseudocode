/*
 * XREFs of NtFreeVirtualMemory @ 0x140432C90
 * Callers:
 *     RtlpInitializeStackTraceDatabase @ 0x140687B3C (RtlpInitializeStackTraceDatabase.c)
 * Callees:
 *     MiFreeVadRange @ 0x140026E34 (MiFreeVadRange.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiCheckSecuredVad @ 0x14040B2AC (MiCheckSecuredVad.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 *     PerfInfoLogVirtualFree @ 0x1406A31D0 (PerfInfoLogVirtualFree.c)
 */

NTSTATUS __stdcall NtFreeVirtualMemory(HANDLE ProcessHandle, PVOID *BaseAddress, PSIZE_T RegionSize, ULONG FreeType)
{
  struct _KTHREAD *CurrentThread; // r8
  _KPROCESS *Process; // r15
  KPROCESSOR_MODE PreviousMode; // dl
  __int64 v9; // rcx
  __int64 v10; // rcx
  unsigned __int64 v11; // rsi
  ULONG_PTR v12; // r12
  unsigned __int64 v13; // rdi
  void *v14; // r14
  char *v15; // r11
  char v16; // bl
  _QWORD *p_Lock; // r10
  void *v18; // rax
  ULONG_PTR v19; // r15
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // r10
  __int16 v22; // r8
  __int64 v23; // rax
  unsigned __int64 v24; // rcx
  int v25; // r11d
  int v26; // eax
  __int64 v27; // rdi
  PVOID v28; // rsi
  NTSTATUS result; // eax
  __int64 v30; // r8
  unsigned __int64 v31; // rdx
  NTSTATUS v32; // [rsp+40h] [rbp-D8h] BYREF
  char v33; // [rsp+44h] [rbp-D4h] BYREF
  HANDLE v34; // [rsp+48h] [rbp-D0h]
  PVOID v35; // [rsp+50h] [rbp-C8h]
  struct _KTHREAD *v36; // [rsp+58h] [rbp-C0h]
  PVOID P; // [rsp+68h] [rbp-B0h] BYREF
  ULONG v38; // [rsp+70h] [rbp-A8h]
  unsigned __int64 v39; // [rsp+78h] [rbp-A0h]
  unsigned __int64 v40; // [rsp+80h] [rbp-98h]
  PSIZE_T v41; // [rsp+88h] [rbp-90h]
  unsigned __int64 v42; // [rsp+98h] [rbp-80h]
  ULONG_PTR v43; // [rsp+A0h] [rbp-78h]
  _BYTE v44[32]; // [rsp+A8h] [rbp-70h] BYREF
  __int64 v45; // [rsp+C8h] [rbp-50h]

  v38 = FreeType;
  v41 = RegionSize;
  v34 = ProcessHandle;
  if ( (v38 & 0xC000) == 49152 || (v38 & 0xC000) == 0 )
    return -1073741582;
  CurrentThread = KeGetCurrentThread();
  v36 = CurrentThread;
  Process = CurrentThread->ApcState.Process;
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    v9 = (__int64)BaseAddress;
    if ( (unsigned __int64)BaseAddress >= 0x7FFFFFFF0000LL )
      v9 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v9 = *(_QWORD *)v9;
    v10 = (__int64)RegionSize;
    if ( (unsigned __int64)RegionSize >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v10 = *(_QWORD *)v10;
    ProcessHandle = v34;
  }
  v42 = (unsigned __int64)*BaseAddress;
  v11 = v42;
  v12 = *RegionSize;
  v43 = *RegionSize;
  if ( v42 > 0x7FFFFFFEFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFEFFFFLL - v42 < v12 )
    return -1073741583;
  v13 = (v12 + v42 - 1) | 0xFFF;
  v14 = (void *)(v42 & 0xFFFFFFFFFFFFF000uLL);
  v39 = (v42 & 0xFFFFFFFFFFFFF000uLL) >> 12;
  v40 = v13 >> 12;
  v15 = 0LL;
  v16 = 0;
  v45 = 0LL;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_Lock = &Process->Header.Lock;
    v35 = Process;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               PreviousMode,
               0x6D566D4Du,
               &P,
               0LL);
    v32 = result;
    if ( result < 0 )
      return result;
    p_Lock = P;
    v35 = P;
    if ( Process != P )
    {
      v16 = 1;
      KiStackAttachProcess((_KPROCESS *)P, 0, (__int64)v44);
      p_Lock = P;
    }
    ProcessHandle = v34;
    v15 = 0LL;
    CurrentThread = v36;
  }
  v33 = 0;
  if ( (v38 & 0xFFFF3FFF) == 0 || p_Lock[226] && (v38 & 0x10000) != 0 && (v38 & 0x4000) == 0 )
  {
    v18 = (void *)MiObtainReferencedVad(v11 & 0xFFFFFFFFFFFFF000uLL, &v32);
    v19 = (ULONG_PTR)v18;
    if ( v18 )
    {
      P = v18;
      while ( 1 )
      {
        v20 = *(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
        v21 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
        v22 = v38;
        v23 = v39;
        if ( v12 )
        {
          v24 = v40;
        }
        else
        {
          v24 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
          v40 = v24;
          v13 = (v21 << 12) | 0xFFF;
          if ( (v38 & 0x8000) != 0 )
          {
            if ( v39 != v20 )
              goto LABEL_81;
            v14 = (void *)(v20 << 12);
          }
        }
        v25 = *(_DWORD *)(v19 + 48);
        if ( (v25 & 7) == 3 && (v25 & 0x40000) != 0 )
        {
          if ( v38 != 0x8000 )
          {
            result = -1073741582;
            v15 = (char *)P;
            goto LABEL_84;
          }
          if ( v12 )
          {
            result = -1073741583;
            v15 = (char *)P;
            goto LABEL_84;
          }
        }
        if ( v39 < v20 || v39 > v21 || v24 < v20 || v24 > v21 )
        {
          result = -1073741798;
          v15 = (char *)P;
          goto LABEL_84;
        }
        if ( (v38 & 0x10000) != 0 )
        {
          if ( (v25 & 0x8000) != 0 || (v25 & 7) != 0 || v39 == v20 && v24 == v21 )
          {
LABEL_75:
            result = -1073741797;
            v15 = (char *)P;
            goto LABEL_84;
          }
        }
        else if ( (v25 & 0x8000) == 0 || (v25 & 7) == 1 )
        {
          goto LABEL_75;
        }
        if ( (v25 & 0x4000) != 0 )
        {
          if ( (v38 & 0x8000) != 0 )
          {
            v30 = v21 - v20 + 1;
            v31 = v20 << 12;
          }
          else
          {
            v30 = v24 - v39 + 1;
            v31 = v11;
          }
          result = MiCheckSecuredVad(v19, v31, v30 << 12, 0x55u);
          v32 = result;
          if ( result < 0 )
          {
LABEL_76:
            CurrentThread = v36;
            v15 = (char *)P;
            ProcessHandle = v34;
            p_Lock = v35;
            goto LABEL_86;
          }
          v23 = v39;
          v24 = v40;
          v22 = v38;
        }
        if ( (v22 & 0x8000) == 0 )
          break;
        result = MiFreeVadRange(v19, (int)&v33, v23, v24, (__int64)v35);
        v32 = result;
        if ( result >= 0 )
        {
          if ( (v16 & 1) != 0 )
            KiUnstackDetachProcess((struct _KTHREAD *)v44, 0);
          if ( v34 != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v35, 0x6D566D4Du);
          *v41 = v13 - (_QWORD)v14 + 1;
          *BaseAddress = v14;
          return 0;
        }
        if ( result != -1073741267 )
          goto LABEL_76;
      }
      v26 = *(_DWORD *)(v19 + 48) & 7;
      if ( v26 == 3 )
      {
        result = -1073741664;
        v15 = (char *)P;
      }
      else if ( v26 == 5 )
      {
        result = -1073741664;
        v15 = (char *)P;
      }
      else
      {
        if ( v12 )
          goto LABEL_30;
        if ( v11 >> 12 == (*(unsigned int *)(v19 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32)) )
        {
          v13 = ((*(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32)) << 12) | 0xFFF;
LABEL_30:
          MiDecommitRegion(v19, (unsigned __int64)v14, v13);
          MiUnlockAndDereferenceVad((char *)v19);
          v27 = v13 - (_QWORD)v14 + 1;
          v28 = v35;
          if ( (WORD2(PerfGlobalGroupMask) & 0x8000) != 0 )
            PerfInfoLogVirtualFree(v14, v27, v35);
          if ( (v16 & 1) != 0 )
            KiUnstackDetachProcess((struct _KTHREAD *)v44, 0);
          if ( v34 != (HANDLE)-1LL )
            ObfDereferenceObjectWithTag(v28, 0x6D566D4Du);
          *v41 = v27;
          *BaseAddress = v14;
          return 0;
        }
LABEL_81:
        result = -1073741665;
        v15 = (char *)P;
      }
    }
    else
    {
      result = v32;
      v15 = 0LL;
    }
LABEL_84:
    p_Lock = v35;
    ProcessHandle = v34;
    CurrentThread = v36;
  }
  else
  {
    result = -1073741582;
  }
  v32 = result;
LABEL_86:
  if ( v15 )
  {
    MiUnlockAndDereferenceVad(v15);
    CurrentThread = v36;
    result = v32;
    ProcessHandle = v34;
    p_Lock = v35;
  }
  if ( v33 == 1 )
  {
    UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, (__int64)p_Lock);
    result = v32;
    ProcessHandle = v34;
    p_Lock = v35;
  }
  if ( (v16 & 1) != 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v44, 0);
    result = v32;
    ProcessHandle = v34;
    p_Lock = v35;
  }
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    ObfDereferenceObjectWithTag(p_Lock, 0x6D566D4Du);
    return v32;
  }
  return result;
}
