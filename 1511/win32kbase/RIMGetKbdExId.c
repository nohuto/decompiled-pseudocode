/*
 * XREFs of RIMGetKbdExId @ 0x1C007CBC0
 * Callers:
 *     RIMQueryDev @ 0x1C007CA1C (RIMQueryDev.c)
 * Callees:
 *     WPP_RECORDER_SF_S @ 0x1C000FCE4 (WPP_RECORDER_SF_S.c)
 *     Win32AllocPoolNonPaged @ 0x1C0012700 (Win32AllocPoolNonPaged.c)
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

__int64 __fastcall RIMGetKbdExId(HANDLE FileHandle, _QWORD *a2)
{
  NTSTATUS v4; // ebx
  char *v5; // rax
  char *v6; // rdi
  struct _UNICODE_STRING InstanceName; // [rsp+30h] [rbp-10h] BYREF
  ULONG InOutBufferSize; // [rsp+70h] [rbp+30h] BYREF
  PVOID DataBlockObject; // [rsp+78h] [rbp+38h] BYREF

  DataBlockObject = 0LL;
  v4 = IoWMIOpenBlock(&MSKeyboard_ExtendedID_GUID, 1u, &DataBlockObject);
  if ( v4 >= 0 )
  {
    v4 = IoWMIHandleToInstanceName(DataBlockObject, FileHandle, &InstanceName);
    if ( v4 >= 0 )
    {
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        3u,
        4LL,
        0x12u,
        (__int64)&WPP_6990e2e6bee2951e2a28a078a671d19e_Traceguids,
        InstanceName.Buffer);
      InOutBufferSize = 0;
      IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, 0LL);
      InOutBufferSize += 8;
      v5 = (char *)Win32AllocPoolNonPaged();
      v6 = v5;
      if ( v5 )
      {
        v4 = IoWMIQuerySingleInstance(DataBlockObject, &InstanceName, &InOutBufferSize, v5);
        if ( v4 >= 0 )
          *a2 = *(_QWORD *)&v6[*((unsigned int *)v6 + 14)];
        Win32FreePool();
      }
      RtlFreeUnicodeString(&InstanceName);
    }
    ObfDereferenceObject(DataBlockObject);
  }
  return (unsigned int)v4;
}
