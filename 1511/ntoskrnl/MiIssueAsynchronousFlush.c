/*
 * XREFs of MiIssueAsynchronousFlush @ 0x1401DA2F8
 * Callers:
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 * Callees:
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     IoAsynchronousPageWrite @ 0x1400EF86C (IoAsynchronousPageWrite.c)
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 */

unsigned __int64 __fastcall MiIssueAsynchronousFlush(
        struct _FILE_OBJECT *a1,
        unsigned __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        LARGE_INTEGER a5,
        char a6,
        int a7)
{
  PVOID *v7; // r12
  unsigned __int64 v10; // rdi
  struct _MDL *v11; // rbp
  NTSTATUS v12; // r14d
  unsigned __int8 CurrentIrql; // bl
  int v15; // ebx
  unsigned __int8 v16; // al

  *(_BYTE *)(a2 + 50) = 6;
  v7 = (PVOID *)(a3 + 2112);
  *(_WORD *)(a2 + 48) = 0;
  *(_DWORD *)(a2 + 52) = 0;
  *(_QWORD *)(a2 + 64) = a2 + 56;
  v10 = a2;
  *(_QWORD *)(a2 + 56) = a2 + 56;
  v11 = *(struct _MDL **)(a2 + 72);
  *(_DWORD *)a2 = 0;
  *(_QWORD *)(a2 + 8) = 0LL;
  *(_QWORD *)(a2 + 16) = (char *)v11 + 8 * ((unsigned __int64)v11->ByteCount >> 12) + 48;
  if ( a4 )
    _InterlockedAdd((volatile signed __int32 *)(a4 + 16), 1u);
  v12 = IoAsynchronousPageWrite(
          a1,
          v11,
          &a5,
          (void (__fastcall *)(void *, struct _IO_STATUS_BLOCK *, _QWORD))MiFlushComplete,
          (void *)a2,
          a7,
          0,
          a6,
          (struct _IO_STATUS_BLOCK *)a2,
          (IRP **)(a2 + 24));
  if ( (v12 & 0xC0000000) == 0xC0000000 )
  {
    *(_DWORD *)v10 = v12;
    *(_QWORD *)(v10 + 8) = 0LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    MiFlushComplete(v10, v10);
    __writecr8(CurrentIrql);
    if ( a4 )
      *(_DWORD *)(a4 + 20) = v12;
    v11->ByteCount = 0;
  }
  else
  {
    v15 = 0;
LABEL_9:
    v16 = KeGetCurrentIrql();
    __writecr8(1uLL);
    do
    {
      v10 += 264LL;
      if ( v10 >= (unsigned __int64)v7 )
        v10 = a3;
      if ( !*(_QWORD *)(v10 + 16) || *(_DWORD *)(v10 + 52) == 1 )
      {
        __writecr8(v16);
        return v10;
      }
      ++v15;
    }
    while ( v15 != 8 );
    __writecr8(v16);
    KeWaitForMultipleObjects(8u, v7, WaitAny, WrPageOut, 0, 0, 0LL, (PKWAIT_BLOCK)(a3 + 2176));
    v10 = a3;
    while ( *(int *)v10 >= 0 )
    {
      v10 += 264LL;
      if ( !--v15 )
        goto LABEL_9;
    }
    *(_DWORD *)(*(_QWORD *)(v10 + 72) + 40LL) = 0;
  }
  return 0LL;
}
