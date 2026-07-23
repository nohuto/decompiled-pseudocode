/*
 * XREFs of IoCheckShareAccessEx @ 0x1403ED39C
 * Callers:
 *     RawCreate @ 0x1403ED014 (RawCreate.c)
 *     IoCheckShareAccess @ 0x1403ED380 (IoCheckShareAccess.c)
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
  char v6; // r11
  BOOLEAN v7; // bl
  BOOLEAN v8; // r10
  BOOLEAN v10; // dl
  BOOLEAN v11; // di
  BOOLEAN v12; // r11
  _DWORD *FileObjectExtension; // rax
  ULONG OpenCount; // eax
  ULONG Readers; // edx
  ULONG Writers; // r10d
  ULONG Deleters; // ecx
  BOOLEAN v18; // al

  v6 = DesiredShareAccess;
  v7 = (DesiredAccess & 0x21) != 0;
  FileObject->ReadAccess = v7;
  v8 = (DesiredAccess & 6) != 0;
  LOBYTE(DesiredAccess) = BYTE2(DesiredAccess) & 1;
  FileObject->WriteAccess = v8;
  FileObject->DeleteAccess = BYTE2(DesiredAccess) & 1;
  if ( !v7 && !v8 && !(_BYTE)DesiredAccess )
    return 0;
  v10 = DesiredShareAccess & 1;
  v11 = (v6 & 2) != 0;
  v12 = (v6 & 4) != 0;
  FileObject->SharedRead = v10;
  FileObject->SharedWrite = v11;
  FileObject->SharedDelete = v12;
  if ( WritePermission && !*WritePermission )
  {
    v18 = v10;
    if ( !v10 )
      v18 = 1;
    FileObject->SharedRead = v18;
  }
  FileObjectExtension = FileObject->FileObjectExtension;
  if ( FileObjectExtension )
  {
    if ( (*FileObjectExtension & 1) != 0 )
      return 0;
  }
  OpenCount = ShareAccess->OpenCount;
  if ( (!v7 || ShareAccess->SharedRead >= OpenCount)
    && (!v8 || ShareAccess->SharedWrite >= OpenCount)
    && (!(_BYTE)DesiredAccess || ShareAccess->SharedDelete >= OpenCount) )
  {
    Readers = ShareAccess->Readers;
    if ( !Readers || FileObject->SharedRead )
    {
      Writers = ShareAccess->Writers;
      if ( !Writers || v11 )
      {
        Deleters = ShareAccess->Deleters;
        if ( !Deleters || v12 )
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
