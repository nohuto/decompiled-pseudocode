/*
 * XREFs of WmipCreateGuidObject @ 0x140472E18
 * Callers:
 *     WmipOpenGuidObject @ 0x140473104 (WmipOpenGuidObject.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     SeDeleteAccessState @ 0x140404CC8 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x140405270 (SeCreateAccessState.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140472FF0 (WmipGetGuidSecurityDescriptor.c)
 */

__int64 __fastcall WmipCreateGuidObject(__int64 a1, ACCESS_MASK a2, _OWORD *a3, _QWORD *a4)
{
  int GuidSecurityDescriptor; // ebx
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  void *v11; // rdi
  __int128 v12; // xmm6
  __int128 v13; // xmm7
  char *v14; // rsi
  char *Event; // [rsp+58h] [rbp-B0h] BYREF
  PRKEVENT Event_8[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v18; // [rsp+70h] [rbp-98h]
  int v19; // [rsp+78h] [rbp-90h]
  int v20; // [rsp+7Ch] [rbp-8Ch]
  void *v21; // [rsp+80h] [rbp-88h]
  __int64 v22; // [rsp+88h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-78h] BYREF
  struct _ACCESS_STATE PassedAccessState; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v25[28]; // [rsp+148h] [rbp+40h] BYREF

  RtlInitUnicodeString(&DestinationString, (PCWSTR)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 8LL) + 18LL));
  GuidSecurityDescriptor = WmipGetGuidSecurityDescriptor(&DestinationString, &Event);
  if ( GuidSecurityDescriptor >= 0 )
  {
    v9 = *(_OWORD *)(a1 + 16);
    *(_OWORD *)Event_8 = *(_OWORD *)a1;
    v10 = *(_OWORD *)(a1 + 32);
    v11 = Event;
    v20 = HIDWORD(v9);
    v18 = 0LL;
    v22 = *((_QWORD *)&v10 + 1);
    v21 = Event;
    v19 = 640;
    GuidSecurityDescriptor = SeCreateAccessState(&PassedAccessState, v25, a2, (GENERIC_MAPPING *)&WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v12 = *(_OWORD *)&PassedAccessState.SubjectSecurityContext.ClientToken;
      v13 = *(_OWORD *)&PassedAccessState.SubjectSecurityContext.PrimaryToken;
      PassedAccessState.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObject(0, WmipGuidObjectType, (__int64)Event_8, 0, 0, 168, 0, 0, &Event);
      if ( GuidSecurityDescriptor >= 0 )
      {
        v14 = Event;
        memset(Event, 0, 0xA8uLL);
        KeInitializeEvent((PRKEVENT)v14, NotificationEvent, 0);
        *((_DWORD *)v14 + 28) = 4096;
        *((_DWORD *)v14 + 36) = 4096;
        *(_OWORD *)(v14 + 24) = *a3;
        GuidSecurityDescriptor = ObInsertObject(v14, &PassedAccessState, a2, 0, 0LL, 0LL);
        if ( GuidSecurityDescriptor >= 0 )
        {
          *a4 = v14;
          GuidSecurityDescriptor = 0;
        }
      }
      *(_OWORD *)&PassedAccessState.SubjectSecurityContext.ClientToken = v12;
      *(_OWORD *)&PassedAccessState.SubjectSecurityContext.PrimaryToken = v13;
      SeDeleteAccessState((struct _SECURITY_SUBJECT_CONTEXT *)&PassedAccessState);
    }
    if ( v11 && v11 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
