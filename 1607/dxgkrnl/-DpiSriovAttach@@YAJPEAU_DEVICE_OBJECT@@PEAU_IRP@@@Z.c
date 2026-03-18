/*
 * XREFs of ?DpiSriovAttach@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C002A3D0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovAttach(struct _DEVICE_OBJECT *a1, PIRP Irp)
{
  char *DeviceExtension; // rbx
  unsigned int v4; // edi
  __int64 v5; // rax
  _BYTE v7[16]; // [rsp+20h] [rbp-28h] BYREF
  int v8; // [rsp+30h] [rbp-18h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( DeviceExtension[4952] || *((_QWORD *)DeviceExtension + 616) )
  {
    v4 = -1073741811;
    v5 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v5 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v5);
  }
  else
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v7, a1);
    v4 = v8;
    if ( v8 >= 0 )
    {
      if ( *((_DWORD *)DeviceExtension + 59) == 2 )
      {
        DeviceExtension[4952] = 1;
      }
      else
      {
        *((_QWORD *)DeviceExtension + 616) = Irp;
        Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
        IoCsqInsertIrp((PIO_CSQ)(DeviceExtension + 4840), Irp, 0LL);
        v4 = 259;
        v8 = 259;
      }
    }
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v7);
  }
  return v4;
}
