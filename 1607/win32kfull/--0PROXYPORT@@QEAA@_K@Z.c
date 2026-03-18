/*
 * XREFs of ??0PROXYPORT@@QEAA@_K@Z @ 0x1C02A2F38
 * Callers:
 *     ?bInit@UMPDOBJ@@QEAAHXZ @ 0x1C0284E18 (-bInit@UMPDOBJ@@QEAAHXZ.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C02A33E4 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 */

PROXYPORT *__fastcall PROXYPORT::PROXYPORT(PROXYPORT *this)
{
  int v2; // r15d
  _DWORD *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r14d
  PACCESS_TOKEN v7; // rdi
  struct _KPROCESS *CurrentProcess; // rax
  NTSTATUS AuthenticationIdToken; // esi
  int v10; // eax
  int v11; // edi
  void *v12; // rcx
  PULONG ReturnLength; // [rsp+20h] [rbp-E0h]
  ULONG AllocationAttributes[2]; // [rsp+28h] [rbp-D8h]
  struct _REMOTE_PORT_VIEW *FileHandle; // [rsp+30h] [rbp-D0h]
  void *v17; // [rsp+40h] [rbp-C0h]
  unsigned int *v18; // [rsp+48h] [rbp-B8h]
  unsigned __int8 EffectiveOnly; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int8 CopyOnOpen[3]; // [rsp+51h] [rbp-AFh] BYREF
  _BYTE TokenInformation[12]; // [rsp+54h] [rbp-ACh] BYREF
  int ProcessInformation; // [rsp+60h] [rbp-A0h] BYREF
  PVOID P; // [rsp+68h] [rbp-98h] BYREF
  enum _SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v25; // [rsp+74h] [rbp-8Ch] BYREF
  union _LARGE_INTEGER MaximumSize; // [rsp+78h] [rbp-88h] BYREF
  struct _PORT_VIEW v27; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-50h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  struct _SECURITY_QUALITY_OF_SERVICE v30; // [rsp+F0h] [rbp-10h] BYREF
  wchar_t Dst[264]; // [rsp+100h] [rbp+0h] BYREF

  memset(Dst, 0, 0x208uLL);
  *(_QWORD *)this = 0LL;
  if ( ZwQueryInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessSessionInformation, &ProcessInformation, 4u, 0LL) >= 0 )
  {
    v2 = ProcessInformation;
    v30.Length = 0;
    v30.ImpersonationLevel = SecurityImpersonation;
    *(_WORD *)&v30.ContextTrackingMode = 257;
    v3 = PALLOCMEM2(0x38uLL, 1953525831LL, 1);
    *(_QWORD *)this = v3;
    if ( v3 )
    {
      v3[13] = 0;
      *(_QWORD *)(*(_QWORD *)this + 16LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 24LL) = 0LL;
      *(_DWORD *)(*(_QWORD *)this + 48LL) = 0;
      **(_QWORD **)this = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 32LL) = 0LL;
      *(_QWORD *)(*(_QWORD *)this + 40LL) = 0LL;
      MaximumSize.QuadPart = 0x400000LL;
      v27.SectionHandle = 0LL;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 512;
      ObjectAttributes.ObjectName = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwCreateSection(&v27.SectionHandle, 6u, &ObjectAttributes, &MaximumSize, 4u, 0x8000000u, 0LL) < 0 )
        goto LABEL_19;
      P = 0LL;
      memset(TokenInformation, 0, sizeof(TokenInformation));
      if ( !(unsigned __int8)PsIsThreadImpersonating(KeGetCurrentThread())
        || (v6 = 1,
            (v7 = PsReferenceImpersonationToken(KeGetCurrentThread(), CopyOnOpen, &EffectiveOnly, &ImpersonationLevel)) == 0LL) )
      {
        CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v5);
        v7 = PsReferencePrimaryToken(CurrentProcess);
        v6 = 0;
      }
      AuthenticationIdToken = SeQueryAuthenticationIdToken(v7, (PLUID)&TokenInformation[4]);
      if ( AuthenticationIdToken >= 0 )
      {
        AuthenticationIdToken = SeQueryInformationToken(v7, TokenIntegrityLevel, (PVOID *)TokenInformation);
        if ( AuthenticationIdToken >= 0 )
          AuthenticationIdToken = SeQueryInformationToken(v7, TokenUser, &P);
      }
      if ( v6 )
        PsDereferenceImpersonationToken(v7);
      else
        PsDereferencePrimaryToken(v7);
      if ( AuthenticationIdToken < 0 )
        goto LABEL_19;
      v10 = *(_DWORD *)TokenInformation;
      v27.Length = 48;
      v27.SectionOffset = 0;
      v27.ViewSize = 0x400000LL;
      if ( *(_DWORD *)TokenInformation < 0x2000u )
        v10 = 0x2000;
      *(_DWORD *)TokenInformation = v10;
      LODWORD(FileHandle) = *(_DWORD *)&TokenInformation[8];
      AllocationAttributes[0] = *(_DWORD *)&TokenInformation[4];
      LODWORD(ReturnLength) = v2;
      *(_OWORD *)&v27.ViewBase = 0LL;
      swprintf_s(
        Dst,
        0x104uLL,
        L"%s_%x_%x_%x_%x",
        L"\\RPC Control\\UmpdProxy",
        ReturnLength,
        *(_QWORD *)AllocationAttributes);
      RtlInitUnicodeString(&DestinationString, Dst);
      v11 = PROXYPORT::SecureConnectPort(
              *(PROXYPORT **)P,
              *(void ***)this,
              &DestinationString,
              &v30,
              &v27,
              *(void **)P,
              FileHandle,
              &v25,
              v17,
              v18);
      if ( v11 >= 0 )
      {
        *(_QWORD *)(*(_QWORD *)this + 8LL) = v27.SectionHandle;
        *(_QWORD *)(*(_QWORD *)this + 16LL) = v27.ViewBase;
        *(_QWORD *)(*(_QWORD *)this + 24LL) = v27.ViewSize;
        *(_QWORD *)(*(_QWORD *)this + 32LL) = v27.ViewRemoteBase;
        *(_QWORD *)(*(_QWORD *)this + 40LL) = *(_QWORD *)(*(_QWORD *)this + 16LL) - *(_QWORD *)(*(_QWORD *)this + 32LL);
        *(_DWORD *)(*(_QWORD *)this + 52LL) = 1;
      }
      ExFreePoolWithTag(P, 0);
      if ( v11 < 0 )
      {
LABEL_19:
        if ( v27.SectionHandle )
          ZwClose(v27.SectionHandle);
        v12 = **(void ***)this;
        if ( v12 )
          ObfDereferenceObject(v12);
        Win32FreePool(*(_QWORD *)this, v4);
        *(_QWORD *)this = 0LL;
      }
    }
  }
  return this;
}
