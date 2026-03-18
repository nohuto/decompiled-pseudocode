/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0084A04
 * Callers:
 *     ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C007B158 (-InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0013530 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C001365C (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016890 (_guard_dispatch_icall_nop.c)
 */

void __fastcall VIDMM_SEGMENT::InvalidateAllVirtualAddress(VIDMM_SEGMENT *this)
{
  char *v1; // rbp
  char *v2; // rsi
  _QWORD **v3; // r12
  _QWORD *v4; // r14
  _QWORD **v5; // r13
  _QWORD *v6; // r15
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v15; // rcx
  _QWORD *v16; // rax
  VIDMM_CPU_HOST_APERTURE *v17; // rbx
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD **v22; // [rsp+60h] [rbp-78h]
  char *v23; // [rsp+68h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v1 = (char *)this + 128;
  v2 = (char *)*((_QWORD *)this + 16);
  v23 = (char *)this + 128;
  while ( v2 != v1 )
  {
    v3 = (_QWORD **)(v2 + 16);
    v2 = *(char **)v2;
    v4 = *v3;
    v22 = v3;
    if ( *v3 != v3 )
    {
      do
      {
        v5 = (_QWORD **)(v4 + 2);
        v4 = (_QWORD *)*v4;
        v6 = *v5;
        if ( *v5 != v5 )
        {
          do
          {
            v7 = (__int64 *)*(v6 - 7);
            v6 = (_QWORD *)*v6;
            v8 = *v7;
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v8 + 464, 0LL);
            DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(v8 + 312));
            v9 = *(_QWORD *)(v8 + 96);
            if ( v9 && (*(_BYTE *)(v9 + 32) & 1) != 0 )
            {
              KeStackAttachProcess(**(PRKPROCESS **)(v9 + 8), &ApcState);
              v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64, _QWORD, _QWORD, _QWORD, _QWORD, int, __int64))(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v8 + 96) + 8LL) + 24LL) + 48LL))(
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 96) + 8LL) + 24LL),
                      *((_QWORD *)this + 1),
                      *(_QWORD *)(*(_QWORD *)(v8 + 96) + 24LL),
                      3LL,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      1,
                      v8);
              v14 = v10;
              v15 = v10 + 0x80000000;
              if ( (v15 & 0x80000000) == 0 && v10 != -1073741558 )
              {
                v16 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v15, v11, v12, v13);
                v16[7] = 0LL;
                v16[3] = 270LL;
                v16[4] = 4LL;
                v16[5] = 3LL;
                v16[6] = v14;
                WdLogEvent5_WdCriticalError(v16);
              }
              *(_BYTE *)(*(_QWORD *)(v8 + 96) + 32LL) &= ~1u;
              *(_DWORD *)(v8 + 76) |= 0x100000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v8 + 432) )
            {
              v17 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 55);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v17, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v17, (struct _VIDMM_GLOBAL_ALLOC *)v8, 0LL, v18);
            }
            ExReleasePushLockExclusiveEx(v8 + 464, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(v8 + 312), v19, v20, v21);
          }
          while ( v6 != v5 );
          v3 = v22;
        }
      }
      while ( v4 != v3 );
      v1 = v23;
    }
  }
}
