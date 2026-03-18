/*
 * XREFs of ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C00F7950
 * Callers:
 *     UserProcessDwmInput @ 0x1C00F7160 (UserProcessDwmInput.c)
 * Callees:
 *     ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D8628 (-InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z.c)
 */

void __fastcall DITExecuteQueuedInputCompletions(struct DIT_INFO *a1)
{
  struct _IO_STATUS_BLOCK **v2; // rdi
  struct _IO_STATUS_BLOCK *v3; // rbx
  struct _IO_STATUS_BLOCK **Pointer; // rax
  __int64 v5; // rcx

  EnterDeviceInfoListCrit_(a1);
  v2 = (struct _IO_STATUS_BLOCK **)((char *)a1 + 64);
  while ( *v2 != (struct _IO_STATUS_BLOCK *)v2 )
  {
    v3 = *v2;
    Pointer = (struct _IO_STATUS_BLOCK **)(*v2)->Pointer;
    if ( (struct _IO_STATUS_BLOCK **)(*v2)->Information != v2 || Pointer[1] != v3 )
      __fastfail(3u);
    *v2 = (struct _IO_STATUS_BLOCK *)Pointer;
    Pointer[1] = (struct _IO_STATUS_BLOCK *)v2;
    v3->Information = (ULONG_PTR)v3;
    v3->Pointer = v3;
    LeaveDeviceInfoListCrit_();
    InputApcCommon(&v3[-6], v3 + 4);
    EnterDeviceInfoListCrit_(v5);
  }
  LeaveDeviceInfoListCrit_();
}
