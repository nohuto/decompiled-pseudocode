/*
 * XREFs of IoCreateController @ 0x1405C6C28
 * Callers:
 *     VerifierIoCreateController @ 0x140741EE8 (VerifierIoCreateController.c)
 * Callees:
 *     KeInitializeDeviceQueue @ 0x1400082B8 (KeInitializeDeviceQueue.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

PCONTROLLER_OBJECT __stdcall IoCreateController(ULONG Size)
{
  struct _CONTROLLER_OBJECT *v1; // rbx
  __int64 v2; // rdi
  int v4; // [rsp+50h] [rbp-30h] BYREF
  __int64 v5; // [rsp+58h] [rbp-28h]
  __int64 v6; // [rsp+60h] [rbp-20h]
  int v7; // [rsp+68h] [rbp-18h]
  __int128 v8; // [rsp+70h] [rbp-10h]
  PVOID Object; // [rsp+98h] [rbp+18h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+20h] BYREF

  v1 = 0LL;
  v2 = Size;
  v4 = 48;
  v5 = 0LL;
  v7 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x200;
  v6 = 0LL;
  v8 = 0LL;
  if ( (int)ObCreateObject(0, IoControllerObjectType, (int)&v4, 0) >= 0
    && ObInsertObject(Object, 0LL, 3u, 1u, &Object, &Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    memset(Object, 0, v2 + 72);
    *(_WORD *)Object = 2;
    *((_WORD *)Object + 1) = v2 + 72;
    *((_QWORD *)Object + 1) = (char *)Object + 72;
    KeInitializeDeviceQueue((PKDEVICE_QUEUE)((char *)Object + 16));
    return (PCONTROLLER_OBJECT)Object;
  }
  return v1;
}
