/*
 * XREFs of MiSessionObjectCreate @ 0x14057979C
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x140008054 (RtlStringCchPrintfW.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     RtlLengthSid @ 0x1400CE984 (RtlLengthSid.c)
 *     KeGetSchedulingGroupSize @ 0x140120EA8 (KeGetSchedulingGroupSize.c)
 *     KeInsertSchedulingGroup @ 0x140121074 (KeInsertSchedulingGroup.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     RtlAddAccessAllowedAce @ 0x140415C28 (RtlAddAccessAllowedAce.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1404D03E0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1404D0440 (RtlCreateSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x1404D058C (RtlCreateAcl.c)
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
  int Object; // esi
  NTSTATUS v9; // ebx
  unsigned int SchedulingGroupSize; // eax
  LARGE_INTEGER *v11; // rax
  PRKEVENT Event; // [rsp+60h] [rbp-A8h]
  HANDLE Handle; // [rsp+68h] [rbp-A0h] BYREF
  _QWORD v14[3]; // [rsp+70h] [rbp-98h] BYREF
  int v15; // [rsp+88h] [rbp-80h]
  _BYTE *v16; // [rsp+90h] [rbp-78h]
  __int64 v17; // [rsp+98h] [rbp-70h]
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
            Object = RtlStringCchPrintfW(pszDest, 0x80uLL, L"\\KernelObjects\\Session%d", *(unsigned int *)(v7 + 8));
            if ( Object < 0 )
            {
              ExFreePoolWithTag(v4, 0);
            }
            else
            {
              RtlInitUnicodeString(&DestinationString, pszDest);
              v14[1] = 0LL;
              v17 = 0LL;
              v14[2] = &DestinationString;
              LODWORD(v14[0]) = 48;
              v16 = SecurityDescriptor;
              v15 = 512;
              Object = ObCreateObject(0, (int)MmSessionObjectType, (int)v14, 0);
              ExFreePoolWithTag(v4, 0);
              if ( Object >= 0 )
              {
                *(_QWORD *)&Event[1].Header.Lock = v7;
                KeInitializeEvent(Event, NotificationEvent, 0);
                Event[1].Header.WaitListHead.Flink = 0LL;
                if ( !PsCpuFairShareEnabled || !*(_DWORD *)(v7 + 8) )
                  goto LABEL_10;
                SchedulingGroupSize = KeGetSchedulingGroupSize();
                v11 = (LARGE_INTEGER *)ExAllocatePoolWithTag(
                                         NonPagedPoolNxCacheAligned,
                                         SchedulingGroupSize,
                                         0x70724753u);
                Event[1].Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v11;
                if ( v11 )
                {
                  KeInsertSchedulingGroup(v11, 5LL, 0LL);
LABEL_10:
                  result = ObInsertObject(Event, 0LL, 1u, 0, 0LL, &Handle);
                  v9 = result;
                  if ( result >= 0 )
                  {
                    *(_DWORD *)(v7 + 4) |= 0x40u;
                    _InterlockedAdd((volatile signed __int32 *)(v7 + 12), 1u);
                    *(_QWORD *)(v7 + 80) = Handle;
                    *(_QWORD *)(v7 + 72) = Event;
                    *(_DWORD *)(v7 + 7952) = 2;
                    *(_DWORD *)(v7 + 7956) = 1;
                    KeInitializeEvent((PRKEVENT)(v7 + 7960), SynchronizationEvent, 1u);
                    return v9;
                  }
                  return result;
                }
                ObfDereferenceObject(Event);
                return -1073741670;
              }
            }
            return Object;
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
