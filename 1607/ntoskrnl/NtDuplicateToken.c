/*
 * XREFs of NtDuplicateToken @ 0x140411590
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x14000E714 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceSharedLite @ 0x140068130 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     SeCaptureSubjectContext @ 0x140410EF0 (SeCaptureSubjectContext.c)
 *     RtlIsSandboxedToken @ 0x1404118D0 (RtlIsSandboxedToken.c)
 *     SeCaptureSecurityQos @ 0x1404119A8 (SeCaptureSecurityQos.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     SeReleaseSubjectContext @ 0x14041E870 (SeReleaseSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x140474EDC (SepNewTokenAsRestrictedAsProcessToken.c)
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
  __int64 v12; // rcx
  NTSTATUS result; // eax
  PVOID v14; // rsi
  int v15; // ecx
  NTSTATUS inserted; // ebx
  PVOID v17; // rdi
  struct _KTHREAD *CurrentThread; // rax
  PACCESS_TOKEN PrimaryToken; // r15
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  char v23; // [rsp+40h] [rbp-A8h] BYREF
  char v24; // [rsp+41h] [rbp-A7h] BYREF
  PVOID Token; // [rsp+48h] [rbp-A0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-98h] BYREF
  PVOID v27; // [rsp+58h] [rbp-90h] BYREF
  __int64 v28; // [rsp+60h] [rbp-88h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v29; // [rsp+68h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-60h] BYREF
  _BYTE v31[4]; // [rsp+A8h] [rbp-40h] BYREF
  int v32; // [rsp+ACh] [rbp-3Ch]

  v23 = 0;
  v24 = 0;
  v28 = 0LL;
  memset(&v29, 0, sizeof(v29));
  v9 = KeGetCurrentThread()->gap0[10];
  if ( v9 )
  {
    v10 = TokenType;
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v11 = NewTokenHandle;
    v12 = (__int64)NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= 0x7FFFFFFF0000LL )
      v12 = 0x7FFFFFFF0000LL;
    *(_QWORD *)v12 = *(_QWORD *)v12;
  }
  else
  {
    v11 = NewTokenHandle;
    v10 = TokenType;
  }
  result = SeCaptureSecurityQos(ObjectAttributes, v9, &v23, v31);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, v9, &v24);
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
          v29.PrimaryToken = SubjectContext.PrimaryToken;
          if ( (unsigned __int8)RtlIsSandboxedToken(&SubjectContext) && (unsigned __int8)RtlIsSandboxedToken(&v29) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            ExReleaseResourceLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6));
            KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v20, v21, v22);
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        v14 = Token;
        if ( v23 )
          v15 = v32;
        else
          v15 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (v10 == TokenImpersonation && v15 > *((_DWORD *)Token + 49)
           || v10 == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v27 = 0LL;
          inserted = SepDuplicateToken(
                       (_DWORD)Token,
                       (_DWORD)ObjectAttributes,
                       EffectiveOnly,
                       v10,
                       v15,
                       v9,
                       0,
                       (__int64)&v27);
          if ( inserted >= 0 )
          {
            v17 = v27;
            inserted = ObInsertObjectEx(v27, 0LL, 0, 0LL, (__int64)&v28);
            if ( inserted >= 0 )
            {
              if ( !v24 )
                SepAppendAceToTokenObjectAcl((__int64)v17, 8, SeAliasAdminsSid);
              ObfDereferenceObject(v17);
            }
          }
          ObfDereferenceObject(v14);
          if ( inserted >= 0 )
            *v11 = (HANDLE)v28;
          return inserted;
        }
      }
    }
  }
  return result;
}
