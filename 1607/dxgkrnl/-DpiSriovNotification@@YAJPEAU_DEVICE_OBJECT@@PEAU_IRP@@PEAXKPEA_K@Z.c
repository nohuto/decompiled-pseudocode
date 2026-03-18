/*
 * XREFs of ?DpiSriovNotification@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAXKPEA_K@Z @ 0x1C002A674
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovNotification(
        struct _DEVICE_OBJECT *a1,
        PIRP Irp,
        _DWORD *a3,
        unsigned int a4,
        unsigned __int64 *a5)
{
  char *DeviceExtension; // rdi
  unsigned int v8; // ebx
  __int64 v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( a4 < 4 || !a3 )
  {
    v8 = -1073741789;
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = -1073741789LL;
    goto LABEL_12;
  }
  if ( !DeviceExtension[4952] || *((_QWORD *)DeviceExtension + 618) )
  {
    v8 = -1073741811;
    v9 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v9 + 24) = -1073741811LL;
LABEL_12:
    WdLogEvent5_WdError(v9);
    return v8;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1);
  v8 = v12;
  if ( v12 >= 0 )
  {
    if ( *((_QWORD *)DeviceExtension + 617) )
    {
      *a3 = 0;
      *a5 = 4LL;
    }
    else
    {
      *((_QWORD *)DeviceExtension + 618) = Irp;
      Irp->Tail.Overlay.CurrentStackLocation->Control |= 1u;
      IoCsqInsertIrp((PIO_CSQ)(DeviceExtension + 4840), Irp, 0LL);
      v8 = 259;
      v12 = 259;
    }
  }
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
  return v8;
}
