/*
 * XREFs of ?DpiSriovEventComplete@@YAJPEAU_DEVICE_OBJECT@@PEAXK@Z @ 0x1C002A5B0
 * Callers:
 *     DpiFdoDispatchIoctl @ 0x1C0193CE0 (DpiFdoDispatchIoctl.c)
 * Callees:
 *     ??0CInterfaceCallContext@@QEAA@PEAX@Z @ 0x1C002A200 (--0CInterfaceCallContext@@QEAA@PEAX@Z.c)
 *     ??1CInterfaceCallContext@@QEAA@XZ @ 0x1C002A2A8 (--1CInterfaceCallContext@@QEAA@XZ.c)
 */

__int64 __fastcall DpiSriovEventComplete(struct _DEVICE_OBJECT *a1, NTSTATUS *a2, unsigned int a3)
{
  char *DeviceExtension; // rbx
  unsigned int v5; // ebx
  __int64 v6; // rax
  void *v7; // rdx
  PIRP v8; // rax
  IRP *v9; // rcx
  NTSTATUS v10; // eax
  _BYTE v12[16]; // [rsp+20h] [rbp-28h] BYREF
  int v13; // [rsp+30h] [rbp-18h]

  DeviceExtension = (char *)a1->DeviceExtension;
  if ( a3 < 4 || !a2 )
  {
    v5 = -1073741789;
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = -1073741789LL;
    goto LABEL_11;
  }
  if ( !DeviceExtension[4952] )
  {
    v5 = -1073741811;
    v6 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v6 + 24) = -1073741811LL;
LABEL_11:
    WdLogEvent5_WdError(v6);
    return v5;
  }
  CInterfaceCallContext::CInterfaceCallContext((CInterfaceCallContext *)v12, a1);
  if ( v13 >= 0 )
  {
    v7 = (void *)*((_QWORD *)DeviceExtension + 617);
    if ( v7 )
    {
      v8 = IoCsqRemoveNextIrp((PIO_CSQ)(DeviceExtension + 4840), v7);
      *((_QWORD *)DeviceExtension + 617) = 0LL;
      v9 = v8;
      if ( v8 )
      {
        v10 = *a2;
        v9->IoStatus.Information = 0LL;
        v9->IoStatus.Status = v10;
        IofCompleteRequest(v9, 0);
      }
    }
  }
  v5 = v13;
  CInterfaceCallContext::~CInterfaceCallContext((CInterfaceCallContext *)v12);
  return v5;
}
