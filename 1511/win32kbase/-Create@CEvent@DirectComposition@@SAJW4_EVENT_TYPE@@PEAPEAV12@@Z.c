/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C00D6F68
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ @ 0x1C001CD00 (-Initialize@CApplicationChannel@DirectComposition@@MEAAJXZ.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C001E0D0 (Win32AllocPoolWithQuotaZInit.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007B5CC (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C00D6AC4 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(enum _EVENT_TYPE a1, void ***a2)
{
  void **v3; // rdi
  NTSTATUS v4; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+18h] BYREF

  v3 = (void **)Win32AllocPoolWithQuotaZInit(8uLL);
  if ( v3 )
  {
    EventHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v4 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v4 < 0
      || (v4 = DirectComposition::CEvent::Initialize((DirectComposition::CEvent *)v3, EventHandle, 1),
          ObCloseHandle(EventHandle, 0),
          v4 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'(v3);
    }
    else
    {
      *a2 = v3;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v4;
}
