/*
 * XREFs of MiInitializeMdlPages @ 0x1400BCA18
 * Callers:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140011298 (MiFreePagesFromMdl.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiChangePageAttributeBatch @ 0x1400A9630 (MiChangePageAttributeBatch.c)
 *     MiZeroInParallel @ 0x1400BC21C (MiZeroInParallel.c)
 *     MiInitializeMdlPfn @ 0x1400BCE40 (MiInitializeMdlPfn.c)
 *     MiPageAttributeBatchChangeNeeded @ 0x1400BCED4 (MiPageAttributeBatchChangeNeeded.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     MiLogMdlRangeEvent @ 0x1401D3CD4 (MiLogMdlRangeEvent.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

ULONG_PTR __fastcall MiInitializeMdlPages(__int64 a1, ULONG_PTR a2, __int64 a3, int a4, unsigned int a5, int a6)
{
  int v7; // r12d
  unsigned __int64 v8; // rsi
  __int64 v9; // rdi
  ULONG_PTR v10; // rbp
  _QWORD *v11; // r14
  _QWORD *v12; // r8
  __int64 v13; // r12
  _QWORD *v14; // r13
  __int64 v15; // rbx
  _KPROCESS *Process; // rdx
  __int64 v17; // rdi
  __int64 v18; // rax
  BOOL v19; // ecx
  unsigned __int64 v20; // r10
  _DWORD *v21; // r8
  bool v22; // zf
  __int64 v24; // rdx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rbx
  _QWORD *PoolWithTag; // rax
  _QWORD *v29; // rax
  __int64 v30; // rax
  _DWORD *v31; // rax
  ULONG_PTR v32; // rbx
  unsigned int v33; // [rsp+20h] [rbp-88h]
  _DWORD *v34; // [rsp+28h] [rbp-80h]
  _QWORD *v35; // [rsp+30h] [rbp-78h]
  __int64 v36; // [rsp+38h] [rbp-70h]
  _QWORD *v37; // [rsp+40h] [rbp-68h]
  unsigned __int64 v38; // [rsp+48h] [rbp-60h]
  _KPROCESS *v39; // [rsp+50h] [rbp-58h]
  BOOL v43; // [rsp+C8h] [rbp+20h]
  int v44; // [rsp+D8h] [rbp+30h]

  v7 = dword_1402FE70C;
  v8 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v9 = a3;
  v10 = a2;
  v33 = dword_1402FE70C;
  v11 = 0LL;
  if ( a6 == 1 )
  {
    v27 = (unsigned int)dword_1402FE70C;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 24LL * (unsigned int)dword_1402FE70C, 0x6C646D4Du);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      if ( v7 )
      {
        v29 = PoolWithTag + 1;
        do
        {
          *v29 = 0LL;
          v29[1] = 0xFFFFFFFFFLL;
          v29 += 3;
          --v27;
        }
        while ( v27 );
      }
    }
  }
  v36 = 0LL;
  v12 = (_QWORD *)(v10 + 48);
  v34 = (_DWORD *)(v10 + 48);
  v37 = 0LL;
  v35 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = (unsigned __int8)-((a4 & 0x80000200) == 0) & 0x80;
  Process = KeGetCurrentThread()->ApcState.Process;
  v39 = Process;
  if ( v8 )
  {
    v38 = v8;
    while ( 1 )
    {
      v44 = 0;
      v17 = 48LL * *v12 - 0x58000000000LL;
      v18 = *(_QWORD *)(v17 + 40);
      v19 = *(_QWORD *)(v17 + 16) == 0LL;
      *(_QWORD *)v17 = Process;
      v43 = v19;
      *(_QWORD *)(v17 + 40) = v18 & 0xFDFFFFF000000000uLL | 0xFFFFFFFFDLL;
      if ( v8 != a3 && (a4 & 4) != 0 )
        goto LABEL_7;
      if ( a5 != 3 || v19 || (a4 & 1) != 0 )
        break;
      v44 = 1;
      if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v17, 1LL) != 1 )
      {
        v26 = v37;
        v37 = (_QWORD *)v17;
LABEL_28:
        *(_QWORD *)(v17 + 16) = v26;
        goto LABEL_7;
      }
      *(_QWORD *)(v17 + 16) = v14;
      v14 = (_QWORD *)v17;
LABEL_7:
      MiLockPageInline(v17);
      MiInitializeMdlPfn(v17, (unsigned int)a4);
      _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v20);
      if ( v43 || (a4 & 1) != 0 )
      {
        v21 = v34;
      }
      else
      {
        ++v36;
        v21 = v34;
        if ( v11 )
        {
          v24 = dword_1402FE708 & *v34 | (((*(_QWORD *)(v17 + 40) >> 36) & 3) << byte_1402FE6E8) | ((unsigned __int8)((*(_QWORD *)(v17 + 40) >> 58) & 0x3F) << byte_1402FE6D9);
          v25 = 3 * v24;
          *(_QWORD *)v17 = v11[3 * v24 + 2];
          ++v11[v25 + 1];
          v11[v25 + 2] = v17;
        }
        else
        {
          *(_QWORD *)v17 = v13;
          v13 = v17;
        }
      }
      if ( !v44 )
        *(_QWORD *)(v17 + 16) = v15;
      Process = v39;
      v12 = v21 + 2;
      v22 = v38-- == 1;
      v34 = v12;
      if ( v22 )
      {
        v10 = a2;
        v9 = a3;
        goto LABEL_13;
      }
    }
    if ( (unsigned int)MiPageAttributeBatchChangeNeeded(v17, a5) != 1 )
      goto LABEL_7;
    v26 = v35;
    v35 = (_QWORD *)v17;
    v44 = 1;
    goto LABEL_28;
  }
LABEL_13:
  if ( v8 != v9 && (a4 & 4) != 0 )
  {
    if ( !v8 )
      goto LABEL_54;
    MiFreePagesFromMdl(a1, v10, a4 < 0);
    v8 = 0LL;
  }
  if ( v8 )
  {
    if ( v35 )
      MiChangePageAttributeBatch(v35, a5, (a4 & 0x80000200) == 0 ? 0x80 : 0);
    if ( v14 )
      MiChangePageAttributeBatch(v14, 1LL, -1LL);
    if ( v36 )
    {
      if ( v11 )
      {
        MiZeroInParallel((__int64)v11, v33, a4);
        ExFreePoolWithTag(v11, 0);
      }
      else if ( v13 )
      {
        do
        {
          MiZeroPhysicalPage((v13 + 0x58000000000LL) / 48, 3LL, *(unsigned __int8 *)(v13 + 34) >> 6);
          v30 = *(_QWORD *)v13;
          *(_QWORD *)v13 = v39;
          v13 = v30;
        }
        while ( v30 );
      }
      if ( v14 )
        MiChangePageAttributeBatch(v14, 3LL, v15);
      if ( v37 )
        MiChangePageAttributeBatch(v37, 3LL, v15);
    }
    if ( v9 - v8 > 0x800 )
    {
      v31 = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v8 + 48, 0x69646D4Du);
      v32 = (ULONG_PTR)v31;
      if ( v31 )
      {
        *(_QWORD *)v31 = 0LL;
        v31[10] = (_DWORD)v8 << 12;
        *((_WORD *)v31 + 5) = 0;
        *((_QWORD *)v31 + 4) = 0LL;
        v31[11] = 0;
        *((_WORD *)v31 + 4) = 8 * ((((v8 << 12) + 4095) >> 12) + 6);
        memmove(v31 + 12, (const void *)(v10 + 48), 8 * v8);
        ExFreePoolWithTag((PVOID)v10, 0);
        v10 = v32;
      }
    }
    *(_WORD *)(v10 + 10) |= 2u;
    *(_QWORD *)(v10 + 16) = 0LL;
    if ( (BYTE4(PerfGlobalGroupMask) & 1) != 0 )
      MiLogMdlRangeEvent(v10 + 48, 632LL, v8);
    return v10;
  }
LABEL_54:
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  ExFreePoolWithTag((PVOID)v10, 0);
  return 0LL;
}
