/*
 * XREFs of ?CreateCommitMemoryWnfStatesSecurityDescriptorManually@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAPEAX@Z @ 0x180003B74
 * Callers:
 *     ?CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME@@1@Z @ 0x180003A7C (-CreateCommitMemoryWnfStates@ResourceManager@ExecutionModel@@SAJPEAT_RM_SID@@PEAU_WNF_STATE_NAME.c)
 * Callees:
 *     RmpGetWnfPublisherSid @ 0x180003D50 (RmpGetWnfPublisherSid.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     __security_check_cookie @ 0x180024320 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::CreateCommitMemoryWnfStatesSecurityDescriptorManually(
        PSID pSid,
        void **a2)
{
  NTSTATUS WnfPublisherSid; // eax
  void *Heap; // rax
  void *v6; // rdi
  NTSTATUS v7; // eax
  NTSTATUS v8; // ecx
  signed int v9; // ebx
  NTSTATUS v11; // ecx
  DWORD LastError; // eax
  ULONG BufferLength; // [rsp+30h] [rbp-D0h] BYREF
  DWORD cbSid; // [rsp+34h] [rbp-CCh] BYREF
  _BYTE SecurityDescriptor[40]; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE Owner[80]; // [rsp+60h] [rbp-A0h] BYREF
  _BYTE v17[80]; // [rsp+B0h] [rbp-50h] BYREF
  _ACL Acl; // [rsp+100h] [rbp+0h] BYREF

  WnfPublisherSid = RmpGetWnfPublisherSid(Owner);
  if ( WnfPublisherSid < 0 )
    goto LABEL_19;
  WnfPublisherSid = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  if ( WnfPublisherSid < 0 )
    goto LABEL_19;
  WnfPublisherSid = RtlSetOwnerSecurityDescriptor(SecurityDescriptor, Owner, 1u);
  if ( WnfPublisherSid < 0 )
    goto LABEL_19;
  WnfPublisherSid = RtlCreateAcl(&Acl, 0xECu, 2u);
  if ( WnfPublisherSid < 0 )
    goto LABEL_19;
  WnfPublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x10000000u, Owner);
  if ( WnfPublisherSid < 0 )
    goto LABEL_19;
  cbSid = 68;
  if ( !CreateWellKnownSid(WinBuiltinAnyPackageSid, 0LL, v17, &cbSid) )
  {
    LastError = GetLastError();
    goto LABEL_23;
  }
  WnfPublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, v17);
  if ( WnfPublisherSid < 0
    || (WnfPublisherSid = RtlAddAccessAllowedAceEx(&Acl, 2u, 0, 0x80000000, pSid), WnfPublisherSid < 0)
    || (WnfPublisherSid = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0), WnfPublisherSid < 0) )
  {
LABEL_19:
    v11 = WnfPublisherSid;
LABEL_21:
    LastError = RtlNtStatusToDosError(v11);
LABEL_23:
    v9 = LastError;
    goto LABEL_15;
  }
  BufferLength = 0;
  RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, 0LL, &BufferLength);
  Heap = (void *)RmpAllocateHeap(BufferLength);
  v6 = Heap;
  if ( !Heap )
  {
    v11 = -1073741801;
    goto LABEL_21;
  }
  v7 = RtlAbsoluteToSelfRelativeSD(SecurityDescriptor, Heap, &BufferLength);
  if ( v7 < 0 )
  {
    v8 = v7;
  }
  else
  {
    *a2 = v6;
    v6 = 0LL;
    v8 = 0;
  }
  v9 = RtlNtStatusToDosError(v8);
  if ( v6 )
    RmpFreeHeap(v6);
LABEL_15:
  if ( v9 > 0 )
    return (unsigned __int16)v9 | 0x80070000;
  return (unsigned int)v9;
}
