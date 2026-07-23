/*
 * XREFs of IoUpdateShareAccess @ 0x1404AE9C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  _BYTE *FileObjectExtension; // rax
  bool v3; // r8

  FileObjectExtension = FileObject->FileObjectExtension;
  v3 = 1;
  if ( FileObjectExtension )
    v3 = (*FileObjectExtension & 1) == 0;
  if ( (FileObject->ReadAccess || FileObject->WriteAccess || FileObject->DeleteAccess) && v3 )
  {
    ++ShareAccess->OpenCount;
    ShareAccess->Readers += FileObject->ReadAccess;
    ShareAccess->Writers += FileObject->WriteAccess;
    ShareAccess->Deleters += FileObject->DeleteAccess;
    ShareAccess->SharedRead += FileObject->SharedRead;
    ShareAccess->SharedWrite += FileObject->SharedWrite;
    ShareAccess->SharedDelete += FileObject->SharedDelete;
  }
}
