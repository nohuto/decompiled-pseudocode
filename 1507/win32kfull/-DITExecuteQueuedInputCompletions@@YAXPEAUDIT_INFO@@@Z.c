/*
 * XREFs of ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C00F27BC
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F1FE0 (UserProcessDwmInput.c)
 * Callees:
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D780C (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 */

void __fastcall DITExecuteQueuedInputCompletions(struct DIT_INFO *a1)
{
  __int64 v2; // rcx
  struct _IO_STATUS_BLOCK **v3; // rdi
  struct _IO_STATUS_BLOCK *v4; // rbx
  struct _IO_STATUS_BLOCK **Pointer; // rax
  __int64 v6; // rcx

  EnterDeviceInfoListCrit_(a1);
  v3 = (struct _IO_STATUS_BLOCK **)((char *)a1 + 64);
  while ( *v3 != (struct _IO_STATUS_BLOCK *)v3 )
  {
    v4 = *v3;
    Pointer = (struct _IO_STATUS_BLOCK **)(*v3)->Pointer;
    if ( (struct _IO_STATUS_BLOCK **)(*v3)->Information != v3 || Pointer[1] != v4 )
      __fastfail(3u);
    *v3 = (struct _IO_STATUS_BLOCK *)Pointer;
    Pointer[1] = (struct _IO_STATUS_BLOCK *)v3;
    v4->Information = (ULONG_PTR)v4;
    v4->Pointer = v4;
    LeaveDeviceInfoListCrit_(v2);
    InputApcCommon(&v4[-7].Information, v4 + 4);
    EnterDeviceInfoListCrit_(v6);
  }
  LeaveDeviceInfoListCrit_(v2);
}
