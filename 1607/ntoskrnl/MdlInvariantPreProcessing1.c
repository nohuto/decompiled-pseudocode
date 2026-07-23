/*
 * XREFs of MdlInvariantPreProcessing1 @ 0x140222FA8
 * Callers:
 *     IovpCallDriver1 @ 0x14070A8C0 (IovpCallDriver1.c)
 * Callees:
 *     MmMdlPageContentsState @ 0x1400A43BC (MmMdlPageContentsState.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DC0C0 (MmMapLockedPagesSpecifyCache.c)
 *     RtlpComputeCrcInternal @ 0x140110070 (RtlpComputeCrcInternal.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MdlInvariantFindMdlInfo @ 0x140222C2C (MdlInvariantFindMdlInfo.c)
 *     MdlInvariantInsertMdlInfo @ 0x140222C70 (MdlInvariantInsertMdlInfo.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C318 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall MdlInvariantPreProcessing1(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v7; // rcx
  __int64 v8; // rcx
  PVOID v9; // rbx
  __int64 MdlInfo; // rdi
  __int64 v11; // r11
  char v12; // al
  __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r8
  __int64 v17; // r8
  int v18; // edx
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  ULONG_PTR v22; // [rsp+20h] [rbp-48h]
  __int128 v23; // [rsp+30h] [rbp-38h] BYREF
  PVOID v24; // [rsp+40h] [rbp-28h]
  int v25; // [rsp+48h] [rbp-20h]
  char v26; // [rsp+4Ch] [rbp-1Ch]

  v3 = *(_QWORD *)(a1 + 168);
  v7 = *(_QWORD *)(v3 + 8);
  if ( !*(_QWORD *)v7
    && (KeGetCurrentIrql() >= 2u || *(_DWORD *)(v7 + 40) != -1)
    && (unsigned int)MmMdlPageContentsState(v7, 2u) == 1 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL);
    v9 = (*(_BYTE *)(v8 + 10) & 5) != 0
       ? *(PVOID *)(v8 + 24)
       : MmMapLockedPagesSpecifyCache((PMDL)v8, 0, MmCached, 0LL, 0, 0x40000020u);
    if ( v9 )
    {
      MdlInfo = MdlInvariantFindMdlInfo(a2, *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL));
      if ( !MdlInfo )
        goto LABEL_29;
      v12 = *(_BYTE *)(v11 + 67);
      if ( v12 == *(_BYTE *)(v11 + 66) || *(_BYTE *)(MdlInfo + 28) == v12 )
      {
        memset((void *)MdlInfo, 0, 0x20uLL);
        *(_QWORD *)(*(_QWORD *)(a2 + 224) + 16LL) = 0LL;
        MdlInfo = 0LL;
      }
      if ( MdlInfo )
      {
        v13 = *(_QWORD *)(a1 + 168);
        v14 = *(unsigned int *)(MdlInfo + 24);
        v15 = *(unsigned int *)(*(_QWORD *)(v13 + 8) + 40LL);
        if ( (_DWORD)v14 != (_DWORD)v15 )
        {
          v16 = *(_QWORD *)(MdlInfo + 16);
          if ( (unsigned __int64)v9 < v16 || (unsigned __int64)v9 + v15 > v16 + v14 )
          {
            v17 = *(_QWORD *)(a3 + 40);
            v22 = (ULONG_PTR)v9;
            if ( *(_BYTE *)a3 == 4 )
              v18 = 4112;
            else
              v18 = 4113;
            goto LABEL_25;
          }
        }
        if ( (MmVerifierData & 0x4000) != 0 )
        {
          v19 = RtlpComputeCrcInternal((unsigned __int64)v9, v15, 0LL, &Crc64Ctrl);
          if ( *(_QWORD *)(MdlInfo + 8) != v19 )
          {
            if ( *(_BYTE *)a3 == 4 )
            {
              v18 = 4112;
LABEL_24:
              v17 = *(_QWORD *)(a3 + 40);
              v13 = *(_QWORD *)(a1 + 168);
              v22 = (ULONG_PTR)v9;
LABEL_25:
              VerifierBugCheckIfAppropriate(196, v18, v17, v13, v22);
              return;
            }
            if ( *(_DWORD *)(*(_QWORD *)(v3 + 184) + 8LL) == *(_DWORD *)(a3 + 8) )
            {
              v18 = 4113;
              goto LABEL_24;
            }
            *(_QWORD *)(MdlInfo + 8) = v19;
          }
        }
      }
      else
      {
LABEL_29:
        v20 = RtlpComputeCrcInternal(
                (unsigned __int64)v9,
                *(unsigned int *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL) + 40LL),
                0LL,
                &Crc64Ctrl);
        v21 = *(_QWORD *)(a1 + 168);
        *((_QWORD *)&v23 + 1) = v20;
        v24 = v9;
        *(_QWORD *)&v23 = *(_QWORD *)(v21 + 8);
        v25 = *(_DWORD *)(v23 + 40);
        v26 = *(_BYTE *)(v21 + 67);
        MdlInvariantInsertMdlInfo(a2, &v23);
      }
    }
  }
}
