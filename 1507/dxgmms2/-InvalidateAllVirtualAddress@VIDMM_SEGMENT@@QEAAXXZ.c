/*
 * XREFs of ?InvalidateAllVirtualAddress@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C006FEEC
 * Callers:
 *     ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C004E698 (-InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005B60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0005BE8 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0008180 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011BDC (-ReleaseRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0011C90 (-UnmapRange@VIDMM_CPU_HOST_APERTURE@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
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
  __int64 v12; // rbx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  VIDMM_CPU_HOST_APERTURE *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _QWORD **v21; // [rsp+60h] [rbp-78h]
  char *v22; // [rsp+68h] [rbp-70h]
  struct _KAPC_STATE ApcState; // [rsp+78h] [rbp-60h] BYREF

  v1 = (char *)this + 128;
  v2 = (char *)*((_QWORD *)this + 16);
  v22 = (char *)this + 128;
  while ( v2 != v1 )
  {
    v3 = (_QWORD **)(v2 + 16);
    v2 = *(char **)v2;
    v4 = *v3;
    v21 = v3;
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
            DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(*v7 + 312));
            KeEnterCriticalRegion();
            ExAcquirePushLockExclusiveEx(v8 + 464, 0LL);
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
              v12 = v10;
              v13 = v10 + 0x80000000;
              if ( (v13 & 0x80000000) == 0 && v10 != -1073741558 )
              {
                v14 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v11);
                v14[7] = 0LL;
                v14[3] = 270LL;
                v14[4] = 4LL;
                v14[5] = 3LL;
                v14[6] = v12;
                WdLogEvent5_WdCriticalError(v14);
              }
              *(_BYTE *)(*(_QWORD *)(v8 + 96) + 32LL) &= ~1u;
              *(_DWORD *)(v8 + 76) |= 0x80000u;
              KeUnstackDetachProcess(&ApcState);
            }
            if ( *(_QWORD *)(v8 + 432) )
            {
              v15 = (VIDMM_CPU_HOST_APERTURE *)*((_QWORD *)this + 55);
              VIDMM_CPU_HOST_APERTURE::UnmapRange(v15, (struct _VIDMM_GLOBAL_ALLOC *)v8);
              VIDMM_CPU_HOST_APERTURE::ReleaseRange(v15, (struct _VIDMM_GLOBAL_ALLOC *)v8, v16, v17);
            }
            ExReleasePushLockExclusiveEx(v8 + 464, 0LL);
            KeLeaveCriticalRegion();
            DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v8 + 312), v18, v19, v20);
          }
          while ( v6 != v5 );
          v3 = v21;
        }
      }
      while ( v4 != v3 );
      v1 = v22;
    }
  }
}
