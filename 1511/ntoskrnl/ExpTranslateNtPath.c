/*
 * XREFs of ExpTranslateNtPath @ 0x1406700EC
 * Callers:
 *     ExpConvertArcName @ 0x14066D234 (ExpConvertArcName.c)
 *     NtTranslateFilePath @ 0x140672ED4 (NtTranslateFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x140150700 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenFile @ 0x140150C80 (ZwOpenFile.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExpCreateOutputARC @ 0x14066D5F8 (ExpCreateOutputARC.c)
 *     ExpCreateOutputEFI @ 0x14066D6E4 (ExpCreateOutputEFI.c)
 *     ExpCreateOutputSIGNATURE @ 0x14066D98C (ExpCreateOutputSIGNATURE.c)
 *     ExpTranslateSymbolicLink @ 0x1406703B8 (ExpTranslateSymbolicLink.c)
 */

int __fastcall ExpTranslateNtPath(__int64 a1, int a2, char *a3, unsigned int *a4)
{
  const WCHAR *v4; // rbx
  char *v7; // rsi
  char v8; // di
  char v9; // r15
  unsigned __int64 v10; // r9
  __int64 v11; // rax
  wchar_t *v12; // r14
  int result; // eax
  wchar_t *Buffer; // rbx
  int OutputARC; // esi
  NTSTATUS v16; // ebx
  SIZE_T OutputBufferLength; // r15
  SIZE_T i; // rdx
  NTSTATUS v19; // esi
  _DWORD *PoolWithTag; // rbx
  __int128 *v21; // r8
  _WORD v22[4]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t *v23; // [rsp+58h] [rbp-A8h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  int OutputBuffer; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v29; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v30[6]; // [rsp+C8h] [rbp-38h] BYREF
  char v31; // [rsp+E0h] [rbp-20h] BYREF
  HANDLE FileHandle; // [rsp+180h] [rbp+80h] BYREF
  int v33; // [rsp+188h] [rbp+88h] BYREF
  char *v34; // [rsp+190h] [rbp+90h]

  v34 = a3;
  v4 = (const WCHAR *)(a1 + 12);
  v33 = 0;
  v7 = a3;
  v8 = 1;
  v9 = 1;
  RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 12));
  v10 = (unsigned __int64)v4 + DestinationString.Length + 2;
  v11 = -1LL;
  do
    ++v11;
  while ( *(_WORD *)(v10 + 2 * v11) );
  v12 = (wchar_t *)(v10 & -(__int64)((_DWORD)v11 != 0));
  if ( a2 != 1 )
  {
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
    if ( result < 0 )
      return result;
    v16 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x70048u, 0LL, 0, &OutputBuffer, 0x90u);
    if ( v16 < 0 )
      goto LABEL_22;
    if ( OutputBuffer )
    {
      if ( OutputBuffer != 1 )
      {
        v16 = -1073741804;
LABEL_22:
        ZwClose(FileHandle);
        return v16;
      }
    }
    else
    {
      LODWORD(OutputBufferLength) = 2352;
      for ( i = 2352LL; ; i = OutputBufferLength )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, i, 0x72766E45u);
        if ( !PoolWithTag )
        {
          v16 = -1073741670;
          goto LABEL_22;
        }
        v19 = ZwDeviceIoControlFile(
                FileHandle,
                0LL,
                0LL,
                0LL,
                &IoStatusBlock,
                0x70050u,
                0LL,
                0,
                PoolWithTag,
                OutputBufferLength);
        if ( v19 >= 0 )
          break;
        ExFreePoolWithTag(PoolWithTag, 0);
        if ( v19 != -1073741789 )
        {
          v16 = v19;
          goto LABEL_22;
        }
        OutputBufferLength = (unsigned int)(2 * OutputBufferLength);
      }
      v33 = PoolWithTag[2];
      ExFreePoolWithTag(PoolWithTag, 0);
      v7 = v34;
    }
    ZwClose(FileHandle);
    if ( OutputBuffer == 1 )
    {
      v21 = (__int128 *)&v31;
    }
    else
    {
      v21 = (__int128 *)&v33;
      v8 = 0;
    }
    if ( a2 == 4 )
      return ExpCreateOutputEFI(v7, a4, v21, (int *)v30, &v28, &v29, v12, v8);
    else
      return ExpCreateOutputSIGNATURE((__int64)v7, a4, (GUID *)v21, v30, &v28, &v29, v12, v8);
  }
  result = ExpTranslateSymbolicLink(v4);
  if ( result >= 0 )
  {
    Buffer = v23;
  }
  else
  {
    if ( result != -1073741788 )
      return result;
    v9 = 0;
    Buffer = DestinationString.Buffer;
    v22[0] = DestinationString.Length;
    v22[1] = DestinationString.MaximumLength;
    v23 = DestinationString.Buffer;
  }
  OutputARC = ExpCreateOutputARC(v7, a4, (__int64)v22, v12);
  if ( v9 == 1 )
    ExFreePoolWithTag(Buffer, 0);
  return OutputARC;
}
