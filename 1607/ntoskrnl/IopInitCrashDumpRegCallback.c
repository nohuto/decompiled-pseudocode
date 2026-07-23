/*
 * XREFs of IopInitCrashDumpRegCallback @ 0x1407B24BC
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1400C1850 (RtlInitUnicodeStringEx.c)
 *     IoCreateFile @ 0x1404BC4D0 (IoCreateFile.c)
 *     NtClose @ 0x1404EE070 (NtClose.c)
 *     IopInitializeCrashDump @ 0x140569748 (IopInitializeCrashDump.c)
 */

__int64 __fastcall IopInitCrashDumpRegCallback(
        __int64 a1,
        __int64 a2,
        const WCHAR *a3,
        int a4,
        __int64 a5,
        HANDLE FileHandle)
{
  _BYTE *v6; // rbx
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+17h] BYREF

  v6 = FileHandle;
  if ( FileHandle )
  {
    if ( !*(_BYTE *)FileHandle )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          if ( a5 )
          {
            if ( RtlInitUnicodeStringEx(&DestinationString, a3) >= 0 )
            {
              ObjectAttributes.RootDirectory = 0LL;
              ObjectAttributes.Length = 48;
              ObjectAttributes.Attributes = 64;
              ObjectAttributes.ObjectName = &DestinationString;
              *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
              if ( IoCreateFile(
                     &FileHandle,
                     0xC0100000,
                     &ObjectAttributes,
                     &IoStatusBlock,
                     0LL,
                     6u,
                     2u,
                     1u,
                     0x8008u,
                     0LL,
                     0,
                     CreateFileTypeNone,
                     0LL,
                     0x112u) >= 0 )
              {
                ExAcquireResourceExclusiveLite(&IopCrashDumpLock, 1u);
                IoStatusBlock = (struct _IO_STATUS_BLOCK)DestinationString;
                if ( IopInitializeCrashDump((unsigned int *)FileHandle, (__int128 *)&IoStatusBlock.0) )
                  *v6 = 1;
                ExReleaseResourceLite(&IopCrashDumpLock);
                NtClose(FileHandle);
              }
            }
          }
        }
      }
    }
  }
  return 0LL;
}
