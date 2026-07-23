/*
 * XREFs of IoCreateController @ 0x14057FAA8
 * Callers:
 *     <none>
 * Callees:
 *     KeInitializeDeviceQueue @ 0x14007F208 (KeInitializeDeviceQueue.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ObCloseHandle @ 0x1404EF6CC (ObCloseHandle.c)
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
  PVOID Object; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF

  v1 = 0LL;
  v2 = Size;
  v4 = 48;
  v5 = 0LL;
  v7 = (IopCaseInsensitive != 0 ? 0x40 : 0) | 0x200;
  v6 = 0LL;
  v8 = 0LL;
  if ( (int)ObCreateObject(0, (_DWORD *)IoControllerObjectType, (__int64)&v4, 0, 0, Size + 72, 0, 0, &Object) >= 0
    && ObInsertObject(Object, 0LL, 3u, 1u, &Object, &Handle) >= 0 )
  {
    ObCloseHandle(Handle, 0);
    v1 = (struct _CONTROLLER_OBJECT *)Object;
    memset(Object, 0, v2 + 72);
    v1->Type = 2;
    v1->Size = v2 + 72;
    v1->ControllerExtension = &v1[1];
    KeInitializeDeviceQueue(&v1->DeviceWaitQueue);
  }
  return v1;
}
