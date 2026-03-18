/*
 * XREFs of ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00858F8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004BCFC (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0060E50 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C0085C50 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RunApertureCoherencyTest(VIDMM_GLOBAL *this)
{
  unsigned int v1; // edx
  unsigned int *v2; // r13
  unsigned int *v3; // r14
  int v4; // r12d
  __int64 v5; // rsi
  VIDMM_GLOBAL *v6; // rdi
  unsigned int v7; // r15d
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  struct _MDL *PagesForMdl; // rbp
  PMDL v17; // rax
  __int64 v18; // rcx
  struct _MDL *v19; // rbx
  unsigned int *v20; // rax
  __int64 v21; // r15
  unsigned int *v22; // rax
  __int64 v23; // rcx
  __int64 i; // r15
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // [rsp+98h] [rbp+10h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+18h] BYREF

  v1 = *((_DWORD *)this + 926);
  v2 = 0LL;
  v28 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = 0LL;
  v6 = this;
  v7 = 255;
  if ( !v1 )
    goto LABEL_5;
  v8 = *((_QWORD *)this + 464);
  while ( 1 )
  {
    this = *(VIDMM_GLOBAL **)(v8 + 8 * v5);
    if ( (*((_DWORD *)this + 14) & 1) == 0 )
      break;
    v5 = (unsigned int)(v5 + 1);
    if ( (unsigned int)v5 >= v1 )
      goto LABEL_5;
  }
  v7 = v5;
  if ( (_DWORD)v5 == 255 )
  {
LABEL_5:
    v9 = WdLogNewEntry5_WdWarning(this);
    WdLogEvent5_WdWarning(v9);
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(VIDMM_GLOBAL *, __int64, __int64 *, unsigned __int64 *))(*(_QWORD *)this + 168LL))(
           this,
           1LL,
           &v28,
           &v27);
    if ( v4 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(v6, v12, v14);
      PagesForMdl = MmAllocatePagesForMdl(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
                      gs_PhysicalAddressZero,
                      0x1000uLL);
      v17 = MmAllocatePagesForMdl(
              gs_PhysicalAddressZero,
              (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
              gs_PhysicalAddressZero,
              0x1000uLL);
      v19 = v17;
      if ( PagesForMdl
        && v17
        && (v2 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v20 = (unsigned int *)MmMapLockedPagesSpecifyCache(v19, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v3 = v20,
            v2)
        && v20 )
      {
        v21 = 0LL;
        if ( *((_DWORD *)v6 + 926) )
        {
          while ( 1 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 464) + 8 * v21) + 56LL) & 1) != 0 )
            {
              v4 = VIDMM_GLOBAL::ValidateApertureCoherency(v6, v5, v27, v21, PagesForMdl, v2, v19, v3, 0);
              if ( v4 < 0 )
                break;
            }
            v21 = (unsigned int)(v21 + 1);
            if ( (unsigned int)v21 >= *((_DWORD *)v6 + 926) )
              goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          MmUnmapLockedPages(v2, PagesForMdl);
          v2 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          MmUnmapLockedPages(v3, v19);
          v22 = (unsigned int *)MmMapLockedPagesSpecifyCache(v19, 0, MmCached, 0LL, 0, 0x40000010u);
          v3 = v22;
          if ( v2 && v22 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 926); i = (unsigned int)(i + 1) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v6 + 464) + 8 * i) + 56LL) & 0x11) == 0x11 )
              {
                v4 = VIDMM_GLOBAL::ValidateApertureCoherency(v6, v5, v27, i, PagesForMdl, v2, v19, v3, 1u);
                if ( v4 < 0 )
                  break;
              }
            }
          }
          else
          {
            v25 = WdLogNewEntry5_WdWarning(v23);
            WdLogEvent5_WdWarning(v25);
          }
        }
        v7 = v5;
      }
      else
      {
        v26 = WdLogNewEntry5_WdWarning(v18);
        WdLogEvent5_WdWarning(v26);
      }
      if ( v3 )
        MmUnmapLockedPages(v3, v19);
      if ( v2 )
        MmUnmapLockedPages(v2, PagesForMdl);
      if ( v19 )
      {
        MmFreePagesFromMdl(v19);
        ExFreePoolWithTag(v19, 0);
      }
      if ( PagesForMdl )
      {
        MmFreePagesFromMdl(PagesForMdl);
        ExFreePoolWithTag(PagesForMdl, 0);
      }
    }
    else
    {
      v15 = WdLogNewEntry5_WdWarning(v13);
      WdLogEvent5_WdWarning(v15);
      v4 = 0;
    }
  }
  if ( v28 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v6 + 464) + 8LL * v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 176LL))(v10);
  }
  return (unsigned int)v4;
}
