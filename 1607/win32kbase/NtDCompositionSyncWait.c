/*
 * XREFs of NtDCompositionSyncWait @ 0x1C00E3960
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CConnection@DirectComposition@@QEAAKXZ @ 0x1C00187F4 (-Release@CConnection@DirectComposition@@QEAAKXZ.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0019B0C (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     OpenDwmHandle @ 0x1C001D698 (OpenDwmHandle.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00E4240 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 */

__int64 __fastcall NtDCompositionSyncWait(int a1)
{
  PVOID v1; // rdi
  int v3; // ebx
  unsigned int v4; // edx
  DirectComposition::CConnection *DefaultConnection; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // r9
  int InitialState; // [rsp+20h] [rbp-50h]
  union _LARGE_INTEGER Timeout; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+A8h] [rbp+38h] BYREF
  void *v13; // [rsp+B0h] [rbp+40h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+48h] BYREF

  EventHandle = (void *)-1LL;
  v13 = (void *)-1LL;
  v1 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 512;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
  if ( v3 >= 0 )
  {
    DefaultConnection = DirectComposition::CConnection::GetDefaultConnection();
    if ( !DefaultConnection )
      v3 = -1073741790;
    if ( v3 >= 0 )
    {
      v6 = ObReferenceObjectByHandle(EventHandle, 0x100002u, (POBJECT_TYPE)ExEventObjectType, 0, &Object, 0LL);
      v1 = Object;
      v3 = v6;
      if ( v6 >= 0 )
      {
        v3 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v7, InitialState, &v13);
        if ( v3 >= 0 )
          v3 = DirectComposition::CConnection::Synchronize(DefaultConnection, v13, a1 != 0);
      }
    }
    if ( DefaultConnection )
      DirectComposition::CConnection::Release(DefaultConnection, v4);
    if ( v3 >= 0 )
    {
      Timeout.QuadPart = -20000000LL;
      v3 = KeWaitForSingleObject(v1, Executive, 0, 0, &Timeout);
    }
    if ( v1 )
      ObfDereferenceObject(v1);
  }
  if ( EventHandle != (void *)-1LL )
    ObCloseHandle(EventHandle, 0);
  return (unsigned int)v3;
}
