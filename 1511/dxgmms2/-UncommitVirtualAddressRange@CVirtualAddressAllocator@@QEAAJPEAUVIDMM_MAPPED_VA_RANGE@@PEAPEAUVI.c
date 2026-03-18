/*
 * XREFs of ?UncommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@PEAPEAUVIDMM_ALLOC@@E@Z @ 0x1C0040240
 * Callers:
 *     ?MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0043BC8 (-MakeOneVirtualAddressRangeNotResident@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     ?UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z @ 0x1C0043E5C (-UncommitVirtualAddressRangeSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z @ 0x1C0047F08 (-FlushScratchGpuVaRanges@VIDMM_GLOBAL@@QEAAXI@Z.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAUVIDMM_ALLOC@@W4VIDMM_UNCOMMIT_VA_TYPE@@@Z @ 0x1C003E4A0 (-UncommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@_K1PEAPEAU.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0044320 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 *     ?AdapterId@VIDMM_GLOBAL@@QEAAKXZ @ 0x1C004A988 (-AdapterId@VIDMM_GLOBAL@@QEAAKXZ.c)
 *     ?GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z @ 0x1C005405C (-GetKmdProcessHandle@VIDMM_PROCESS@@QEBAPEAXK@Z.c)
 */

__int64 __fastcall CVirtualAddressAllocator::UncommitVirtualAddressRange(
        CVirtualAddressAllocator *this,
        struct VIDMM_MAPPED_VA_RANGE *a2,
        struct VIDMM_ALLOC **a3,
        char a4)
{
  struct VIDMM_ALLOC **v5; // r15
  int v8; // ebx
  unsigned __int64 v9; // r14
  unsigned int v10; // r13d
  __int64 v11; // rsi
  VIDMM_PAGE_DIRECTORY *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  VIDMM_GLOBAL *v17; // r10
  unsigned __int64 v18; // rsi
  UINT *v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  bool v22; // zf
  __int64 v24; // rax
  unsigned int v25; // eax
  struct _D3DGPU_PHYSICAL_ADDRESS v26; // [rsp+40h] [rbp-48h] BYREF
  __int64 v28; // [rsp+98h] [rbp+10h]
  char v29; // [rsp+A0h] [rbp+18h] BYREF

  v5 = (struct VIDMM_ALLOC **)&v29;
  if ( a3 )
    v5 = a3;
  v8 = 0;
  *v5 = 0LL;
  v9 = *((_QWORD *)a2 + 12);
  v10 = (*((_DWORD *)a2 + 16) >> 4) & 0x3F;
  v11 = (*((_QWORD *)a2 + 13) - v9) >> 12;
  v28 = 32LL * v10;
  v12 = *(VIDMM_PAGE_DIRECTORY **)(v28 + *((_QWORD *)this + 12));
  if ( v12 )
  {
    v8 = VIDMM_PAGE_DIRECTORY::UncommitVirtualAddressRange(v12, (__int64)this, v9, v11, v5, 0);
    if ( v8 < 0 && *v5 && !a3 )
    {
      v24 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v24 + 24) = 2755LL;
      WdLogEvent5_WdAssertion(v24);
    }
    if ( a4 )
    {
      v17 = (VIDMM_GLOBAL *)*((_QWORD *)this + 8);
      v18 = v9 + (v11 << 12);
      if ( (*((_BYTE *)v17 + 40608) & 8) == 0 && v9 <= v18 )
      {
        v19 = (UINT *)(*((_QWORD *)this + 12) + v28);
        v20 = *(_QWORD *)v19;
        v21 = *(_QWORD *)(*(_QWORD *)v19 + 8LL);
        if ( v21 )
        {
          if ( *(_QWORD *)(v21 + 128) )
          {
            v22 = *((_QWORD *)this + 11) == 0LL;
            v26.SegmentId = v19[6];
            v26.SegmentOffset = *(_QWORD *)(*(_QWORD *)(v20 + 8) + 136LL);
            if ( v22 )
            {
              v25 = VIDMM_GLOBAL::AdapterId(v17);
              *((_QWORD *)this + 11) = VIDMM_PROCESS::GetKmdProcessHandle(*((VIDMM_PROCESS **)this + 9), v25);
            }
            VIDMM_GLOBAL::FlushGpuVaTlb(
              v17,
              v10,
              &v26,
              *((struct VIDMM_PROCESS **)this + 9),
              *((void **)this + 11),
              v9,
              v18);
          }
        }
      }
    }
  }
  *((_DWORD *)a2 + 16) &= 0xFFFFF3FF;
  return (unsigned int)v8;
}
