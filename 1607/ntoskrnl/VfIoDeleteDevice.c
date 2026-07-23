/*
 * XREFs of VfIoDeleteDevice @ 0x14070D840
 * Callers:
 *     IovDeleteDevice @ 0x140700F88 (IovDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCbPrintfA @ 0x140139F84 (RtlStringCbPrintfA.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     VfUtilDbgPrint @ 0x140222478 (VfUtilDbgPrint.c)
 *     IovUtilMarkDeviceObject @ 0x140223358 (IovUtilMarkDeviceObject.c)
 *     VF_FIND_DEVICE_INFORMATION_AND_REMOVE @ 0x140706088 (VF_FIND_DEVICE_INFORMATION_AND_REMOVE.c)
 *     VF_MARK_FOR_DEFERRED_REMOVE @ 0x140706194 (VF_MARK_FOR_DEFERRED_REMOVE.c)
 *     ViReleaseDmaAdapter @ 0x14070A27C (ViReleaseDmaAdapter.c)
 *     ViDevObjRemove @ 0x14070DAC0 (ViDevObjRemove.c)
 *     IovUtilGetLowerDeviceObject @ 0x14070E044 (IovUtilGetLowerDeviceObject.c)
 *     IovUtilIsDeviceObjectMarked @ 0x14070E0DC (IovUtilIsDeviceObjectMarked.c)
 *     ViErrorDisplayDescription @ 0x14070EBA4 (ViErrorDisplayDescription.c)
 *     ViErrorFinishReport @ 0x14070EBF4 (ViErrorFinishReport.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140719390 (VfIrpLogDeleteDeviceLogs.c)
 */

__int64 __fastcall VfIoDeleteDevice(struct _LIST_ENTRY *a1, const void *a2)
{
  struct _LIST_ENTRY *v3; // rbx
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *v6; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  void *LowerDeviceObject; // rsi
  char pszDest[40]; // [rsp+20h] [rbp-68h] BYREF
  CHAR Format[40]; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1;
  if ( ViVerifyDma )
  {
    Blink = a1[19].Blink;
    if ( !Blink )
      goto LABEL_21;
    do
    {
      Flink = Blink[3].Flink;
      if ( !Flink )
        break;
      Blink = Flink[19].Blink;
      a1 = Flink;
    }
    while ( Blink );
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
    ViDevObjRemove((int)v3);
    if ( (unsigned int)IovUtilIsDeviceObjectMarked(v3, 0LL) )
    {
      ViErrorDisplayDescription(576LL);
      if ( RtlStringCbPrintfA(pszDest, 0x26uLL, "CulpritAddress = %p.\n", a2) >= 0 )
        VfUtilDbgPrint(pszDest);
      ViErrorFinishReport(576LL, a2, 0LL, 0LL);
    }
    IovUtilMarkDeviceObject((__int64)v3, 0LL);
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
