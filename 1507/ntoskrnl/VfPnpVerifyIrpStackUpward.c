/*
 * XREFs of VfPnpVerifyIrpStackUpward @ 0x14074CE18
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     PpvUtilIsPdo @ 0x140735D10 (PpvUtilIsPdo.c)
 *     IovUtilGetBottomDeviceObject @ 0x1407437CC (IovUtilGetBottomDeviceObject.c)
 *     IovUtilGetLowerDeviceObject @ 0x140743824 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsWdmStack @ 0x140743A30 (IovUtilIsWdmStack.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     ViPnpVerifyMinorWasProcessedProperly @ 0x14074D3D8 (ViPnpVerifyMinorWasProcessedProperly.c)
 */

__int64 __fastcall VfPnpVerifyIrpStackUpward(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 result; // rax
  const void *v10; // rbx
  const void *v11; // rdi
  int v12; // r14d
  int v13; // ecx
  int v14; // r15d
  int v15; // r15d
  void *LowerDeviceObject; // rax
  __int64 v17; // r15
  const void *v18; // rbx
  const void *v19; // rsi
  _QWORD *v20; // rbx
  _QWORD *BottomDeviceObject; // rcx
  BOOL IsPdo; // ebx
  PVOID v23; // rdx
  const void *v24; // rbx
  const void *v25; // r14
  __int64 v26; // [rsp+30h] [rbp-D0h]
  CHAR Format[64]; // [rsp+40h] [rbp-C0h] BYREF
  CHAR v28[64]; // [rsp+80h] [rbp-80h] BYREF
  char v29[64]; // [rsp+C0h] [rbp-40h] BYREF
  char pszDest[64]; // [rsp+100h] [rbp+0h] BYREF
  CHAR v31[112]; // [rsp+140h] [rbp+40h] BYREF
  CHAR v32[112]; // [rsp+1B0h] [rbp+B0h] BYREF

  result = IovUtilIsWdmStack(*(_QWORD **)(a2 + 40));
  if ( !(_DWORD)result )
    return result;
  v10 = *(const void **)a1;
  result = *(_QWORD *)(a1 + 240);
  v11 = *(const void **)(a4 + 40);
  v26 = result;
  v12 = *(_DWORD *)(*(_QWORD *)a1 + 48LL);
  if ( !a5 )
    goto LABEL_23;
  v13 = *(_DWORD *)(a1 + 56) & 0x20;
  v14 = (*(_DWORD *)(a4 + 4) >> 28) & 1;
  if ( *(int *)(a4 + 4) < 0 )
  {
LABEL_21:
    if ( !v14 )
      goto LABEL_23;
LABEL_22:
    result = ViPnpVerifyMinorWasProcessedProperly(
               (_DWORD)v10,
               a2,
               0,
               (unsigned int)(v12 != -1073741637) + 1,
               (__int64)v11,
               0);
    goto LABEL_23;
  }
  if ( v14 )
    goto LABEL_22;
  if ( *(_BYTE *)(a2 + 1) != 8 )
  {
    if ( !v13 )
    {
      result = v12 + 0x80000000;
      if ( (result & 0x80000000) == 0 && v12 != -1073741637 )
        goto LABEL_29;
    }
    if ( v13 )
    {
      v15 = 557;
      ViErrorDisplayDescription(557);
      if ( RtlStringCbPrintfA(pszDest, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v11, v10) >= 0 )
        VfUtilDbgPrint(pszDest);
LABEL_12:
      result = ViErrorFinishReport(v15, (ULONG_PTR)v11, (ULONG_PTR)v10, 0LL);
      goto LABEL_23;
    }
    result = (unsigned int)VfIoSwitchedOffNoReboot;
    if ( VfIoSwitchedOffNoReboot )
      goto LABEL_23;
    if ( v12 >= 0 )
    {
      v15 = 558;
      ViErrorDisplayDescription(558);
      if ( RtlStringCbPrintfA(v29, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v11, v10) >= 0 )
        VfUtilDbgPrint(v29);
      goto LABEL_12;
    }
    if ( v12 != -1073741637 )
      goto LABEL_29;
    ViErrorDisplayDescription(559);
    if ( RtlStringCbPrintfA(Format, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v11, v10) >= 0 )
      VfUtilDbgPrint(Format);
    result = ViErrorFinishReport(559, (ULONG_PTR)v11, (ULONG_PTR)v10, 0LL);
    goto LABEL_21;
  }
LABEL_23:
  if ( v12 == -1073741637 && (*(_DWORD *)(a3 + 4) & 0x2000000) == 0 && *(_DWORD *)(a3 + 96) != -1073741637 )
  {
    ViErrorDisplayDescription(534);
    if ( RtlStringCbPrintfA(v28, 0x40uLL, "CulpritAddress = %p, Irp = %p.\n", v11, v10) >= 0 )
      VfUtilDbgPrint(v28);
    result = ViErrorFinishReport(534, (ULONG_PTR)v11, (ULONG_PTR)v10, 0LL);
    *(_DWORD *)(a3 + 4) |= 0x2000000u;
  }
LABEL_29:
  if ( *(_BYTE *)(a2 + 1) != 23 )
    return result;
  LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(*(_QWORD *)(a2 + 40));
  if ( !LowerDeviceObject )
  {
    v20 = *(_QWORD **)(a2 + 40);
    BottomDeviceObject = IovUtilGetBottomDeviceObject(v20);
    if ( BottomDeviceObject == v20 )
    {
      IsPdo = PpvUtilIsPdo((__int64)BottomDeviceObject);
      ObfDereferenceObject(v23);
      if ( IsPdo )
        goto LABEL_32;
    }
    else
    {
      ObfDereferenceObject(BottomDeviceObject);
    }
    v17 = v26;
    v24 = *(const void **)(a2 + 40);
    v25 = *(const void **)(v26 + 64);
    ViErrorDisplayDescription(577);
    if ( RtlStringCbPrintfA(v31, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", v11, v25, v24) >= 0 )
      VfUtilDbgPrint(v31);
    ViErrorFinishReport(577, (ULONG_PTR)v11, (ULONG_PTR)v25, (__int64)v24);
    goto LABEL_33;
  }
  ObfDereferenceObject(LowerDeviceObject);
LABEL_32:
  v17 = v26;
LABEL_33:
  v18 = *(const void **)(a2 + 40);
  result = IovUtilIsDeviceObjectMarked((__int64)v18, 0);
  if ( (_DWORD)result )
  {
    v19 = *(const void **)(v17 + 64);
    ViErrorDisplayDescription(578);
    if ( RtlStringCbPrintfA(v32, 0x63uLL, "CulpritAddress = %p, Irp = %p, DeviceObject = %p.\n", v11, v19, v18) >= 0 )
      VfUtilDbgPrint(v32);
    return ViErrorFinishReport(578, (ULONG_PTR)v11, (ULONG_PTR)v19, (__int64)v18);
  }
  return result;
}
