/*
 * XREFs of RIMGetProductString @ 0x1C0006B34
 * Callers:
 *     RIMCreatePointerDeviceInfo @ 0x1C0008C38 (RIMCreatePointerDeviceInfo.c)
 * Callees:
 *     Win32AllocPoolNonPaged @ 0x1C000DDF0 (Win32AllocPoolNonPaged.c)
 *     WPP_RECORDER_SF_D @ 0x1C00128BC (WPP_RECORDER_SF_D.c)
 *     WPP_RECORDER_SF_ @ 0x1C0012AB0 (WPP_RECORDER_SF_.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 *     wcscmp_0 @ 0x1C0089CF0 (wcscmp_0.c)
 *     memmove @ 0x1C0089D40 (memmove.c)
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
          23,
          (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids,
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
        22,
        (__int64)&WPP_5b4e58945ecf306c06c1bbe0f8341904_Traceguids);
    }
    Win32FreePool(OutputBuffer);
  }
  return Status;
}
