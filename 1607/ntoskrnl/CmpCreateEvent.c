/*
 * XREFs of CmpCreateEvent @ 0x1403F9948
 * Callers:
 *     CmpFileReadEx @ 0x1400848A0 (CmpFileReadEx.c)
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpGetVolumeClusterSize @ 0x140481F90 (CmpGetVolumeClusterSize.c)
 *     CmpTouchFile @ 0x1406043E4 (CmpTouchFile.c)
 * Callees:
 *     ZwClose @ 0x140159E60 (ZwClose.c)
 *     ZwCreateEvent @ 0x14015A580 (ZwCreateEvent.c)
 *     ObReferenceObjectByHandle @ 0x140450D40 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __fastcall CmpCreateEvent(EVENT_TYPE EventType, PHANDLE EventHandle, PVOID *a3)
{
  NTSTATUS result; // eax
  NTSTATUS v6; // ebx
  OBJECT_ATTRIBUTES v7; // [rsp+30h] [rbp-38h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v7.RootDirectory = 0LL;
  v7.ObjectName = 0LL;
  v7.Length = 48;
  v7.Attributes = 576;
  *(_OWORD *)&v7.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(EventHandle, 0x1F0003u, &v7, EventType, 0);
  if ( result >= 0 )
  {
    result = ObReferenceObjectByHandle(*EventHandle, 0x1F0003u, 0LL, 0, &Object, 0LL);
    v6 = result;
    *a3 = Object;
    if ( result < 0 )
    {
      ZwClose(*EventHandle);
      return v6;
    }
  }
  return result;
}
