/*
 * XREFs of ?GetKbdExId@@YAJPEAXPEAU_KEYBOARD_ID_EX@@@Z @ 0x1C01D5B40
 * Callers:
 *     ?QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z @ 0x1C01D5E84 (-QueryDeviceInfo@@YAJPEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdExId(HANDLE FileHandle, struct _KEYBOARD_ID_EX *a2)
{
  NTSTATUS v4; // ebx
  char *v5; // rax
  char *v6; // rdi
  struct _KEYBOARD_ID_EX v7; // rdx
  __int64 v8; // r8
  struct _UNICODE_STRING InstanceName; // [rsp+20h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+60h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+68h] [rbp+38h] BYREF

  DataBlockObject = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      InOutBufferSize = 0;
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v5 = (char *)Win32AllocPoolNonPaged(InOutBufferSize, 1701540693LL);
      v6 = v5;
      if ( v5 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v5);
        if ( v4 >= 0 )
        {
          v7 = *(struct _KEYBOARD_ID_EX *)&v6[*((unsigned int *)v6 + 14)];
          *a2 = v7;
        }
        ((void (__fastcall *)(_QWORD, _QWORD, _QWORD))Win32FreePool)(v6, v7, v8);
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
