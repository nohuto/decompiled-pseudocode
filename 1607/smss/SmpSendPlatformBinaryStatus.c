/*
 * XREFs of SmpSendPlatformBinaryStatus @ 0x140012EB8
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x14000614C (SmpLoadDataFromRegistry.c)
 *     SmpGetPlatformBinary @ 0x14000C638 (SmpGetPlatformBinary.c)
 * Callees:
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     _TlgKeywordOn @ 0x140013514 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x14001354C (_TlgWrite.c)
 */

char __fastcall SmpSendPlatformBinaryStatus(int a1, __int64 a2, __int64 a3, unsigned __int16 *a4)
{
  bool v5; // zf
  __int64 v6; // rcx
  char *Heap; // rax
  ULONGLONG v10; // rdx
  char *InputBuffer; // rbx
  const struct _TlgProvider_t *v12; // rcx
  _QWORD *v13; // r9
  void *v14; // rdx
  __int64 v15; // r8
  const struct _TlgProvider_t *v16; // rcx
  const GUID *v17; // r8
  const GUID *v18; // r9
  const struct _TlgProvider_t *v19; // rcx
  const GUID *v20; // r8
  const GUID *v21; // r9
  ULONG ShareAccess[2]; // [rsp+20h] [rbp-E0h]
  ULONG OpenOptions[2]; // [rsp+28h] [rbp-D8h]
  int v25; // [rsp+50h] [rbp-B0h] BYREF
  int v26; // [rsp+54h] [rbp-ACh] BYREF
  void *FileHandle; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v29; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v32[2]; // [rsp+B0h] [rbp-50h] BYREF
  EVENT_DATA_DESCRIPTOR v33; // [rsp+C0h] [rbp-40h] BYREF
  int *v34; // [rsp+E0h] [rbp-20h]
  __int64 v35; // [rsp+E8h] [rbp-18h]
  __int64 *v36; // [rsp+F0h] [rbp-10h]
  __int64 v37; // [rsp+F8h] [rbp-8h]
  _DWORD *v38; // [rsp+100h] [rbp+0h]
  __int64 v39; // [rsp+108h] [rbp+8h]
  __int64 v40; // [rsp+110h] [rbp+10h]
  _DWORD v41[2]; // [rsp+118h] [rbp+18h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp+20h] BYREF
  int *v43; // [rsp+140h] [rbp+40h]
  __int64 v44; // [rsp+148h] [rbp+48h]
  __int64 *v45; // [rsp+150h] [rbp+50h]
  __int64 v46; // [rsp+158h] [rbp+58h]
  int v47; // [rsp+1A0h] [rbp+A0h] BYREF

  v47 = a1;
  v5 = a1 == 0;
  FileHandle = 0LL;
  v6 = *(_QWORD *)&KeGetPcr()->MajorVersion;
  if ( !v5 )
    a2 = 0LL;
  Heap = (char *)RtlAllocateHeap(*(PVOID *)(v6 + 48), 8u, 0x34uLL);
  InputBuffer = Heap;
  if ( Heap )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 0;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)L"8:";
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    LODWORD(Heap) = NtOpenFile(&FileHandle, 0x120003u, &ObjectAttributes, &IoStatusBlock, 2u, 0x60u);
    if ( (int)Heap >= 0 )
    {
      *(_DWORD *)InputBuffer = 1130980673;
      *((_DWORD *)InputBuffer + 1) = 1396854879;
      *((_DWORD *)InputBuffer + 2) = 52;
      *((_DWORD *)InputBuffer + 3) = 4;
      *((_DWORD *)InputBuffer + 5) = 1;
      *((_DWORD *)InputBuffer + 7) = 1;
      *((_DWORD *)InputBuffer + 4) = 0x40000;
      *((_DWORD *)InputBuffer + 6) = 0x40000;
      *((_DWORD *)InputBuffer + 8) = 0x40000;
      *((_DWORD *)InputBuffer + 9) = v47;
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
  v12 = (const struct _TlgProvider_t *)SmpTraceHandle;
  if ( SmpTraceHandle )
  {
    if ( v47 )
    {
      v32[1] = 4LL;
      v32[0] = &v47;
      v13 = v32;
      v15 = 1LL;
      v14 = &SmssEvt_PlatformBinaryExecutionFailed;
    }
    else
    {
      v13 = 0LL;
      v14 = &SmssEvt_PlatformBinaryExecuted;
      v15 = 0LL;
    }
    LOBYTE(Heap) = EtwEventWrite(SmpTraceHandle, v14, v15, v13, *(_QWORD *)ShareAccess, *(_QWORD *)OpenOptions);
  }
  if ( a4 )
  {
    if ( (unsigned int)dword_140024020 > 5 )
    {
      LOBYTE(Heap) = TlgKeywordOn(v12, v10);
      if ( (_BYTE)Heap )
      {
        v25 = v47;
        v34 = &v25;
        v36 = &v28;
        v38 = v41;
        v40 = *((_QWORD *)a4 + 1);
        v41[0] = *a4;
        v28 = a3;
        v35 = 4LL;
        v37 = 8LL;
        v39 = 2LL;
        v41[1] = 0;
        LOBYTE(Heap) = TlgWrite(v16, &unk_14001F3D2, v17, v18, 6u, &v33);
      }
    }
  }
  else if ( (unsigned int)dword_140024020 > 5 )
  {
    LOBYTE(Heap) = TlgKeywordOn(v12, v10);
    if ( (_BYTE)Heap )
    {
      v26 = v47;
      v43 = &v26;
      v45 = &v29;
      v29 = a3;
      v44 = 4LL;
      v46 = 8LL;
      LOBYTE(Heap) = TlgWrite(v19, &unk_14001F3A1, v20, v21, 4u, &pData);
    }
  }
  return (char)Heap;
}
