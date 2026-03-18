/*
 * XREFs of WmipCreateGuidObject @ 0x1404AA098
 * Callers:
 *     WmipOpenGuidObject @ 0x1404AA004 (WmipOpenGuidObject.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1404AA270 (WmipGetGuidSecurityDescriptor.c)
 *     SeDeleteAccessState @ 0x1404CDBC4 (SeDeleteAccessState.c)
 *     SeCreateAccessState @ 0x1404CDC7C (SeCreateAccessState.c)
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
  char v25[224]; // [rsp+148h] [rbp+40h] BYREF

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
    GuidSecurityDescriptor = SeCreateAccessState(&PassedAccessState, v25, a2, &WmipGenericMapping);
    if ( GuidSecurityDescriptor >= 0 )
    {
      v12 = *(_OWORD *)&PassedAccessState.SubjectSecurityContext.ClientToken;
      v13 = *(_OWORD *)&PassedAccessState.SubjectSecurityContext.PrimaryToken;
      PassedAccessState.SubjectSecurityContext = WmipSystemSubjectContext;
      GuidSecurityDescriptor = ObCreateObject(0, (int)WmipGuidObjectType, (int)Event_8, 0);
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
      SeDeleteAccessState(&PassedAccessState);
    }
    if ( v11 && v11 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v11, 0);
  }
  return (unsigned int)GuidSecurityDescriptor;
}
