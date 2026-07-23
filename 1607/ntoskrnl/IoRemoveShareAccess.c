/*
 * XREFs of IoRemoveShareAccess @ 0x1403ED230
 * Callers:
 *     RawCleanup @ 0x1403ED17C (RawCleanup.c)
 * Callees:
 *     <none>
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  _DWORD *FileObjectExtension; // rax

  FileObjectExtension = FileObject->FileObjectExtension;
  if ( (!FileObjectExtension || (*FileObjectExtension & 1) == 0)
    && (FileObject->ReadAccess || FileObject->WriteAccess || FileObject->DeleteAccess) )
  {
    --ShareAccess->OpenCount;
    if ( FileObject->ReadAccess )
      --ShareAccess->Readers;
    if ( FileObject->WriteAccess )
      --ShareAccess->Writers;
    if ( FileObject->DeleteAccess )
      --ShareAccess->Deleters;
    if ( FileObject->SharedRead )
      --ShareAccess->SharedRead;
    if ( FileObject->SharedWrite )
      --ShareAccess->SharedWrite;
    if ( FileObject->SharedDelete )
      --ShareAccess->SharedDelete;
  }
}
