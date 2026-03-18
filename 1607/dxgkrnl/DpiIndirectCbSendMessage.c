/*
 * XREFs of DpiIndirectCbSendMessage @ 0x1C019B1A0
 * Callers:
 *     <none>
 * Callees:
 *     ?DpiIndirectOpenDevice@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_FILE_OBJECT@@PEAPEAU1@@Z @ 0x1C019AC00 (-DpiIndirectOpenDevice@@YAJPEAU_DEVICE_OBJECT@@PEAPEAU_FILE_OBJECT@@PEAPEAU1@@Z.c)
 *     ?DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU_IO_STATUS_BLOCK@@@Z2PEA_NPEAPEAU_IRP@@@Z @ 0x1C019ACD4 (-DpiIndirectSendAsyncUserModeRequest@@YAJPEAU_FILE_OBJECT@@PEAU_DEVICE_OBJECT@@KPEAXK2KP6AX2PEAU.c)
 */

__int64 __fastcall DpiIndirectCbSendMessage(
        __int64 a1,
        int a2,
        void *a3,
        unsigned int a4,
        void *a5,
        void (*a6)(void *, struct _IO_STATUS_BLOCK *),
        void *a7)
{
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // r8
  unsigned int v13; // ebx
  size_t Size; // [rsp+20h] [rbp-58h]
  bool *v15; // [rsp+48h] [rbp-30h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-18h] BYREF
  PVOID Object; // [rsp+80h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225485LL;
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_DWORD *)(v10 + 16) != 1953656900 || *(_DWORD *)(v10 + 20) != 2 || !*(_BYTE *)(v10 + 1143) )
    return 3221225485LL;
  Object = 0LL;
  DeviceObject = 0LL;
  result = DpiIndirectOpenDevice(*(struct _DEVICE_OBJECT **)(v10 + 24), (struct _FILE_OBJECT **)&Object, &DeviceObject);
  if ( (int)result >= 0 )
  {
    LODWORD(Size) = a2;
    v13 = DpiIndirectSendAsyncUserModeRequest(
            (struct _FILE_OBJECT *)Object,
            DeviceObject,
            v12,
            a3,
            Size,
            a5,
            a4,
            a6,
            a7,
            v15);
    ObfDereferenceObject(Object);
    return v13;
  }
  return result;
}
