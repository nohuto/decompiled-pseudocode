/*
 * XREFs of ?InputApcCommon@@YAXPEAUDEVICEINFO@@PEAU_IO_STATUS_BLOCK@@@Z @ 0x1C01D780C
 * Callers:
 *     ?DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z @ 0x1C00F27BC (-DITExecuteQueuedInputCompletions@@YAXPEAUDIT_INFO@@@Z.c)
 *     InputApc @ 0x1C01D9D30 (InputApc.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015D150 (_guard_dispatch_icall_nop.c)
 */

void __fastcall InputApcCommon(PVOID ApcContext, struct _IO_STATUS_BLOCK *a2)
{
  PVOID v2; // rdi
  _QWORD *v3; // rbx

  v2 = ApcContext;
  if ( a2->Status >= 0 && *((_QWORD *)ApcContext + 28) )
  {
    LOBYTE(ApcContext) = *((_BYTE *)ApcContext + 48);
    v3 = &aDeviceTemplate[71 * (unsigned __int8)ApcContext];
    EtwTraceCompleteInputDeviceRead(ApcContext, *((unsigned int *)v3 + 22));
    ((void (__fastcall *)(PVOID))v3[9])(v2);
  }
  StartDeviceRead(v2);
}
