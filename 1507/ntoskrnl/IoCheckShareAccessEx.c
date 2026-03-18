/*
 * XREFs of IoCheckShareAccessEx @ 0x14040C150
 * Callers:
 *     RawCreate @ 0x14040BCD4 (RawCreate.c)
 *     IoCheckShareAccess @ 0x14040C128 (IoCheckShareAccess.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update,
        PBOOLEAN WritePermission)
{
  BOOLEAN v6; // r10
  BOOLEAN v7; // r11
  BOOLEAN v8; // cl
  BOOLEAN v9; // bl
  BOOLEAN v10; // si
  _DWORD *FileObjectExtension; // rax
  ULONG OpenCount; // eax
  ULONG Readers; // ecx
  ULONG Writers; // edx
  ULONG Deleters; // r10d
  BOOLEAN SharedRead; // al

  v6 = (DesiredAccess & 0x21) != 0;
  FileObject->ReadAccess = v6;
  v7 = (DesiredAccess & 6) != 0;
  FileObject->WriteAccess = v7;
  v8 = (DesiredAccess & 0x10000) != 0;
  FileObject->DeleteAccess = v8;
  if ( !v6 && !v7 && !v8 )
    return 0;
  FileObject->SharedRead = (DesiredShareAccess & 1) != 0;
  v9 = (DesiredShareAccess & 2) != 0;
  FileObject->SharedWrite = v9;
  v10 = (DesiredShareAccess & 4) != 0;
  FileObject->SharedDelete = v10;
  if ( WritePermission && !*WritePermission )
  {
    SharedRead = FileObject->SharedRead;
    if ( (DesiredShareAccess & 1) == 0 )
      SharedRead = 1;
    FileObject->SharedRead = SharedRead;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    if ( (*FileObjectExtension & 1) != 0 )
      return 0;
  }
  OpenCount = ShareAccess->OpenCount;
  if ( (!v6 || ShareAccess->SharedRead >= OpenCount)
    && (!v7 || ShareAccess->SharedWrite >= OpenCount)
    && (!v8 || ShareAccess->SharedDelete >= OpenCount) )
  {
    Readers = ShareAccess->Readers;
    if ( !Readers || FileObject->SharedRead )
    {
      Writers = ShareAccess->Writers;
      if ( !Writers || v9 )
      {
        Deleters = ShareAccess->Deleters;
        if ( !Deleters || v10 )
        {
          if ( Update )
          {
            ShareAccess->OpenCount = OpenCount + 1;
            ShareAccess->Readers = Readers + FileObject->ReadAccess;
            ShareAccess->Writers = Writers + FileObject->WriteAccess;
            ShareAccess->Deleters = Deleters + FileObject->DeleteAccess;
            ShareAccess->SharedRead += FileObject->SharedRead;
            ShareAccess->SharedWrite += FileObject->SharedWrite;
            ShareAccess->SharedDelete += FileObject->SharedDelete;
          }
          return 0;
        }
      }
    }
  }
  return -1073741757;
}
