/*
 * XREFs of PspSetNetRateControl @ 0x140642924
 * Callers:
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1403EB6A8 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspUnlockJob @ 0x1403EB8D0 (PspUnlockJob.c)
 *     PspUnlockJobConditionally @ 0x1403EC4B0 (PspUnlockJobConditionally.c)
 *     PspLockJobConditionally @ 0x1403EC4CC (PspLockJobConditionally.c)
 *     PspLockRootJobExclusive @ 0x1403ECDA8 (PspLockRootJobExclusive.c)
 *     PspFreeRateControl @ 0x140487854 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x140487898 (PspAllocateRateControl.c)
 *     PspGetRateControlJobFlag @ 0x1404C26B0 (PspGetRateControlJobFlag.c)
 *     PspModifyAncestorBits @ 0x140642164 (PspModifyAncestorBits.c)
 *     PspNetRateControlDispatch @ 0x140642198 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1406423B4 (PspRemoveRateControl.c)
 *     EtwTraceJobSetQuery @ 0x140660C64 (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(__int64 a1, const void *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  char v6; // r14
  int v7; // esi
  int v8; // ebx
  int v9; // r13d
  int v10; // esi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v12; // r15d
  __int64 v13; // r14
  __int64 v14; // r8
  __int64 v15; // r10
  unsigned int v16; // r12d
  bool v17; // cl
  char v18; // dl
  char v19; // r15
  _QWORD *v20; // rax
  __int64 v21; // r10
  _QWORD *v22; // rcx
  int v23; // r8d
  __int64 v24; // r10
  __int64 v25; // r14
  __int64 v26; // r8
  unsigned int RateControlJobFlag; // r12d
  unsigned int v28; // r15d
  bool v29; // cl
  char v30; // dl
  char v31; // r15
  _QWORD *RateControl; // rax
  __int64 v33; // r10
  _QWORD *v34; // rcx
  int v35; // r8d
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // r8
  __int64 v39; // r10
  int v40; // edx
  bool v41; // cl
  bool v42; // dl
  __int64 v43; // r10
  _QWORD *v44; // rcx
  int v45; // r8d
  char v47; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v4 + 112) = a1;
  v6 = 0;
  *(_BYTE *)v4 = 0;
  memmove((void *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 200), a2, a3);
  v7 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0);
  if ( (v7 & 0xFFFFFFF8) != 0 )
    return (unsigned int)-1073741811;
  v9 = *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD0) & 1;
  if ( (v7 & 1) != 0
    && ((v7 & 4) != 0 && *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD4) > 0x40u || (v7 & 6) == 0) )
  {
    return (unsigned int)-1073741811;
  }
  memset((void *)(v4 + 160), 0, 0x28uLL);
  *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = a4 + 1232;
  *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = 0;
  *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v7 & 2;
  if ( (v7 & 2) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) |= 0x10u;
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0xC8);
  }
  v10 = v7 & 4;
  if ( v10 )
  {
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) |= 8u;
    *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4) = *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0xD4);
  }
  CurrentThread = KeGetCurrentThread();
  *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = CurrentThread;
  PspLockRootJobExclusive(a4, (__int64)CurrentThread, (_QWORD *)(v4 + 16));
  PspLockJobConditionally(a4, (_QWORD *)(v4 + 16));
  v12 = *(_DWORD *)(a4 + 1296);
  if ( (v12 & 0x4000000) != 0 )
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = *(_QWORD *)(*(_QWORD *)(a4 + 1280) + 56LL);
  if ( v9 )
  {
    if ( (v12 & 0x2000000) != 0 )
    {
      if ( (v12 & 0x4000000) != 0 )
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) |= 2u;
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) |= 1u;
    }
  }
  else if ( (v12 & 0x4000000) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) |= 4u;
  }
  if ( (*(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) & 1) == 0 )
  {
    if ( (*(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) & 7) != 0 )
    {
      v8 = PspNetRateControlDispatch(v4 + 160);
      if ( v8 < 0 )
        goto LABEL_70;
    }
    v8 = 0;
    v25 = 0LL;
    RateControlJobFlag = PspGetRateControlJobFlag(0, 1);
    v28 = *(_DWORD *)(a4 + 1296);
    v29 = (v28 & RateControlJobFlag) != 0;
    v31 = v30 & (v28 >> 25);
    if ( v9 )
    {
      if ( !v29 )
      {
        if ( v31 )
        {
          v8 = -1073741637;
          goto LABEL_54;
        }
        RateControl = PspAllocateRateControl(0LL);
        v25 = (__int64)RateControl;
        v24 = 0LL;
        if ( !RateControl )
        {
          v8 = -1073741801;
          goto LABEL_54;
        }
        *(_QWORD *)(a4 + 1280) = RateControl;
        _InterlockedOr((volatile signed __int32 *)(a4 + 1296), RateControlJobFlag);
        PspModifyAncestorBits(a4, 0x2000000u, 1);
      }
      *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v24;
      *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v24;
      *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v24;
      *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = a4;
      *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v24;
      *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = 1;
      v8 = PspEnumJobsAndProcessesInJobHierarchy(
             (_QWORD *)a4,
             (int)PspSetRateControlJobPreCallback,
             0,
             (int)PspSetRateControlProcessCallback,
             v4 + 32,
             5u);
    }
    else
    {
      if ( !v29 )
      {
        v8 = -1073741811;
        goto LABEL_54;
      }
      PspRemoveRateControl((volatile signed __int32 *)a4, 0, v26, 0LL, v24);
    }
    v24 = 0LL;
    if ( v8 >= 0 )
    {
LABEL_58:
      v6 = *(_BYTE *)v4;
      goto LABEL_59;
    }
LABEL_54:
    if ( v25 )
    {
      PspFreeRateControl(v25, 0);
      v24 = 0LL;
    }
    *(_QWORD *)(a4 + 1280) = v24;
    _InterlockedAnd((volatile signed __int32 *)(a4 + 1296), ~RateControlJobFlag);
    if ( !v31 )
    {
      PspModifyAncestorBits(a4, 0x2000000u, 0);
      *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x44) = v33;
      *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v33;
      *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v33;
      *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v33;
      PspEnumJobsAndProcessesInJobHierarchy(
        v34,
        (int)PspSetRateControlJobPreCallback,
        v35,
        (int)PspSetRateControlProcessCallback,
        v4 + 32,
        5u);
      v24 = 0LL;
    }
    goto LABEL_58;
  }
  v8 = 0;
  v13 = 0LL;
  v16 = PspGetRateControlJobFlag(0, 1);
  v17 = (v12 & v16) != 0;
  v19 = v18 & (v12 >> 25);
  if ( !v9 )
  {
    if ( !v17 )
    {
      v8 = -1073741811;
      goto LABEL_34;
    }
    PspRemoveRateControl((volatile signed __int32 *)a4, 0, v14, 0LL, v15);
    goto LABEL_33;
  }
  if ( v17 )
  {
LABEL_29:
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v15;
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v15;
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v15;
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = a4;
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v15;
    *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) = 1;
    v8 = PspEnumJobsAndProcessesInJobHierarchy(
           (_QWORD *)a4,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           v4 + 72,
           5u);
LABEL_33:
    v15 = 0LL;
    if ( v8 < 0 )
      goto LABEL_34;
    v6 = 1;
    v8 = PspNetRateControlDispatch(v4 + 160);
    v24 = 0LL;
LABEL_59:
    if ( v8 >= 0 )
    {
      if ( v9 )
      {
        if ( *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) != (_DWORD)v24 )
        {
          *(_DWORD *)(*(_QWORD *)(a4 + 1280) + 48LL) |= 1u;
          *(_QWORD *)(*(_QWORD *)(a4 + 1280) + 40LL) = *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                 + 0xB0);
        }
        if ( v10 )
        {
          *(_DWORD *)(*(_QWORD *)(a4 + 1280) + 48LL) |= 2u;
          *(_BYTE *)(*(_QWORD *)(a4 + 1280) + 64LL) = *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC4);
        }
        *(_QWORD *)(*(_QWORD *)(a4 + 1280) + 56LL) = *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0);
        v36 = *(_QWORD *)(a4 + 1280);
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = *(_DWORD *)(v36 + 48);
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = *(_QWORD *)(v36 + 40);
        *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = *(_BYTE *)(v36 + 64);
      }
      else
      {
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 0LL;
      }
      if ( (PerfGlobalGroupMask & 0x80000) != 0 )
        EtwTraceJobSetQuery(
          a4,
          *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70),
          32,
          v4 + 216,
          v24,
          v8,
          1829);
    }
    goto LABEL_69;
  }
  if ( !v19 )
  {
    v20 = PspAllocateRateControl(0LL);
    v13 = (__int64)v20;
    v15 = 0LL;
    if ( !v20 )
    {
      v8 = -1073741801;
      goto LABEL_34;
    }
    *(_QWORD *)(a4 + 1280) = v20;
    _InterlockedOr((volatile signed __int32 *)(a4 + 1296), v16);
    PspModifyAncestorBits(a4, 0x2000000u, 1);
    goto LABEL_29;
  }
  v8 = -1073741637;
LABEL_34:
  if ( v13 )
  {
    PspFreeRateControl(v13, 0);
    v15 = 0LL;
  }
  *(_QWORD *)(a4 + 1280) = v15;
  _InterlockedAnd((volatile signed __int32 *)(a4 + 1296), ~v16);
  if ( !v19 )
  {
    PspModifyAncestorBits(a4, 0x2000000u, 0);
    *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x6C) = v21;
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v21;
    *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v21;
    *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = v21;
    PspEnumJobsAndProcessesInJobHierarchy(
      v22,
      (int)PspSetRateControlJobPreCallback,
      v23,
      (int)PspSetRateControlProcessCallback,
      v4 + 72,
      5u);
  }
  v6 = *(_BYTE *)v4;
LABEL_69:
  CurrentThread = *(struct _KTHREAD **)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
LABEL_70:
  if ( v8 < 0 && v6 )
  {
    v37 = PspGetRateControlJobFlag(0, 1);
    v40 = *(_DWORD *)(a4 + 1296);
    v41 = (v40 & v37) != 0;
    v42 = (v40 & 0x2000000) != 0;
    if ( v41 )
    {
      PspRemoveRateControl((volatile signed __int32 *)a4, 0, v38, 0LL, v39);
    }
    else
    {
      *(_QWORD *)(a4 + 1280) = v39;
      _InterlockedAnd((volatile signed __int32 *)(a4 + 1296), ~v37);
      if ( !v42 )
      {
        PspModifyAncestorBits(a4, 0x2000000u, 0);
        *(_BYTE *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x9C) = v43;
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = v43;
        *(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v43;
        *(_OWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 0LL;
        *(_DWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = v43;
        PspEnumJobsAndProcessesInJobHierarchy(
          v44,
          (int)PspSetRateControlJobPreCallback,
          v45,
          (int)PspSetRateControlProcessCallback,
          v4 + 120,
          5u);
      }
    }
  }
  PspUnlockJobConditionally(a4, (_QWORD *)(v4 + 16));
  PspUnlockJob(*(_QWORD *)(((unsigned __int64)&v47 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10), (__int64)CurrentThread);
  return (unsigned int)v8;
}
