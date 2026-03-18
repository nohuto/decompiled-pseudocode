/*
 * XREFs of NtDuplicateToken @ 0x140436B68
 * Callers:
 *     <none>
 * Callees:
 *     SeCaptureObjectAttributeSecurityDescriptorPresent @ 0x140015FC4 (SeCaptureObjectAttributeSecurityDescriptorPresent.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     RtlIsSandboxedToken @ 0x1404115C4 (RtlIsSandboxedToken.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SeCaptureSecurityQos @ 0x140436EA8 (SeCaptureSecurityQos.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     SeReleaseSubjectContext @ 0x1404CA4C0 (SeReleaseSubjectContext.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     SepNewTokenAsRestrictedAsProcessToken @ 0x1406D0DBC (SepNewTokenAsRestrictedAsProcessToken.c)
 */

NTSTATUS __stdcall NtDuplicateToken(
        HANDLE ExistingTokenHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        BOOLEAN EffectiveOnly,
        TOKEN_TYPE TokenType,
        PHANDLE NewTokenHandle)
{
  ACCESS_MASK v8; // ebx
  char PreviousMode; // si
  _QWORD *v11; // rcx
  NTSTATUS result; // eax
  struct _KTHREAD *CurrentThread; // rax
  PERESOURCE *PrimaryToken; // r14
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  PVOID v17; // rbx
  NTSTATUS inserted; // esi
  PVOID v19; // rdi
  char v20; // [rsp+40h] [rbp-98h] BYREF
  char v21; // [rsp+41h] [rbp-97h] BYREF
  PVOID Token; // [rsp+48h] [rbp-90h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+50h] [rbp-88h] BYREF
  PVOID v24; // [rsp+58h] [rbp-80h] BYREF
  __int64 v25; // [rsp+60h] [rbp-78h] BYREF
  _BYTE v26[4]; // [rsp+68h] [rbp-70h] BYREF
  signed int v27; // [rsp+6Ch] [rbp-6Ch]
  struct _SECURITY_SUBJECT_CONTEXT v28; // [rsp+78h] [rbp-60h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+98h] [rbp-40h] BYREF

  v8 = DesiredAccess;
  v21 = 0;
  v20 = 0;
  v25 = 0LL;
  memset(&v28, 0, sizeof(v28));
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned int)(TokenType - 1) > 1 )
      return -1073741811;
    v11 = NewTokenHandle;
    if ( (unsigned __int64)NewTokenHandle >= MmUserProbeAddress )
      v11 = (_QWORD *)MmUserProbeAddress;
    *v11 = *v11;
  }
  LOBYTE(DesiredAccess) = PreviousMode;
  result = SeCaptureSecurityQos(ObjectAttributes, DesiredAccess, &v21, v26);
  if ( result >= 0 )
  {
    result = SeCaptureObjectAttributeSecurityDescriptorPresent((__int64)ObjectAttributes, PreviousMode, &v20);
    if ( result >= 0 )
    {
      result = ObReferenceObjectByHandle(
                 ExistingTokenHandle,
                 2u,
                 (POBJECT_TYPE)SeTokenObjectType,
                 PreviousMode,
                 &Token,
                 &HandleInformation);
      if ( result >= 0 )
      {
        if ( v8 )
        {
          SeCaptureSubjectContext(&SubjectContext);
          v28.PrimaryToken = SubjectContext.PrimaryToken;
          if ( RtlIsSandboxedToken(&SubjectContext, PreviousMode) && RtlIsSandboxedToken(&v28, PreviousMode) )
          {
            CurrentThread = KeGetCurrentThread();
            --CurrentThread->KernelApcDisable;
            PrimaryToken = (PERESOURCE *)SubjectContext.PrimaryToken;
            ExAcquireResourceSharedLite(*((PERESOURCE *)SubjectContext.PrimaryToken + 6), 1u);
            SepNewTokenAsRestrictedAsProcessToken(Token, PrimaryToken);
            ExReleaseResourceLite(PrimaryToken[6]);
            v15 = KeGetCurrentThread();
            v16 = v15->KernelApcDisable + 1;
            v15->KernelApcDisable = v16;
            if ( !v16
              && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
              && !v15->SpecialApcDisable )
            {
              KiCheckForKernelApcDelivery();
            }
          }
          SeReleaseSubjectContext(&SubjectContext);
        }
        v17 = Token;
        if ( !v21 )
          v27 = *((_DWORD *)Token + 49);
        if ( *((_DWORD *)Token + 48) == 2
          && (TokenType == TokenImpersonation && v27 > *((_DWORD *)Token + 49)
           || TokenType == TokenPrimary && *((int *)Token + 49) < 2) )
        {
          ObfDereferenceObject(Token);
          return -1073741659;
        }
        else
        {
          v24 = 0LL;
          inserted = SepDuplicateToken(
                       (__int64)Token,
                       (int)ObjectAttributes,
                       EffectiveOnly,
                       TokenType,
                       v27,
                       PreviousMode,
                       0,
                       &v24);
          if ( inserted >= 0 )
          {
            v19 = v24;
            inserted = ObInsertObjectEx(v24, 0, 0LL, (__int64)&v25);
            if ( inserted >= 0 )
            {
              if ( !v20 )
                SepAppendAceToTokenObjectAcl(v19, 8LL, SeAliasAdminsSid);
              ObfDereferenceObject(v19);
            }
          }
          ObfDereferenceObject(v17);
          if ( inserted >= 0 )
            *NewTokenHandle = (HANDLE)v25;
          return inserted;
        }
      }
    }
  }
  return result;
}
