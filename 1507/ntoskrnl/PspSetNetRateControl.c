/*
 * XREFs of PspSetNetRateControl @ 0x1406C4E6C
 * Callers:
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x140506878 (PspEnumJobsAndProcessesInJobHierarchy.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 *     PspGetRateControlJobFlag @ 0x140559DBC (PspGetRateControlJobFlag.c)
 *     PspModifyAncestorBits @ 0x1406C46B4 (PspModifyAncestorBits.c)
 *     PspNetRateControlDispatch @ 0x1406C46E8 (PspNetRateControlDispatch.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 *     EtwTraceJobSetQuery @ 0x1406E3C4C (EtwTraceJobSetQuery.c)
 */

__int64 __fastcall PspSetNetRateControl(__int64 a1, const void *a2, unsigned int a3, __int64 a4)
{
  unsigned __int64 v4; // rbp
  char v6; // si
  int v7; // r15d
  int v8; // ebx
  int v9; // ebx
  int v10; // r15d
  struct _KTHREAD *CurrentThread; // r13
  int v12; // ecx
  _QWORD *v13; // rax
  unsigned int v14; // r14d
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r10
  unsigned int v18; // r12d
  bool v19; // cl
  char v20; // dl
  char v21; // r14
  _QWORD *v22; // rax
  __int64 v23; // r10
  _QWORD *v24; // rcx
  int v25; // r8d
  __int64 v26; // rsi
  __int64 v27; // r8
  unsigned int RateControlJobFlag; // r12d
  unsigned int v29; // r14d
  bool v30; // cl
  char v31; // dl
  char v32; // r14
  _QWORD *RateControl; // rax
  __int64 v34; // r10
  _QWORD *v35; // rcx
  int v36; // r8d
  __int64 v37; // rcx
  int v38; // eax
  __int64 v39; // r8
  int v40; // edx
  bool v41; // cl
  bool v42; // dl
  __int64 v43; // r10
  _QWORD *v44; // rcx
  int v45; // r8d
  int v46; // ecx
  _QWORD *v47; // rax
  __int16 v48; // ax
  char v50; // [rsp+80h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(v4 + 120) = a1;
  v6 = 0;
  *(_BYTE *)v4 = 0;
  memmove((void *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 208), a2, a3);
  v7 = *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8);
  if ( (v7 & 0xFFFFFFF8) != 0 )
    return (unsigned int)-1073741811;
  v9 = *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xD8) & 1;
  *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v9;
  if ( (v7 & 1) != 0
    && ((v7 & 4) != 0 && *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC) > 0x40u || (v7 & 6) == 0) )
  {
    return (unsigned int)-1073741811;
  }
  memset((void *)(v4 + 168), 0, 0x28uLL);
  *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC0) = a4 + 1232;
  *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB0) = 0;
  *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v7 & 2;
  if ( (v7 & 2) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) |= 0x10u;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8) = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                     + 0xD0);
  }
  v10 = v7 & 4;
  if ( v10 )
  {
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) |= 8u;
    *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC) = *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 0xDC);
  }
  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  while ( 1 )
  {
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = *(_QWORD *)(a4 + 1072);
    ExAcquireResourceExclusiveLite(
      (PERESOURCE)(*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 56LL),
      1u);
    if ( *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) == *(_QWORD *)(a4 + 1072) )
      break;
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 56LL));
  }
  *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL)
                                                                                   + 8);
  v12 = 0;
  v13 = (_QWORD *)(v4 + 24);
  while ( a4 != *v13 )
  {
    ++v12;
    ++v13;
    if ( v12 )
    {
      ExAcquireResourceExclusiveLite((PERESOURCE)(a4 + 56), 1u);
      break;
    }
  }
  v14 = *(_DWORD *)(a4 + 1296);
  if ( (v14 & 0x4000000) != 0 )
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8) = *(_QWORD *)(*(_QWORD *)(a4 + 1280) + 56LL);
  if ( v9 )
  {
    if ( (v14 & 0x2000000) != 0 )
    {
      if ( (v14 & 0x4000000) != 0 )
        *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) |= 2u;
    }
    else
    {
      *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) |= 1u;
    }
  }
  else if ( (v14 & 0x4000000) != 0 )
  {
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) |= 4u;
  }
  if ( (*(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) & 1) == 0 )
  {
    if ( (*(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC8) & 7) != 0 )
    {
      v8 = PspNetRateControlDispatch(v4 + 168);
      LODWORD(v17) = 0;
      if ( v8 < 0 )
        goto LABEL_77;
    }
    v8 = 0;
    v26 = 0LL;
    RateControlJobFlag = PspGetRateControlJobFlag(0, 1);
    v29 = *(_DWORD *)(a4 + 1296);
    v30 = (v29 & RateControlJobFlag) != 0;
    v32 = v31 & (v29 >> 25);
    if ( *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == (_DWORD)v17 )
    {
      if ( !v30 )
      {
        v8 = -1073741811;
        goto LABEL_62;
      }
      PspRemoveRateControl(a4, 0, v27, 0LL, v17);
    }
    else
    {
      if ( !v30 )
      {
        if ( v32 )
        {
          v8 = -1073741637;
          goto LABEL_62;
        }
        RateControl = PspAllocateRateControl(0LL);
        v26 = (__int64)RateControl;
        v17 = 0LL;
        if ( !RateControl )
        {
          v8 = -1073741801;
          goto LABEL_62;
        }
        *(_QWORD *)(a4 + 1280) = RateControl;
        _InterlockedOr((volatile signed __int32 *)(a4 + 1296), RateControlJobFlag);
        PspModifyAncestorBits(a4, 0x2000000u, 1);
      }
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v17;
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v17;
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v17;
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = a4;
      *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v17;
      *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = 1;
      v8 = PspEnumJobsAndProcessesInJobHierarchy(
             (_QWORD *)a4,
             (int)PspSetRateControlJobPreCallback,
             0,
             (int)PspSetRateControlProcessCallback,
             v4 + 40,
             5u);
    }
    v17 = 0LL;
    if ( v8 >= 0 )
    {
LABEL_66:
      v6 = *(_BYTE *)v4;
      goto LABEL_67;
    }
LABEL_62:
    if ( v26 )
    {
      PspFreeRateControl(v26, 0);
      v17 = 0LL;
    }
    *(_QWORD *)(a4 + 1280) = v17;
    _InterlockedAnd((volatile signed __int32 *)(a4 + 1296), ~RateControlJobFlag);
    if ( !v32 )
    {
      PspModifyAncestorBits(a4, 0x2000000u, 0);
      *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4C) = v34;
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v34;
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v34;
      *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = 0LL;
      *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v34;
      PspEnumJobsAndProcessesInJobHierarchy(
        v35,
        (int)PspSetRateControlJobPreCallback,
        v36,
        (int)PspSetRateControlProcessCallback,
        v4 + 40,
        5u);
      v17 = 0LL;
    }
    goto LABEL_66;
  }
  v8 = 0;
  v15 = 0LL;
  v18 = PspGetRateControlJobFlag(0, 1);
  v19 = (v14 & v18) != 0;
  v21 = v20 & (v14 >> 25);
  if ( *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == (_DWORD)v17 )
  {
    if ( !v19 )
    {
      v8 = -1073741811;
      goto LABEL_42;
    }
    PspRemoveRateControl(a4, 0, v16, 0LL, v17);
  }
  else
  {
    if ( !v19 )
    {
      if ( v21 )
      {
        v8 = -1073741637;
LABEL_42:
        if ( v15 )
        {
          PspFreeRateControl(v15, 0);
          v17 = 0LL;
        }
        *(_QWORD *)(a4 + 1280) = v17;
        _InterlockedAnd((volatile signed __int32 *)(a4 + 1296), ~v18);
        if ( !v21 )
        {
          PspModifyAncestorBits(a4, 0x2000000u, 0);
          *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = v23;
          *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v23;
          *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v23;
          *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = 0LL;
          *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v23;
          PspEnumJobsAndProcessesInJobHierarchy(
            v24,
            (int)PspSetRateControlJobPreCallback,
            v25,
            (int)PspSetRateControlProcessCallback,
            v4 + 80,
            5u);
          LODWORD(v17) = 0;
        }
        v6 = *(_BYTE *)v4;
        goto LABEL_77;
      }
      v22 = PspAllocateRateControl(0LL);
      v15 = (__int64)v22;
      v17 = 0LL;
      if ( !v22 )
      {
        v8 = -1073741801;
        goto LABEL_42;
      }
      *(_QWORD *)(a4 + 1280) = v22;
      _InterlockedOr((volatile signed __int32 *)(a4 + 1296), v18);
      PspModifyAncestorBits(a4, 0x2000000u, 1);
    }
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v17;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58) = v17;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60) = v17;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68) = a4;
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x70) = v17;
    *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x74) = 1;
    v8 = PspEnumJobsAndProcessesInJobHierarchy(
           (_QWORD *)a4,
           (int)PspSetRateControlJobPreCallback,
           0,
           (int)PspSetRateControlProcessCallback,
           v4 + 80,
           5u);
  }
  v17 = 0LL;
  if ( v8 < 0 )
    goto LABEL_42;
  v6 = 1;
  v8 = PspNetRateControlDispatch(v4 + 168);
  v17 = 0LL;
