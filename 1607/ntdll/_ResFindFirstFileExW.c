/*
 * XREFs of _ResFindFirstFileExW @ 0x180104314
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x180104E9C (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlDosPathNameToNtPathName_U @ 0x180011710 (RtlDosPathNameToNtPathName_U.c)
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     __security_check_cookie @ 0x180096C40 (__security_check_cookie.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 *     NtOpenFile @ 0x1800A6A80 (NtOpenFile.c)
 *     NtQueryDirectoryFile @ 0x1800A6AC0 (NtQueryDirectoryFile.c)
 *     RtlCompareMemory @ 0x1800AA6B0 (RtlCompareMemory.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     BasepInitializeFindFileHandle @ 0x18010328C (BasepInitializeFindFileHandle.c)
 */

unsigned __int64 __fastcall ResFindFirstFileExW(PCWSTR SourceString, __int64 a2, __int64 a3)
{
  int v3; // ebx
  bool v5; // r12
  unsigned __int64 result; // rax
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  __int64 v9; // rdx
  unsigned __int16 v10; // dx
  unsigned __int16 v11; // ax
  int v12; // r8d
  char v13; // bl
  NTSTATUS v14; // eax
  unsigned int v15; // edx
  _WORD *v16; // rcx
  int DirectoryFile; // ebx
  size_t v18; // r8
  unsigned __int16 v19; // [rsp+60h] [rbp-A0h]
  void *Source1; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int16 v22; // [rsp+78h] [rbp-88h] BYREF
  __int16 v23; // [rsp+7Ah] [rbp-86h]
  unsigned __int64 v24; // [rsp+80h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 v29; // [rsp+F0h] [rbp-10h]
  __int64 v30; // [rsp+F8h] [rbp-8h]
  int v31; // [rsp+108h] [rbp+8h]
  int v32; // [rsp+10Ch] [rbp+Ch]
  int v33; // [rsp+118h] [rbp+18h]
  unsigned int Size; // [rsp+11Ch] [rbp+1Ch]
  int Size_4; // [rsp+120h] [rbp+20h]
  char v36; // [rsp+124h] [rbp+24h]
  _BYTE v37[24]; // [rsp+126h] [rbp+26h] BYREF
  _BYTE Src[530]; // [rsp+13Eh] [rbp+3Eh] BYREF

  v3 = (int)SourceString;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v5 = DestinationString.Buffer[(DestinationString.Length >> 1) - 1] == 46;
  if ( !RtlDosPathNameToNtPathName_U(v3, (int)&v22, (__int64)&Source1, 0LL) )
  {
    RtlSetLastWin32Error(3u);
    return -1LL;
  }
  v7 = -1LL;
  do
    ++v7;
  while ( *((_WORD *)Source1 + v7) );
  v8 = v24;
  v9 = -1LL;
  do
    ++v9;
  while ( *(_WORD *)(v24 + 2 * v9) );
  v10 = 2 * v9;
  v22 = v10;
  v23 = v10 + 2;
  if ( Source1 )
    v11 = v10 + v24 - (_WORD)Source1;
  else
    v11 = 0;
  v19 = v11;
  if ( Source1 )
  {
    v10 = (_WORD)Source1 - v24;
    v22 = (_WORD)Source1 - v24;
    v23 = (_WORD)Source1 - v24;
  }
  v12 = v10 >> 1;
  if ( *(_WORD *)(v24 + 2LL * (v12 - 2)) == 58 || *(_WORD *)(v24 + 2LL * (v12 - 1)) == 92 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    v22 = v10 - 2;
  }
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v22;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v14 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x4021u);
  if ( (v14 == -1073741811 || v14 == -1073741565) && v13 )
  {
    v22 += 2;
    v14 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 3u, 0x4021u);
    v22 -= 2;
  }
  if ( v14 < 0 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return -1LL;
  }
  if ( !v19 )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
LABEL_46:
    NtClose(FileHandle);
    return -1LL;
  }
  if ( v19 != 6 || RtlCompareMemory(Source1, L"*.*", 6uLL) != 6 )
  {
    v15 = 0;
    v16 = Source1;
    if ( (v19 & 0xFFFE) != 0 )
    {
      while ( 1 )
      {
        if ( v15 && *v16 == 46 && *(v16 - 1) == 42 )
          *(v16 - 1) = 60;
        if ( *v16 == 63 )
          break;
        if ( *v16 == 42 )
          goto LABEL_35;
LABEL_38:
        ++v15;
        ++v16;
        if ( v15 >= v19 >> 1 )
          goto LABEL_39;
      }
      *v16 = 62;
LABEL_35:
      if ( v15 && *(v16 - 1) == 46 )
        *(v16 - 1) = 34;
      goto LABEL_38;
    }
LABEL_39:
    if ( v5 && *(v16 - 1) == 42 )
      *(v16 - 1) = 60;
  }
  DirectoryFile = NtQueryDirectoryFile();
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
  if ( DirectoryFile < 0 )
    goto LABEL_46;
  v18 = Size;
  *(_DWORD *)a3 = v33;
  *(_QWORD *)(a3 + 4) = v28;
  *(_QWORD *)(a3 + 12) = v29;
  *(_QWORD *)(a3 + 20) = v30;
  *(_DWORD *)(a3 + 28) = v32;
  *(_DWORD *)(a3 + 32) = v31;
  memmove((void *)(a3 + 44), Src, v18);
  *(_WORD *)(a3 + 2 * ((unsigned __int64)Size >> 1) + 44) = 0;
  memmove((void *)(a3 + 564), v37, v36);
  *(_WORD *)(a3 + 2 * ((__int64)v36 >> 1) + 564) = 0;
  if ( (v33 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = Size_4;
  result = BasepInitializeFindFileHandle((__int64)FileHandle);
  if ( !result )
    goto LABEL_46;
  return result;
}
