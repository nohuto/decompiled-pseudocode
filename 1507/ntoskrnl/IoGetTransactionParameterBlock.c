/*
 * XREFs of IoGetTransactionParameterBlock @ 0x1401014D0
 * Callers:
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK *FileObjectExtension; // rax

  FileObjectExtension = (PTXN_PARAMETER_BLOCK *)FileObject->FileObjectExtension;
  if ( !FileObjectExtension || FileObjectExtension == IopRevocationExtension )
    return 0LL;
  else
    return FileObjectExtension[1];
}
