/*
 * XREFs of NtQuerySecurityObject @ 0x140466FC0
 * Callers:
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SeQuerySecurityAccessMask @ 0x14046712C (SeQuerySecurityAccessMask.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 */

NTSTATUS __stdcall NtQuerySecurityObject(
        HANDLE Handle,
        SECURITY_INFORMATION SecurityInformation,
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        ULONG Length,
        PULONG LengthNeeded)
{
  KPROCESSOR_MODE PreviousMode; // bl
  PULONG v8; // rdi
  _DWORD *v9; // rcx
  NTSTATUS result; // eax
  PVOID v11; // rsi
  __int64 v12; // rdx
  NTSTATUS v13; // ebx
  ACCESS_MASK DesiredAccess; // [rsp+50h] [rbp-38h] BYREF
  PVOID Object; // [rsp+58h] [rbp-30h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+60h] [rbp-28h] BYREF
  SECURITY_INFORMATION v17; // [rsp+98h] [rbp+10h] BYREF
  SIZE_T Lengtha; // [rsp+A8h] [rbp+20h] BYREF

  LODWORD(Lengtha) = Length;
  v17 = SecurityInformation;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    v8 = LengthNeeded;
    v9 = LengthNeeded;
    if ( (unsigned __int64)LengthNeeded >= MmUserProbeAddress )
      v9 = (_DWORD *)MmUserProbeAddress;
    *v9 = *v9;
    ProbeForWrite(SecurityDescriptor, (unsigned int)Lengtha, 4u);
  }
  else
  {
    v8 = LengthNeeded;
  }
  SeQuerySecurityAccessMask(v17, &DesiredAccess);
  result = ObReferenceObjectByHandle(Handle, DesiredAccess, 0LL, PreviousMode, &Object, &HandleInformation);
  if ( result >= 0 )
  {
    v11 = Object;
    v12 = ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)];
    v13 = (*(__int64 (__fastcall **)(PVOID, __int64, SECURITY_INFORMATION *, PSECURITY_DESCRIPTOR, SIZE_T *, char *, _DWORD, __int64, KPROCESSOR_MODE))(v12 + 152))(
            Object,
            1LL,
            &v17,
            SecurityDescriptor,
            &Lengtha,
            (char *)Object - 8,
            *(_DWORD *)(v12 + 100),
            v12 + 76,
            PreviousMode);
    *v8 = Lengtha;
    ObfDereferenceObject(v11);
    return v13;
  }
  return result;
}
