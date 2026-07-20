/*
 * XREFs of sub_140005660 @ 0x140005660
 * Callers:
 *     sub_140004F9C @ 0x140004F9C (sub_140004F9C.c)
 * Callees:
 *     sub_140005C6C @ 0x140005C6C (sub_140005C6C.c)
 *     sub_140005D00 @ 0x140005D00 (sub_140005D00.c)
 *     sub_140005DAC @ 0x140005DAC (sub_140005DAC.c)
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

int __fastcall sub_140005660(unsigned __int16 a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  NTSTATUS v5; // r8d
  __int64 *Heap; // rax
  __int64 v7; // rbx
  bool v8; // zf
  unsigned __int64 v9; // rdx
  int v10; // eax
  __int64 **v11; // rcx
  __int64 v12; // rdx
  signed __int32 v13; // et2
  __int64 v14; // rcx
  signed __int32 v15; // et2
  signed __int32 v16; // et2
  signed __int32 v17; // et2
  void *FileHandle; // [rsp+30h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-31h] BYREF
  int v21; // [rsp+40h] [rbp-29h] BYREF
  int v22; // [rsp+44h] [rbp-25h] BYREF
  _BYTE FsInformation[8]; // [rsp+48h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v26[2]; // [rsp+90h] [rbp+27h] BYREF
  unsigned int v27; // [rsp+A0h] [rbp+37h]
  unsigned int v28; // [rsp+A4h] [rbp+3Bh]

  Handle = 0LL;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a3;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v5 < 0 )
  {
    v13 = _InterlockedIncrement(&dword_140020420) % 32;
    v14 = 2LL * v13;
    *((_DWORD *)&unk_140020220 + 4 * v13) = 1142;
LABEL_30:
    LODWORD(Heap) = a1;
    *((_DWORD *)&unk_140020220 + 2 * v14 + 1) = v5;
    *((_QWORD *)&unk_140020220 + v14 + 1) = a1;
    goto LABEL_21;
  }
  LODWORD(Heap) = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, FsInformation, 8u, FileFsDeviceInformation);
  v5 = (int)Heap;
  if ( (int)Heap < 0 )
  {
    v16 = _InterlockedIncrement(&dword_140020420) % 32;
    v14 = 2LL * v16;
    *((_DWORD *)&unk_140020220 + 4 * v16) = 1164;
    goto LABEL_30;
  }
  if ( (FsInformation[4] & 0x17) != 0 )
    goto LABEL_21;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v5 = NtOpenFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u);
  if ( v5 < 0 )
  {
    v17 = _InterlockedIncrement(&dword_140020420) % 32;
    v14 = 2LL * v17;
    *((_DWORD *)&unk_140020220 + 4 * v17) = 1210;
    goto LABEL_30;
  }
  v5 = NtQueryVolumeInformationFile(Handle, &IoStatusBlock, v26, 0x18u, FileFsSizeInformation);
  if ( v5 < 0 )
  {
    v15 = _InterlockedIncrement(&dword_140020420) % 32;
    v14 = 2LL * v15;
    *((_DWORD *)&unk_140020220 + 4 * v15) = 1232;
    goto LABEL_30;
  }
  Heap = (__int64 *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x30uLL);
  v7 = (__int64)Heap;
  if ( Heap )
  {
    v8 = a1 == (unsigned __int16)word_140020448;
    *((_WORD *)Heap + 12) = a1;
    if ( v8 )
    {
      *((_DWORD *)Heap + 4) |= 1u;
      qword_140020440 = (__int64)Heap;
    }
    if ( (int)sub_140005DAC(FileHandle, &v22) >= 0 && v22 >= 20 )
      *(_DWORD *)(v7 + 16) |= 4u;
    v9 = v26[1] * v27 * (unsigned __int64)v28;
    *(_QWORD *)(v7 + 32) = v9;
    *(_QWORD *)(v7 + 40) = v26[0] * v27 * (unsigned __int64)v28;
    if ( v9 <= 0x2000000 )
      *(_QWORD *)(v7 + 32) = 0LL;
    else
      *(_QWORD *)(v7 + 32) = v9 - 0x2000000;
    if ( (unsigned __int8)sub_140005D00(FileHandle) )
      *(_DWORD *)(v7 + 16) |= 2u;
    if ( (int)sub_140005C6C(FileHandle, &v21) >= 0 )
    {
      v10 = v21;
      *(_DWORD *)(v7 + 16) |= 8u;
      *(_DWORD *)(v7 + 20) = v10;
    }
    Heap = &qword_140020430;
    if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
    {
      v12 = qword_140020430;
      *(_QWORD *)v7 = qword_140020430;
      *(_QWORD *)(v7 + 8) = &qword_140020430;
      if ( *(__int64 **)(v12 + 8) != &qword_140020430 )
        __fastfail(3u);
      *(_QWORD *)(v12 + 8) = v7;
      qword_140020430 = v7;
    }
    else
    {
      v11 = (__int64 **)qword_140020438;
      *(_QWORD *)v7 = &qword_140020430;
      *(_QWORD *)(v7 + 8) = v11;
      if ( *v11 != &qword_140020430 )
        __fastfail(3u);
      *v11 = (__int64 *)v7;
      qword_140020438 = v7;
    }
  }
LABEL_21:
  if ( FileHandle )
    LODWORD(Heap) = NtClose(FileHandle);
  if ( Handle )
    LODWORD(Heap) = NtClose(Handle);
  return (int)Heap;
}
