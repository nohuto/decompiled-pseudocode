/*
 * XREFs of CmpCheckHivePrimaryFileReadWriteAccess @ 0x1401B4690
 * Callers:
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 * Callees:
 *     SeAccessCheck @ 0x140062B10 (SeAccessCheck.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     IoGetFileObjectGenericMapping @ 0x1404C9720 (IoGetFileObjectGenericMapping.c)
 */

BOOLEAN __fastcall CmpCheckHivePrimaryFileReadWriteAccess(PSECURITY_DESCRIPTOR SecurityDescriptor)
{
  KPROCESSOR_MODE AccessMode; // bl
  GENERIC_MAPPING *GenericMapping; // rax
  BOOLEAN v4; // bl
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  AccessMode = KeGetCurrentThread()->PreviousMode;
  SeCaptureSubjectContext(&SubjectContext);
  GenericMapping = IoGetFileObjectGenericMapping();
  v4 = SeAccessCheck(
         SecurityDescriptor,
         &SubjectContext,
         0,
         3u,
         0,
         0LL,
         GenericMapping,
         AccessMode,
         &GrantedAccess,
         &AccessStatus);
  SeReleaseSubjectContext(&SubjectContext);
  return v4;
}
