/*
 * XREFs of vInitFontsDirectoryNameInformation @ 0x140239410
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z @ 0x1400CF244 (-QueryNameString@FileQueryObj@Gre@@QEBA_NPEAU_OBJECT_NAME_INFORMATION@@K@Z.c)
 *     ?bAppendSysDirectory@@YAHPEAGPEBGI@Z @ 0x140103ABC (-bAppendSysDirectory@@YAHPEAGPEBGI@Z.c)
 */

int vInitFontsDirectoryNameInformation()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  int v2; // ecx
  __int64 v3; // rbx
  struct _OBJECT_NAME_INFORMATION *v4; // rax
  ULONG v5; // r8d
  unsigned __int16 *v6; // rax
  int appended; // eax
  _WORD *v8; // rcx
  __int64 v9; // rax
  _QWORD v11[2]; // [rsp+68h] [rbp-9h] BYREF
  STRING Source; // [rsp+78h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp+17h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp+27h] BYREF
  void *FileHandle; // [rsp+D8h] [rbp+67h] BYREF
  void *v16; // [rsp+E0h] [rbp+6Fh] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v11[1] = L"\\SystemRoot\\Fonts";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  FileHandle = 0LL;
  v11[0] = 2359330LL;
  Source.Buffer = (PCHAR)L"\\";
  IoStatusBlock = 0LL;
  *(_QWORD *)&Source.Length = 262146LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(v0) = ZwCreateFile(&FileHandle, 1u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x24u, 0LL, 0);
  if ( (int)v0 >= 0 )
  {
    v3 = *(_QWORD *)(W32GetSessionState(v2, v1) + 96);
    v4 = (struct _OBJECT_NAME_INFORMATION *)Win32AllocPoolZInit(400LL, 1986422343LL);
    *(_QWORD *)(v3 + 20096) = v4;
    if ( v4 )
    {
      v16 = FileHandle;
      if ( !Gre::FileQueryObj::QueryNameString(&v16, v4, v5)
        || RtlAppendStringToString(*(PSTRING *)(v3 + 20096), &Source) < 0 )
      {
        Win32FreePool(*(void **)(v3 + 20096));
        *(_QWORD *)(v3 + 20096) = 0LL;
      }
    }
    v6 = (unsigned __int16 *)Win32AllocPoolZInit(520LL, 1986422343LL);
    *(_QWORD *)(v3 + 20088) = v6;
    if ( v6 )
    {
      appended = bAppendSysDirectory(v6, (char *)&pszFormat);
      v8 = *(_WORD **)(v3 + 20088);
      if ( appended )
      {
        v9 = -1LL;
        do
          ++v9;
        while ( v8[v9] );
        *(_DWORD *)(v3 + 20080) = v9 + 1;
      }
      else
      {
        Win32FreePool(v8);
        *(_QWORD *)(v3 + 20088) = 0LL;
        *(_DWORD *)(v3 + 20080) = 0;
      }
    }
    ZwClose(FileHandle);
    v0 = Win32AllocPoolZInit(400LL, 1986422343LL);
    *(_QWORD *)(v3 + 20104) = v0;
  }
  return v0;
}
