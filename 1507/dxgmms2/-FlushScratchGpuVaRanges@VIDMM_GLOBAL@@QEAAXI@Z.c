/*
 * XREFs of ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C003A67C
 * Callers:
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEAT_LARGE_INTEGER@@@Z @ 0x1C004D390 (-FillAllocationUsingGpuVa@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_KIPEAVVIDMM_SEGMENT@@PEA.c)
 *     ?MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMENT@@1PEAU_MDL@@213KU_DXGK_TRANSFERFLAGS@@1@Z @ 0x1C005001C (-MemoryTransferUsingGpuVaWorker@VIDMM_GLOBAL@@IEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@_K1PEAVVIDMM_SEGMEN.c)
 *     ?GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPEAX@Z @ 0x1C0060034 (-GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@PEAIPEA_KPEAPE.c)
 *     ?ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006BB20 (-ReleaseTemporaryResource@VIDMM_SYSMEM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 * Callees:
 *     VidSchIsMonitoredFenceSignaled @ 0x1C000614C (VidSchIsMonitoredFenceSignaled.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0006214 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C003A22C (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z @ 0x1C005FC14 (-FreeVadVirtualAddressRangeInternal@CVirtualAddressAllocator@@AEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0063528 (-UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVI.c)
 */

void __fastcall VIDMM_GLOBAL::FlushScratchGpuVaRanges(VIDMM_GLOBAL *this, unsigned int a2)
{
  __int64 v3; // r12
  __int64 v4; // r13
  char v5; // al
  struct _KTHREAD **v6; // rbp
  char v7; // r15
  _QWORD *v8; // rdi
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rax
  struct VIDMM_VAD *v12; // r14
  char v13; // di

  v3 = a2;
  v4 = 456LL * a2;
  if ( (*(_BYTE *)(*((_QWORD *)this + 4999) + v4 + 420) & 1) != 0 )
  {
    if ( *((_QWORD *)this + a2 + 143) )
    {
      if ( *((_DWORD *)this + 2) )
      {
        v5 = *((_BYTE *)this + 40552);
        if ( v5 >= 0 )
        {
          *((_BYTE *)this + 40552) = v5 | 0x80;
          v6 = (struct _KTHREAD **)*((_QWORD *)this + a2 + 5004);
          while ( 1 )
          {
            v7 = 0;
            while ( 1 )
            {
              v8 = (_QWORD *)(v4 + *((_QWORD *)this + 4999) + 440LL);
              if ( (_QWORD *)*v8 == v8 )
                break;
              v9 = (_QWORD *)*v8;
              if ( !VidSchIsMonitoredFenceSignaled(*((_QWORD *)this + v3 + 738), v9[2]) )
                break;
              v10 = *v9;
              v11 = (_QWORD *)v9[1];
              if ( *(_QWORD **)(*v9 + 8LL) != v9 || (_QWORD *)*v11 != v9 )
                __fastfail(3u);
              *v11 = v10;
              *(_QWORD *)(v10 + 8) = v11;
              *v9 = 0LL;
              v9[1] = 0LL;
              if ( (dword_1C00270E4 & 0x80u) == 0 )
              {
                v7 = 1;
                CVirtualAddressAllocator::UncommitVirtualAddressRange(
                  *((CVirtualAddressAllocator **)this + v3 + 5004),
                  (struct VIDMM_MAPPED_VA_RANGE *)(v9 - 3),
                  0LL,
                  1u);
              }
              v12 = (struct VIDMM_VAD *)*(v9 - 3);
              v13 = 0;
              if ( v6[6] != KeGetCurrentThread() )
              {
                DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v6 + 5));
                v13 = 1;
              }
              CVirtualAddressAllocator::FreeVadVirtualAddressRangeInternal((CVirtualAddressAllocator *)v6, v12);
              if ( v13 )
              {
                v6[6] = 0LL;
                ExReleasePushLockExclusiveEx(v6 + 5, 0LL);
                KeLeaveCriticalRegion();
              }
            }
            if ( !v7 )
              break;
            VIDMM_GLOBAL::FlushPagingBufferInternal(this, v3, 0, 0LL, 0LL, 0);
          }
          *((_BYTE *)this + 40552) &= ~0x80u;
        }
      }
    }
  }
}
