/*
 * XREFs of PnpHardwareConfigCreateBootDriverFlags @ 0x14058F2E0
 * Callers:
 *     IopMarkBootPartition @ 0x1407B65F4 (IopMarkBootPartition.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x14017F0D0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     _SysCtxRegOpenKey @ 0x140435B90 (_SysCtxRegOpenKey.c)
 *     _PnpCtxRegQueryValue @ 0x14043E1AC (_PnpCtxRegQueryValue.c)
 *     _PnpCtxRegSetValue @ 0x1405575A0 (_PnpCtxRegSetValue.c)
 *     PipHardwareConfigOpenKey @ 0x14058F444 (PipHardwareConfigOpenKey.c)
 */

__int64 __fastcall PnpHardwareConfigCreateBootDriverFlags(__int64 a1, void *a2)
{
  unsigned int *v2; // rdi
  __int64 v4; // rcx
  int Value; // ebx
  unsigned int *OutputBuffer; // rax
  __int64 v8; // rcx
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // [rsp+58h] [rbp-9h] BYREF
  int v14; // [rsp+5Ch] [rbp-5h] BYREF
  int v15; // [rsp+60h] [rbp-1h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp+7h] BYREF
  _BYTE v17[8]; // [rsp+70h] [rbp+Fh] BYREF
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
  Value = PipHardwareConfigOpenKey(a1, a2, &Handle);
  if ( Value >= 0 )
  {
    v14 = 4;
    Value = PnpCtxRegQueryValue(v4, Handle, (__int64)L"BootDriverFlags", (__int64)v17, (__int64)&v19, (__int64)&v14);
    if ( Value == -1073741772 )
    {
      InputBuffer = 0LL;
      IoStatusBlock.Pointer = 0LL;
      IoStatusBlock.Information = 0LL;
      v23 = 0;
      NumberOfBytes = 0LL;
      Value = ZwDeviceIoControlFile(
                a2,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                0x2D1400u,
                &InputBuffer,
                0xCu,
                &NumberOfBytes,
                8u);
      if ( Value >= 0 )
      {
        OutputBuffer = (unsigned int *)ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes), 0x6E697050u);
        v2 = OutputBuffer;
        if ( !OutputBuffer )
        {
          Value = -1073741670;
          goto LABEL_4;
        }
        Value = ZwDeviceIoControlFile(
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
        if ( Value < 0 )
          goto LABEL_4;
        v8 = *(_QWORD *)&PiPnpRtlCtx ? **(_QWORD **)&PiPnpRtlCtx : 0LL;
        Value = SysCtxRegOpenKey(v8, (char *)0x80000002LL, L"System\\CurrentControlSet\\Control", 0, 1u, &v18);
        if ( Value < 0 )
          goto LABEL_4;
        v14 = 4;
        Value = PnpCtxRegQueryValue(v9, v18, (__int64)L"BootDriverFlags", (__int64)v17, (__int64)&v15, (__int64)&v14);
        if ( Value < 0 )
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
            Value = PnpCtxRegSetValue(v11, Handle, L"BootDriverFlags", 4u, &v13, 4u);
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
  return (unsigned int)Value;
}
