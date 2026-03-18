/*
 * XREFs of MiInitializeMdlPages @ 0x140076FA8
 * Callers:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiZeroInParallel @ 0x140075AD4 (MiZeroInParallel.c)
 *     MiInitializeMdlPfn @ 0x1400774C4 (MiInitializeMdlPfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x140077838 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1400793F0 (MiZeroPhysicalPage.c)
 *     MiFreePagesFromMdl @ 0x1400E2D98 (MiFreePagesFromMdl.c)
 *     MiChangePageAttributeBatch @ 0x1400E57F0 (MiChangePageAttributeBatch.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     MiLogMdlRangeEvent @ 0x140215348 (MiLogMdlRangeEvent.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_DWORD *__fastcall MiInitializeMdlPages(__int64 a1, _DWORD *a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  int v7; // edi
  __int64 v8; // r9
  unsigned __int64 v9; // rsi
  __int64 v10; // r13
  _DWORD *v11; // rbp
  _QWORD *v12; // r14
  __int64 v13; // r10
  __int64 v14; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // r8
  __int64 DemandZeroPte; // rbx
  __int64 v19; // r12
  __int64 v20; // rdi
  _KPROCESS *Process; // rdx
  __int64 v22; // rbp
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rax
  int v28; // eax
  unsigned int v29; // r13d
  _DWORD *v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // r8
  __int64 v36; // rax
  _DWORD *v37; // rax
  _DWORD *v38; // rbx
  unsigned int v39; // [rsp+20h] [rbp-88h]
  _DWORD *v40; // [rsp+28h] [rbp-80h]
  unsigned __int8 CurrentIrql; // [rsp+30h] [rbp-78h]
  __int64 v42; // [rsp+38h] [rbp-70h]
  __int64 v43; // [rsp+40h] [rbp-68h]
  __int64 v44; // [rsp+48h] [rbp-60h]
  unsigned __int64 v45; // [rsp+50h] [rbp-58h]
  _KPROCESS *v46; // [rsp+58h] [rbp-50h]
  int v50; // [rsp+C8h] [rbp+20h]
  int v51; // [rsp+D8h] [rbp+30h]

  v7 = dword_14034EBBC;
  v8 = 0LL;
  v9 = (unsigned __int64)(unsigned int)a2[10] >> 12;
  v10 = a3;
  v11 = a2;
  v39 = dword_14034EBBC;
  v12 = 0LL;
  LODWORD(v13) = 1;
  if ( a6 == 1 )
  {
    v14 = (unsigned int)dword_14034EBBC;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_14034EBBC, 0x6C646D4Du);
    v8 = 0LL;
    v12 = PoolWithTag;
    LODWORD(v13) = 1;
    if ( PoolWithTag )
    {
      if ( v7 )
      {
        v16 = PoolWithTag + 1;
        do
        {
          *v16 = 0LL;
          v16[1] = 0xFFFFFFFFFLL;
          v16 += 3;
          --v14;
        }
        while ( v14 );
      }
    }
  }
  v43 = 0LL;
  v40 = v11 + 12;
  v17 = v11 + 12;
  if ( (a4 & 0x80000200) != 0 )
    DemandZeroPte = 0LL;
  else
    DemandZeroPte = MiMakeDemandZeroPte(4LL);
  v19 = v8;
  v44 = v8;
  v20 = v8;
  v42 = v8;
  Process = KeGetCurrentThread()->ApcState.Process;
  v46 = Process;
  if ( v9 )
  {
    v45 = v9;
    v22 = v8;
    while ( 1 )
    {
      v51 = v8;
      v23 = 48LL * *v17 - 0x58000000000LL;
      v25 = v8;
      v24 = *(_QWORD *)(v23 + 40);
      LOBYTE(v25) = *(_QWORD *)(v23 + 16) == v8;
      *(_QWORD *)v23 = Process;
      v50 = v25;
      *(_QWORD *)(v23 + 40) = v24 & 0xFDFFFFF000000000uLL | 0xFFFFFFFFDLL;
      if ( v9 == v10 || (a4 & 4) == 0 )
      {
        if ( a5 != 3 || v25 || ((unsigned __int8)a4 & (unsigned __int8)v13) != 0 )
        {
          v28 = MiPageAttributeBatchChangeNeeded(v23, a5);
          LODWORD(v13) = 1;
          LODWORD(v8) = 0;
          if ( v28 != 1 )
            goto LABEL_22;
          v27 = v42;
          v42 = v23;
          v51 = 1;
        }
        else
        {
          v51 = v13;
          v26 = MiPageAttributeBatchChangeNeeded(v23, (unsigned int)v13);
          LODWORD(v13) = 1;
          LODWORD(v8) = 0;
          if ( v26 == 1 )
          {
            *(_QWORD *)(v23 + 16) = v22;
            v22 = v23;
            goto LABEL_22;
          }
          v27 = v44;
          v44 = v23;
        }
        *(_QWORD *)(v23 + 16) = v27;
      }
LABEL_22:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v29 = v8;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 24), 0x3FuLL) )
      {
        do
        {
          v29 += v13;
          if ( (v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v29);
            LODWORD(v13) = 1;
          }
        }
        while ( *(__int64 *)(v23 + 24) < 0 );
      }
      MiInitializeMdlPfn(v23, (unsigned int)a4);
      _InterlockedAnd64((volatile signed __int64 *)(v23 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v8 = 0LL;
      if ( v50 || ((unsigned __int8)a4 & (unsigned __int8)v13) != 0 )
      {
        v30 = v40;
      }
      else
      {
        v43 += v13;
        v30 = v40;
        if ( v12 )
        {
          v31 = dword_14034EBB8 & *v40 | (((*(_QWORD *)(v23 + 40) >> 36) & 3) << byte_14034EB98) | ((unsigned __int8)((*(_QWORD *)(v23 + 40) >> 58) & 0x3F) << byte_14034EB89);
          v32 = 3 * v31;
          *(_QWORD *)v23 = v12[3 * v31 + 2];
          v12[v32 + 1] += v13;
          v12[v32 + 2] = v23;
        }
        else
        {
          *(_QWORD *)v23 = v19;
          v19 = v23;
        }
      }
      if ( !v51 )
        *(_QWORD *)(v23 + 16) = DemandZeroPte;
      v10 = a3;
      v17 = v30 + 2;
      v33 = v45 == v13;
      v45 -= v13;
      Process = v46;
      v40 = v17;
      if ( v33 )
      {
        v20 = v22;
        v11 = a2;
        break;
      }
    }
  }
  if ( v9 != v10 && (a4 & 4) != 0 )
  {
    if ( !v9 )
    {
LABEL_46:
      if ( v12 )
        ExFreePoolWithTag(v12, 0);
      ExFreePoolWithTag(v11, 0);
      return 0LL;
    }
    v34 = (unsigned int)v8;
    if ( a4 < 0 )
      v34 = (unsigned int)v13;
    MiFreePagesFromMdl(a1, v11, v34);
    v8 = 0LL;
    v9 = 0LL;
  }
  if ( !v9 )
    goto LABEL_46;
  if ( v42 )
  {
    MiChangePageAttributeBatch(v42, a5, DemandZeroPte);
    v8 = 0LL;
  }
  if ( v20 )
  {
    MiChangePageAttributeBatch(v20, 1LL, -1LL);
    v8 = 0LL;
  }
  if ( v43 != v8 )
  {
    if ( v12 )
    {
      MiZeroInParallel((__int64)v12, v39, a4);
      ExFreePoolWithTag(v12, 0);
    }
    else if ( v19 )
    {
      do
      {
        MiZeroPhysicalPage((v19 + 0x58000000000LL) / 48, 3LL, *(unsigned __int8 *)(v19 + 34) >> 6);
        v36 = *(_QWORD *)v19;
        *(_QWORD *)v19 = v46;
        v19 = v36;
      }
      while ( v36 );
    }
    if ( v20 )
      MiChangePageAttributeBatch(v20, 3LL, DemandZeroPte);
    if ( v44 )
      MiChangePageAttributeBatch(v44, 3LL, DemandZeroPte);
  }
  if ( v10 - v9 > 0x800 )
  {
    v37 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v9 + 48, 0x69646D4Du);
    v38 = v37;
    if ( v37 )
    {
      *(_QWORD *)v37 = 0LL;
      v37[10] = (_DWORD)v9 << 12;
      *((_WORD *)v37 + 5) = 0;
      *((_QWORD *)v37 + 4) = 0LL;
      v37[11] = 0;
      *((_WORD *)v37 + 4) = 8 * ((((v9 << 12) + 4095) >> 12) + 6);
      memmove(v37 + 12, v11 + 12, 8 * v9);
      ExFreePoolWithTag(v11, 0);
      v11 = v38;
    }
  }
  *((_QWORD *)v11 + 2) = 0LL;
  *((_WORD *)v11 + 5) |= 2u;
  if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
    MiLogMdlRangeEvent(v11 + 12, 632LL, v9);
  return v11;
}
