/*
 * XREFs of AlpcpDeleteView @ 0x14040BD7C
 * Callers:
 *     NtAlpcCreateSectionView @ 0x140409A7C (NtAlpcCreateSectionView.c)
 *     AlpcpCaptureViewAttributeInternal @ 0x14040B860 (AlpcpCaptureViewAttributeInternal.c)
 *     AlpcpReceiveView @ 0x14040CD88 (AlpcpReceiveView.c)
 *     NtAlpcDeleteSectionView @ 0x1404D1410 (NtAlpcDeleteSectionView.c)
 * Callees:
 *     AlpcpDeleteBlob @ 0x14040BDA8 (AlpcpDeleteBlob.c)
 *     AlpcpDereferenceBlobEx @ 0x14040C274 (AlpcpDereferenceBlobEx.c)
 */

char __fastcall AlpcpDeleteView(ULONG_PTR BugCheckParameter2)
{
  if ( !(unsigned __int8)AlpcpDeleteBlob(BugCheckParameter2) )
    return 0;
  AlpcpDereferenceBlobEx(BugCheckParameter2);
  return 1;
}
