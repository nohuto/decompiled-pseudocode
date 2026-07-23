/*
 * XREFs of CmpFileReadEx @ 0x140082A00
 * Callers:
 *     CmpFileRead @ 0x140480BD0 (CmpFileRead.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     ZwReadFile @ 0x14015A2B0 (ZwReadFile.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     SetFailureLocation @ 0x1401B29DC (SetFailureLocation.c)
 *     CmpCreateEvent @ 0x1403F8808 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpFileReadEx(__int64 a1, unsigned int a2, ULONG *a3, char *a4, ULONG a5)
{
  unsigned int v5; // r13d
  ULONG v6; // r14d
  void *v7; // rsi
  __int64 v8; // rbx
  int v9; // eax
  NTSTATUS Status; // edi
  ULONG v11; // r15d
  char *Buffer; // rcx
  ULONG Length; // r14d
  __int64 result; // rax
  HANDLE Event; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-18h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-10h] BYREF
  ULONG v18; // [rsp+B8h] [rbp+48h]

  Event = 0LL;
  v5 = 0x10000000;
  v6 = *a3;
  v18 = *a3;
  v7 = *(void **)(a1 + 8LL * a2 + 2664);
  if ( !v7 )
    return 0LL;
  v8 = *(_QWORD *)(a1 + 56);
  v9 = CmpCreateEvent(SynchronizationEvent, &Event);
  Status = v9;
  if ( v9 < 0 )
  {
    SetFailureLocation(v8, 1, 12, v9, 16);
    return (unsigned int)Status;
  }
  v11 = a5;
  if ( !a5 )
  {
LABEL_13:
    ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
    ZwClose(Event);
    *a3 = v6;
    return 0LL;
  }
  Buffer = a4;
  while ( 1 )
  {
    ByteOffset.QuadPart = v6;
    Length = v11;
    if ( v11 > v5 )
      Length = v5;
    Status = ZwReadFile(v7, Event, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(0LL, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 && v5 > 0x10000 )
    {
      Buffer = a4;
      v5 >>= 1;
      goto LABEL_12;
    }
    v11 -= Length;
    v18 = Length + ByteOffset.LowPart;
    Buffer = &a4[Length];
    a4 = Buffer;
    if ( Status < 0 )
      break;
    if ( IoStatusBlock.Information != Length )
    {
      ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
      ZwClose(Event);
      if ( v8 )
      {
        *(_DWORD *)(v8 + 208) = 1;
        *(_QWORD *)(v8 + 216) = v7;
        *(_DWORD *)(v8 + 224) = LODWORD(IoStatusBlock.Information) - Length;
      }
      CmRegistryIODebug = 1;
      dword_140747ED8 = LODWORD(IoStatusBlock.Information) - Length;
      result = 3221225489LL;
      qword_140747ED0 = (__int64)v7;
      return result;
    }
LABEL_12:
    v6 = v18;
    if ( !v11 )
      goto LABEL_13;
  }
  if ( v8 )
  {
    *(_DWORD *)(v8 + 208) = 1;
    *(_QWORD *)(v8 + 216) = v7;
    *(_DWORD *)(v8 + 224) = Status;
  }
  CmRegistryIODebug = 1;
  qword_140747ED0 = (__int64)v7;
  dword_140747ED8 = Status;
  ObfDereferenceObjectWithTag(0LL, 0x746C6644u);
  ZwClose(Event);
  return (unsigned int)Status;
}
