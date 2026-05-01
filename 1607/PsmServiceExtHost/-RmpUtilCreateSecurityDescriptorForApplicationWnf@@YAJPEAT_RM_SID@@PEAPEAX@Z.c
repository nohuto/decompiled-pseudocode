/*
 * XREFs of ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x1800024EC
 * Callers:
 *     RmpUtilCreateWnfStateNameForApplicationClient @ 0x180002454 (RmpUtilCreateWnfStateNameForApplicationClient.c)
 * Callees:
 *     ?RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z @ 0x1800026CC (-RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateSecurityDescriptorForApplicationWnf(PSID pSid, void **a2)
{
  NTSTATUS PublisherSid; // ebx
  const struct _TlgProvider_t *v5; // rcx
  PVOID Heap; // rax
  void *v7; // rdi
  DWORD LastError; // eax
  TraceLoggingHProvider v10; // rcx
  LPCGUID v11; // r8
  LPCGUID v12; // r9
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v15; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE SecurityDescriptor[48]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Owner[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v18[80]; // [rsp+C0h] [rbp-40h] BYREF
  _ACL Acl; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+200h] [rbp+100h] BYREF
  DWORD *v21; // [rsp+220h] [rbp+120h]
  int v22; // [rsp+228h] [rbp+128h]
  int v23; // [rsp+22Ch] [rbp+12Ch]

  PublisherSid = RmpWnfGetPublisherSid(Owner);
  if ( PublisherSid >= 0 )
  {
    PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
    if ( PublisherSid >= 0 )
    {
      PublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
      if ( PublisherSid >= 0 )
      {
        PublisherSid = RtlCreateAcl(&Acl, 0xECu, 2u);
        if ( PublisherSid >= 0 )
        {
          PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
          if ( PublisherSid >= 0 )
          {
            cbSid = 68;
            if ( CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v18, &cbSid) )
            {
              PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v18);
              if ( PublisherSid >= 0 )
              {
                PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid);
                if ( PublisherSid >= 0 )
                {
                  PublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0);
                  if ( PublisherSid >= 0 )
                  {
                    BufferLength = 0;
                    RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
                    Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, BufferLength);
                    v7 = Heap;
                    if ( Heap )
                    {
                      PublisherSid = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
                      if ( PublisherSid >= 0 )
                      {
                        *a2 = v7;
                        v7 = 0LL;
                        PublisherSid = 0;
                      }
                      if ( v7 )
                        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v7);
                    }
                    else
                    {
                      return (unsigned int)-1073741801;
                    }
                  }
                }
              }
            }
            else
            {
              if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn(v5, 0x400000000001uLL) )
              {
                LastError = GetLastError();
                v23 = 0;
                v15 = LastError;
                v21 = &v15;
                v22 = 4;
                TlgWrite(v10, &unk_18003F279, v11, v12, 3u, &pData);
              }
              return (unsigned int)-1073741823;
            }
          }
        }
      }
    }
  }
  return (unsigned int)PublisherSid;
}
