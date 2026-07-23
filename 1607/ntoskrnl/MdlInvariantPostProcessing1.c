/*
 * XREFs of MdlInvariantPostProcessing1 @ 0x140222DAC
 * Callers:
 *     IovpCompleteRequest2 @ 0x14070B208 (IovpCompleteRequest2.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x1400A43BC (MmMdlPageContentsState.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x140110070 (RtlpComputeCrcInternal.c)
 *     MdlInvariantFindMdlInfo @ 0x140222C2C (MdlInvariantFindMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall MdlInvariantPostProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  BOOL v7; // edx
  __int64 v8; // rcx
  __int64 MdlInfo; // rbx
  __int64 v10; // r11
  PVOID v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // r8
  int v17; // edx
  __int64 v18; // rbx
  ULONG_PTR v19; // [rsp+20h] [rbp-18h]

  v5 = *(_QWORD *)(a2 + 8);
  if ( !*(_QWORD *)v5 && (KeGetCurrentIrql() >= 2u || *(_DWORD *)(v5 + 40) != -1) )
  {
    v7 = *(_BYTE *)(a2 + 67) == *(_BYTE *)(a2 + 66);
    if ( ((MmVerifierData & 0x2000) == 0 || (MmVerifierData & 0x4000) != 0 || v7)
      && (unsigned int)MmMdlPageContentsState(v5, 2u) == 1 )
    {
      v8 = *(_QWORD *)(a1 + 224);
      if ( v8 )
        *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 8);
      MdlInfo = MdlInvariantFindMdlInfo(a1, *(_QWORD *)(a2 + 8));
      if ( MdlInfo || *(_BYTE *)a3 != 4 )
      {
        v11 = (*(_BYTE *)(v10 + 10) & 5) != 0
            ? *(PVOID *)(v10 + 24)
            : MmMapLockedPagesSpecifyCache((PMDL)v10, 0, MmCached, 0LL, 0, 0x40000020u);
        if ( v11 )
        {
          if ( !MdlInfo
            || (v12 = *(unsigned int *)(MdlInfo + 24),
                v13 = *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                (_DWORD)v12 == (_DWORD)v13) )
          {
            if ( *(_BYTE *)a3 == 4 )
            {
              if ( RtlpComputeCrcInternal(
                     (unsigned __int64)v11,
                     *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                     0LL,
                     &Crc64Ctrl) != *(_QWORD *)(MdlInfo + 8) )
                VerifierBugCheckIfAppropriate(196, 4112, *(_QWORD *)(a3 + 40), a2, (ULONG_PTR)v11);
              return;
            }
          }
          else
          {
            v14 = *(_QWORD *)(MdlInfo + 16);
            if ( (unsigned __int64)v11 < v14 || (unsigned __int64)v11 + v13 > v14 + v12 )
            {
              v15 = a2;
              v16 = *(_QWORD *)(a3 + 40);
              v19 = (ULONG_PTR)v11;
              if ( *(_BYTE *)a3 == 4 )
              {
                v17 = 4112;
LABEL_30:
                VerifierBugCheckIfAppropriate(196, v17, v16, v15, v19);
                return;
              }
LABEL_29:
              v17 = 4113;
              goto LABEL_30;
            }
          }
          if ( *(_BYTE *)a3 == 3 && KeGetCurrentIrql() < 2u )
          {
            v18 = RtlpComputeCrcInternal(
                    (unsigned __int64)v11,
                    *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                    0LL,
                    &Crc64Ctrl);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&IovMdlInvariant10Milliseconds);
            if ( v18 != RtlpComputeCrcInternal(
                          (unsigned __int64)v11,
                          *(unsigned int *)(*(_QWORD *)(a2 + 8) + 40LL),
                          0LL,
                          &Crc64Ctrl) )
            {
              v16 = *(_QWORD *)(a3 + 40);
              v15 = a2;
              v19 = (ULONG_PTR)v11;
              goto LABEL_29;
            }
          }
        }
      }
    }
  }
}
