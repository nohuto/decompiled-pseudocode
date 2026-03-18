/*
 * XREFs of VfUtilIsLocalSystem @ 0x140702DE8
 * Callers:
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 *     ViKeInjectStatusAlerted @ 0x140712F08 (ViKeInjectStatusAlerted.c)
 * Callees:
 *     SeAccessCheck @ 0x140062B10 (SeAccessCheck.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     SeReleaseSubjectContext @ 0x14041F9B0 (SeReleaseSubjectContext.c)
 *     IoGetFileObjectGenericMapping @ 0x1404C9720 (IoGetFileObjectGenericMapping.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030B0 (ViInitializeLocalSystemDescriptor.c)
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
