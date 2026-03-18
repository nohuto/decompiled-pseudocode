/*
 * XREFs of VfIoDeleteDevice @ 0x140742FD4
 * Callers:
 *     IovDeleteDevice @ 0x1407352B0 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x14016326C (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x14025B0A8 (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x14073A6F0 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x14073A8A0 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x14073F00C (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x140743254 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObject @ 0x140743824 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1407438BC (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x140744384 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1407443D4 (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x14074DFB8 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(__int64 a1, const void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG_PTR *v6; // rax
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  void *LowerDeviceObject; // rsi
  __int64 v13; // r8
  char pszDest[40]; // [rsp+20h] [rbp-68h] BYREF
  CHAR Format[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1;
  if ( ViVerifyDma )
  {
    v4 = *(_QWORD *)(a1 + 312);
    if ( !v4 )
      goto LABEL_21;
    do
    {
      v5 = *(_QWORD *)(v4 + 48);
      if ( !v5 )
        break;
      v4 = *(_QWORD *)(v5 + 312);
      a1 = v5;
    }
    while ( v4 );
    if ( a1 == v3 )
    {
LABEL_21:
      while ( 1 )
      {
        v6 = VF_FIND_DEVICE_INFORMATION_AND_REMOVE(v3);
        if ( !v6 )
          break;
        ViReleaseDmaAdapter((ULONG_PTR)v6);
      }
    }
    else
    {
      VF_MARK_FOR_DEFERRED_REMOVE(a1);
    }
  }
  result = (unsigned int)VfIoDisabled;
  if ( !VfIoDisabled )
  {
    ViDevObjRemove(v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
    {
      ViErrorDisplayDescription(576LL, v8, v9);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject(v3, 0LL);
    LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(v10);
    if ( LowerDeviceObject )
    {
      ViErrorDisplayDescription(513LL, v11, v13);
      if ( RtlStringCbPrintfA(Format, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(Format);
      ViErrorFinishReport(513LL, a2, 0LL, 0LL);
      ObfDereferenceObject(LowerDeviceObject);
    }
    return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
