/*
 * XREFs of CcMdlWriteComplete2 @ 0x1400B1818
 * Callers:
 *     FsRtlMdlWriteCompleteDev @ 0x1404CEFBC (FsRtlMdlWriteCompleteDev.c)
 *     CcMdlWriteComplete @ 0x1404D1B94 (CcMdlWriteComplete.c)
 * Callees:
 *     MmFlushSection @ 0x1400220D8 (MmFlushSection.c)
 *     MmUnlockPages @ 0x140051600 (MmUnlockPages.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     CcDecrementOpenCount @ 0x140073218 (CcDecrementOpenCount.c)
 *     FsRtlIsNtstatusExpected @ 0x1400A9C60 (FsRtlIsNtstatusExpected.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
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
