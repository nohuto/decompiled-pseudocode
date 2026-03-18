/*
 * XREFs of CcMdlWriteComplete2 @ 0x1400B3998
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1404ECE50 (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1404EFB78 (CcMdlWriteComplete.c)
 * Callees:
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     MmUnlockPages @ 0x140051A80 (MmUnlockPages.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     CcDecrementOpenCount @ 0x140073698 (CcDecrementOpenCount.c)
 *     FsRtlIsNtstatusExpected @ 0x1400AB6F8 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E8D30 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E8DA0 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 */

void __fastcall CcMdlWriteComplete2(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rbx
  bool v5; // zf
  NTSTATUS v6; // esi
  struct _MDL *v7; // rdi
  __int64 v8; // rax
  bool v9; // bp
  _DWORD *v10; // r12
  struct _MDL *Next; // r15
  __int64 ByteCount; // rax
  PMDL v13; // r14
  KIRQL v14; // bl
  struct _MDL *v15; // rbx
  BOOLEAN IsNtstatusExpected; // al
  NTSTATUS v17; // ecx
  int v18; // [rsp+30h] [rbp-48h]
  __int64 v19; // [rsp+80h] [rbp+8h] BYREF
  PMDL Mdl; // [rsp+88h] [rbp+10h]

  v3 = *a2;
  Mdl = (PMDL)a3;
  v5 = (*(_BYTE *)(a3 + 10) & 2) == 0;
  v6 = 0;
  v7 = (struct _MDL *)a3;
  v8 = *(_QWORD *)(a1 + 40);
  v19 = v3;
  v9 = !v5;
  v10 = *(_DWORD **)(v8 + 8);
  do
  {
    Next = v7->Next;
    if ( v9 )
      MmUnlockPages(v7);
    if ( (*(_DWORD *)(a1 + 80) & 0x10) != 0 )
    {
      MmFlushSection(*(_QWORD *)(a1 + 40), (va_list)&v19, v7->ByteCount);
      if ( v18 < 0 )
        v6 = v18;
    }
    else
    {
      CcSetDirtyInMask((__int64)v10, &v19, v7->ByteCount, 0LL);
    }
    ByteCount = v7->ByteCount;
    v7 = Next;
    v3 += ByteCount;
    v19 = v3;
  }
  while ( Next );
  v13 = Mdl;
  if ( v9 )
  {
    v14 = KeAcquireQueuedSpinLock(5uLL);
    CcDecrementOpenCount(v10);
    KeReleaseQueuedSpinLock(5uLL, v14);
  }
  if ( v6 < 0 )
  {
    IsNtstatusExpected = FsRtlIsNtstatusExpected(v6);
    v17 = -1073741591;
    if ( IsNtstatusExpected )
      v17 = v6;
    RtlRaiseStatus(v17);
  }
  do
  {
    v15 = v13->Next;
    IoFreeMdl(v13);
    v13 = v15;
  }
  while ( v15 );
}
