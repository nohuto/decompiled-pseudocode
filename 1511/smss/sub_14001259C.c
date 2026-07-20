/*
 * XREFs of sub_14001259C @ 0x14001259C
 * Callers:
 *     sub_140005E5C @ 0x140005E5C (sub_140005E5C.c)
 *     sub_14000BE08 @ 0x14000BE08 (sub_14000BE08.c)
 * Callees:
 *     __security_check_cookie @ 0x14000BFC0 (__security_check_cookie.c)
 */

char __fastcall sub_14001259C(int a1, __int64 a2)
{
  bool v3; // zf
  __int64 v4; // rcx
  char *Heap; // rax
  char *InputBuffer; // rbx
  _QWORD *v7; // r9
  void *v8; // rdx
  __int64 v9; // r8
  __int64 ShareAccess; // [rsp+28h] [rbp-49h]
  ULONG OpenOptions[2]; // [rsp+30h] [rbp-41h]
  void *FileHandle; // [rsp+58h] [rbp-19h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+90h] [rbp+1Fh] BYREF
  _QWORD v16[2]; // [rsp+A0h] [rbp+2Fh] BYREF
  int v17; // [rsp+D8h] [rbp+67h] BYREF

  v17 = a1;
  v3 = a1 == 0;
  FileHandle = 0LL;
  v4 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( !v3 )
    a2 = 0LL;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(v4 + 48), 8u, 0x34uLL);
  InputBuffer = Heap;
  if ( Heap )
  {
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(Heap) = NtOpenFile(&FileHandle, 0x120003u, &ObjectAttributes, &IoStatusBlock, 2u, 0x60u);
    if ( (int)Heap >= 0 )
    {
      *(_DWORD *)InputBuffer = 1130980673;
      *((_DWORD *)InputBuffer + 1) = 1396854879;
      *((_DWORD *)InputBuffer + 2) = 52;
      *((_DWORD *)InputBuffer + 3) = 4;
      *((_DWORD *)InputBuffer + 4) = 0x40000;
      *((_DWORD *)InputBuffer + 5) = 1;
      *((_DWORD *)InputBuffer + 6) = 0x40000;
      *((_DWORD *)InputBuffer + 7) = 1;
      *((_DWORD *)InputBuffer + 8) = 0x40000;
      *((_DWORD *)InputBuffer + 9) = v17;
      *((_DWORD *)InputBuffer + 10) = 524290;
      *(_QWORD *)(InputBuffer + 44) = a2;
      LOBYTE(Heap) = NtDeviceIoControlFile(
                       FileHandle,
                       0LL,
                       0LL,
                       0LL,
                       &IoStatusBlock,
                       0x32C000u,
                       InputBuffer,
                       0x34u,
                       0LL,
                       0);
    }
  }
  if ( FileHandle )
    LOBYTE(Heap) = NtClose(FileHandle);
  if ( InputBuffer )
    LOBYTE(Heap) = RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, InputBuffer);
  if ( RegHandle )
  {
    if ( v17 )
    {
      v16[1] = 4LL;
      v16[0] = &v17;
      v7 = v16;
      v9 = 1LL;
      v8 = &unk_14001AA40;
    }
    else
    {
      v7 = 0LL;
      v8 = &unk_14001AA30;
      v9 = 0LL;
    }
    LOBYTE(Heap) = EtwEventWrite(RegHandle, v8, v9, v7, ShareAccess, *(_QWORD *)OpenOptions);
  }
  return (char)Heap;
}
