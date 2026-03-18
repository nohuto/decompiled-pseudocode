/*
 * XREFs of ?GetMaxCountFeatureDetails@@YAJPEAUtagHID_POINTER_DEVICE_INFO@@PEAU_HIDP_PREPARSED_DATA@@PEAU_HIDP_CAPS@@PEAU_DEVICE_OBJECT@@PEAU_FILE_OBJECT@@E@Z @ 0x1C01C4EF8
 * Callers:
 *     AssignTouchType @ 0x1C01C74C0 (AssignTouchType.c)
 * Callees:
 *     InitializePointerDeviceFrameContactIdMgr @ 0x1C01CBE10 (InitializePointerDeviceFrameContactIdMgr.c)
 *     UserLogDeviceCategorySpecificError @ 0x1C01CD244 (UserLogDeviceCategorySpecificError.c)
 */

__int64 __fastcall GetMaxCountFeatureDetails(
        ULONG *a1,
        struct _HIDP_PREPARSED_DATA *a2,
        struct _HIDP_CAPS *a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5,
        unsigned __int8 a6)
{
  _BYTE *v10; // rax
  void *OutputBuffer; // rsi
  PIRP v12; // rax
  NTSTATUS Status; // eax
  NTSTATUS v14; // ebx
  unsigned int v16; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  ULONG UsageValue; // [rsp+B0h] [rbp+18h] BYREF

  v10 = (_BYTE *)Win32AllocPoolNonPaged(a3->FeatureReportByteLength, 1768321877LL);
  OutputBuffer = v10;
  if ( !v10 )
    goto LABEL_7;
  *v10 = a6;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          0xB0192u,
          a4,
          0LL,
          0,
          OutputBuffer,
          a3->FeatureReportByteLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
    goto LABEL_7;
  v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = a5;
  Status = IofCallDriver(a4, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status )
  {
    UserLogDeviceCategorySpecificError(1LL, a3->Usage);
LABEL_7:
    v14 = -1073741668;
    goto LABEL_8;
  }
  v14 = HidP_GetUsageValue(HidP_Feature, 0xDu, 0, 0x55u, a1 + 176, a2, (PCHAR)OutputBuffer, a3->FeatureReportByteLength);
  if ( v14 >= 0 && (v16 = a1[176]) != 0 )
  {
    if ( v16 > 0x100 )
    {
      UserLogError(3221225733LL);
      goto LABEL_7;
    }
    if ( !(unsigned int)InitializePointerDeviceFrameContactIdMgr(a1, a3) )
      goto LABEL_7;
  }
  else
  {
    UserLogDeviceCategorySpecificError(1LL, a3->Usage);
    v14 = -1073741668;
  }
  if ( v14 >= 0 && a3->Usage == 5 )
  {
    a1[386] = 3;
    v14 = HidP_GetUsageValue(
            HidP_Feature,
            0xDu,
            0,
            0x59u,
            &UsageValue,
            a2,
            (PCHAR)OutputBuffer,
            a3->FeatureReportByteLength);
    if ( v14 >= 0 )
    {
      a1[386] = ((UsageValue & 1) != 0) + 1;
      EtwTraceTouchPadTypeDiscovered();
    }
  }
LABEL_8:
  if ( OutputBuffer )
    Win32FreePool(OutputBuffer);
  return (unsigned int)v14;
}
