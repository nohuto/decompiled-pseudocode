/*
 * XREFs of ?Create@CEvent@DirectComposition@@SAJW4_EVENT_TYPE@@PEAPEAV12@@Z @ 0x1C007A314
 * Callers:
 *     ?Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z @ 0x1C0041DA0 (-Initialize@CApplicationChannel@DirectComposition@@IEAAJPEAIPEAPEAX@Z.c)
 * Callees:
 *     Win32AllocPoolWithQuotaZInit @ 0x1C003A9C0 (Win32AllocPoolWithQuotaZInit.c)
 *     ?Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z @ 0x1C007A3E0 (-Initialize@CEvent@DirectComposition@@AEAAJPEAX_N@Z.c)
 *     ??_GCEvent@DirectComposition@@QEAAPEAXI@Z @ 0x1C007A42C (--_GCEvent@DirectComposition@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall DirectComposition::CEvent::Create(enum _EVENT_TYPE a1, struct DirectComposition::CEvent **a2)
{
  DirectComposition::CEvent *v3; // rdi
  unsigned int v4; // edx
  NTSTATUS v5; // ebx
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-38h] BYREF
  void *EventHandle; // [rsp+80h] [rbp+18h] BYREF

  v3 = (DirectComposition::CEvent *)Win32AllocPoolWithQuotaZInit(8uLL);
  if ( v3 )
  {
    EventHandle = 0LL;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 512;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v5 = ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, NotificationEvent, 0);
    if ( v5 < 0
      || (v5 = DirectComposition::CEvent::Initialize(v3, EventHandle, 1), ObCloseHandle(EventHandle, 0), v5 < 0) )
    {
      DirectComposition::CEvent::`scalar deleting destructor'(v3, v4);
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
  return (unsigned int)v5;
}
