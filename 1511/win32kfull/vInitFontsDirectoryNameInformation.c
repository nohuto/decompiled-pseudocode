/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x1C00A14B0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C001A9C0 (PALLOCMEM2.c)
 *     ?QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z @ 0x1C00A5030 (-QueryNameStringFromHandle@@YAJPEAXPEAU_OBJECT_NAME_INFORMATION@@KD@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  void *v0; // rax
  struct _STRING *v1; // rax
  unsigned int v2; // r8d
  char v3; // r9
  int v5; // [rsp+60h] [rbp-9h] BYREF
  const wchar_t *v6; // [rsp+68h] [rbp-1h]
  STRING Source; // [rsp+70h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D0h] [rbp+67h] BYREF

  ObjectAttributes.RootDirectory = 0LL;
  v6 = L"\\SystemRoot\\Fonts";
  Source.Buffer = (PCHAR)L"\\";
  v5 = 2359330;
  *(_DWORD *)&Source.Length = 262146;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v5;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v1 = (struct _STRING *)PALLOCMEM2(0x190uLL, 1986422343LL, 1);
    gpniFontsDirectory = v1;
    if ( v1
      && (QueryNameStringFromHandle(FileHandle, (struct _OBJECT_NAME_INFORMATION *)v1, v2, v3) < 0
       || RtlAppendStringToString(gpniFontsDirectory, &Source) < 0) )
    {
      Win32FreePool(gpniFontsDirectory);
      gpniFontsDirectory = 0LL;
    }
    ZwClose(FileHandle);
    v0 = PALLOCMEM2(0x190uLL, 1986422343LL, 1);
    gpniScratch = (__int64)v0;
  }
  return (int)v0;
}