LABEL_67:
  if ( v8 < 0 )
    goto LABEL_78;
  if ( *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) == (_DWORD)v17 )
  {
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = 0LL;
  }
  else
  {
    if ( *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) != (_DWORD)v17 )
    {
      *(_DWORD *)(*(_QWORD *)(a4 + 1280) + 48LL) |= 1u;
      *(_QWORD *)(*(_QWORD *)(a4 + 1280) + 40LL) = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB8);
    }
    if ( v10 )
    {
      *(_DWORD *)(*(_QWORD *)(a4 + 1280) + 48LL) |= 2u;
      *(_BYTE *)(*(_QWORD *)(a4 + 1280) + 64LL) = *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC);
    }
    *(_QWORD *)(*(_QWORD *)(a4 + 1280) + 56LL) = *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA8);
    v37 = *(_QWORD *)(a4 + 1280);
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE0) = *(_DWORD *)(v37 + 48);
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xE8) = *(_QWORD *)(v37 + 40);
    *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xF0) = *(_BYTE *)(v37 + 64);
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
  {
    EtwTraceJobSetQuery(
      a4,
      *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78),
      32,
      v4 + 224,
      v17,
      v8,
      1829);
    LODWORD(v17) = 0;
  }
LABEL_77:
  if ( v8 >= 0 )
    goto LABEL_84;
