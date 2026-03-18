/*
 * XREFs of AlpcpDeleteView @ 0x14047CE3C
 * Callers:
 *     AlpcpCaptureViewAttributeInternal @ 0x14047BCB0 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpReceiveView @ 0x14047C0A8 (AlpcpReceiveView.c)
 *     NtAlpcCreateSectionView @ 0x14047E500 (NtAlpcCreateSectionView.c)
 *     NtAlpcDeleteSectionView @ 0x1404ABD1C (NtAlpcDeleteSectionView.c)
 * Callees:
 *     AlpcpDereferenceBlobEx @ 0x1404243CC (AlpcpDereferenceBlobEx.c)
 *     AlpcpDeleteBlob @ 0x14047CE68 (AlpcpDeleteBlob.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2, 1);
  return 1;
}
