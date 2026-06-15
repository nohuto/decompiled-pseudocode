/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x180058950
 * Callers:
 *     <none>
 * Callees:
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x18000261C (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180002664 (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x180056804 (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_Pg @ 0x180058E6C (WPP_SF_Pg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::UpdateMasterVolumeLevel(CVolumeHardware *this)
{
  unsigned __int64 v2; // rdi
  float *v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r8
  float DB; // xmm0_4
  float *v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v10, *((unsigned int *)this + 29));
  v3 = v10;
  if ( v10 )
  {
    if ( *((_QWORD *)this + 11) )
    {
      v5 = 0LL;
      do
      {
        DB = CVolumeUnit::GetDB((CVolumeUnit *)(v5 + *((_QWORD *)this + 10)));
        v3[v2] = DB;
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_Pg(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, v2, DB);
        }
        ++v2;
        v5 += 56LL;
      }
      while ( v2 < *((_QWORD *)this + 11) );
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, char *))(**((_QWORD **)this + 26) + 64LL))(
           *((_QWORD *)this + 26),
           v3,
           *((unsigned int *)this + 29),
           (char *)this + 216);
  }
  else
  {
    v4 = -2147024882;
  }
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
  return v4;
}
