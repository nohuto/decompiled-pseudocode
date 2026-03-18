/*
 * XREFs of ?DpiSriovDetach@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002A488
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovDetach(struct _DEVICE_OBJECT *a1)
{
  char *DeviceExtension; // rbx
  unsigned int v2; // ebx
  __int64 v3; // rax
  void *v4; // rdx
  PIRP v5; // rax
  void *v6; // rdx
  PIRP v7; // rax
  void *v8; // rdx
  PIRP v9; // rax
  _BYTE v11[16]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+30h] [rbp-18h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( DeviceExtension[4952] || *((_QWORD *)DeviceExtension + 616) )
  {
    CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v11, a1);
    if ( v12 >= 0 )
    {
      v4 = (void *)*((_QWORD *)DeviceExtension + 616);
      DeviceExtension[4952] = 0;
      if ( v4 )
      {
        v5 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4840), v4);
        *((_QWORD *)DeviceExtension + 616) = 0LL;
        if ( v5 )
        {
          v5->IoStatus.Information = 0LL;
          v5->IoStatus.Status = -1073741536;
          IofCompleteRequest(v5, 0);
        }
      }
      v6 = (void *)*((_QWORD *)DeviceExtension + 617);
      if ( v6 )
      {
        v7 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4840), v6);
        *((_QWORD *)DeviceExtension + 617) = 0LL;
        if ( v7 )
        {
          v7->IoStatus.Status = 0;
          v7->IoStatus.Information = 0LL;
          IofCompleteRequest(v7, 0);
        }
      }
      v8 = (void *)*((_QWORD *)DeviceExtension + 618);
      if ( v8 )
      {
        v9 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4840), v8);
        *((_QWORD *)DeviceExtension + 618) = 0LL;
        if ( v9 )
        {
          v9->IoStatus.Information = 0LL;
          v9->IoStatus.Status = -1073741536;
          IofCompleteRequest(v9, 0);
        }
      }
    }
    v2 = v12;
    CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v11);
  }
  else
  {
    v2 = -1073741811;
    v3 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v3 + 24) = -1073741811LL;
    WdLogEvent5_WdError(v3);
  }
  return v2;
}
