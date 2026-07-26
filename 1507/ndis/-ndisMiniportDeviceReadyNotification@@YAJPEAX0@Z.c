/*
 * XREFs of ?ndisMiniportDeviceReadyNotification@@YAJPEAX0@Z @ 0x1C009F980
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z @ 0x1C0013A48 (-ndisFindMiniportByPdo@@YAPEAU_NDIS_MINIPORT_BLOCK@@PEAU_DEVICE_OBJECT@@@Z.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ndisMSetMiniportReadyForBinding @ 0x1C00A109C (ndisMSetMiniportReadyForBinding.c)
 */

__int64 __fastcall ndisMiniportDeviceReadyNotification(_QWORD *NotificationStructure, PVOID Context)
{
  __int64 v2; // rax
  _UNICODE_STRING *v3; // rax
  PVOID v4; // rdi
  struct _NDIS_MINIPORT_BLOCK *MiniportByPdo; // rax
  struct _NDIS_MINIPORT_BLOCK *v6; // rbx
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+30h] [rbp-40h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE FileHandle; // [rsp+80h] [rbp+10h] BYREF
  PVOID Object; // [rsp+90h] [rbp+20h] BYREF

  v2 = *(_QWORD *)((char *)NotificationStructure + 4) - *(_QWORD *)&GUID_DEVICE_INTERFACE_ARRIVAL.Data1;
  if ( !v2 )
    v2 = *(_QWORD *)((char *)NotificationStructure + 12) - *(_QWORD *)GUID_DEVICE_INTERFACE_ARRIVAL.Data4;
  if ( !v2 )
  {
    ObjectAttributes.RootDirectory = 0LL;
    v3 = (_UNICODE_STRING *)NotificationStructure[5];
    FileHandle = 0LL;
    ObjectAttributes.ObjectName = v3;
    IoStatusBlock.Pointer = 0LL;
    IoStatusBlock.Information = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenFile(&FileHandle, 0, &ObjectAttributes, &IoStatusBlock, 3u, 1u) >= 0 )
    {
      if ( ObReferenceObjectByHandle(FileHandle, 0, (POBJECT_TYPE)IoFileObjectType, 0, &Object, 0LL) >= 0 )
      {
        v4 = Object;
        MiniportByPdo = ndisFindMiniportByPdo(*((struct _DEVICE_OBJECT **)Object + 1));
        v6 = MiniportByPdo;
        if ( MiniportByPdo )
        {
          if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
            WPP_SF_q(0xAu, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, (__int64)MiniportByPdo);
          ndisMSetMiniportReadyForBinding(v6);
        }
        ObfDereferenceObject(v4);
      }
      ZwClose(FileHandle);
    }
  }
  return 0LL;
}
