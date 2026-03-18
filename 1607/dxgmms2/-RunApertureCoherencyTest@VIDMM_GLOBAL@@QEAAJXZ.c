/*
 * XREFs of ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C009ABD0
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0068ED0 (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C009AF28 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
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
  __int64 v15; // r9
  __int64 v16; // rax
  struct _MDL *PagesForMdl; // rbp
  PMDL v18; // rax
  __int64 v19; // rcx
  struct _MDL *v20; // rbx
  unsigned int *v21; // rax
  __int64 v22; // r15
  unsigned int *v23; // rax
  __int64 v24; // rcx
  __int64 i; // r15
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // [rsp+98h] [rbp+10h] BYREF
  __int64 v29; // [rsp+A0h] [rbp+18h] BYREF

  v1 = *((_DWORD *)this + 926);
  v2 = 0LL;
  v29 = 0LL;
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
           &v29,
           &v28);
    if ( v4 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(v6, v12, v14, v15);
      PagesForMdl = MmAllocatePagesForMdl(
                      gs_PhysicalAddressZero,
                      (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
                      gs_PhysicalAddressZero,
                      0x1000uLL);
      v18 = MmAllocatePagesForMdl(
              gs_PhysicalAddressZero,
              (PHYSICAL_ADDRESS)0xFFFFFFFFLL,
              gs_PhysicalAddressZero,
              0x1000uLL);
      v20 = v18;
      if ( PagesForMdl
        && v18
        && (v2 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v21 = (unsigned int *)MmMapLockedPagesSpecifyCache(v20, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v3 = v21,
            v2)
        && v21 )
      {
        v22 = 0LL;
        if ( *((_DWORD *)v6 + 926) )
        {
          while ( 1 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 464) + 8 * v22) + 56LL) & 1) != 0 )
            {
              v4 = VIDMM_GLOBAL::ValidateApertureCoherency(v6, v5, v28, v22, PagesForMdl, v2, v20, v3, 0);
              if ( v4 < 0 )
                break;
            }
            v22 = (unsigned int)(v22 + 1);
            if ( (unsigned int)v22 >= *((_DWORD *)v6 + 926) )
              goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          MmUnmapLockedPages(v2, PagesForMdl);
          v2 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          MmUnmapLockedPages(v3, v20);
          v23 = (unsigned int *)MmMapLockedPagesSpecifyCache(v20, 0, MmCached, 0LL, 0, 0x40000010u);
          v3 = v23;
          if ( v2 && v23 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 926); i = (unsigned int)(i + 1) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v6 + 464) + 8 * i) + 56LL) & 0x11) == 0x11 )
              {
                v4 = VIDMM_GLOBAL::ValidateApertureCoherency(v6, v5, v28, i, PagesForMdl, v2, v20, v3, 1u);
                if ( v4 < 0 )
                  break;
              }
            }
          }
          else
          {
            v26 = WdLogNewEntry5_WdWarning(v24);
            WdLogEvent5_WdWarning(v26);
          }
        }
        v7 = v5;
      }
      else
      {
        v27 = WdLogNewEntry5_WdWarning(v19);
        WdLogEvent5_WdWarning(v27);
      }
      if ( v3 )
        MmUnmapLockedPages(v3, v20);
      if ( v2 )
        MmUnmapLockedPages(v2, PagesForMdl);
      if ( v20 )
      {
        MmFreePagesFromMdl(v20);
        ExFreePoolWithTag(v20, 0);
      }
      if ( PagesForMdl )
      {
        MmFreePagesFromMdl(PagesForMdl);
        ExFreePoolWithTag(PagesForMdl, 0);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v13);
      WdLogEvent5_WdWarning(v16);
      v4 = 0;
    }
  }
  if ( v29 )
  {
    v10 = *(_QWORD *)(*((_QWORD *)v6 + 464) + 8LL * v7);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 176LL))(v10);
  }
  return (unsigned int)v4;
}
