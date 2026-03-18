/*
 * XREFs of VfIoDeleteDevice @ 0x1406C17A8
 * Callers:
 *     IovDeleteDevice @ 0x1406B5120 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x140136BD4 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x14020BA70 (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x1406B9FE4 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x1406BA0F0 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x1406BE1F4 (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x1406C1A28 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObject @ 0x1406C1F84 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1406C201C (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x1406C2AE4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x1406C2B34 (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x1406CA980 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(__int64 a1, const void *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdx
  ULONG_PTR *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  void *LowerDeviceObject; // rsi
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
      ViErrorDisplayDescription(576LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject(v3, 0LL);
    LowerDeviceObject = (void *)IovUtilGetLowerDeviceObject(v8);
    if ( LowerDeviceObject )
    {
      ViErrorDisplayDescription(513LL);
      if ( RtlStringCbPrintfA(Format, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(Format);
      ViErrorFinishReport(513LL, a2, 0LL, 0LL);
      ObfDereferenceObject(LowerDeviceObject);
    }
    return VfIrpLogDeleteDeviceLogs(v3);
  }
  return result;
}
