/*
 * XREFs of SmKmEtwAppendObjectName @ 0x1402205A4
 * Callers:
 *     SmKmStoreTerminateWorker @ 0x140220B74 (SmKmStoreTerminateWorker.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     IoSetThreadHardErrorMode @ 0x140074D38 (IoSetThreadHardErrorMode.c)
 *     IoGetDeviceAttachmentBaseRef @ 0x1400F93B8 (IoGetDeviceAttachmentBaseRef.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     ObQueryNameString @ 0x1404BFAE4 (ObQueryNameString.c)
 */

__int64 __fastcall SmKmEtwAppendObjectName(__int64 a1, PDEVICE_OBJECT DeviceAttachmentBaseRef)
{
  __int64 v3; // rdx
  void *v5; // r13
  _OBJECT_NAME_INFORMATION *v6; // rdi
  ULONG v7; // r14d
  void *v8; // rbp
  BOOLEAN v9; // r15
  NTSTATUS v10; // ebx
  wchar_t *Buffer; // rdx
  unsigned __int16 v12; // bx
  unsigned __int16 *v13; // rcx
  unsigned __int16 **v14; // rax
  __int64 v15; // rdx
  __int64 result; // rax
  _QWORD *v17; // rdx
  ULONG ReturnLength; // [rsp+20h] [rbp-68h] BYREF
  _OWORD Src[2]; // [rsp+28h] [rbp-60h] BYREF

  v3 = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v5 = (void *)(v3 + 2);
  v6 = (_OBJECT_NAME_INFORMATION *)((v3 + 9) & 0xFFFFFFFFFFFFFFF8uLL);
  v7 = v3 + *(_DWORD *)(a1 + 28) - *(_DWORD *)(a1 + 24) - (_DWORD)v6;
  Src[0] = *(_OWORD *)L"\\Device\\Unknown";
  Src[1] = *(_OWORD *)L"Unknown";
  RtlInitUnicodeString(&v6->Name, 0LL);
  if ( ((unsigned __int8)DeviceAttachmentBaseRef & 1) != 0 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef((PDEVICE_OBJECT)((unsigned __int64)DeviceAttachmentBaseRef & 0xFFFFFFFFFFFFFFFEuLL));
    v8 = DeviceAttachmentBaseRef;
  }
  else
  {
    v8 = 0LL;
  }
  if ( DeviceAttachmentBaseRef )
  {
    v9 = IoSetThreadHardErrorMode(0);
    v10 = ObQueryNameString(DeviceAttachmentBaseRef, v6, v7, &ReturnLength);
    if ( v8 )
      ObfDereferenceObjectWithTag(v8, 0x746C6644u);
    IoSetThreadHardErrorMode(v9);
  }
  else
  {
    v10 = -1073741809;
  }
  if ( v10 >= 0 && v6->Name.Length )
  {
    Buffer = v6->Name.Buffer;
    v12 = v6->Name.Length >> 1;
  }
  else
  {
    Buffer = (wchar_t *)Src;
    v12 = 15;
  }
  memmove(v5, Buffer, 2LL * v12);
  v13 = (unsigned __int16 *)(*(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24));
  *v13 = v12;
  v14 = (unsigned __int16 **)(*(_QWORD *)a1 + 16LL * *(unsigned int *)(a1 + 16));
  *v14 = v13;
  v14[1] = (unsigned __int16 *)2;
  v15 = (unsigned int)++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += 2;
  result = *(_QWORD *)(a1 + 8) + *(unsigned int *)(a1 + 24);
  v17 = (_QWORD *)(*(_QWORD *)a1 + 16 * v15);
  LODWORD(v13) = 2 * v12;
  *v17 = result;
  v17[1] = (unsigned int)v13;
  ++*(_DWORD *)(a1 + 16);
  *(_DWORD *)(a1 + 24) += (_DWORD)v13;
  return result;
}
