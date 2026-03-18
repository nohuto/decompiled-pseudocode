/*
 * XREFs of CcSetFileSizes @ 0x140078B24
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
