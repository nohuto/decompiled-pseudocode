/*
 * XREFs of RIMGetProductString @ 0x1C0073538
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0073F6C (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C001A90C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C001AA20 (WPP_RECORDER_SF_.c)
 *     Win32AllocPoolNonPaged @ 0x1C0024780 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C004C2C0 (Win32AllocPool.c)
 *     wcscmp_0 @ 0x1C0085AC0 (wcscmp_0.c)
 *     memmove @ 0x1C0085B00 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  __int64 v9; // rax
  size_t Information; // r8
  void *v11; // rcx
  __int64 OutputBufferLength; // [rsp+28h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged();
  if ( OutputBuffer )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v8 = IoBuildDeviceIoControlRequest(0xB01BEu, a2, 0LL, 0, OutputBuffer, 0x200u, 0, &Event, &IoStatusBlock);
    if ( v8 )
    {
      v8->Tail.Overlay.CurrentStackLocation[-1].FileObject = a3;
      Status = IofCallDriver(a2, v8);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status )
      {
        LODWORD(OutputBufferLength) = Status;
        WPP_RECORDER_SF_D(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          3u,
          3u,
          0x13u,
          (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
          OutputBufferLength);
      }
      else
      {
        v9 = Win32AllocPool();
        *(_QWORD *)(a1 + 280) = v9;
        if ( v9 )
        {
          *(_WORD *)(v9 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v11 = *(void **)(a1 + 280);
          *(_WORD *)(a1 + 272) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 274) = Information + 2;
          memmove(v11, OutputBuffer, Information);
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 280), L"VHidPen") )
            *(_DWORD *)(a1 + 236) |= 0x8000u;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        3u,
        0x12u,
        (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids);
    }
    Win32FreePool();
  }
  return Status;
}
