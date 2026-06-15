/*
 * XREFs of ?UpdateMasterVolumeLevel@CVolumeHardware@@MEAAJXZ @ 0x180070AB0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?Allocate@?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z @ 0x180067E84 (-Allocate@-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA_N_K@Z.c)
 *     ??1?$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ @ 0x180067ECC (--1-$CHeapPtr@MVCCRTAllocator@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?GetDB@CVolumeUnit@@QEAAMXZ @ 0x18006E74C (-GetDB@CVolumeUnit@@QEAAMXZ.c)
 *     WPP_SF_Pg @ 0x180071090 (WPP_SF_Pg.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CVolumeHardware::UpdateMasterVolumeLevel(CVolumeHardware *this)
{
  unsigned __int64 v2; // rdi
  float *v3; // rbx
  unsigned int v4; // ebx
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  float DB; // xmm0_4
  float *v10; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v10 = 0LL;
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::Allocate(&v10, *((unsigned int *)this + 17));
  v3 = v10;
  if ( v10 )
  {
    if ( *((_QWORD *)this + 5) )
    {
      v5 = 0LL;
      do
      {
        DB = CVolumeUnit::GetDB((CVolumeUnit *)(v5 + *((_QWORD *)this + 4)));
        v3[v2] = DB;
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          WPP_SF_Pg(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v6, v7, v2, DB);
        }
        ++v2;
        v5 += 56LL;
      }
      while ( v2 < *((_QWORD *)this + 5) );
    }
    v4 = (*(__int64 (__fastcall **)(_QWORD, float *, _QWORD, char *))(**((_QWORD **)this + 12) + 64LL))(
           *((_QWORD *)this + 12),
           v3,
           *((unsigned int *)this + 17),
           (char *)this + 104);
  }
  else
  {
    v4 = -2147024882;
  }
  ATL::CHeapPtr<float,ATL::CCRTAllocator>::~CHeapPtr<float,ATL::CCRTAllocator>((void **)&v10);
  return v4;
}
