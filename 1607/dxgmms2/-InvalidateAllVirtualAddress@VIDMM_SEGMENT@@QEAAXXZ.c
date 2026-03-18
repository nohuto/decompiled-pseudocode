/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0098BC8
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0053C88 (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00123F8 (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00128F8 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0014AE0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this, __int64 a2, __int64 a3, __int64 a4)
{
  char *v5; // rbp
  char *v6; // rsi
  _QWORD **v7; // r12
  _QWORD *v8; // r14
  _QWORD **v9; // rax
  _QWORD *v10; // r15
  _QWORD *v11; // rbp
  __int64 *v12; // rax
  __int64 v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  __int64 v24; // rcx
  _QWORD *v25; // rax
  VIDMM_CPU_HOST_APERTURE *v26; // rbx
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  _QWORD **v30; // [rsp+68h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-68h] BYREF

  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this, a2, a3, a4) + 24) = this;
  v5 = (char *)this + 128;
  v6 = (char *)*((_QWORD *)this + 16);
  while ( v6 != v5 )
  {
    v7 = (_QWORD **)(v6 + 16);
    v6 = *(char **)v6;
    v8 = *v7;
    v30 = v7;
    if ( *v7 != v7 )
    {
      do
      {
        v9 = (_QWORD **)(v8 + 2);
        v8 = (_QWORD *)*v8;
        v10 = *v9;
        if ( *v9 != v9 )
        {
          v11 = v9;
          do
          {
            v12 = (__int64 *)*(v10 - 7);
            v10 = (_QWORD *)*v10;
            v13 = *v12;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v13 + 496, 0LL);
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v13 + 320));
            v18 = *(_QWORD *)(v13 + 104);
            if ( v18 && (*(_BYTE *)(v18 + 32) & 1) != 0 )
            {
              if ( g_IsInternalReleaseOrDbg )
                *(_QWORD *)(WdLogNewEntry5_WdTrace(v15, v14, v16, v17) + 24) = v13;
              KeStackAttachProcess(**(PRKPROCESS **)(*(_QWORD *)(v13 + 104) + 8LL), &ApcState);
              v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, __int64))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v13 + 104) + 8LL) + 24LL) + 48LL))(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 104) + 8LL) + 24LL),
                      *((_QWORD *)this + 1),
                      *(_QWORD *)(*(_QWORD *)(v13 + 104) + 24LL),
                      3LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      1,
                      v13);
              v23 = v19;
              v24 = v19 + 0x80000000;
              if ( (v24 & 0x80000000) == 0 && v19 != -1073741558 )
              {
                v25 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v24, v20, v21, v22);
                v25[7] = 0LL;
                v25[3] = 270LL;
                v25[4] = 4LL;
                v25[5] = 3LL;
                v25[6] = v23;
                WdLogEvent5_WdCriticalError(v25);
              }
              *(_BYTE *)(*(_QWORD *)(v13 + 104) + 32LL) &= ~1u;
              *(_DWORD *)(v13 + 76) |= 0x100000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v13 + 464) )
            {
              v26 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 59);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v26, (struct _VIDMM_GLOBAL_ALLOC *)v13);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v26, (struct _VIDMM_GLOBAL_ALLOC *)v13);
            }
            ExReleasePushLockExclusiveEx(v13 + 496, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v13 + 320), v27, v28, v29);
          }
          while ( v10 != v11 );
          v7 = v30;
        }
      }
      while ( v8 != v7 );
      v5 = (char *)this + 128;
    }
  }
}
