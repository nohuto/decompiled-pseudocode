/*
 * XREFs of IopGetNetworkOpenInformation @ 0x14058111C
 * Callers:
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     IoQueryFileInformation @ 0x1404ED090 (IoQueryFileInformation.c)
 */

__int64 __fastcall IopGetNetworkOpenInformation(PFILE_OBJECT FileObject, __int64 a2)
{
  NTSTATUS v4; // r8d
  ULONG ReturnedLength; // [rsp+30h] [rbp-58h] BYREF
  _QWORD v7[4]; // [rsp+38h] [rbp-50h] BYREF
  int v8; // [rsp+58h] [rbp-30h]
  _QWORD FileInformation[3]; // [rsp+60h] [rbp-28h] BYREF

  v4 = IoQueryFileInformation(FileObject, FileBasicInformation, 0x28u, v7, &ReturnedLength);
  if ( v4 >= 0 )
  {
    v4 = IoQueryFileInformation(FileObject, FileStandardInformation, 0x18u, FileInformation, &ReturnedLength);
    if ( v4 >= 0 )
    {
      **(_QWORD **)(a2 + 104) = v7[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 8LL) = v7[1];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 16LL) = v7[2];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 24LL) = v7[3];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 32LL) = FileInformation[0];
      *(_QWORD *)(*(_QWORD *)(a2 + 104) + 40LL) = FileInformation[1];
      *(_DWORD *)(*(_QWORD *)(a2 + 104) + 48LL) = v8;
    }
  }
  return (unsigned int)v4;
}
