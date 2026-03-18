/*
 * XREFs of ?ResetBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004C8A8
 * Callers:
 *     ?ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0042FD0 (-ProcessSystemMemoryOfferList@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0054FC0 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00550F0 (-EvictResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0056890 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C0057B10 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 *     ?EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0082E40 (-EvictResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@.c)
 *     ?ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0083830 (-ReleaseTemporaryResource@VIDMM_APERTURE_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 *     Template_pqtt @ 0x1C001D3B4 (Template_pqtt.c)
 *     ?VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z @ 0x1C005E5EC (-VidMmiSetPriorityForMemoryPages@@YAXPEAU_VIDMM_GLOBAL_ALLOC@@PEAX_K@Z.c)
 *     ?IsActive@VIDMM_POLICY@@QEAAHXZ @ 0x1C005FA54 (-IsActive@VIDMM_POLICY@@QEAAHXZ.c)
 */

void __fastcall VIDMM_GLOBAL::ResetBackingStore(VIDMM_GLOBAL *this, struct _VIDMM_GLOBAL_ALLOC *a2)
{
  __int64 v2; // r8
  int *v5; // r9
  int v6; // eax
  __int64 v7; // rax
  __int64 v8; // r9
  _DWORD *v9; // r8
  bool v10; // bp
  ULONG_PTR v11; // rax
  NTSTATUS v12; // eax
  __int64 v13; // rdi
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 AllocationType; // [rsp+20h] [rbp-88h]
  __int64 Protect; // [rsp+28h] [rbp-80h]
  BOOL v23; // [rsp+30h] [rbp-78h]
  PVOID BaseAddress; // [rsp+40h] [rbp-68h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp-58h] BYREF

  v2 = *((_QWORD *)a2 + 12);
  if ( v2 )
  {
    if ( (*(_BYTE *)(v2 + 32) & 1) != 0 )
    {
      *((_DWORD *)a2 + 19) |= 0x4000000u;
      return;
    }
    v5 = (int *)*((_QWORD *)a2 + 59);
    v6 = *v5;
    if ( (*v5 & 2) == 0
      && (v6 & 8) == 0
      && (v6 & 0x10) == 0
      && (v6 & 0x20) == 0
      && (v6 & 0x40000000) == 0
      && ((v7 = *((_QWORD *)a2 + 16)) != 0
       && (*(_DWORD *)(v7 + 56) & 0x1001) == 0
       && (unsigned int)VIDMM_POLICY::IsActive((VIDMM_POLICY *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 8) + 16LL)
                                                                          + 8LL
                                                                          * *(unsigned int *)(*((_QWORD *)this + 3)
                                                                                            + 184LL))
                                                              + 384LL))
       || v5[1] == 3) )
    {
      KeStackAttachProcess(**(PRKPROCESS **)(v2 + 8), &ApcState);
      v9 = (_DWORD *)*((_QWORD *)a2 + 59);
      v10 = v9[1] == 3
         || *((_QWORD *)a2 + 16)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 16LL)
                                  + 8LL * *(unsigned int *)(*((_QWORD *)this + 3) + 184LL))
                      + 396LL);
      if ( (*v9 & 0x20000000) != 0 )
      {
        if ( (*((_DWORD *)a2 + 20) & 0x80u) != 0 )
        {
          v11 = *((_QWORD *)a2 + 1);
          BaseAddress = *(PVOID *)(*((_QWORD *)a2 + 12) + 16LL);
          RegionSize = v11;
          v12 = ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x80000u, 4u);
          v13 = v12;
          if ( v12 >= 0 )
          {
            VidMmiSetPriorityForMemoryPages(a2, BaseAddress, RegionSize);
            if ( v10 )
              ZwUnlockVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 1u);
          }
          else
          {
            v14 = WdLogNewEntry5_WdError();
            *(_QWORD *)(v14 + 24) = v13;
            WdLogEvent5_WdError(v14);
          }
          goto LABEL_30;
        }
        LODWORD(v13) = -1073741823;
      }
      else
      {
        LOBYTE(v8) = v10;
        v15 = (*(__int64 (__fastcall **)(_QWORD, struct _VIDMM_GLOBAL_ALLOC *, _QWORD, __int64))(**(_QWORD **)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL)
                                                                                               + 120LL))(
                *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 8LL) + 24LL),
                a2,
                *(_QWORD *)(*((_QWORD *)a2 + 12) + 24LL),
                v8);
        LODWORD(v13) = v15;
        if ( v15 >= 0 )
          goto LABEL_30;
        if ( v15 != -1071775472 )
        {
          v19 = WdLogNewEntry5_WdAssertion(v17, v16, v9, v18);
          *(_QWORD *)(v19 + 24) = 5762LL;
          WdLogEvent5_WdAssertion(v19);
        }
        _InterlockedIncrement(&dword_1C002F534);
        v20 = WdLogNewEntry5_WdLowResource(v17);
        *(_QWORD *)(v20 + 24) = 5766LL;
        WdLogEvent5_WdLowResource(v20);
      }
      *((_DWORD *)a2 + 19) |= 0x4000000u;
LABEL_30:
      *((_QWORD *)this + 920) += *((_QWORD *)a2 + 1);
      ++*((_DWORD *)this + 1838);
      if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      {
        v23 = (int)v13 >= 0;
        LODWORD(Protect) = v10;
        LODWORD(AllocationType) = *((_QWORD *)a2 + 1) >> 12;
        Template_pqtt((int)v13 >= 0, v10, (__int64)v9, a2, AllocationType, Protect, v23);
      }
      KeUnstackDetachProcess(&ApcState);
      if ( (int)v13 >= 0 )
        *((_DWORD *)a2 + 21) |= 8u;
    }
  }
}
