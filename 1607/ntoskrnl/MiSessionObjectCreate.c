/*
 * XREFs of MiSessionObjectCreate @ 0x140535FE4
 * Callers:
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 * Callees:
 *     RtlLengthSid @ 0x14000BE2C (RtlLengthSid.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     RtlStringCchPrintfW @ 0x14007F58C (RtlStringCchPrintfW.c)
 *     KeGetSchedulingGroupSize @ 0x1400A47D4 (KeGetSchedulingGroupSize.c)
 *     KeInsertSchedulingGroup @ 0x1400A498C (KeInsertSchedulingGroup.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140412D30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x140412D90 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x14041F978 (RtlCreateAcl.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     RtlAddAccessAllowedAce @ 0x14048DBDC (RtlAddAccessAllowedAce.c)
 */

NTSTATUS MiSessionObjectCreate()
{
  NTSTATUS result; // eax
  ULONG v1; // ebx
  ULONG v2; // edi
  ACL *PoolWithTag; // rax
  ACL *v4; // rbx
  NTSTATUS Acl; // edi
  ACL *v6; // rcx
  unsigned __int64 v7; // rdi
  int v8; // esi
  PRKEVENT v9; // rbx
  struct _KEVENT *v10; // rcx
  NTSTATUS v11; // ebx
  unsigned int SchedulingGroupSize; // eax
  struct _LIST_ENTRY *v13; // rax
  PRKEVENT Event; // [rsp+60h] [rbp-A8h] BYREF
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v16[3]; // [rsp+70h] [rbp-98h] BYREF
  int v17; // [rsp+88h] [rbp-80h]
  _BYTE *v18; // [rsp+90h] [rbp-78h]
  __int64 v19; // [rsp+98h] [rbp-70h]
  UNICODE_STRING DestinationString; // [rsp+A0h] [rbp-68h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+B0h] [rbp-58h] BYREF
  wchar_t pszDest[128]; // [rsp+D8h] [rbp-30h] BYREF

  result = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( result >= 0 )
  {
    v1 = RtlLengthSid(SeAliasAdminsSid);
    v2 = v1 + RtlLengthSid(SeLocalSystemSid) + 32;
    PoolWithTag = (ACL *)ExAllocatePoolWithTag(PagedPool, v2, 0x6C636144u);
    v4 = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    Acl = RtlCreateAcl(PoolWithTag, v2, 2u);
    v6 = v4;
    if ( Acl >= 0 )
    {
      Acl = RtlAddAccessAllowedAce(v4, 2u, 0xF0003u, SeAliasAdminsSid);
      v6 = v4;
      if ( Acl >= 0 )
      {
        Acl = RtlAddAccessAllowedAce(v4, 2u, 0xF0003u, SeLocalSystemSid);
        if ( Acl >= 0 )
        {
          Acl = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v4, 0);
          if ( Acl >= 0 )
          {
            v7 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
            v8 = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( v8 < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, pszDest);
              v16[1] = 0LL;
              v19 = 0LL;
              v16[2] = &DestinationString;
              LODWORD(v16[0]) = 48;
              v18 = SecurityDescriptor;
              v17 = 512;
              v8 = ObCreateObject(0, MmSessionObjectType, (__int64)v16, 0, 0, 40, 0, 0, &Event);
              ExFreePoolWithTag(v4, 0);
              if ( v8 >= 0 )
              {
                v9 = Event;
                v10 = Event;
                *(_QWORD *)&Event[1].Header.Lock = v7;
                KeInitializeEvent(v10, NotificationEvent, 0);
                v9[1].Header.WaitListHead.Flink = 0LL;
                if ( !PsCpuFairShareEnabled || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                SchedulingGroupSize = KeGetSchedulingGroupSize();
                v13 = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(
                                              NonPagedPoolNxCacheAligned,
                                              SchedulingGroupSize,
                                              0x70724753u);
                v9[1].Header.WaitListHead.Flink = v13;
                if ( v13 )
                {
                  KeInsertSchedulingGroup((__int64)v13, 5LL, 0LL);
LABEL_10:
                  result = ObInsertObject(v9, 0LL, 1u, 0, 0LL, &Handle);
                  v11 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), 1u);
                    *(_QWORD *)(v7 + 80) = Handle;
                    *(_QWORD *)(v7 + 72) = Event;
                    *(_DWORD *)(v7 + 8088) = 2;
                    *(_DWORD *)(v7 + 8092) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 8096), SynchronizationEvent, 1u);
                    return v11;
                  }
                  return result;
                }
                ObfDereferenceObject(v9);
                return -1073741670;
              }
            }
            return v8;
          }
        }
        v6 = v4;
      }
    }
    ExFreePoolWithTag(v6, 0);
    return Acl;
  }
  return result;
}
