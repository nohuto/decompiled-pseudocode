/*
 * XREFs of UsbhBusRemove @ 0x1C0042ED0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDispatch_BusEvent @ 0x1C000CF00 (UsbhDispatch_BusEvent.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhBusRemove(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rdi
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _IO_WORKITEM *v11; // rcx
  __int64 v12; // rbx
  unsigned __int16 v13; // si
  PIO_WORKITEM *v14; // rbx
  void *v15; // rcx

  v6 = FdoExt((__int64)a1, a2, a3, a4);
  UsbhDispatch_BusEvent(a1, a2, 2LL, v7);
  v11 = (struct _IO_WORKITEM *)*((_QWORD *)v6 + 148);
  if ( v11 )
  {
    IoFreeWorkItem(v11);
    *((_QWORD *)v6 + 148) = 0LL;
  }
  v12 = *((_QWORD *)v6 + 382);
  if ( v12 )
  {
    v13 = 0;
    v14 = (PIO_WORKITEM *)(v12 + 2456);
    while ( v13 < *((unsigned __int8 *)FdoExt((__int64)a1, v8, v9, v10) + 2938) )
    {
      if ( *v14 )
      {
        IoFreeWorkItem(*v14);
        *v14 = 0LL;
      }
      v14 += 366;
      ++v13;
    }
  }
  v15 = (void *)*((_QWORD *)v6 + 382);
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)v6 + 382) = 0LL;
  }
}
