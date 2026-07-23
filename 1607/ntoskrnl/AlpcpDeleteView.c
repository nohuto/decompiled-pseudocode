/*
 * XREFs of AlpcpDeleteView @ 0x14040AC3C
 * Callers:
 *     NtAlpcCreateSectionView @ 0x14040893C (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040A720 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpReceiveView @ 0x14040BC48 (AlpcpReceiveView.c)
 *     NtAlpcDeleteSectionView @ 0x1404B4EB0 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14040AC68 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040B134 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
