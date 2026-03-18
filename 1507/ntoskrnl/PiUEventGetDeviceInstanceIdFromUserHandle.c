/*
 * XREFs of PiUEventGetDeviceInstanceIdFromUserHandle @ 0x1404128C8
 * Callers:
 *     PiUEventHandleRegistration @ 0x14041610C (PiUEventHandleRegistration.c)
 * Callees:
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 */

__int64 __fastcall PiUEventGetDeviceInstanceIdFromUserHandle(void *a1, _QWORD *a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  KPROCESSOR_MODE PreviousMode; // r9
  NTSTATUS v7; // edi
  int RelatedTargetDevice; // eax
  __int64 v9; // rcx
  PACCESS_TOKEN v10; // rbx
  PVOID Object; // [rsp+30h] [rbp-10h] BYREF
  PVOID TokenInformation; // [rsp+70h] [rbp+30h] BYREF
  __int64 v14; // [rsp+78h] [rbp+38h] BYREF

  CurrentThread = KeGetCurrentThread();
  *a3 = 0LL;
  PreviousMode = CurrentThread->PreviousMode;
  v14 = 0LL;
  v7 = ObReferenceObjectByHandle(a1, 0, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
  if ( v7 >= 0 )
  {
    RelatedTargetDevice = PnpGetRelatedTargetDevice((PFILE_OBJECT)Object, &v14);
    v9 = v14;
    v7 = RelatedTargetDevice;
    if ( RelatedTargetDevice >= 0 )
    {
      *a2 = v14 + 40;
      LODWORD(TokenInformation) = 0;
      v10 = PsReferencePrimaryToken(KeGetCurrentThread()->ApcState.Process);
      SeQueryInformationToken(v10, TokenIsAppContainer, &TokenInformation);
      ObfDereferenceObject(v10);
      v9 = v14;
      if ( (_DWORD)TokenInformation )
        *a3 = *(_QWORD *)(v14 + 32);
    }
    if ( v9 )
      ObfDereferenceObject(*(PVOID *)(v9 + 32));
  }
  if ( Object )
    ObfDereferenceObject(Object);
  return (unsigned int)v7;
}
