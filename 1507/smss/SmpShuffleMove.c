/*
 * XREFs of SmpShuffleMove @ 0x140012D04
 * Callers:
 *     SmpProcessFileRenames @ 0x140002964 (SmpProcessFileRenames.c)
 * Callees:
 *     SmpCreateTempFile @ 0x1400106CC (SmpCreateTempFile.c)
 *     SmpCheckFolderForRedirections @ 0x1400118EC (SmpCheckFolderForRedirections.c)
 *     SmpOpenTargetFile @ 0x140012730 (SmpOpenTargetFile.c)
 *     SmpRenameTargetFile @ 0x140012994 (SmpRenameTargetFile.c)
 */

__int64 __fastcall SmpShuffleMove(struct _UNICODE_STRING *a1, void *a2, char a3)
{
  __int64 v3; // rdi
  char v7; // al
  int v8; // ebx
  HANDLE v10; // [rsp+38h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES v13; // [rsp+60h] [rbp+Fh] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp+7Fh] BYREF

  Handle = 0LL;
  v3 = -1LL;
  UnicodeString.Buffer = 0LL;
  v10 = (HANDLE)-1LL;
  if ( a3 != 1 || (v7 = SmpCheckFolderForRedirections(&a1->Length, &v10), v3 = (__int64)v10, v7) )
  {
    RtlInitUnicodeString(&DestinationString, (PCWSTR)SmpTempFilesDir.Buffer + 4);
    v8 = SmpCreateTempFile((__int64)&DestinationString, (__int64)L"SMSS-PFRO", &UnicodeString);
    if ( v8 >= 0 )
    {
      v13.RootDirectory = 0LL;
      v13.Length = 48;
      v13.Attributes = 64;
      v13.ObjectName = a1;
      *(_OWORD *)&v13.SecurityDescriptor = 0LL;
      v8 = SmpOpenTargetFile(&Handle, 0x110000u, &v13, 1, 3u);
      if ( v8 >= 0 )
      {
        v8 = SmpRenameTargetFile((const void **)&UnicodeString, Handle, 1, a3);
        if ( v8 >= 0 )
        {
          v8 = SmpRenameTargetFile((const void **)a1, a2, 1, a3);
          if ( v8 >= 0 )
            v8 = 0;
          else
            SmpRenameTargetFile((const void **)a1, Handle, 1, a3);
        }
      }
    }
  }
  else
  {
    v8 = -1073740533;
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
  if ( Handle )
    NtClose(Handle);
  if ( v3 != -1 )
    NtClose((HANDLE)v3);
  return (unsigned int)v8;
}
