/*
 * XREFs of USBHwLogStartFailure @ 0x1C001D648
 * Callers:
 *     USBDeviceStart @ 0x1C001BB70 (USBDeviceStart.c)
 * Callees:
 *     memmove @ 0x1C0007F00 (memmove.c)
 */

void __fastcall USBHwLogStartFailure(__int64 a1, int a2, const void *a3, unsigned int a4)
{
  __int64 v8; // r14
  _DWORD *PoolWithTag; // rbx
  PIRP v10; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  v8 = a4 + 20;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  if ( (unsigned __int64)(v8 - 4) > 0x1000 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPool, (unsigned int)v8, 0x41627845u);
    if ( PoolWithTag )
    {
      v10 = IoBuildDeviceIoControlRequest(
              0x22002Bu,
              *(PDEVICE_OBJECT *)(a1 + 40),
              0LL,
              0,
              0LL,
              0,
              1u,
              &Object,
              &IoStatusBlock);
      if ( v10 )
      {
        *PoolWithTag = v8;
        PoolWithTag[3] = 3;
        PoolWithTag[1] = a2;
        memmove(PoolWithTag + 4, a3, a4);
        v10->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)PoolWithTag;
        if ( IofCallDriver(*(PDEVICE_OBJECT *)(a1 + 40), v10) == 259 )
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      }
      ExFreePool(PoolWithTag);
    }
  }
}
