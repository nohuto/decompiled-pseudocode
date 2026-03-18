/*
 * XREFs of UsbhFdoRecordFailure @ 0x1C003EC4C
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0014400 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C0007290 (UsbhDecPdoIoCount.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhGetPortData @ 0x1C001B570 (UsbhGetPortData.c)
 *     memmove @ 0x1C00295C0 (memmove.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoRecordFailure(__int64 a1, ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4, __int64 a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *v10; // rsi
  int *SecurityContext; // rdi
  int v12; // r11d
  unsigned int v13; // ebx
  unsigned int v14; // r10d
  size_t v15; // r15
  PVOID PoolWithTag; // rax
  void *v17; // rcx
  __int64 PortData; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v22; // [rsp+48h] [rbp-30h]

  FdoExt(a1, BugCheckParameter3, (__int64)BugCheckParameter4, a4);
  v10 = PdoExt(BugCheckParameter3, v7, v8, v9);
  SecurityContext = (int *)BugCheckParameter4->Tail.Overlay.CurrentStackLocation->Parameters.Create.SecurityContext;
  Log(a1, 8, 1717854513, *((_QWORD *)v10 + 106), (__int64)SecurityContext);
  v13 = 0;
  if ( *((_QWORD *)v10 + 106) )
    goto LABEL_2;
  if ( !SecurityContext )
  {
    Log(a1, v12, 1717854514, 0LL, 0LL);
LABEL_2:
    v13 = -1073741811;
    goto LABEL_17;
  }
  Log(a1, v12, 1717854515, 0LL, (unsigned int)*SecurityContext);
  if ( v14 > 0x1000 )
    v14 = 4096;
  if ( v14 >= 0x14 )
  {
    v15 = v14;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, v14, 0x42554855u);
    *((_QWORD *)v10 + 106) = PoolWithTag;
    if ( PoolWithTag )
      memset(PoolWithTag, 0, (unsigned int)v15);
    v17 = (void *)*((_QWORD *)v10 + 106);
    if ( v17 )
    {
      memmove(v17, SecurityContext, v15);
      if ( SecurityContext[3] == 7 )
      {
        PortData = UsbhGetPortData(a1, *((_WORD *)v10 + 710));
        if ( PortData )
        {
          _InterlockedExchange((volatile __int32 *)(PortData + 428), 7);
          LOBYTE(v22) = 0;
          UsbhException(
            a1,
            *((unsigned __int16 *)v10 + 710),
            131,
            0,
            0,
            SecurityContext[1],
            SecurityContext[2],
            usbfile_dioctl_c,
            1349,
            v22);
        }
      }
      LOBYTE(v22) = 0;
      UsbhException(
        a1,
        *((unsigned __int16 *)v10 + 710),
        130,
        0,
        0,
        SecurityContext[1],
        SecurityContext[2],
        usbfile_dioctl_c,
        1357,
        v22);
    }
    else
    {
      v13 = -1073741670;
    }
  }
  else
  {
    v13 = -1073741789;
  }
LABEL_17:
  BugCheckParameter4->IoStatus.Status = v13;
  IofCompleteRequest(BugCheckParameter4, 0);
  UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4, v19, v20);
  return v13;
}
