/*
 * XREFs of MiIssueAsynchronousFlush @ 0x1401EAD3C
 * Callers:
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x140059E60 (KeWaitForMultipleObjects.c)
 *     IoAsynchronousPageWrite @ 0x14008D604 (IoAsynchronousPageWrite.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 */

unsigned __int64 __fastcall MiIssueAsynchronousFlush(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        LARGE_INTEGER a5,
        char a6,
        int a7,
        __int64 a8)
{
  PVOID *v8; // r12
  unsigned __int64 v11; // rdi
  struct _MDL *v12; // rbp
  NTSTATUS v13; // r14d
  unsigned __int8 CurrentIrql; // bl
  int v16; // ebx
  unsigned __int8 v17; // al

  *(_BYTE *)(a2 + 50) = 6;
  v8 = (PVOID *)(a3 + 2112);
  *(_WORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  v11 = a2;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  v12 = *(struct _MDL **)(a2 + 72);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v12 + 8 * ((unsigned __int64)v12->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  v13 = IoAsynchronousPageWrite(
          a1,
          v12,
          &a5,
          (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiFlushComplete,
          (void *)a2,
          a7,
          0,
          a6,
          a8,
          (struct _IO_STATUS_BLOCK *)a2,
          (IRP **)(a2 + 24));
  if ( (v13 & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)v11 = v13;
    *(_QWORD *)(v11 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiFlushComplete(v11, v11);
    __writecr8(CurrentIrql);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v13;
    v12->ByteCount = 0;
  }
  else
  {
    v16 = 0;
LABEL_9:
    v17 = KeGetCurrentIrql();
    __writecr8(1uLL);
    do
    {
      v11 += 264LL;
      if ( v11 >= (unsigned __int64)v8 )
        v11 = a3;
      if ( !*(_QWORD *)(v11 + 16) || *(_DWORD *)(v11 + 52) == 1 )
      {
        __writecr8(v17);
        return v11;
      }
      ++v16;
    }
    while ( v16 != 8 );
    __writecr8(v17);
    KeWaitForMultipleObjects(8u, v8, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
    v11 = a3;
    while ( *(int *)v11 >= 0 )
    {
      v11 += 264LL;
      if ( !--v16 )
        goto LABEL_9;
    }
    *(_DWORD *)(*(_QWORD *)(v11 + 72) + 40LL) = 0;
  }
  return 0LL;
}
