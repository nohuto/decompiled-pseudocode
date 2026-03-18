/*
 * XREFs of RIMGetProductString @ 0x1C0009C4C
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0007C58 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     WPP_RECORDER_SF_D @ 0x1C004695C (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0046B20 (WPP_RECORDER_SF_.c)
 *     wcscmp_0 @ 0x1C0088D50 (wcscmp_0.c)
 *     memmove @ 0x1C0088D80 (memmove.c)
 */

__int64 __fastcall RIMGetProductString(__int64 a1, struct _DEVICE_OBJECT *a2, struct _FILE_OBJECT *a3)
{
  unsigned int Status; // ebx
  void *OutputBuffer; // rsi
  PIRP v8; // rax
  int v9; // edx
  __int64 v10; // rax
  size_t Information; // r8
  void *v12; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-38h] BYREF

  Status = -1073741811;
  OutputBuffer = (void *)Win32AllocPoolNonPaged(512LL, 1802531666LL);
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
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_D(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          3,
          19,
          (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
          Status);
      }
      else
      {
        v10 = Win32AllocPool(IoStatusBlock.Information + 2, 2003071826LL);
        *(_QWORD *)(a1 + 296) = v10;
        if ( v10 )
        {
          *(_WORD *)(v10 + 2 * (IoStatusBlock.Information >> 1)) = 0;
          Information = IoStatusBlock.Information;
          v12 = *(void **)(a1 + 296);
          *(_WORD *)(a1 + 288) = IoStatusBlock.Information;
          *(_WORD *)(a1 + 290) = Information + 2;
          memmove(v12, OutputBuffer, Information);
          if ( !wcscmp_0(*(const wchar_t **)(a1 + 296), L"VHidPen") )
            *(_DWORD *)(a1 + 252) |= 0x20000u;
        }
      }
    }
    else
    {
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        3,
        3,
        18,
        (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids);
    }
    Win32FreePool(OutputBuffer);
  }
  return Status;
}
