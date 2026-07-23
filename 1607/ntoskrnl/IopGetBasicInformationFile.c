/*
 * XREFs of IopGetBasicInformationFile @ 0x1404BCC98
 * Callers:
 *     IopOpenLinkOrRenameTarget @ 0x1404BCA54 (IopOpenLinkOrRenameTarget.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x14002DC60 (IoGetRelatedDeviceObject.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     VfFastIoCheckState @ 0x1407058F8 (VfFastIoCheckState.c)
 *     VfFastIoSnapState @ 0x1407059A8 (VfFastIoSnapState.c)
 */

__int64 __fastcall IopGetBasicInformationFile(struct _FILE_OBJECT *Object, __int64 a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rbp
  PFAST_IO_DISPATCH FastIoDispatch; // rdi
  __int64 (__fastcall *FastIoQueryBasicInfo)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rdi
  void *v7; // rbx
  char v8; // bp
  _DWORD v10[10]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF

  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  FastIoDispatch = RelatedDeviceObject->DriverObject->FastIoDispatch;
  if ( !FastIoDispatch )
    return IopGetFileInformation(Object, (__int64)&v11);
  FastIoQueryBasicInfo = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))FastIoDispatch->FastIoQueryBasicInfo;
  if ( !FastIoQueryBasicInfo )
    return IopGetFileInformation(Object, (__int64)&v11);
  v7 = (MmVerifierData & 0x10) != 0 ? (void *)VfFastIoSnapState() : 0LL;
  v8 = FastIoQueryBasicInfo(Object, (LOBYTE(Object->Flags) >> 1) & 1, a2, v10, RelatedDeviceObject);
  if ( v7 )
    VfFastIoCheckState(v7, (int)FastIoQueryBasicInfo);
  if ( v8 )
    return v10[0];
  else
    return IopGetFileInformation(Object, (__int64)&v11);
}
