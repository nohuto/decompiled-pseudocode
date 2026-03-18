/*
 * XREFs of ?IsAllocationRepurposed@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0089658
 * Callers:
 *     ?IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0089588 (-IsAllocationDecommitCandidate@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 *     ?QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA?AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0055348 (-QueryLocalAllocationResidency@VIDMM_GLOBAL@@QEAA-AW4_D3DKMT_ALLOCATIONRESIDENCYSTATUS@@PEAU_VID.c)
 */

bool __fastcall VIDMM_GLOBAL::IsAllocationRepurposed(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // bl
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  DXGFASTMUTEX *v9; // rsi
  __int64 v10; // r9
  struct _KAPC_STATE ApcState; // [rsp+30h] [rbp-58h] BYREF

  v2 = 0;
  if ( !dword_1C0035414 )
    return 0;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[63] + 2) == 3 )
  {
    v9 = a2[13];
    KeStackAttachProcess(**((PRKPROCESS **)v9 + 1), &ApcState);
    if ( dword_1C0035414 == 1 )
    {
      v2 = (unsigned int)VIDMM_GLOBAL::QueryLocalAllocationResidency(this, v9) == 3;
    }
    else if ( dword_1C0035414 == 2 )
    {
      if ( (*(int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(*((_QWORD *)a2[13] + 1) + 24LL) + 128LL))(
             *(_QWORD *)(*((_QWORD *)a2[13] + 1) + 24LL),
             *((_QWORD *)a2[13] + 3)) >= 0 )
      {
        LOBYTE(v10) = 1;
        (*(void (__fastcall **)(_QWORD, DXGFASTMUTEX **, _QWORD, __int64))(**(_QWORD **)(*((_QWORD *)a2[13] + 1) + 24LL)
                                                                         + 120LL))(
          *(_QWORD *)(*((_QWORD *)a2[13] + 1) + 24LL),
          a2,
          *((_QWORD *)a2[13] + 3),
          v10);
      }
      else
      {
        v2 = 1;
      }
    }
    KeUnstackDetachProcess(&ApcState);
  }
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v6, v7, v8);
  return v2;
}
