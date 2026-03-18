/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054824
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004BB50 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0063C30 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0063D40 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0096360 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0096E70 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     Template_pqtt @ 0x1C001E728 (Template_pqtt.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C0067470 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C00675C8 (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  int *v5; // r9
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // r8
  bool v10; // bp
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rax
  ULONG_PTR v16; // rax
  NTSTATUS v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-88h]
  __int64 Protect; // [rsp+28h] [rbp-80h]
  BOOL v26; // [rsp+30h] [rbp-78h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-68h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((_QWORD *)a2 + 13);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
    {
      *((_DWORD *)a2 + 19) |= 0x4000000u;
      return;
    }
    v5 = (int *)*((_QWORD *)a2 + 63);
    v6 = *v5;
    if ( (*v5 & 2) == 0
      && (v6 & 8) == 0
      && (v6 & 0x10) == 0
      && (v6 & 0x20) == 0
      && (v6 & 0x40000000) == 0
      && ((v7 = *((_QWORD *)a2 + 17)) != 0
       && (*(_DWORD *)(v7 + 56) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 200LL))
                                                              + 432LL))
       || *((_WORD *)v5 + 2) == 3) )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v2 + 8), &ApcState);
      v9 = *((_QWORD *)a2 + 63);
      v10 = *(_WORD *)(v9 + 4) == 3
         || *((_QWORD *)a2 + 17)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 16LL)
                                  + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 200LL))
                      + 444LL);
      if ( (*(_DWORD *)v9 & 0x20000000) != 0 )
      {
        if ( (*((_DWORD *)a2 + 20) & 0x80u) != 0 )
        {
          v16 = *((_QWORD *)a2 + 1);
          BaseAddress = *(PVOID *)(*((_QWORD *)a2 + 13) + 16LL);
          RegionSize = v16;
          v17 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, 4u);
          v14 = v17;
          if ( v17 >= 0 )
          {
            VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
            if ( v10 )
              ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
          }
          else
          {
            v22 = WdLogNewEntry5_WdError(v19, v18, v20, v21);
            *(_QWORD *)(v22 + 24) = v14;
            WdLogEvent5_WdError(v22);
          }
          goto LABEL_19;
        }
        LODWORD(v14) = -1073741823;
      }
      else
      {
        LOBYTE(v8) = v10;
        v11 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL)
                                                                                               + 120LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 13) + 8LL) + 24LL),
                a2,
                *(_QWORD *)(*((_QWORD *)a2 + 13) + 24LL),
                v8);
        LODWORD(v14) = v11;
        if ( v11 >= 0 )
          goto LABEL_19;
        if ( v11 != -1071775472 )
        {
          v23 = WdLogNewEntry5_WdAssertion(v13, v12);
          *(_QWORD *)(v23 + 24) = 5956LL;
          WdLogEvent5_WdAssertion(v23);
        }
        _InterlockedIncrement(&dword_1C00355B4);
        v15 = WdLogNewEntry5_WdLowResource(v13);
        *(_QWORD *)(v15 + 24) = 5960LL;
        WdLogEvent5_WdLowResource(v15);
      }
      *((_DWORD *)a2 + 19) |= 0x4000000u;
LABEL_19:
      *((_QWORD *)this + 920) += *((_QWORD *)a2 + 1);
      ++*((_DWORD *)this + 1838);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      {
        v26 = (int)v14 >= 0;
        LODWORD(Protect) = v10;
        LODWORD(AllocationType) = *((_QWORD *)a2 + 1) >> 12;
        Template_pqtt((int)v14 >= 0, v10, v9, a2, AllocationType, Protect, v26);
      }
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v14 >= 0 )
        *((_DWORD *)a2 + 21) |= 8u;
    }
  }
}
