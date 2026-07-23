/*
 * XREFs of IoSetShareAccessEx @ 0x140007720
 * Callers:
 *     RawCreate @ 0x1403ED014 (RawCreate.c)
 *     IoSetShareAccess @ 0x1403ED8C8 (IoSetShareAccess.c)
 * Callees:
 *     <none>
 */

void __stdcall IoSetShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        PBOOLEAN WritePermission)
{
  bool v5; // bl
  BOOLEAN v6; // r11
  BOOLEAN v7; // r10
  BOOLEAN v8; // cl
  _DWORD *FileObjectExtension; // rax

  v5 = 1;
  v6 = (DesiredAccess & 0x21) != 0;
  FileObject->ReadAccess = v6;
  v7 = (DesiredAccess & 6) != 0;
  FileObject->WriteAccess = v7;
  v8 = (DesiredAccess & 0x10000) != 0;
  FileObjectExtension = FileObject->FileObjectExtension;
  FileObject->DeleteAccess = v8;
  if ( FileObjectExtension )
    v5 = (*FileObjectExtension & 1) == 0;
  if ( !v6 && !v7 && !v8 )
    goto LABEL_9;
  FileObject->SharedRead = (DesiredShareAccess & 1) != 0;
  FileObject->SharedWrite = (DesiredShareAccess & 2) != 0;
  FileObject->SharedDelete = (DesiredShareAccess & 4) != 0;
  if ( WritePermission && !*WritePermission && (DesiredShareAccess & 1) == 0 )
    FileObject->SharedRead = 1;
  if ( v5 )
  {
    ShareAccess->OpenCount = 1;
    ShareAccess->Readers = FileObject->ReadAccess;
    ShareAccess->Writers = FileObject->WriteAccess;
    ShareAccess->Deleters = FileObject->DeleteAccess;
    ShareAccess->SharedRead = FileObject->SharedRead;
    ShareAccess->SharedWrite = FileObject->SharedWrite;
    ShareAccess->SharedDelete = FileObject->SharedDelete;
  }
  else
  {
LABEL_9:
    *(_QWORD *)&ShareAccess->SharedRead = 0LL;
    *(_QWORD *)&ShareAccess->Writers = 0LL;
    *(_QWORD *)&ShareAccess->OpenCount = 0LL;
    ShareAccess->SharedDelete = 0;
  }
}
