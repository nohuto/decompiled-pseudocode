/*
 * XREFs of ?Initialize@DXGPRESENTHISTORYTOKENQUEUE@@QEAAJXZ @ 0x1C00DAC50
 * Callers:
 *     ?GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUSHLOCK@@H@Z @ 0x1C0094220 (-GetPresentHistoryTokenQueue@ADAPTER_RENDER@@QEAAPEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAVDXGAUTOPUS.c)
 * Callees:
 *     ?GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ @ 0x1C00DABD8 (-GrowPresentHistoryBuffer@DXGPRESENTHISTORYTOKENQUEUE@@AEAAEXZ.c)
 */

NTSTATUS __fastcall DXGPRESENTHISTORYTOKENQUEUE::Initialize(union _SLIST_HEADER *this)
{
  NTSTATUS result; // eax
  void *v3; // rcx
  PRKSEMAPHORE *v4; // rdi
  NTSTATUS v5; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  void *EventHandle; // [rsp+98h] [rbp+18h] BYREF
  PVOID Object; // [rsp+A0h] [rbp+20h] BYREF

  if ( !DXGPRESENTHISTORYTOKENQUEUE::GrowPresentHistoryBuffer(this) )
    return -1073741801;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Attributes = 512;
  ObjectAttributes.Length = 48;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( result >= 0 )
  {
    ObReferenceObjectByHandle(EventHandle, 2u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
    v3 = EventHandle;
    this[4].Region = (ULONGLONG)Object;
    ZwClose(v3);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 64;
    v4 = (PRKSEMAPHORE *)&this[4];
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ObCreateObject(0LL, ExSemaphoreObjectType, &ObjectAttributes);
    v5 = result;
    if ( result >= 0 )
    {
      KeInitializeSemaphore(*v4, 2047, 2047);
      ObDeleteCapturedInsertInfo(*v4);
      return v5;
    }
  }
  return result;
}
