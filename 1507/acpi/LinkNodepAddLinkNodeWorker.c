/*
 * XREFs of LinkNodepAddLinkNodeWorker @ 0x1C006E660
 * Callers:
 *     <none>
 * Callees:
 *     AMLIEvalNameSpaceObject @ 0x1C0001750 (AMLIEvalNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x1C000C960 (AMLIDereferenceHandleEx.c)
 *     AMLIGetNamedChild @ 0x1C000D460 (AMLIGetNamedChild.c)
 *     IrqLibReleaseArbiterLock @ 0x1C0019680 (IrqLibReleaseArbiterLock.c)
 *     IrqLibAcquireArbiterLock @ 0x1C0019694 (IrqLibAcquireArbiterLock.c)
 */

void __fastcall LinkNodepAddLinkNodeWorker(PDEVICE_OBJECT DeviceObject, char *Context)
{
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rdi
  __int64 **v5; // rcx

  *((_QWORD *)Context + 29) = Context + 224;
  *((_QWORD *)Context + 28) = Context + 224;
  *((_DWORD *)Context + 44) = 0;
  *((_DWORD *)Context + 45) = 0;
  *((_DWORD *)Context + 46) = 0;
  *((_DWORD *)Context + 47) = 0;
  *((_DWORD *)Context + 48) = -1;
  *((_QWORD *)Context + 25) = 0LL;
  v3 = (__int64 *)AMLIGetNamedChild(*((_QWORD *)Context + 88), 1397310559);
  v4 = (volatile signed __int32 *)v3;
  if ( v3 )
  {
    AMLIEvalNameSpaceObject(v3, 0LL, 0, 0LL);
    AMLIDereferenceHandleEx(v4);
  }
  IrqLibAcquireArbiterLock(0);
  v5 = (__int64 **)qword_1C0059108;
  *((_QWORD *)Context + 27) = qword_1C0059108;
  *((_QWORD *)Context + 26) = &LinkNodeListHead;
  if ( *v5 != &LinkNodeListHead )
    __fastfail(3u);
  *v5 = (__int64 *)(Context + 208);
  qword_1C0059108 = (__int64)(Context + 208);
  IrqLibReleaseArbiterLock();
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 30));
  *((_QWORD *)Context + 30) = 0LL;
}
