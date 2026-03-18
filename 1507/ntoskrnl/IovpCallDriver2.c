/*
 * XREFs of IovpCallDriver2 @ 0x14073FD1C
 * Callers:
 *     VfAfterCallDriver @ 0x140740DEC (VfAfterCallDriver.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     IovUtilGetLowerDeviceObject @ 0x140743824 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x14074AC7C (VfIrpDatabaseEntryReleaseLock.c)
 *     IovpSessionDataDereference @ 0x14074BB7C (IovpSessionDataDereference.c)
 */

void __fastcall IovpCallDriver2(__int64 a1, int *a2, __int64 a3)
{
  _DWORD *v3; // r15
  int *v4; // r14
  __int64 v6; // rsi
  volatile signed __int32 *v7; // rcx
  unsigned __int8 CurrentIrql; // di
  bool v9; // zf
  int v10; // eax
  int *v11; // rdi
  __int64 LowerDeviceObject; // rax
  void *v13; // r12
  int v14; // ecx
  __int64 v15; // rcx
  const void *v16; // r13
  __int64 v17; // rcx
  int v18; // ecx
  __int64 v19; // rdi
  const void *v20; // r12
  const void *v21; // r13
  __int64 v22; // rcx
  __int64 v23; // r12
  int v24; // edi
  const void *v25; // r13
  const void *v26; // rdi
  const void *v27; // r12
  const void *v28; // rdi
  const void *v29; // r12
  __int64 v30; // rdx
  _QWORD *v31; // rcx
  int v32; // eax
  const void *v33; // [rsp+40h] [rbp-C0h]
  CHAR v34[64]; // [rsp+50h] [rbp-B0h] BYREF
  CHAR v35[96]; // [rsp+90h] [rbp-70h] BYREF
  CHAR v36[96]; // [rsp+F0h] [rbp-10h] BYREF
  CHAR Format[96]; // [rsp+150h] [rbp+50h] BYREF
  CHAR v38[112]; // [rsp+1B0h] [rbp+B0h] BYREF
  char pszDest[112]; // [rsp+220h] [rbp+120h] BYREF
  CHAR v40[112]; // [rsp+290h] [rbp+190h] BYREF
  CHAR v41[128]; // [rsp+300h] [rbp+200h] BYREF

  v3 = *(_DWORD **)a1;
  v4 = a2;
  if ( !*(_QWORD *)a1 )
    return;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = (volatile signed __int32 *)(v6 + 8);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v7);
  }
  else if ( _interlockedbittestandset64(v7, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v7);
  }
  v9 = *(_QWORD *)(v6 + 216) == 0LL;
  *(_BYTE *)(v6 + 16) = CurrentIrql;
  if ( !v9 && (*(_DWORD *)(a1 + 24) & 0x2000000) != 0 )
    *v4 = 259;
  v10 = *(_DWORD *)(a1 + 24);
  v11 = *(int **)(a1 + 160);
  if ( (v10 & 0x20000000) != 0 && *v4 != 259 && (v10 & 0x1000000) == 0 )
  {
    LowerDeviceObject = IovUtilGetLowerDeviceObject(*(_QWORD *)(a1 + 160));
    v13 = (void *)LowerDeviceObject;
    if ( (*(_DWORD *)(a1 + 24) & 0x10000000) != 0 )
    {
LABEL_16:
      if ( !LowerDeviceObject )
        goto LABEL_25;
      v15 = *(_QWORD *)(*((_QWORD *)v11 + 1) + 80LL);
      if ( v15 && *(_QWORD *)(v15 + 104) )
        goto LABEL_23;
      v16 = *(const void **)(a1 + 48);
      v33 = *(const void **)(a1 + 72);
      ViErrorDisplayDescription(541LL, a2, a3);
      if ( RtlStringCbPrintfA(pszDest, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", v16, v33, v11) >= 0 )
        VfUtilDbgPrint(pszDest);
      v17 = 541LL;
      goto LABEL_22;
    }
    a2 = *(int **)(a1 + 64);
    a3 = *(_QWORD *)(*((_QWORD *)a2 + 39) + 40LL);
    if ( !a3 )
      goto LABEL_23;
    v14 = *(_DWORD *)(a3 + 396);
    if ( (v14 & 0x10) == 0 )
    {
      if ( (v14 & 0x10000) == 0 )
        goto LABEL_23;
      goto LABEL_16;
    }
    if ( v11 == a2 )
    {
      if ( (unsigned int)IovUtilIsDeviceObjectMarked(v11, 0LL) )
      {
        v16 = *(const void **)(a1 + 48);
        v33 = *(const void **)(a1 + 72);
        ViErrorDisplayDescription(545LL, a2, a3);
        if ( RtlStringCbPrintfA(v38, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", v16, v33, v11) >= 0 )
          VfUtilDbgPrint(v38);
        v17 = 545LL;
LABEL_22:
        ViErrorFinishReport(v17, v16, v33, v11);
      }
    }
    else if ( !(unsigned int)IovUtilIsDeviceObjectMarked(v11, 0LL)
           && (unsigned int)IovUtilIsDeviceObjectMarked(v11, 0LL) )
    {
      v16 = *(const void **)(a1 + 48);
      v33 = *(const void **)(a1 + 72);
      ViErrorDisplayDescription(547LL, a2, a3);
      if ( RtlStringCbPrintfA(v40, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", v16, v33, v11) >= 0 )
        VfUtilDbgPrint(v40);
      v17 = 547LL;
      goto LABEL_22;
    }
LABEL_23:
    if ( v13 )
      ObfDereferenceObject(v13);
  }
LABEL_25:
  v18 = *(_DWORD *)(a1 + 24);
  if ( (v18 & 0x40000000) == 0 || (v3[8] & 2) != 0 )
    goto LABEL_49;
  v19 = *v4;
  if ( (v18 & 0x2000000) != 0 )
  {
    if ( (_DWORD)v19 == 259 || (v18 & 0x1000000) != 0 )
      goto LABEL_49;
    v20 = *(const void **)(a1 + 48);
    v21 = *(const void **)(a1 + 72);
    ViErrorDisplayDescription(574LL, a2, a3);
    if ( RtlStringCbPrintfA(Format, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", v20, v21, v19) >= 0 )
      VfUtilDbgPrint(Format);
    v22 = 574LL;
  }
  else
  {
    if ( (_DWORD)v19 != 259 && (v18 & 0x1000000) == 0 )
      goto LABEL_49;
    v20 = *(const void **)(a1 + 48);
    v21 = *(const void **)(a1 + 72);
    ViErrorDisplayDescription(588LL, a2, a3);
    if ( RtlStringCbPrintfA(v36, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", v20, v21, v19) >= 0 )
      VfUtilDbgPrint(v36);
    v22 = 588LL;
  }
  ViErrorFinishReport(v22, v20, v21, v19);
  v3[8] |= 2u;
LABEL_49:
  if ( (*(_DWORD *)(a1 + 24) & 0x40000000) != 0 )
  {
    v23 = *(int *)(a1 + 56);
    v24 = *v4;
    if ( *v4 == (_DWORD)v23 || v24 == 259 )
    {
      if ( v24 == -1 )
      {
        v26 = *(const void **)(a1 + 48);
        v27 = *(const void **)(a1 + 72);
        ViErrorDisplayDescription(549LL, a2, a3);
        if ( RtlStringCbPrintfA(v35, 0x57uLL, "CulpritAddress = %p, Irp = %p, Status = 0x%x.\n", v26, v27, -1) >= 0 )
          VfUtilDbgPrint(v35);
        ViErrorFinishReport(549LL, v26, v27, -1LL);
      }
    }
    else
    {
      if ( (v3[8] & 1) == 0 )
      {
        v25 = *(const void **)(a1 + 48);
        ViErrorDisplayDescription(548LL, a2, a3);
        if ( RtlStringCbPrintfA(
               v41,
               0x7CuLL,
               "CulpritAddress = %p, Irp = %p, ExpectedStatus = 0x%x, ActualStatus = 0x%x.\n",
               v25,
               *(const void **)(a1 + 72),
               v23,
               v24) >= 0 )
          VfUtilDbgPrint(v41);
        ViErrorFinishReport(548LL, v25, *(_QWORD *)(a1 + 72), v23);
      }
      v3[8] |= 1u;
    }
  }
  else
  {
    if ( *v4 != 259 )
    {
      if ( (*(_DWORD *)(v6 + 56) & 0x400000) == 0 )
      {
        v28 = *(const void **)(a1 + 48);
        v29 = *(const void **)(a1 + 72);
        ViErrorDisplayDescription(550LL, a2, a3);
        if ( RtlStringCbPrintfA(v34, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v28, v29) >= 0 )
          VfUtilDbgPrint(v34);
        ViErrorFinishReport(550LL, v28, v29, 0LL);
      }
      *(_DWORD *)(v6 + 56) |= 0x400000u;
    }
    *(_DWORD *)(*(_QWORD *)(a1 + 8) + 4LL) |= 0x4000000u;
    v30 = *(_QWORD *)(a1 + 32);
    v31 = *(_QWORD **)(a1 + 40);
    if ( *(_QWORD *)(v30 + 8) != a1 + 32 || *v31 != a1 + 32 )
      __fastfail(3u);
    *v31 = v30;
    *(_QWORD *)(v30 + 8) = v31;
  }
  v32 = *(_DWORD *)(a1 + 24);
  if ( (v32 & 0x8000000) != 0 && *v4 != 259 && (v32 & 0x1000000) == 0 )
    *v4 = *(_DWORD *)(a1 + 60);
  IovpSessionDataDereference(v3);
  _InterlockedDecrement((volatile signed __int32 *)(v6 + 20));
  VfIrpDatabaseEntryReleaseLock(v6);
}
