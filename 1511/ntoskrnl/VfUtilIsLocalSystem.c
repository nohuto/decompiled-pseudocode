/*
 * XREFs of VfUtilIsLocalSystem @ 0x1406B75F0
 * Callers:
 *     VfCheckUserHandle @ 0x1406C5774 (VfCheckUserHandle.c)
 *     ViKeInjectStatusAlerted @ 0x1406C6EB8 (ViKeInjectStatusAlerted.c)
 * Callees:
 *     SeAccessCheck @ 0x14008ADB0 (SeAccessCheck.c)
 *     SeReleaseSubjectContext @ 0x140435320 (SeReleaseSubjectContext.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     IoGetFileObjectGenericMapping @ 0x1404A6F7C (IoGetFileObjectGenericMapping.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1406B78B8 (ViInitializeLocalSystemDescriptor.c)
 */

__int64 __fastcall VfUtilIsLocalSystem(PEPROCESS Process)
{
  unsigned int v2; // ebx
  GENERIC_MAPPING *GenericMapping; // rax
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+50h] [rbp-28h] BYREF
  NTSTATUS AccessStatus; // [rsp+88h] [rbp+10h] BYREF
  ACCESS_MASK GrantedAccess; // [rsp+90h] [rbp+18h] BYREF

  if ( ViInitializeLocalSystemDescriptor() )
  {
    SeCaptureSubjectContextEx(0LL, Process, &SubjectContext);
    GenericMapping = IoGetFileObjectGenericMapping();
    v2 = SeAccessCheck(
           ViLocalSystemDescriptor,
           &SubjectContext,
           0,
           1u,
           0,
           0LL,
           GenericMapping,
           1,
           &GrantedAccess,
           &AccessStatus);
    SeReleaseSubjectContext(&SubjectContext);
  }
  else
  {
    return 1;
  }
  return v2;
}
