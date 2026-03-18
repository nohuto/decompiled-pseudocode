/*
 * XREFs of RIMGetMaxCountFeatureDetails @ 0x1C0072EBC
 * Callers:
 *     RIMAssignTouchType @ 0x1C0073A74 (RIMAssignTouchType.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     RIMInitializePointerDeviceFrameContactIdMgr @ 0x1C0073030 (RIMInitializePointerDeviceFrameContactIdMgr.c)
 *     rimHidP_GetUsageValue @ 0x1C007308C (rimHidP_GetUsageValue.c)
 */

__int64 __fastcall RIMGetMaxCountFeatureDetails(
        __int64 a1,
        __int64 a2,
        _WORD *a3,
        struct _DEVICE_OBJECT *a4,
        struct _FILE_OBJECT *a5,
        char a6)
{
  _BYTE *v10; // rax
  void *OutputBuffer; // rdi
  PIRP v12; // rax
  NTSTATUS Status; // eax
  _DWORD *v14; // r14
  int UsageValue; // ebx
  ULONG OutputBufferLength[2]; // [rsp+28h] [rbp-70h]
  ULONG OutputBufferLengtha[2]; // [rsp+28h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF
  char v21; // [rsp+B0h] [rbp+18h] BYREF

  v10 = (_BYTE *)Win32AllocPoolNonPaged();
  OutputBuffer = v10;
  if ( !v10 )
  {
    UsageValue = -1073741668;
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Cu,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
    goto LABEL_12;
  }
  *v10 = a6;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v12 = IoBuildDeviceIoControlRequest(
          0xB0192u,
          a4,
          0LL,
          0,
          OutputBuffer,
          (unsigned __int16)a3[4],
          0,
          &Event,
          &IoStatusBlock);
  if ( !v12 )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x19u,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
    goto LABEL_15;
  }
  v12->Tail.Overlay.CurrentStackLocation[-1].FileObject = a5;
  Status = IofCallDriver(a4, v12);
  if ( Status == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    Status = IoStatusBlock.Status;
  }
  if ( Status )
  {
    OutputBufferLength[0] = Status;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Au,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
      *(_QWORD *)OutputBufferLength);
    goto LABEL_15;
  }
  v14 = (_DWORD *)(a1 + 704);
  UsageValue = rimHidP_GetUsageValue(2, 13, 0, 85, a1 + 704, a2, (__int64)OutputBuffer, (unsigned __int16)a3[4]);
  if ( UsageValue < 0 || !*v14 )
  {
    OutputBufferLengtha[0] = UsageValue;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x1Bu,
      (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
      *(_QWORD *)OutputBufferLengtha);
    UsageValue = -1073741668;
    goto LABEL_10;
  }
  if ( *v14 > 0x100u || !(unsigned int)RIMInitializePointerDeviceFrameContactIdMgr(a1, a3) )
  {
LABEL_15:
    UsageValue = -1073741668;
    goto LABEL_12;
  }
LABEL_10:
  if ( UsageValue >= 0 && *a3 == 5 )
  {
    *(_DWORD *)(a1 + 1544) = 3;
    UsageValue = rimHidP_GetUsageValue(2, 13, 0, 89, (__int64)&v21, a2, (__int64)OutputBuffer, (unsigned __int16)a3[4]);
    if ( UsageValue >= 0 )
      *(_DWORD *)(a1 + 1544) = ((v21 & 1) != 0) + 1;
  }
LABEL_12:
  if ( OutputBuffer )
    Win32FreePool();
  return (unsigned int)UsageValue;
}
