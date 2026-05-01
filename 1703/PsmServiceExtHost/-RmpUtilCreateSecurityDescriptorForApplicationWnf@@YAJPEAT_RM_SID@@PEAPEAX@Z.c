/*
 * XREFs of ?RmpUtilCreateSecurityDescriptorForApplicationWnf@@YAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180019B50
 * Callers:
 *     ?RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z @ 0x180019AC0 (-RmpUtilCreateWnfStateNameForApplicationClient@@YAJPEAT_RM_SID@@KPEAU_WNF_STATE_NAME@@@Z.c)
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z @ 0x180019D90 (-RmpWnfGetPublisherSid@@YAJPEAT_RM_SID@@@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpUtilCreateSecurityDescriptorForApplicationWnf(PSID pSid, void **a2)
{
  NTSTATUS PublisherSid; // ebx
  const struct _TlgProvider_t *v5; // rcx
  const struct _TlgProvider_t *v6; // rcx
  PVOID Heap; // rax
  void *v8; // rdi
  DWORD LastError; // eax
  TraceLoggingHProvider v11; // rcx
  LPCGUID v12; // r8
  LPCGUID v13; // r9
  DWORD v14; // eax
  TraceLoggingHProvider v15; // rcx
  LPCGUID v16; // r8
  LPCGUID v17; // r9
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-CCh] BYREF
  DWORD v20; // [rsp+38h] [rbp-C8h] BYREF
  DWORD v21; // [rsp+3Ch] [rbp-C4h] BYREF
  PSID Sid; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE Owner[80]; // [rsp+70h] [rbp-90h] BYREF
  _BYTE v25[80]; // [rsp+C0h] [rbp-40h] BYREF
  _ACL Acl; // [rsp+110h] [rbp+10h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+250h] [rbp+150h] BYREF
  DWORD *v28; // [rsp+270h] [rbp+170h]
  int v29; // [rsp+278h] [rbp+178h]
  int v30; // [rsp+27Ch] [rbp+17Ch]
  EVENT_DATA_DESCRIPTOR v31; // [rsp+288h] [rbp+188h] BYREF
  DWORD *v32; // [rsp+2A8h] [rbp+1A8h]
  int v33; // [rsp+2B0h] [rbp+1B0h]
  int v34; // [rsp+2B4h] [rbp+1B4h]

  Sid = 0LL;
  PublisherSid = RmpWnfGetPublisherSid(Owner);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlCreateAcl(&Acl, 0x138u, 2u);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v25, &cbSid) )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v5, 0x400000000001uLL) )
    {
      LastError = GetLastError();
      v30 = 0;
      v20 = LastError;
      v28 = &v20;
      v29 = 4;
      TlgWrite(v11, &unk_18003F86F, v12, v13, 3u, &pData);
    }
    goto LABEL_24;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v25);
  if ( PublisherSid < 0 )
    goto LABEL_17;
  if ( !ConvertStringSidToSidW(
          L"S-1-15-3-1024-1502825166-1963708345-2616377461-2562897074-4192028372-3968301570-1997628692-1435953622",
          &Sid) )
  {
    if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(v6, 0x400000000001uLL) )
    {
      v14 = GetLastError();
      v34 = 0;
      v21 = v14;
      v32 = &v21;
      v33 = 4;
      TlgWrite(v15, &unk_18003F7FD, v16, v17, 3u, &v31);
    }
LABEL_24:
    PublisherSid = -1073741823;
    goto LABEL_17;
  }
  PublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, Sid);
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
        v8 = Heap;
        if ( Heap )
        {
          PublisherSid = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
          if ( PublisherSid >= 0 )
          {
            *a2 = v8;
            v8 = 0LL;
            PublisherSid = 0;
          }
          if ( v8 )
            RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
        }
        else
        {
          PublisherSid = -1073741801;
        }
      }
    }
  }
LABEL_17:
  if ( Sid )
    LocalFree(Sid);
  return (unsigned int)PublisherSid;
}
