/*
 * XREFs of ?RunApertureCoherencyTest@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C0071920
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C003A96C (-EvictAllReclaimedAllocation@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z @ 0x1C0071C78 (-ValidateApertureCoherency@VIDMM_GLOBAL@@QEAAJK_KKPEAU_MDL@@PEAK12E@Z.c)
 */

__int64 __fastcall VIDMM_GLOBAL::RunApertureCoherencyTest(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdx
  unsigned int *v4; // r13
  unsigned int *v5; // r14
  int v6; // r12d
  __int64 v7; // rsi
  VIDMM_GLOBAL *v8; // rdi
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  struct _MDL *PagesForMdl; // rbp
  PMDL v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  struct _MDL *v22; // rbx
  unsigned int *v23; // rax
  __int64 v24; // r15
  unsigned int *v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 i; // r15
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // [rsp+98h] [rbp+10h] BYREF
  __int64 v33; // [rsp+A0h] [rbp+18h] BYREF

  v3 = *((unsigned int *)this + 926);
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  v6 = 0;
  v7 = 0LL;
  v8 = this;
  v9 = 255;
  if ( !(_DWORD)v3 )
    goto LABEL_5;
  a3 = *((_QWORD *)this + 464);
  while ( 1 )
  {
    this = *(VIDMM_GLOBAL **)(a3 + 8 * v7);
    if ( (*((_DWORD *)this + 14) & 1) == 0 )
      break;
    v7 = (unsigned int)(v7 + 1);
    if ( (unsigned int)v7 >= (unsigned int)v3 )
      goto LABEL_5;
  }
  v9 = v7;
  if ( (_DWORD)v7 == 255 )
  {
LABEL_5:
    v10 = WdLogNewEntry5_WdWarning(this, v3, a3);
    WdLogEvent5_WdWarning(v10);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(VIDMM_GLOBAL *, __int64, __int64 *, unsigned __int64 *))(*(_QWORD *)this + 168LL))(
           this,
           1LL,
           &v33,
           &v32);
    if ( v6 >= 0 )
    {
      VIDMM_GLOBAL::EvictAllReclaimedAllocation(v8, v13, v15);
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
      v22 = v18;
      if ( PagesForMdl
        && v18
        && (v4 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v23 = (unsigned int *)MmMapLockedPagesSpecifyCache(v22, 0, MmWriteCombined, 0LL, 0, 0x40000010u),
            v5 = v23,
            v4)
        && v23 )
      {
        v24 = 0LL;
        if ( *((_DWORD *)v8 + 926) )
        {
          while ( 1 )
          {
            if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 464) + 8 * v24) + 56LL) & 1) != 0 )
            {
              v6 = VIDMM_GLOBAL::ValidateApertureCoherency(v8, v7, v32, v24, PagesForMdl, v4, v22, v5, 0);
              if ( v6 < 0 )
                break;
            }
            v24 = (unsigned int)(v24 + 1);
            if ( (unsigned int)v24 >= *((_DWORD *)v8 + 926) )
              goto LABEL_20;
          }
        }
        else
        {
LABEL_20:
          MmUnmapLockedPages(v4, PagesForMdl);
          v4 = (unsigned int *)MmMapLockedPagesSpecifyCache(PagesForMdl, 0, MmCached, 0LL, 0, 0x40000010u);
          MmUnmapLockedPages(v5, v22);
          v25 = (unsigned int *)MmMapLockedPagesSpecifyCache(v22, 0, MmCached, 0LL, 0, 0x40000010u);
          v5 = v25;
          if ( v4 && v25 )
          {
            for ( i = 0LL; (unsigned int)i < *((_DWORD *)v8 + 926); i = (unsigned int)(i + 1) )
            {
              if ( (*(_BYTE *)(*(_QWORD *)(*((_QWORD *)v8 + 464) + 8 * i) + 56LL) & 0x11) == 0x11 )
              {
                v6 = VIDMM_GLOBAL::ValidateApertureCoherency(v8, v7, v32, i, PagesForMdl, v4, v22, v5, 1u);
                if ( v6 < 0 )
                  break;
              }
            }
          }
          else
          {
            v30 = WdLogNewEntry5_WdWarning(v27, v26, v28);
            WdLogEvent5_WdWarning(v30);
          }
        }
        v9 = v7;
      }
      else
      {
        v31 = WdLogNewEntry5_WdWarning(v20, v19, v21);
        WdLogEvent5_WdWarning(v31);
      }
      if ( v5 )
        MmUnmapLockedPages(v5, v22);
      if ( v4 )
        MmUnmapLockedPages(v4, PagesForMdl);
      if ( v22 )
      {
        MmFreePagesFromMdl(v22);
        ExFreePoolWithTag(v22, 0);
      }
      if ( PagesForMdl )
      {
        MmFreePagesFromMdl(PagesForMdl);
        ExFreePoolWithTag(PagesForMdl, 0);
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      WdLogEvent5_WdWarning(v16);
      v6 = 0;
    }
  }
  if ( v33 )
  {
    v11 = *(_QWORD *)(*((_QWORD *)v8 + 464) + 8LL * v9);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 176LL))(v11);
  }
  return (unsigned int)v6;
}