LABEL_78:
  if ( !v6 )
    goto LABEL_84;
  v38 = PspGetRateControlJobFlag(0, 1);
  v40 = *(_DWORD *)(a4 + 1296);
  v41 = (v40 & v38) != 0;
  v42 = (v40 & 0x2000000) != 0;
  if ( v41 )
  {
    PspRemoveRateControl(a4, 0, v39, 0LL, v17);
  }
  else
  {
    *(_QWORD *)(a4 + 1280) = v17;
    _InterlockedAnd((volatile signed __int32 *)(a4 + 1296), ~v38);
    if ( v42 )
      goto LABEL_84;
    PspModifyAncestorBits(a4, 0x2000000u, 0);
    *(_BYTE *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) = v43;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = v43;
    *(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = v43;
    *(_OWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = v43;
    PspEnumJobsAndProcessesInJobHierarchy(
      v44,
      (int)PspSetRateControlJobPreCallback,
      v45,
      (int)PspSetRateControlProcessCallback,
      v4 + 128,
      5u);
  }
  LODWORD(v17) = 0;
LABEL_84:
  v46 = v17;
  v47 = (_QWORD *)(v4 + 24);
  while ( a4 != *v47 )
  {
    ++v46;
    ++v47;
    if ( v46 )
    {
      ExReleaseResourceLite((PERESOURCE)(a4 + 56));
      break;
    }
  }
  ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(((unsigned __int64)&v50 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) + 56LL));
  if ( CurrentThread )
  {
    v48 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v48;
    if ( !v48
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  return (unsigned int)v8;
}
