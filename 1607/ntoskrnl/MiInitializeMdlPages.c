/*
 * XREFs of MiInitializeMdlPages @ 0x14010480C
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140101FA4 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiChangePageAttributeBatch @ 0x14001D1C0 (MiChangePageAttributeBatch.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFreePagesFromMdl @ 0x1400996F8 (MiFreePagesFromMdl.c)
 *     MiInitializeMdlPfn @ 0x140104CA0 (MiInitializeMdlPfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140104D48 (MiPageAttributeBatchChangeNeeded.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiZeroInParallel @ 0x14010A05C (MiZeroInParallel.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     MiLogMdlRangeEvent @ 0x1401E4694 (MiLogMdlRangeEvent.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

ULONG_PTR __fastcall MiInitializeMdlPages(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r11
  unsigned int v6; // r12d
  __int64 v7; // rdi
  unsigned __int64 v8; // r14
  int v9; // esi
  ULONG_PTR v10; // r15
  _BYTE *v11; // rbp
  _BYTE *PoolWithTag; // rax
  _QWORD *v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // r9
  __int64 DemandZeroPte; // rbx
  __int64 v17; // r13
  _KPROCESS *Process; // rcx
  __int64 v19; // rsi
  int v20; // edi
  _DWORD *v21; // r9
  __int64 v22; // r10
  unsigned int v23; // r11d
  unsigned int v24; // edx
  __int64 v25; // rcx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdi
  bool v29; // zf
  unsigned int v30; // edx
  _DWORD *v32; // rax
  ULONG_PTR v33; // rbx
  __int64 v34; // [rsp+20h] [rbp-98h]
  __int64 v35; // [rsp+28h] [rbp-90h]
  __int64 v36; // [rsp+30h] [rbp-88h]
  __int64 v37; // [rsp+38h] [rbp-80h]
  ULONG_PTR v38; // [rsp+40h] [rbp-78h]
  unsigned __int64 v39; // [rsp+48h] [rbp-70h]
  _KPROCESS *v40; // [rsp+50h] [rbp-68h]
  _BYTE v41[96]; // [rsp+58h] [rbp-60h] BYREF
  unsigned int v43; // [rsp+C8h] [rbp+10h]
  unsigned int v44; // [rsp+D0h] [rbp+18h]

  v44 = a3;
  v43 = a2;
  v5 = 0LL;
  v6 = dword_140326A3C;
  v7 = a4;
  v8 = (unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 40) >> 12;
  v9 = a2;
  v10 = BugCheckParameter2;
  v11 = 0LL;
  if ( a5 == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_140326A3C, 0x6C646D4Du);
    v5 = 0LL;
    v11 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v6 = 1;
      v11 = v41;
    }
    if ( v6 )
    {
      v13 = v11 + 8;
      v14 = v6;
      do
      {
        *v13 = 0LL;
        a2 = 0xFFFFFFFFFLL;
        v13[1] = 0xFFFFFFFFFLL;
        v13 += 3;
        --v14;
      }
      while ( v14 );
    }
    a3 = v44;
  }
  v35 = 0LL;
  v38 = v10 + 48;
  v15 = (_QWORD *)(v10 + 48);
  if ( (v9 & 0x80000200) != 0 )
    DemandZeroPte = 0LL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4LL, a2, a3, v15);
  v17 = v5;
  v36 = v5;
  v34 = v5;
  v37 = v5;
  Process = KeGetCurrentThread()->ApcState.Process;
  v40 = Process;
  if ( v8 )
  {
    v39 = v8;
    while ( 1 )
    {
      v19 = 48LL * *v15 - 0x58000000000LL;
      v20 = v5;
      *(_QWORD *)v19 = Process;
      if ( a5 == 1 && (unsigned int)MiPfnZeroingNeeded(v19, (unsigned int)a3) )
      {
        v20 = 1;
        v35 = v22 + 1;
        if ( v6 == 1 )
          v24 = v23;
        else
          v24 = dword_140326A38 & *v21 | (((*(_QWORD *)(v19 + 40) >> 36) & 3) << byte_140326A18) | (((*(_QWORD *)(v19 + 40) >> 58) & 0x3F) << byte_140326A09);
        v25 = 3LL * v24;
        *(_QWORD *)v19 = *(_QWORD *)&v11[24 * v24 + 16];
        ++*(_QWORD *)&v11[8 * v25 + 8];
        *(_QWORD *)&v11[8 * v25 + 16] = v19;
      }
      v26 = *(_QWORD *)(v19 + 40) & 0xFDFFFFFFFFFFFFFDuLL;
      *(_QWORD *)(v19 + 16) = DemandZeroPte;
      *(_QWORD *)(v19 + 40) = v26 | 0xFFFFFFFFDLL;
      if ( v8 == a4 || (v43 & 4) == 0 )
      {
        if ( (_DWORD)a3 == 3 && v20 == 1 )
        {
          if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v19, 1LL) == 1 )
          {
            *(_QWORD *)(v19 + 16) = v17;
            v17 = v19;
            goto LABEL_33;
          }
          v27 = v36;
          v36 = v19;
        }
        else
        {
          if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v19, (unsigned int)a3) != 1 )
            goto LABEL_33;
          if ( !v20
            || *((_DWORD *)&unk_140326A60 + 4 * ((unsigned __int64)*(unsigned __int8 *)(v19 + 34) >> 6) + (int)v44) == v44 )
          {
            v27 = v34;
            v34 = v19;
          }
          else
          {
            v27 = v37;
            v37 = v19;
          }
        }
        *(_QWORD *)(v19 + 16) = v27;
      }
LABEL_33:
      v28 = (unsigned __int8)MiLockPageInline(v19);
      MiInitializeMdlPfn(v19, v43);
      _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v28);
      v5 = 0LL;
      v15 = (_QWORD *)(v38 + 8);
      v29 = v39-- == 1;
      Process = v40;
      v38 += 8LL;
      if ( v29 )
      {
        v10 = BugCheckParameter2;
        v7 = a4;
        v9 = v43;
        break;
      }
      LODWORD(a3) = v44;
    }
  }
  if ( v8 != v7 && (v9 & 4) != 0 )
  {
    if ( !v8 )
    {
LABEL_42:
      if ( v11 )
      {
        if ( v11 != v41 )
          ExFreePoolWithTag(v11, 0);
      }
      ExFreePoolWithTag((PVOID)v10, 0);
      return 0LL;
    }
    v30 = v5;
    if ( v9 < 0 )
      v30 = 0x80000000;
    MiFreePagesFromMdl(v10, v30);
    v5 = 0LL;
    v8 = 0LL;
  }
  if ( !v8 )
    goto LABEL_42;
  if ( v34 )
  {
    MiChangePageAttributeBatch(v34, v44, DemandZeroPte);
    v5 = 0LL;
  }
  if ( v17 )
  {
    MiChangePageAttributeBatch(v17, 1u, -1LL);
    v5 = 0LL;
  }
  if ( v35 != v5 )
  {
    MiZeroInParallel(v11, v6, (unsigned int)v9, v15);
    if ( v11 != v41 )
      ExFreePoolWithTag(v11, 0);
    if ( v17 )
      MiChangePageAttributeBatch(v17, 3u, DemandZeroPte);
    if ( v36 )
      MiChangePageAttributeBatch(v36, 3u, DemandZeroPte);
    if ( v37 )
      MiChangePageAttributeBatch(v37, v44, DemandZeroPte);
  }
  if ( v7 - v8 > 0x800 )
  {
    v32 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v8 + 48, 0x69646D4Du);
    v33 = (ULONG_PTR)v32;
    if ( v32 )
    {
      *(_QWORD *)v32 = 0LL;
      v32[10] = (_DWORD)v8 << 12;
      *((_WORD *)v32 + 5) = 0;
      *((_QWORD *)v32 + 4) = 0LL;
      v32[11] = 0;
      *((_WORD *)v32 + 4) = 8 * ((((v8 << 12) + 4095) >> 12) + 6);
      memmove(v32 + 12, (const void *)(v10 + 48), 8 * v8);
      ExFreePoolWithTag((PVOID)v10, 0);
      v10 = v33;
    }
  }
  *(_WORD *)(v10 + 10) |= 2u;
  *(_QWORD *)(v10 + 16) = 0LL;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(v10 + 48, 632LL, v8);
  return v10;
}
