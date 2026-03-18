/*
 * XREFs of NtDuplicateToken @ 0x140478460
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14009E848 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1403BE8B8 (SepNewTokenAsRestrictedAsProcessToken.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SeCaptureSecurityQos @ 0x140478794 (SeCaptureSecurityQos.c)
 *     RtlIsSandboxedToken @ 0x140478894 (RtlIsSandboxedToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  unsigned __int8 v9; // di
  TOKEN_TYPE v10; // r13d
  PHANDLE v11; // r12
  _QWORD *v12; // rcx
  NTSTATUS result; // eax
  ACCESS_MASK GrantedAccess; // r15d
  PVOID v15; // rsi
  signed int v16; // ecx
  NTSTATUS inserted; // ebx
  PVOID v18; // rdi
  struct _KTHREAD *CurrentThread; // rax
  _DWORD *PrimaryToken; // r15
  int v21; // eax
  char v22; // [rsp+40h] [rbp-A8h] BYREF
  char v23; // [rsp+41h] [rbp-A7h] BYREF
  _BYTE v24[6]; // [rsp+42h] [rbp-A6h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-98h] BYREF
  __int64 v27; // [rsp+58h] [rbp-90h] BYREF
  PVOID v28; // [rsp+60h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+68h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v30; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v31[4]; // [rsp+A8h] [rbp-40h] BYREF
  signed int v32; // [rsp+ACh] [rbp-3Ch]

  v23 = 0;
  v22 = 0;
  v27 = 0LL;
  memset(&v30, 0, sizeof(v30));
  v9 = KeGetCurrentThread()->gap0[10];
  if ( v9 )
  {
    v10 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v11 = NewTokenHandle;
    v12 = NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= MmUserProbeAddress )
      v12 = (_QWORD *)MmUserProbeAddress;
    *v12 = *v12;
  }
  else
  {
    v11 = NewTokenHandle;
    v10 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v23, v31);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, &v22);
    if ( result >= 0 )
    {
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 v9,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( DesiredAccess )
        {
          SeCaptureSubjectContext(&SubjectContext);
          v30.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v30) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            v21 = SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken, v24);
            if ( Token == PrimaryToken || v21 >= 0 && v24[0] )
              GrantedAccess = DesiredAccess;
            else
              GrantedAccess = DesiredAccess & (HandleInformation.GrantedAccess | 0x2001F);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          }
          else
          {
            GrantedAccess = DesiredAccess;
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        else
        {
          GrantedAccess = HandleInformation.GrantedAccess;
        }
        v15 = Token;
        if ( v23 )
          v16 = v32;
        else
          v16 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v10 == TokenImpersonation && v16 > *((_DWORD *)Token + 49)
           || v10 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v28 = 0LL;
          inserted = SepDuplicateToken((__int64)Token, (__int64)ObjectAttributes, EffectiveOnly, v10, v16, v9, 0, &v28);
          if ( inserted >= 0 )
          {
            v18 = v28;
            inserted = ObInsertObjectEx(v28, 0LL, GrantedAccess, 1, 0, 0LL, &v27);
            if ( inserted >= 0 )
            {
              if ( !v22 )
                SepAppendAceToTokenObjectAcl((__int64)v18, 8, SeAliasAdminsSid);
              ObfDereferenceObject(v18);
            }
          }
          ObfDereferenceObject(v15);
          if ( inserted >= 0 )
            *v11 = (HANDLE)v27;
          return inserted;
        }
      }
    }
  }
  return result;
}
