/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60
 * Callers:
 *     IopMarkBootPartition @ 0x140798EDC (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14015A2D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x1404E0B1C (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x1404E7028 (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x140512E00 (_PnpCtxRegSetValue.c)
 *     PipHardwareConfigOpenKey @ 0x1405500C4 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  unsigned int *v2; // rdi
  __int64 v4; // rcx
  int v5; // ebx
  unsigned int *OutputBuffer; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // [rsp+58h] [rbp-9h] BYREF
  unsigned int v14; // [rsp+5Ch] [rbp-5h] BYREF
  int v15; // [rsp+60h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+7h] BYREF
  int v17; // [rsp+70h] [rbp+Fh] BYREF
  int v18; // [rsp+74h] [rbp+13h] BYREF
  SIZE_T NumberOfBytes; // [rsp+78h] [rbp+17h] BYREF
  HANDLE v20; // [rsp+80h] [rbp+1Fh] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+27h] BYREF
  __int64 InputBuffer; // [rsp+98h] [rbp+37h] BYREF
  int v23; // [rsp+A0h] [rbp+3Fh]

  v17 = 0;
  v2 = 0LL;
  v15 = 0;
  v20 = 0LL;
  Handle = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v5 = PipHardwareConfigOpenKey(a1, a2, &Handle);
  if ( v5 >= 0 )
  {
    v14 = 4;
    v5 = PnpCtxRegQueryValue(v4, Handle, L"BootDriverFlags", &v18, &v17, &v14);
    if ( v5 == -1073741772 )
    {
      InputBuffer = 0LL;
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      v23 = 0;
      NumberOfBytes = 0LL;
      v5 = ZwDeviceIoControlFile(a2, 0LL, 0LL, 0LL, &IoStatusBlock, 0x2D1400u, &InputBuffer, 0xCu, &NumberOfBytes, 8u);
      if ( v5 >= 0 )
      {
        OutputBuffer = (unsigned int *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x6E697050u);
        v2 = OutputBuffer;
        if ( !OutputBuffer )
        {
          v5 = -1073741670;
          goto LABEL_4;
        }
        v5 = ZwDeviceIoControlFile(
               a2,
               0LL,
               0LL,
               0LL,
               &IoStatusBlock,
               0x2D1400u,
               &InputBuffer,
               0xCu,
               OutputBuffer,
               HIDWORD(NumberOfBytes));
        if ( v5 < 0 )
          goto LABEL_4;
        v8 = *(_QWORD *)&PiPnpRtlCtx ? **(_QWORD **)&PiPnpRtlCtx : 0LL;
        v5 = SysCtxRegOpenKey(v8, 2147483650LL, (__int64)L"System\\CurrentControlSet\\Control", 0, 1u, (__int64)&v20);
        if ( v5 < 0 )
          goto LABEL_4;
        v14 = 4;
        v5 = PnpCtxRegQueryValue(v9, v20, L"BootDriverFlags", &v18, &v15, &v14);
        if ( v5 < 0 )
          goto LABEL_4;
        v10 = v15 & 0xFFFFFFE3;
        v13 = v15 & 0xFFFFFFE3;
        v11 = v2[7];
        switch ( (_DWORD)v11 )
        {
          case 7:
            v12 = v10 | 0x14;
            break;
          case 0xC:
            v12 = v10 | 8;
            break;
          case 0xF:
            v12 = v10 | 0x1C;
            break;
          default:
LABEL_28:
            v5 = PnpCtxRegSetValue(v11, Handle, L"BootDriverFlags", 4u, &v13, 4u);
            goto LABEL_4;
        }
        v13 = v12;
        goto LABEL_28;
      }
    }
  }
LABEL_4:
  if ( v20 )
    ZwClose(v20);
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v5;
}
