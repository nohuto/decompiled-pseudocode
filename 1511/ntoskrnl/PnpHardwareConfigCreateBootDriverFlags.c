/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x140523794
 * Callers:
 *     IopMarkBootPartition @ 0x140753448 (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x14043BE70 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegSetValue @ 0x14045D128 (_PnpCtxRegSetValue.c)
 *     _PnpCtxRegQueryValue @ 0x14045D6F8 (_PnpCtxRegQueryValue.c)
 *     PipHardwareConfigOpenKey @ 0x1405238F8 (PipHardwareConfigOpenKey.c)
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
  HANDLE v18; // [rsp+78h] [rbp+17h] BYREF
  int v19; // [rsp+80h] [rbp+1Fh] BYREF
  SIZE_T NumberOfBytes; // [rsp+88h] [rbp+27h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp+2Fh] BYREF
  __int64 InputBuffer; // [rsp+A0h] [rbp+3Fh] BYREF
  int v23; // [rsp+A8h] [rbp+47h]

  v19 = 0;
  v2 = 0LL;
  v15 = 0;
  v18 = 0LL;
  Handle = 0LL;
  if ( !a2 )
    return (unsigned int)-1073741811;
  v5 = PipHardwareConfigOpenKey(a1, a2, &Handle);
  if ( v5 >= 0 )
  {
    v14 = 4;
    v5 = PnpCtxRegQueryValue(v4, Handle, L"BootDriverFlags", &v17, &v19, &v14);
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
        v5 = SysCtxRegOpenKey(v8, 2147483650LL, (__int64)L"System\\CurrentControlSet\\Control", 0, 1u, (__int64)&v18);
        if ( v5 < 0 )
          goto LABEL_4;
        v14 = 4;
        v5 = PnpCtxRegQueryValue(v9, v18, L"BootDriverFlags", &v17, &v15, &v14);
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
            v5 = PnpCtxRegSetValue(v11, Handle, (__int64)L"BootDriverFlags", 4LL, (__int64)&v13, 4u);
            goto LABEL_4;
        }
        v13 = v12;
        goto LABEL_28;
      }
    }
  }
LABEL_4:
  if ( v18 )
    ZwClose(v18);
  if ( Handle )
    ZwClose(Handle);
  if ( v2 )
    ExFreePoolWithTag(v2, 0);
  return (unsigned int)v5;
}
