/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x14025AA6C
 * Callers:
 *     IovpCompleteRequest2 @ 0x1407404B4 (IovpCompleteRequest2.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x1400ABA30 (MmMapLockedPagesSpecifyCache.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     MmMdlPageContentsState @ 0x140122348 (MmMdlPageContentsState.c)
 *     RtlpComputeCrcInternal @ 0x14013422C (RtlpComputeCrcInternal.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall MdlInvariantPostProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  BOOL v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned int v11; // ecx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  PVOID v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r8
  unsigned __int64 v18; // rdx
  int v19; // r9d
  __int64 v20; // r8
  int v21; // edx
  __int64 v22; // rbx
  ULONG_PTR v23; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)v5 || KeGetCurrentIrql() < 2u && *(_DWORD *)(v5 + 40) == -1 )
    return;
  v7 = *(_BYTE *)(a2 + 67) == *(_BYTE *)(a2 + 66);
  if ( (MmVerifierData & 0x2000) != 0 && (MmVerifierData & 0x4000) == 0 && !v7 )
    return;
  if ( (unsigned int)MmMdlPageContentsState(v5, 2u) != 1 )
    return;
  v8 = *(_QWORD *)(a1 + 224);
  if ( v8 )
    *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 8);
  v9 = *(_QWORD *)(a1 + 224);
  if ( v9 )
  {
    v11 = 0;
    if ( *(_DWORD *)v9 )
    {
      v12 = *(_QWORD *)(v9 + 8);
      while ( 1 )
      {
        v13 = *(_QWORD *)(32LL * v11 + v12);
        if ( v13 )
        {
          if ( v13 == *(_QWORD *)(a2 + 8) )
            break;
        }
        if ( ++v11 >= *(_DWORD *)v9 )
          goto LABEL_17;
      }
      v10 = v12 + 32LL * v11;
    }
    else
    {
LABEL_17:
      v10 = 0LL;
    }
    if ( v10 )
      goto LABEL_20;
  }
  else
  {
    v10 = 0LL;
  }
  if ( *(_BYTE *)a3 == 4 )
    return;
LABEL_20:
  v14 = *(_QWORD *)(a2 + 8);
  if ( (*(_BYTE *)(v14 + 10) & 5) != 0 )
    v15 = *(PVOID *)(v14 + 24);
  else
    v15 = MmMapLockedPagesSpecifyCache((PMDL)v14, 0, MmCached, 0LL, 0, 0x20u);
  if ( v15 )
  {
    if ( !v10
      || (v16 = *(unsigned int *)(v10 + 24),
          v17 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
          (_DWORD)v16 == (_DWORD)v17) )
    {
      if ( *(_BYTE *)a3 == 4 )
      {
        if ( RtlpComputeCrcInternal(
               (unsigned __int64)v15,
               *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
               0LL,
               &Crc64Ctrl) != *(_QWORD *)(v10 + 8) )
          VerifierBugCheckIfAppropriate(196, 4112, *(_QWORD *)(a3 + 40), a2, (ULONG_PTR)v15);
        return;
      }
    }
    else
    {
      v18 = *(_QWORD *)(v10 + 16);
      if ( (unsigned __int64)v15 < v18 || (unsigned __int64)v15 + v17 > v18 + v16 )
      {
        v19 = a2;
        v20 = *(_QWORD *)(a3 + 40);
        v23 = (ULONG_PTR)v15;
        if ( *(_BYTE *)a3 == 4 )
        {
          v21 = 4112;
LABEL_39:
          VerifierBugCheckIfAppropriate(196, v21, v20, v19, v23);
          return;
        }
LABEL_38:
        v21 = 4113;
        goto LABEL_39;
      }
    }
    if ( *(_BYTE *)a3 == 3 && KeGetCurrentIrql() < 2u )
    {
      v22 = RtlpComputeCrcInternal(
              (unsigned __int64)v15,
              *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
              0LL,
              &Crc64Ctrl);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
      if ( v22 != RtlpComputeCrcInternal(
                    (unsigned __int64)v15,
                    *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    0LL,
                    &Crc64Ctrl) )
      {
        v20 = *(_QWORD *)(a3 + 40);
        v19 = a2;
        v23 = (ULONG_PTR)v15;
        goto LABEL_38;
      }
    }
  }
}
