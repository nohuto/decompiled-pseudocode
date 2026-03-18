/*
 * XREFs of CcMdlWriteComplete2 @ 0x1400F23A4
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1404C2A24 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1404C498C (CcMdlWriteComplete.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnlockPages @ 0x140067610 (MmUnlockPages.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400B0D78 (CcDecrementOpenCount.c)
 *     CcSetDirtyInMask @ 0x1400B2DE0 (CcSetDirtyInMask.c)
 *     FsRtlIsNtstatusExpected @ 0x1400E9E10 (FsRtlIsNtstatusExpected.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  NTSTATUS v5; // esi
  struct _MDL *v6; // rdi
  _DWORD *v7; // r12
  bool v8; // bp
  struct _MDL *Next; // r15
  __int64 ByteCount; // rax
  PMDL v11; // r14
  KIRQL v12; // bl
  struct _MDL *v13; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v15; // ecx
  int v16; // [rsp+30h] [rbp-48h]
  __int64 v17; // [rsp+80h] [rbp+8h] BYREF
  PMDL Mdl; // [rsp+88h] [rbp+10h]

  v3 = *a2;
  Mdl = (PMDL)a3;
  v5 = 0;
  v17 = v3;
  v6 = (struct _MDL *)a3;
  v7 = *(_DWORD **)(*(_QWORD *)(a1 + 40) + 8LL);
  v8 = (*(_BYTE *)(a3 + 10) & 2) != 0;
  do
  {
    Next = v6->Next;
    if ( v8 )
      MmUnlockPages(v6);
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (va_list)&v17, v6->ByteCount);
      if ( v16 < 0 )
        v5 = v16;
    }
    else
    {
      CcSetDirtyInMask((__int64)v7, &v17, v6->ByteCount, 0LL);
    }
    ByteCount = v6->ByteCount;
    v6 = Next;
    v3 += ByteCount;
    v17 = v3;
  }
  while ( Next );
  v11 = Mdl;
  if ( v8 )
  {
    v12 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(v7);
    KeReleaseQueuedSpinLock(5uLL, v12);
  }
  if ( v5 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v5);
    v15 = -1073741591;
    if ( IsNtstatusExpected )
      v15 = v5;
    RtlRaiseStatus(v15);
  }
  do
  {
    v13 = v11->Next;
    IoFreeMdl(v11);
    v11 = v13;
  }
  while ( v13 );
}
